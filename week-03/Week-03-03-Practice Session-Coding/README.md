# Objective 1

Some data sets specify dates using the year and day of year rather than the year, month, and day of month. The day of year (DOY) is the sequential day number starting with day 1 on January 1st.

 

There are two calendars - one for normal years with 365 days, and one for leap years with 366 days. Leap years are divisible by 4. Centuries, like 1900, are not leap years unless they are divisible by 400. So, 2000 was a leap year.

 

To find the day of year number for a standard date, scan down the Jan column to find the day of month, then scan across to the appropriate month column and read the day of year number. Reverse the process to find the standard date for a given day of year.

 

Write a program to print the Day of Year of a given date, month and year.

 

Sample Input 1

 

18

6

2020

 

Sample Output 1

 

170

Test Case:

![alt text](<Screenshot 2025-01-13 170259.png>)

# Objective 2

Suppandi is trying to take part in the local village math quiz. In the first round, he is asked about shapes and areas. Suppandi, is confused, he was never any good at math. And also, he is bad at remembering the names of shapes. Instead, you will be helping him calculate the area of shapes.

 

·         When he says rectangle he is actually referring to a square. 

·         When he says square, he is actually referring to a triangle.

·         When he says triangle he is referring to a rectangle

·         And when he is confused, he just says something random. At this point, all you can do is say 0.

 

Help Suppandi by printing the correct answer in an integer.

 

Input Format

 

·         Name of shape (always in upper case R à Rectangle, S à Square, T à Triangle)

·         Length of 1 side

·         Length of other side

 

Note: In case of triangle, you can consider the sides as height and length of base

 

Output Format

 

·         Print the area of the shape.

 

Sample Input 1

 

T

10

20

 

Sample Output 1

 

200

 

Sample Input 2

 

S

30

40

 

Sample Output 2

 

600

 


 

Sample Input 3

 

R

10

10

 

Sample Output 3

 

100

 

Sample Input 4

 

G

8

8

 

Sample Output 4

 

0

 

Sample Input

 

C

9

10

 

Sample Output 4

 

0

 

Explanation:

 

·         First is output of area of rectangle

·         Then, output of area of triangle

·         Then output of area square

·         Finally, something random, so we print 0

Test Case:

![alt text](<Screenshot 2025-01-13 170305.png>)

# Objective 3

Superman is planning a journey to his home planet. It is very important for him to know which day he arrives there. They don't follow the 7-day week like us. Instead, they follow a 10-day week with the following days: Day Number Name of Day 1 Sunday 2 Monday 3 Tuesday 4 Wednesday 5 Thursday 6 Friday 7 Saturday 8 Kryptonday 9 Coluday 10 Daxamday Here are the rules of the calendar: • The calendar starts with Sunday always. • It has only 296 days. After the 296th day, it goes back to Sunday. You begin your journey on a Sunday and will reach after n. You have to tell on which day you will arrive when you reach there.

Input format: •

 Contain a number n (0 < n)

Output format: Print the name of the day you are arriving on

Example Input

7

 Example Output

 Kryptonday

 Example Input

 1

 Example Output Monday

 Test Case:

![alt text](<Screenshot 2025-01-13 170310.png>)