#ifndef WEBCRAWLER_H
#define WEBCRAWLER_H

/*
 * Solution of Leetcode #1242
 */

class WebCrawler {
private:
    vector<string> jobs;
    unordered_set<string> seen;
    int curr_idx = 0;
    int working = 0;
    string hostname;
    
    mutex mx;
    condition_variable cv;
    
    string urlToHost(string s) {
        size_t pos = s.find("://");
        int start = pos+3;
        pos = s.find('/', start);
        int end = s.length()-1;
        if(pos != string::npos) {
            end = pos-1;
        }
        return s.substr(start, end-start+1);
    }
    
    void func(HtmlParser* htmlParser) {
        while(1) {
            string next = "";
            unique_lock<mutex> ul(mx);
            cv.wait(ul, [=](){ return ((working == 0) || curr_idx < jobs.size()); });
            
            if(curr_idx < jobs.size()) 
                next = jobs[curr_idx++];
            else if(working == 0)
                return;
            working++;
            ul.unlock();
            
            if(next != "") {
                vector<string> urls = htmlParser->getUrls(next);
                vector<string> urlToPush;
                for(string url : urls) {
                    string urlhost = urlToHost(url);
                    if(urlhost == hostname) 
                        urlToPush.push_back(url);
                }
                
                ul.lock();
                for(string url : urlToPush) {
                    if(seen.find(url) == seen.end()) {
                        jobs.push_back(url);
                        seen.insert(url);
                    }
                }
                working--;
                ul.unlock();
                cv.notify_all();
            }
        }
    }
public:
    vector<string> crawl(string startUrl, HtmlParser htmlParser) {
        mx.lock();
        hostname = urlToHost(startUrl);
        jobs.push_back(startUrl);
        seen.insert(startUrl);
        mx.unlock();
        
        int thread_num = thread::hardware_concurrency();
        vector<thread> workers;
        for(int i = 0; i < thread_num; i++){
            workers.emplace_back(&Solution::func, this, &htmlParser);
        }
        for(auto &t : workers){
            t.join();
        }
        
        return vector<string>(jobs.begin(), jobs.end());
    }
};

#endif // WEBCRAWLER_H
