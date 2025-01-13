/*
 * Complete the 'minDiff' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */
int compare(const void* a,const void* b){
    return (*(int*)a - *(int*)b);
}
int minDiff(int arr_count, int* arr) 
{
    qsort(arr,arr_count,sizeof(int),compare);
    int sum_diff = 0;
    
    for(int i = 1; i < arr_count;i++){
        sum_diff += arr[i] - arr[i - 1];
    }
    return sum_diff;
}