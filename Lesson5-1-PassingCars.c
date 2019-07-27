/* Count the number of passing cars on the road.
A non-empty array A consisting of N integers is given. 
The consecutive elements of array A represent consecutive cars on a road.
The goal is to count passing cars. We say that a pair of cars (P, Q), 
where 0 ≤ P<Q < N, is passing when P is traveling to the east and Q is 
traveling to the west.
*/

int solution(int A[], int N) {
    int *B=(int *)calloc(N,sizeof(int));
    int num_of_zeros=0,result=0;
    for(int i=0;i<N;i++){
        if(!A[i])
            num_of_zeros++;
        B[i]=num_of_zeros;
    }
    for(int i=0;i<N;i++)
        result+=B[i]*A[i];
    if(abs(result)>1000000000)
        return -1;
    return result;
}
