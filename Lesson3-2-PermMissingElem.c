/*An array A consisting of N different integers is given. 
The array contains integers in the range [1..(N + 1)], 
which means that exactly one element is missing.

Your goal is to find that missing element.*/
int solution(int A[], int N) {
    
    long sumN=0.5*(N+2)*(N+1), sumA=0; //calculate the sum of N+1 elements
    for(int i=0;i<N;i++)
        sumA+=A[i];
    return sumN-sumA;
}
