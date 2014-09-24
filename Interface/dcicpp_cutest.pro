#!/bin/bash
# Definition for the DCICPP package

export PACKAGE=dcicpp
export PACKDIR=dcicpp
export PACK_PRECISION="double"
export PACK_OBJS=""
export PACKLIBS="-ldcicpp -lnope -lbasematrices -lcholmod -lamd -lcolamd -lccolamd -lcamd -lsuitesparseconfig -lmetis -L/opt/intel/composer_xe_2013.3.163/mkl/lib/intel64/ -lmkl_intel_lp64 -Wl,--start-group -lmkl_intel_thread -lmkl_core -Wl,--end-group -L/opt/intel/composer_xe_2013.3.163/compiler/lib/intel64 -liomp5 -lpthread  -ldl -lifcore -lrt"
export SPECS=""
