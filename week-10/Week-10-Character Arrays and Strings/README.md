# Objective 1

Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.

 

Input Format

 

The first line contains a string, num which is the given number.

 

Constraints

 

1 ≤ len(num) ≤ 1000

 

All the elements of num are made of English alphabets and digits.

 

Output Format

 

Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9.

 

Sample Input 0

 

a11472o5t6

 

Sample Output 0

 

0 2 1 0 1 1 1 1 0 0

 

Explanation 0

 

In the given string:

 

·         1 occurs two times.

·         2, 4, 5, 6 and 7 occur one time each.

The remaining digits 0, 3, 8 and 9 don't occur at all.

Test Case:

![alt text](<Screenshot 2025-01-13 170924.png>)

# Objective 2

Today, Monk went for a walk in a garden. There are many trees in the garden and each tree has an English alphabet on it. While Monk was walking, he noticed that all trees with vowels on it are not in good state. He decided to take care of them. So, he asked you to tell him the count of such trees in the garden.


Note: The following letters are vowels: 'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o' and 'u'.

 

Input:


The first line consists of an integer T denoting the number of test cases.


Each test case consists of only one string, each character of string denoting the alphabet (may be lowercase or uppercase) on a tree in the garden.

 

Output:


For each test case, print the count in a new line.

 

Constraints:


1 ≤ T ≤ 10
1 ≤ length of string ≤ 105

 

SAMPLE INPUT

 

2

nBBZLaosnm

JHkIsnZtTL

 

SAMPLE OUTPUT

 

2

1

 

Explanation

 

In test case 1, a and o are the only vowels. So, count=2

Test Case:

![alt text](<Screenshot 2025-01-13 170930.png>)

# Objective 3

Given a sentence, s, print each word of the sentence in a new line.

 

Input Format

 

The first and only line contains a sentence, s.

 

Constraints

 

1 ≤ len(s) ≤ 1000

 

Output Format

 

Print each word of the sentence in a new line.

 

Sample Input 0

 

This is C

 

Sample Output 0

 

This

is

C

 

Explanation 0

 

In the given string, there are three words ["This", "is", "C"]. We have to print each of these words in a new line.

Test Case:

![alt text](<Screenshot 2025-01-13 170936.png>)

# Objective 4

Input Format

 

You are given two strings, a and b, separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

 

Output Format

 

In the first line print two space-separated integers, representing the length of a and b respectively.

In the second line print the string produced by concatenating a and b (a + b).

In the third line print two strings separated by a space, a' and b'. a' and b' are the same as a and b, respectively, except that their first characters are swapped.

 

Sample Input

 

abcd

ef

 

Sample Output

 

4 2

abcdef

ebcd af

 

Explanation

 

a = "abcd"

b = "ef"

|a| = 4

|b| = 2

a + b = "abcdef"

a' = "ebcd"

b' = "af"

Test Case:

![alt text](<Screenshot 2025-01-13 170941.png>)