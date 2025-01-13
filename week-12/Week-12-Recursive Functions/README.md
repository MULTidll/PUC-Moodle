# Objective 1

You are a bank account hacker. Initially you have 1 rupee in your account, and you want exactly N rupees in your account. You wrote two hacks, first hack can multiply the amount of money you own by 10, while the second can multiply it by 20. These hacks can be used any number of time. Can you achieve the desired amount N using these hacks.

 

Constraints:

 

1<=T<=100

1<=N<=10^12

 

Input

 

·         The test case contains a single integer N. 

 

Output

 

For each test case, print a single line containing the string "1" if you can make exactly N rupees or "0" otherwise.

 

SAMPLE INPUT

 

1

 

SAMPLE OUTPUT

 

1

 

SAMPLE INPUT

 

2

 

SAMPLE OUTPUT

 

0

Test Case:

![alt text](<Screenshot 2025-01-13 171059.png>)

# Objective 2

Find the number of ways that a given integer, X, can be expressed as the sum of the Nth powers of unique, natural numbers.

 

For example, if X = 13 and N = 2, we have to find all combinations of unique squares adding up to 13. The only solution is 22 + 32.

 

Function Description

 

Complete the powerSum function in the editor below. It should return an integer that represents the number of possible combinations.

 

powerSum has the following parameter(s):

 

X: the integer to sum to

N: the integer power to raise numbers to

Input Format

 

The first line contains an integer X.

The second line contains an integer N.

 

Constraints

 

1 ≤ X ≤ 1000

2 ≤ N ≤ 10

 

Output Format

 

Output a single integer, the number of possible combinations calculated.

 

Sample Input 0

 

10

2

 

Sample Output 0

 

1

 

Explanation 0

 

If X = 10 and N = 2, we need to find the number of ways that 10 can be represented as the sum of squares of unique numbers.

 

10 = 12 + 32

 

This is the only way in which 10 can be expressed as the sum of unique squares.

 


 

Sample Input 1

 

100

2

 

Sample Output 1

 

3

 

Explanation 1

 

100 = (102) = (62 + 82) = (12 + 32 + 42 + 52 + 72)

 

Sample Input 2

 

100

3

 

Sample Output 2

 

1

 

Explanation 2

 

100 can be expressed as the sum of the cubes of 1, 2, 3, 4.

(1 + 8 + 27 + 64 = 100). There is no other way to express 100 as the sum of cubes.

Test Case:

![alt text](<Screenshot 2025-01-13 171104.png>)