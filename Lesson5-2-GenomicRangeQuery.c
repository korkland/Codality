/*Find the minimal nucleotide from a range of sequence DNA
A DNA sequence can be represented as a string consisting of
the letters A, C, G and T, which correspond to the types of
successive nucleotides in the sequence. Each nucleotide has
an impact factor, which is an integer. Nucleotides of types
A, C, G and T have impact factors of 1, 2, 3 and 4, 
respectively. You are going to answer several queries of 
the form: What is the minimal impact factor of nucleotides
contained in a particular part of the given DNA sequence?

The DNA sequence is given as a non-empty string 
S = S[0]S[1]...S[N-1] consisting of N characters. 
There are M queries, which are given in non-empty arrays
 P and Q, each consisting of M integers. The K-th query 
 (0 ≤ K < M) requires you to find the minimal impact factor
  of nucleotides contained in the DNA sequence between positions P[K] and Q[K] (inclusive).
*/
struct Results solution(char *S, int P[], int Q[], int M) {
    struct Results result;
    int sizeS=strlen(S), a,c,g;
    //create prefix sums for A,C,G
    int **arr = (int **)malloc(3*sizeof(int*));
    for(int i=0; i<3;i++)
        arr[i]=(int *)calloc(sizeS+1,sizeof(int));
    for(int i=0; i<sizeS;i++){
        a=0;c=0;g=0;
        if(S[i]=='A')
            a=1;
        if(S[i]=='C')
            c=1;
        if(S[i]=='G')
            g=1;
        arr[0][i+1]=arr[0][i]+a;
        arr[1][i+1]=arr[1][i]+c;
        arr[2][i+1]=arr[2][i]+g;
    }
    
    result.A = (int *)calloc(M,sizeof(int));
    result.M = M;
    
    for(int i=0;i<M;i++){
        if(arr[0][Q[i]+1]-arr[0][P[i]] > 0)
            result.A[i]=1;
        else if((arr[1][Q[i]+1]-arr[1][P[i]] > 0))
            result.A[i]=2;
        else if((arr[2][Q[i]+1]-arr[2][P[i]] > 0))
            result.A[i]=3;
        else
            result.A[i]=4;
    }
    return result;
}