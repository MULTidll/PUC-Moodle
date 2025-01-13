# Objective 1

Coders here is a simple task for you, you have given an array of size N and an integer M.

 

Your task is to calculate the difference between maximum sum and minimum sum of N-M elements of the given array.

 

Constraints:

 

1<=t<=10

1<=n<=1000

1<=a[i]<=1000

 

Input:

 

First line contains an integer T denoting the number of testcases.

First line of every testcase contains two integer N and M.

Next line contains N space separated integers denoting the elements of array

 

Output:

 

For every test case print your answer in new line

 

SAMPLE INPUT

 

1

5 1

1 2 3 4 5

 

SAMPLE OUTPUT

 

4

 

Explanation

 

M is 1 and N is 5 so you have to calculate maximum and minimum sum using (5-1 =) 4 elements.

Maximum sum using the 4 elements would be (2+3+4+5=)14.

Minimum sum using the 4 elements would be (1+2+3+4=)10.

Difference will be 14-10=4.

Test Case:

![alt text](<Screenshot 2025-01-13 170748.png>)

# Objective 2

A new deadly virus has infected large population of a planet. A brilliant scientist has discovered a new strain of virus which can cure this disease. Vaccine produced from this virus has various strength depending on midichlorians count. A person is cured only if midichlorians count in vaccine batch is more than midichlorians count of person. A doctor receives a new set of report which contains midichlorians count of each infected patient, Practo stores all vaccine doctor has and their midichlorians count. You need to determine if doctor can save all patients with the vaccines he has. The number of vaccines and patients are equal.

 

Input Format

 

First line contains the number of vaccines - N. Second line contains N integers, which are strength of vaccines. Third line contains N integers, which are midichlorians count of patients.

 

Output Format

 

Print a single line containing 'Yes' or 'No'.

 

Input Constraint

 

1 < N < 10

 

Strength of vaccines and midichlorians count of patients fit in integer.

 

SAMPLE INPUT

 

5

123 146 454 542 456

100 328 248 689 200

 

SAMPLE OUTPUT

 

No

Test Case:

![alt text](<Screenshot 2025-01-13 170753.png>)

# Objective 3

You are given an array of n integer numbers a1, a2, . . . , an. Calculate the number of pair of indices (i, j) such that 1 ≤ i < j ≤ n and ai xor aj = 0.

 

Input format

 

- First line: n denoting the number of array elements

- Second line: n space separated integers a1, a2, . . . , an.

 

Output format

 

Output the required number of pairs.

 

Constraints

 

1 ≤ n ≤ 106

1 ≤ ai ≤ 109

 

SAMPLE INPUT

 

5

1 3 1 4 3

 

SAMPLE OUTPUT

 

2

 

Explanation

 

The 2 pair of indices are (1, 3) and (2,5).

Test Case:

![alt text](<Screenshot 2025-01-13 170759.png>)