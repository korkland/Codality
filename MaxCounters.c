void init_max(int *ptr,int size,int max);
int find_max(int *ptr,int size);
struct Results solution(int N, int A[], int M) {
    int max=0,set_to_max=0;
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    result.C = (int *)calloc(N,sizeof(int));
    for(int i=0; i<M;i++){
        if(A[i]<=N){
            if(result.C[A[i]-1]<set_to_max)
                result.C[A[i]-1]=set_to_max;
            result.C[A[i]-1]+=1;
            if(result.C[A[i]-1]>max)
                max=result.C[A[i]-1];
        }
        else{
            set_to_max=max;
        }
    }
    init_max(result.C,N,set_to_max);
    result.L = N;
    return result;
}
void init_max(int *ptr,int size, int set_to_max){
    for(int i=0;i<size;i++)
        if(*(ptr+i)<set_to_max)
            *(ptr+i)=set_to_max;
}