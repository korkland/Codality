/*Find value that occurs in odd number of elements.
A non-empty array A consisting of N integers is given. 
The array contains an odd number of elements, and each element
 of the array can be paired with another element that has the 
 same value, except for one element that is left unpaired.*/
 
int solution(int A[], int N) {
    int result = 0;
    
    for (int i = 0; i < N; ++i) {
        result = result ^ A[i];//bitwise xor
    }
    return result;
}