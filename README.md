# basic-os-helloworld

## **Install bochs2.7**

```
1. Install dependencies

sudo apt-get install libx11-dev libc6-dev build-essentialxorg-dev libgtk2.0-dev libreadline-dev

2. configure

./configure --with-x11 --with-x --enable-all-optimizations --enable-readline --enable-debugger-gui --enable-x86-debugger --enable-a20-pin --enable-fast-function-calls --enable-debugger

3. compiler

make -j4(-j followed by the number of CPUs to speed up compilation)
sudo make install (must root authentication)
```

## **Install qemu**

```
sudo apt-get install qemu
```


## **Install nasm**

```
sudo apt-get install nasm
```

## **How to run this project**

```
1. execute the Makefile: all: ${BUILD}/boot/boot.o
    Then generate the build folder on your current project

2. execute the Makefile: bochs
    Then You can see a terminal and Helloworld
```