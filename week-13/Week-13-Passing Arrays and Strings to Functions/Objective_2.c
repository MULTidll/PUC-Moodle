/*
 * Complete the 'arraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY numbers as parameter.
 */

int arraySum(int numbers_count, int *numbers) {
    int sum = 0;
    for(int i = 0; i < numbers_count;i++){
        sum += numbers[i];
    }
    return sum;
}