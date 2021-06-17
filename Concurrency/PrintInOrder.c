/*
 * Solution of Leetcode problem #1114 
 */

typedef struct {
    // User defined data may be declared here.
    sem_t sem_a;
    sem_t sem_b;
} Foo;


Foo* fooCreate() {
    Foo* obj = (Foo*) malloc(sizeof(Foo));
    
    // Initialize user defined data here.
    sem_init(&obj->sem_a, 0, 0);
    sem_init(&obj->sem_b, 0, 0);
    
    return obj;
}

void first(Foo* obj) {
    
    // printFirst() outputs "first". Do not change or remove this line.
    printFirst();
    sem_post(&obj->sem_a);
}

void second(Foo* obj) {
    
    // printSecond() outputs "second". Do not change or remove this line.
    sem_wait(&obj->sem_a);
    printSecond();
    sem_post(&obj->sem_b);
}

void third(Foo* obj) {
    
    // printThird() outputs "third". Do not change or remove this line.
    sem_wait(&obj->sem_b);
    printThird();}

void fooFree(Foo* obj) {
    // User defined data may be cleaned up here.
    sem_destroy(&obj->sem_a);
    sem_destroy(&obj->sem_b);
}