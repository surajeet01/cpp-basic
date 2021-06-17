##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Concurrency
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/sbharati/Documents/BasicCPP
ProjectPath            :=C:/Users/sbharati/Documents/BasicCPP/Concurrency
IntermediateDirectory  :=../build-$(ConfigurationName)/Concurrency
OutDir                 :=../build-$(ConfigurationName)/Concurrency
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=sbharati
Date                   :=17/06/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            := -pthread 
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS := -std=c++14 -std=c++11 -pthread -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/Concurrency/PrintInOrder.c$(ObjectSuffix) ../build-$(ConfigurationName)/Concurrency/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Concurrency/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Concurrency" mkdir "..\build-$(ConfigurationName)\Concurrency"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Concurrency" mkdir "..\build-$(ConfigurationName)\Concurrency"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Concurrency/.d:
	@if not exist "..\build-$(ConfigurationName)\Concurrency" mkdir "..\build-$(ConfigurationName)\Concurrency"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Concurrency/PrintInOrder.c$(ObjectSuffix): PrintInOrder.c ../build-$(ConfigurationName)/Concurrency/PrintInOrder.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/sbharati/Documents/BasicCPP/Concurrency/PrintInOrder.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PrintInOrder.c$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Concurrency/PrintInOrder.c$(DependSuffix): PrintInOrder.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Concurrency/PrintInOrder.c$(ObjectSuffix) -MF../build-$(ConfigurationName)/Concurrency/PrintInOrder.c$(DependSuffix) -MM PrintInOrder.c

../build-$(ConfigurationName)/Concurrency/PrintInOrder.c$(PreprocessSuffix): PrintInOrder.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Concurrency/PrintInOrder.c$(PreprocessSuffix) PrintInOrder.c

../build-$(ConfigurationName)/Concurrency/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Concurrency/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/sbharati/Documents/BasicCPP/Concurrency/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Concurrency/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Concurrency/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Concurrency/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Concurrency/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Concurrency/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/Concurrency//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


