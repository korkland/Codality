/*
Find the smallest positive integer that does not occur in a given sequence.
*/

int min_pos_int(int *B, int N);
int solution(int A[], int N) {
    int *B = (int *)calloc(N,sizeof(int));
    for(int i=0;i<N;i++){
        if(A[i]>0 && A[i]<=N)
            B[A[i]-1]=1;
    }
    return 1+min_pos_int(B,N);
}
int min_pos_int(int *B, int N){
    int i;
    for(i=0;i<N;i++)
        if(!B[i])
            return i;
    return i;
}