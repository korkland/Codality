/* 
Find the minimal average of any slice containing at least two elements.
*/
int solution(int A[], int N) {
    double min_avg=(A[0]+A[1])/2.0;
    int result = 0;
    for(int i=0;i<N-2;i++){
        if((A[i]+A[i+1])/2.0<min_avg){
            result = i;
            min_avg = (A[i]+A[i+1])/2.0;
        }
        if((A[i]+A[i+1]+A[i+2])/3.0<min_avg){
            result = i;
            min_avg = (A[i]+A[i+1]+A[i+2])/3.0;
        }
    }
    if((A[N-2]+A[N-1])/2.0<min_avg){
        result = N-2;
        min_avg = (A[N-2]+A[N-1])/2.0;
    }
    return result;
}