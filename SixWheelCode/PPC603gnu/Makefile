# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
PRJ_ROOT_DIR := C:/Documents\ and\ Settings/Sysadmin/Last-Years-Code-/SixWheelCode
WS_ROOT_DIR := C:/Documents\ and\ Settings/Sysadmin/Last-Years-Code-



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = SixWheelCode/$(MODE_DIR)/SixWheelCode.out \
	 SixWheelCode_partialImage/$(MODE_DIR)/SixWheelCode_partialImage.o


#Rules

# SixWheelCode
ifeq ($(DEBUG_MODE),1)
SixWheelCode/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
SixWheelCode/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
SixWheelCode/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
SixWheelCode/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
SixWheelCode/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
SixWheelCode/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
SixWheelCode/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
SixWheelCode/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
SixWheelCode/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
SixWheelCode/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
SixWheelCode/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
SixWheelCode/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
SixWheelCode/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
SixWheelCode/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
SixWheelCode/$(MODE_DIR)/% : PROJECT_TYPE = DKM
SixWheelCode/$(MODE_DIR)/% : DEFINES = 
SixWheelCode/$(MODE_DIR)/% : EXPAND_DBG = 0
SixWheelCode/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
SixWheelCode/$(MODE_DIR)/% : CPU = PPC603
SixWheelCode/$(MODE_DIR)/% : TOOL_FAMILY = gnu
SixWheelCode/$(MODE_DIR)/% : TOOL = gnu
SixWheelCode/$(MODE_DIR)/% : TOOL_PATH = 
SixWheelCode/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
SixWheelCode/$(MODE_DIR)/% : LIBPATH = 
SixWheelCode/$(MODE_DIR)/% : LIBS = 
SixWheelCode/$(MODE_DIR)/% : OBJ_DIR := SixWheelCode/$(MODE_DIR)

OBJECTS_SixWheelCode = SixWheelCode_partialImage/$(MODE_DIR)/SixWheelCode_partialImage.o

SixWheelCode/$(MODE_DIR)/SixWheelCode.out : $(OBJECTS_SixWheelCode)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_SixWheelCode) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_SixWheelCode) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

SixWheelCode/$(MODE_DIR)/SixWheelCode_compile_file : $(FILE) ;

_clean :: SixWheelCode/$(MODE_DIR)/SixWheelCode_clean

SixWheelCode/$(MODE_DIR)/SixWheelCode_clean : 
	$(TRACE_FLAG)if [ -d "SixWheelCode" ]; then cd "SixWheelCode"; rm -rf $(MODE_DIR); fi


# SixWheelCode_partialImage
ifeq ($(DEBUG_MODE),1)
SixWheelCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
SixWheelCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
SixWheelCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
SixWheelCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
SixWheelCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
SixWheelCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
SixWheelCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
SixWheelCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
SixWheelCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
SixWheelCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
SixWheelCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
SixWheelCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
SixWheelCode_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
SixWheelCode_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
SixWheelCode_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
SixWheelCode_partialImage/$(MODE_DIR)/% : DEFINES = 
SixWheelCode_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
SixWheelCode_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
SixWheelCode_partialImage/$(MODE_DIR)/% : CPU = PPC603
SixWheelCode_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
SixWheelCode_partialImage/$(MODE_DIR)/% : TOOL = gnu
SixWheelCode_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
SixWheelCode_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
SixWheelCode_partialImage/$(MODE_DIR)/% : LIBPATH = 
SixWheelCode_partialImage/$(MODE_DIR)/% : LIBS = 
SixWheelCode_partialImage/$(MODE_DIR)/% : OBJ_DIR := SixWheelCode_partialImage/$(MODE_DIR)

SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/Autonomous.o : C:/Documents\ and\ Settings/Sysadmin/Last-Years-Code-/SixWheelCode/Autonomous.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/DashboardDataFormat.o : C:/Documents\ and\ Settings/Sysadmin/Last-Years-Code-/SixWheelCode/DashboardDataFormat.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/DifferentOtherAutonomous.o : C:/Documents\ and\ Settings/Sysadmin/Last-Years-Code-/SixWheelCode/DifferentOtherAutonomous.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/Disabled.o : C:/Documents\ and\ Settings/Sysadmin/Last-Years-Code-/SixWheelCode/Disabled.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/Pneumatics.o : C:/Documents\ and\ Settings/Sysadmin/Last-Years-Code-/SixWheelCode/Pneumatics.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/Spike.o : C:/Documents\ and\ Settings/Sysadmin/Last-Years-Code-/SixWheelCode/Spike.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/Teleop.o : C:/Documents\ and\ Settings/Sysadmin/Last-Years-Code-/SixWheelCode/Teleop.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_SixWheelCode_partialImage = SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/Autonomous.o \
	 SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/DashboardDataFormat.o \
	 SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/DifferentOtherAutonomous.o \
	 SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/Disabled.o \
	 SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/Pneumatics.o \
	 SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/Spike.o \
	 SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/Teleop.o

SixWheelCode_partialImage/$(MODE_DIR)/SixWheelCode_partialImage.o : $(OBJECTS_SixWheelCode_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_SixWheelCode_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

SixWheelCode_partialImage/$(MODE_DIR)/SixWheelCode_partialImage_compile_file : $(FILE) ;

_clean :: SixWheelCode_partialImage/$(MODE_DIR)/SixWheelCode_partialImage_clean

SixWheelCode_partialImage/$(MODE_DIR)/SixWheelCode_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "SixWheelCode_partialImage" ]; then cd "SixWheelCode_partialImage"; rm -rf $(MODE_DIR); fi

DEP_FILES := SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/Autonomous.d SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/DashboardDataFormat.d SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/DifferentOtherAutonomous.d \
	 SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/Disabled.d SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/Pneumatics.d SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/Spike.d \
	 SixWheelCode_partialImage/$(MODE_DIR)/Objects/SixWheelCode/Teleop.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
