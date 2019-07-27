/*Check whether array A is a permutation.
A non-empty array A consisting of N integers is given.
A permutation is a sequence containing each element from 1 to N once, and only once.*/
int solution(int A[], int N) {
    int *B=(int *)calloc(N,sizeof(int));
    for(int i=0;i<N;i++){
        if(A[i]>N || B[A[i]]!=0)
            return 0;
        B[A[i]]++;
    }
    free(B);
    return 1;
}