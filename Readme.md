## Conway's Game of Life in C++

This repository serves as an experimentation playground for an implementation of [Conway's Game of life](https://pi.math.cornell.edu/~lipa/mec/lesson6.html) in C++

The objective of this is to mainly learn modern C++ but also do run a performance experiment outlined as follows: 

1. Implement the Game in 2 different ways using the command line:
   - Using 2D arrays on a single thread
   - Using 2D arrays using multiple threads

2. Benchmark the performance on 5 varying grid sizes: 
    - 3x3
    - 4x4
    - 10x10
    - 24x24
    - 100x100

3. Compare the results to actually see the parrallel speed up between the different approaches etc. 

Okay let's get started!