# OS2020 Nachos Project

Operating Systems (NTU EE 5173, Fall 2020)<br>
Instructor: Farn Wang<br>
Course website: http://cc.ee.ntu.edu.tw/~farn/courses/OS/OS2020/index.htm
* Project 1: Thread Management
* Project 2: System Call & CPU Scheduling
* Project 3: Memory management
---
## Download & Install VirtualBox

* Oracle VM VirtualBox
    * https://www.virtualbox.org/
* Download 32-bit Ubuntu 14.04
    * http://releases.ubuntu.com/14.04/

---

## Setup
Install g++ and csh
```
sudo apt-get install g++
sudo apt-get install csh
sudo apt-get install make
```
Download NachOS & Cross Compiler
```
wget -d http://cc.ee.ntu.edu.tw/~farn/courses/OS/OS2015/projects/project.1/nachos-4.0.tar.gz
wget -d http://cc.ee.ntu.edu.tw/~farn/courses/OS/OS2015/projects/project.1/mips-x86.linux-xgcc.tar.gz
```

---

## Install NachOS
untar **nachos-4.0.tar.gz**
```
tar -xvf nachos-4.0.tar.gz
```
move **mips-x86.linux-xgcc.tar.gz** to root and untar
```
sudo mv mips-x86.linux-xgcc.tar.gz /
cd /
sudo tar -zxvf mips-x86.linux-xgcc.tar.gz
```
Change Directory of Cross Compiler by editing file `~/nachos-4.0/code/test/Makefile`
```
...
GCCDIR = /mips-x86.linux-xgcc/
...
CPP = /mips-x86.linux-xgcc/cpp0
...
CFLAGS = -G 0 -c $(INCDIR) -B/mips-x86.linux-xgcc/
...
```
Make NachOS-4.0
```
cd ~/nachos-4.0/code
make
```

---

## Test
```
cd ./userprog
./nachos -e ../test/test1
```
```
Total threads number is 1
Thread ../test/test1 is executing.
Print integer:9
Print integer:8
Print integer:7
Print integer:6
return value:0
```

---

## Reference

* [General Nachos Documentation](https://homes.cs.washington.edu/~tom/nachos/)
* [Wiki - Not Another Completely Heuristic Operating System](https://en.wikipedia.org/wiki/Not_Another_Completely_Heuristic_Operating_System)
* [A Road Map Through Nachos](https://users.cs.duke.edu/~narten/110/nachos/main/main.html)
* [University of Pittsburgh - NachOS](https://people.cs.pitt.edu/~manas/courses/CS1550/nachos.htm)
