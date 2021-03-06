#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=i586-pc-elf-gcc
CCC=g++
CXX=g++
FC=gfortran
AS=nasm

# Macros
CND_PLATFORM=MinGW_ELF-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/0-Noyau_Start.o \
	${OBJECTDIR}/1-Noyau_Main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=-f elf

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/noyau.jlv.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/noyau.jlv.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	i586-pc-elf-ld.exe -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/noyau.jlv ${OBJECTFILES} ${LDLIBSOPTIONS} -Ttext=0x100000 --entry=_start --oformat i586-pc-elf

${OBJECTDIR}/0-Noyau_Start.o: 0-Noyau_Start.asm 
	${MKDIR} -p ${OBJECTDIR}
	$(AS) $(ASFLAGS) -f elf -o ${OBJECTDIR}/0-Noyau_Start.o 0-Noyau_Start.asm

${OBJECTDIR}/1-Noyau_Main.o: 1-Noyau_Main.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/1-Noyau_Main.o 1-Noyau_Main.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/noyau.jlv.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
