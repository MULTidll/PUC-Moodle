/*
 * Complete the 'balancedSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int balancedSum(int arr_count, int* arr) 
{
    int left = 0, right = 0;
    for(int i = 0;i < arr_count;i++){
        right += arr[i];
    }
    for(int i = 0;i < arr_count;i++){
        if(left == (right-arr[i]))
        return i;
        left += arr[i];
        right -= arr[i];
    }
    return 1;
}