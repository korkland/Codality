/*Rotate an array to the right by a given number of steps.
An array A consisting of N integers is given. Rotation of 
the array means that each element is shifted right by one 
index, and the last element of the array is moved to the 
first place. For example, the rotation of array 
A = [3, 8, 9, 7, 6] is [6, 3, 8, 9, 7] (elements are 
shifted right by one index and 6 is moved to the first place).

The goal is to rotate array A K times; that is, each element of A will be shifted to the right K times.
*/
//solution for best space complexity
void rotate_once(int A[], int N);
struct Results solution(int A[], int N, int K) {
    struct Results result;
    for(int i=0;i<K;i++)//run num of rotates
        rotate_once(A,N);
    result.A = A;
    result.N = N;
    return result;
}
//function that rotates array to the right once
void rotate_once(int A[], int N){
    int i,temp=A[N-1];
    for(i=N-1;i>0;i--)
        A[i]=A[i-1];
    A[i]=temp;
}

//solution for best run time complexity
struct Results solution(int A[], int N, int K) {
    struct Results result;
    result.N = N;
    result.A = (int *)calloc(N,sizeof(int));
    if(!K || !N)
        result.A = A; 
    else {
        K = K%N;
        for (int i = 0; i < N; ++i) {
            int index = (i+K)%N;
            result.A[index] = A[i];
        }
    }
    return result;
}