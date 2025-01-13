# Objective 1

Two strings A and B comprising of lower case English letters are compatible if they are equal or can be made equal by following this step any number of times:

 

·         Select a prefix from the string A (possibly empty), and increase the alphabetical value of all the characters in the prefix by the same valid amount. For example, if the string is xyz and we select the prefix xy then we can convert it to yx by increasing the alphabetical value by 1. But if we select the prefix xyz then we cannot increase the alphabetical value.

 

Your task is to determine if given strings A and B are compatible.

 

Input format

 

First line: String A

Next line: String B

 

Output format

 

For each test case, print YES if string A can be converted to string B, otherwise print NO.

 

Constraints

 

1 ≤ len(A) ≤ 1000000

1 ≤ len(B) ≤ 1000000

 

SAMPLE INPUT

 

abaca

cdbda

 

SAMPLE OUTPUT

 

YES

 

Explanation

 

The string abaca can be converted to bcbda in one move and to cdbda in the next move.

# Objective 2

Danny has a possible list of passwords of Manny's facebook account. All passwords length is odd. But Danny knows that Manny is a big fan of palindromes. So, his password and reverse of his password both should be in the list.

 

You have to print the length of Manny's password and it's middle character.

 

Note: The solution will be unique.

 

INPUT

 

The first line of input contains the integer N, the number of possible passwords.

Each of the following N lines contains a single word, its length being an odd number greater than 2 and lesser than 14. All characters are lowercase letters of the English alphabet.

 

OUTPUT

 

The first and only line of output must contain the length of the correct password and its central letter.

 

CONSTRAINTS

 

1 ≤ N ≤ 100

 

SAMPLE INPUT

 

4

abc

def

feg

cba

 

SAMPLE OUTPUT

 

3 b

# Objective 3

Joey loves to eat Pizza. But he is worried as the quality of pizza made by most of the restaurants is deteriorating. The last few pizzas ordered by him did not taste good :(. Joey is feeling extremely hungry and wants to eat pizza. But he is confused about the restaurant from where he should order. As always he asks Chandler for help.

 

Chandler suggests that Joey should give each restaurant some points, and then choose the restaurant having maximum points. If more than one restaurant has same points, Joey can choose the one with lexicographically smallest name.

 

Joey has assigned points to all the restaurants, but can't figure out which restaurant satisfies Chandler's criteria. Can you help him out?

 

Input:

 

First line has N, the total number of restaurants.

Next N lines contain Name of Restaurant and Points awarded by Joey, separated by a space. Restaurant name has no spaces, all lowercase letters and will not be more than 20 characters.

 

Output:

 

Print the name of the restaurant that Joey should choose.

 

Constraints:

 

1 <= N <= 105

1 <= Points <= 106

 

SAMPLE INPUT

 

3

Pizzeria 108

Dominos 145

Pizzapizza 49

 

SAMPLE OUTPUT

 

Dominos

 

Explanation

 

Dominos has maximum points.

# Objective 4

These days Bechan Chacha is depressed because his crush gave him list of mobile number some of them are valid and some of them are invalid. Bechan Chacha has special power that he can pick his crush number only if he has valid set of mobile numbers. Help him to determine the valid numbers.

 

You are given a string "S" and you have to determine whether it is Valid mobile number or not. Mobile number is valid only if it is of length 10 , consists of numeric values and it shouldn't have prefix zeroes.

 

Input:

 

First line of input is T representing total number of test cases.

Next T line each representing "S" as described in in problem statement.

 

Output:

 

Print "YES" if it is valid mobile number else print "NO".

Note: Quotes are for clarity.

 

Constraints:

 

1<= T <= 103

sum of string length <= 105

 

SAMPLE INPUT

 

3

1234567890

0123456789

0123456.87

 

SAMPLE OUTPUT

 

YES

NO

NO