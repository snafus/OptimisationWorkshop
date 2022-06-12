https://github.com/snafus/OptimisationWorkshop.git

Material for workshop on optimisation and profiling for data-intensive science.

## Python optimisation
A jupyter notebook is available to perform simple profiling and optimisation analysis in python:
This can be run locally, or via mybinder:
[![Binder](https://mybinder.org/badge_logo.svg)](https://mybinder.org/v2/gh/snafus/OptimisationWorkshop.git/master?labpath=Exercise_PythonNotebook%2FPrimes_Profiling_Introduction.ipynb)

## C++ optimisation

Examples are likely to work best with native Linux (e.g. Ubuntu 16.04), or Mac with Homebrew. Note that perf is only available on linux

Need: g++, clang, gdb, valgrind (or ssh access to a machine with these installed)

Nice to have: google-perftools, libjemalloc, massif-visualizer, perf


<!-- Pre-installed docker image available at https://store.docker.com/community/images/stewartmh/ubuntu-proftools



```docker run -it --privileged stewartmh/ubuntu-proftools:latest```
 -->


