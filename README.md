# Optimisation of the Naive NxN Matrix Multiplication Algorithm

The naive matrix multiplication algorithm is a well-known method for multiplying two matrices to produce a resultant matrix. The primary challenge with this algorithm is its complexity of \(O(N^3)\), which represents the worst-case scenario.

While several algorithms have been proposed to reduce this time complexity, aiming to bring it closer to \(O(N^2)\) (the ideal case that's not always attainable), this project introduces a simple modification to the naive algorithm. By implementing this change, I was able to reduce the algorithm's time complexity to \(O(N^{3/2})\), effectively halving the time. Furthermore, the \(O(N^2)\) case is attainable for 3x3 matrix multiplications.

The key to this optimization is the use of two pointers for summation, rather than just one, and paying special attention to the last column. For matrices where the size \(N = 2k + 1\), the complexity becomes \(O(N^2(N-1)/2)\). For \(N = 2k\), the complexity is \(O(N^{3/2})\).

![alt text](https://github.com/sbaiidrissiyoussef/Matrix_Multiplication_Optimized/blob/master/Formula.JPG)

## Project Details

- **Author**: Youssef Sbai Idrissi
- **Maintainer**: Youssef Sbai Idrissi
- **Date**: 3 September 2017
- **Version**: 0.1.0
- **Status**: Still in progress
