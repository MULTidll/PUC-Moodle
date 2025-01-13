/*
 * Complete the 'cutThemAll' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. LONG_INTEGER_ARRAY lengths
 *  2. LONG_INTEGER minLength
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
char* cutThemAll(int lengths_count, long *lengths, long minLength) {
    long long totalLength = 0;
    for(int i = 0;i < lengths_count;i++){
        totalLength += lengths[i];
    }
    if(totalLength < minLength){
        return "Impossible";
    }
    long long cumulative = 0;
    for(int i = 0;i < lengths_count - 1;i++){
        cumulative += lengths[i];
        if(cumulative >= minLength){
            cumulative =0;
        }
    }
    if(cumulative > 0 && cumulative < minLength){
            return "Impossible";
    }
    return "Possible";
}