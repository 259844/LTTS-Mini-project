# LTTS-Mini-project

Build | Code Quality | Unity | Git Inspector
|---------|------------|-----------|----------------
[


## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures

## Contributors List and Summary

SF Id. |  Name   |    Features    | Issuess Raised |Issues Resolved|No Test Cases|Test Case Pass
-------|---------|----------------|----------------|---------------|-------------|--------------
`259844` | Yash Trivedi  | F_01, F_02, F_03, F_04, F_05, F_06, F_07, F_08, F_09   | 14     | 7   |13  |13     
   

| Feature Id | Feature |
| -----------|---------|
|F_01| 
|F_02| 
|F_03| 
|F_04| 
|F_05| 
|F_06| 
|F_07| 
|F_08| 
|F_09| 

## Challenges Faced and How Was It Overcome
| No. | Challenge | Solution
|-----|-----------|--------
|1. | Code Crashed without any error message (Segmentation Fault) | GDB tool helped to pin point the Invalid Read 
|2. | After program shut down, there was no way to recover data | Implemented File System |
|3. | IOWITHOUTPOSITIONING Error | Check if fseek() != -1 between consecutive read and write calls
|4. | Structure Padding causing write to uninitialized location(Still Reachable code error) | Won't Fix, need help
|5. | Requirement gathering proved to be challenging, mainly ageing | Read multiple Research papers to find about history of management systems 
|6. | gcov generating *.gcda and *.gcno files in different directory than object file | added few extra steps in make file under coverage, made a copy of .c file in current directory and ran coverage then deleted all the unnecessary files.


