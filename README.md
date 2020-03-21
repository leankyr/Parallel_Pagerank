# Parallel_Pagerank
Parallelization of Pagerank Using Gauss Siedel Method and OpenMP and Sparse Matrix Representation implemented for Parallel and Distributed Systems Course
@ Aristotle University of THessaloniki year 2017-2018


[Datasets](https://www.dropbox.com/sh/sq1fyt68fb4yv83/AACFTGKFX6XTc1AWZ9JJu-OBa?dl=0)

* Implementation 1 - Parallel Gauss-Siedel
* Implemantaion 2 - Gauss-Siedel but saving matrix as compact sparse

To run the project get into the folder  you wish and 

```
make
```
Then add the datasets file to folder implemenation 1 or two and 

```
./output name_of_dataset size_of_dataset d error
```
For example 
```
./output Wiki-Vote.txt 8794 0.85 0.0001

```
d: typically 0.85
Output is for example:
k is: 26 # Number of iterations
execution time = 5.807762 # execution time

TO_DO: Find how to parse path in C
