# CS153 (Design of Operating Systems) Lab Files
Lab files for CS153 (Design of Operating Systems). [Original specifications](https://www.cs.ucr.edu/~csong/cs153/20f/info.html) are authored by the instructor for the course.

## Lab 1: System Calls
Original specifications [found here](https://www.cs.ucr.edu/~csong/cs153/20f/lab1.html).

### Objective
Design a new system call for xv6, and use it in some fork synchronization problems.

### Goals
- Understand the system call interface
- Understand how user programs send parameters to the kernel, and receive values back
- See how the event handling in the Operating System works
- Understand the process structure and modify it

## Lab 2: Scheduler
Original specifications [found here](https://www.cs.ucr.edu/~csong/cs153/20f/lab2.html).

### Objective
Change the scheduler from a simple round-robin to a priority scheduler. When scheduling from the ready list, always schedule the highest priority thread/process first. All the processes should have a default initial priority of 10.

Add a system call to change the priority of a process. A process can change its priority at any time. If the priority becomes lower than any process on the ready list, switch to that process.

### Goals
- Understand how the scheduler works
- Understand how to implement a scheduling policy and characterize its impact on performance
- Understand priority inversion and a possible solution for it

## Lab 3: Memory Management
Original specifications [found here](https://www.cs.ucr.edu/~csong/cs153/20f/lab3.html).

### Objective
Modify memory layout to move stack to top of address space. Implement stack growth.
