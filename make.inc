# Define DCIDIR before calling this
# Read the INSTALL and define the variables in the $HOME/.bashrc
DCIDIR = /home/chico/dcicpp

CXX = icpc
PREFIX = /usr

#DCIVERBOSE = -DVERBOSE
#PRINTMATLAB = -DPRINT_MATLAB
#ITERMATLAB = -DITER_MATLAB
#PLOTMATLAB = -DPLOT_MATLAB
#ASSERT = -DNDEBUG
#PROFILE = -pg
#DEBUG = -ggdb

CXXFLAGS = -O3 -fexceptions -m64
#CXXFLAGS = -Wall -Wextra $(DEBUG) $(DCIVERBOSE) $(ASSERT) $(PROFILE) $(PRINTMATLAB) $(PLOTMATLAB) $(ITERMATLAB)

RM = rm -f
CP = cp -f
AR = ar rv
MV = mv -f

DCILIBNAME = libdcicpp.a

DCILIB = $(DCIDIR)/Lib/$(DCILIBNAME) /usr/local/lib64/libnope.a -lbasematrices -lcholmod -lamd -lcolamd -lccolamd -lcamd -lsuitesparseconfig -lmetis "/opt/intel/composer_xe_2013.3.163/mkl/lib/intel64"/libmkl_intel_lp64.a -Wl,--start-group "/opt/intel/composer_xe_2013.3.163/mkl/lib/intel64"/libmkl_intel_thread.a "/opt/intel/composer_xe_2013.3.163/mkl/lib/intel64"/libmkl_core.a -Wl,--end-group -L"/opt/intel/composer_xe_2013.3.163/mkl/../compiler/lib/intel64" -liomp5 -lpthread  -ldl
#DCILIB = $(DCIDIR)/Lib/$(DCILIBNAME) -L/usr/local/lib -lnope -lbasematrices -lcholmod -lamd -lcolamd -lccolamd -lcamd -lsuitesparseconfig -lmetis "/opt/intel/composer_xe_2013.3.163/mkl/lib/intel64"/libmkl_intel_lp64.a -Wl,--start-group "/opt/intel/composer_xe_2013.3.163/mkl/lib/intel64"/libmkl_intel_thread.a "/opt/intel/composer_xe_2013.3.163/mkl/lib/intel64"/libmkl_core.a -Wl,--end-group -L"/opt/intel/composer_xe_2013.3.163/mkl/../compiler/lib/intel64" -liomp5 -lpthread  -ldl

I = -I$(DCIDIR)/Include/ -I/usr/local/include
