AMREX_HOME ?= ../../../tools/amrex

DEBUG	= TRUE
DEBUG	= FALSE

DIM	= 3

COMP    = clang

TINY_PROFILE  = TRUE
USE_PARTICLES = TRUE

PRECISION     = DOUBLE

USE_MPI       = TRUE
USE_OMP       = FALSE

###################################################

EBASE     = main

include $(AMREX_HOME)/Tools/GNUMake/Make.defs

include ./Make.package
include $(AMREX_HOME)/Src/Base/Make.package
include $(AMREX_HOME)/Src/Particle/Make.package

include $(AMREX_HOME)/Tools/GNUMake/Make.rules
