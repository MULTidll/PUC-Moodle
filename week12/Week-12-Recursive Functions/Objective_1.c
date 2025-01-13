/*
 * Complete the 'myFunc' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int myFunc(int n) 
{
    if(n == 1)
    return 1;
    if(n%10 != 0 && n%20 != 0)
    return 0;
    if(n%10 == 0 && myFunc(n/10))
    return 1;
    if(n%20 == 0 && myFunc(n/20))
    return 1;
    return 0;
}