##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=ConstructorAndOpOverloading
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/sbharati/Documents/BasicCPP
ProjectPath            :=C:/Users/sbharati/Documents/BasicCPP/ConstructorAndOpOverloading
IntermediateDirectory  :=../build-$(ConfigurationName)/ConstructorAndOpOverloading
OutDir                 :=../build-$(ConfigurationName)/ConstructorAndOpOverloading
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=sbharati
Date                   :=06/06/2021
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
LinkOptions            :=  
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
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/ConstructorAndOpOverloading/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/ConstructorAndOpOverloading/person.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/ConstructorAndOpOverloading/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\ConstructorAndOpOverloading" mkdir "..\build-$(ConfigurationName)\ConstructorAndOpOverloading"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\ConstructorAndOpOverloading" mkdir "..\build-$(ConfigurationName)\ConstructorAndOpOverloading"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/ConstructorAndOpOverloading/.d:
	@if not exist "..\build-$(ConfigurationName)\ConstructorAndOpOverloading" mkdir "..\build-$(ConfigurationName)\ConstructorAndOpOverloading"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/ConstructorAndOpOverloading/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/ConstructorAndOpOverloading/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/sbharati/Documents/BasicCPP/ConstructorAndOpOverloading/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/ConstructorAndOpOverloading/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/ConstructorAndOpOverloading/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/ConstructorAndOpOverloading/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/ConstructorAndOpOverloading/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/ConstructorAndOpOverloading/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/ConstructorAndOpOverloading/person.cpp$(ObjectSuffix): person.cpp ../build-$(ConfigurationName)/ConstructorAndOpOverloading/person.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/sbharati/Documents/BasicCPP/ConstructorAndOpOverloading/person.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/person.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/ConstructorAndOpOverloading/person.cpp$(DependSuffix): person.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/ConstructorAndOpOverloading/person.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/ConstructorAndOpOverloading/person.cpp$(DependSuffix) -MM person.cpp

../build-$(ConfigurationName)/ConstructorAndOpOverloading/person.cpp$(PreprocessSuffix): person.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/ConstructorAndOpOverloading/person.cpp$(PreprocessSuffix) person.cpp


-include ../build-$(ConfigurationName)/ConstructorAndOpOverloading//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


