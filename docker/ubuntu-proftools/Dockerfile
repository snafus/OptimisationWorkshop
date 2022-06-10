FROM ubuntu:20.04

USER root

#RUN adduser gks
#RUN usermod -aG wheel gks 
#COPY wheel /etc/sudoers.d/wheel
#
RUN apt update 
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends tzdata
RUN apt install -y g++ clang make git strace python3

RUN apt install -y valgrind
RUN apt install -y kcachegrind
RUN apt install -y libjemalloc1 libjemalloc-dev massif-visualizer
RUN apt install -y emacs vim nano gedit
RUN apt install -y sudo strace
RUN git clone https://github.com/snafus/OptimisationWorkshop.git

#RUN git clone --depth 1 https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git
#RUN apt dist-upgrade -y
#RUN apt install -y --reinstall linux-tools-common linux-tools-generic linux-tools-`uname -r`
# RUN apt install -y google-perftools
# RUN apt install -y x11-apps
# RUN apt install -y linux-tools-common linux-tools-generic
