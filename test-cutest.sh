#!/bin/bash

set -v

tmpdir=tmpdir
mkdir -p $tmpdir

cp Tests/dcicpp.spc $tmpdir
cd $tmpdir
c=0
T=0
for problem in $(ls $MASTSIF/HS*.SIF)
do
  g=$(rundcicpp -D $problem -lgfortran -lgfortranbegin | grep Converged)
  if [ ! -z "$g" ]; then
    c=$(($c+1))
  fi
  T=$(($T+1))
  echo "Partial count: $c/$T = $(echo "scale=2;100*$c/$T"|bc)%"
done

echo "Convergence: $c/$T = $(echo "scale=2;100*$c/$T"|bc)%"
[ $c -lt 100 ] && exit 1 || exit 0
