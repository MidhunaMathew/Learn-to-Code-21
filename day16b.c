/*Write a C Program to display the product of two 2D arrays. Given values for both the 2D Arrays.

Input Format

First line contains the order of the first 2D Array.
Second line contains the elements of the first 2D Array.
Third line contains the order of the second 2D Array.
Fourth line contains the elements of the second 2D Array.
Constraints

Make sure to check that both matrices can be multiplied.

(Two matrices can be multiplied only if no: of columns of first matrix is equal to no: of rows of the second matrix)

Output Format

If the given matrices can be multiplied then, print the 2D array of proper order.
If the given matrices cannot be multiplied then, print the message "ERROR".
Sample Input 0

2 3
4 1 3 2 6 2
3 2
7 2 3 6 1 3
Sample Output 0

34 23 
34 46
Explanation 0

The first matrix of order (2,3) is,

4 1 3
2 6 2
The second matrix of order (3,2) is,

7 2 
3 6
1 3
Hence the product will give a matrix of order (2,2),

34 23
34 46
Sample Input 1

2 3
1 6 3 8 2 3 
2 3
6 2 3 8 2 1
Sample Output 1

ERROR
Explanation 1

Both the matrices do not satisfy the condition, hence cannot be multiplied together. */
