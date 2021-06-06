##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Inheritance
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/sbharati/Documents/BasicCPP
ProjectPath            :=C:/Users/sbharati/Documents/BasicCPP/Inheritance
IntermediateDirectory  :=../build-$(ConfigurationName)/Inheritance
OutDir                 :=../build-$(ConfigurationName)/Inheritance
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=sbharati
Date                   :=05/06/2021
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
Objects0=../build-$(ConfigurationName)/Inheritance/train.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Inheritance/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Inheritance/vehicle.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Inheritance/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Inheritance" mkdir "..\build-$(ConfigurationName)\Inheritance"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Inheritance" mkdir "..\build-$(ConfigurationName)\Inheritance"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Inheritance/.d:
	@if not exist "..\build-$(ConfigurationName)\Inheritance" mkdir "..\build-$(ConfigurationName)\Inheritance"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Inheritance/train.cpp$(ObjectSuffix): train.cpp ../build-$(ConfigurationName)/Inheritance/train.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/sbharati/Documents/BasicCPP/Inheritance/train.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/train.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Inheritance/train.cpp$(DependSuffix): train.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Inheritance/train.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Inheritance/train.cpp$(DependSuffix) -MM train.cpp

../build-$(ConfigurationName)/Inheritance/train.cpp$(PreprocessSuffix): train.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Inheritance/train.cpp$(PreprocessSuffix) train.cpp

../build-$(ConfigurationName)/Inheritance/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Inheritance/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/sbharati/Documents/BasicCPP/Inheritance/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Inheritance/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Inheritance/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Inheritance/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Inheritance/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Inheritance/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/Inheritance/vehicle.cpp$(ObjectSuffix): vehicle.cpp ../build-$(ConfigurationName)/Inheritance/vehicle.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/sbharati/Documents/BasicCPP/Inheritance/vehicle.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/vehicle.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Inheritance/vehicle.cpp$(DependSuffix): vehicle.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Inheritance/vehicle.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Inheritance/vehicle.cpp$(DependSuffix) -MM vehicle.cpp

../build-$(ConfigurationName)/Inheritance/vehicle.cpp$(PreprocessSuffix): vehicle.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Inheritance/vehicle.cpp$(PreprocessSuffix) vehicle.cpp


-include ../build-$(ConfigurationName)/Inheritance//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


