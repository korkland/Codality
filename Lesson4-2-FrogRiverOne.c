/*
Find the earliest time when a frog can jump to the other side of a river.
A small frog wants to get to the other side of a river. 
The frog is initially located on one bank of the river 
(position 0) and wants to get to the opposite bank (position X+1). 
Leaves fall from a tree onto the surface of the river.

You are given an array A consisting of N integers representing
the falling leaves. A[K] represents the position where one leaf
falls at time K, measured in seconds.

The goal is to find the earliest time when the frog can jump 
to the other side of the river. The frog can cross only when 
leaves appear at every position across the river from 1 to X 
(that is, we want to find the earliest moment when all the 
positions from 1 to X are covered by leaves). You may assume 
that the speed of the current in the river is negligibly small, 
i.e. the leaves do not change their positions once they fall in the river.
Comp: O(N)
*/
int path_to_X(int *B,int X);
int solution(int X, int A[], int N) {
    int *B = (int *)calloc(N,sizeof(int));
    for(int i=0;i<N;i++){
        B[A[i]-1]=1; //mark the path to X
        if(i>=X-1 && path_to_X(B,X))
            return i;
    }
    return -1;
}
int path_to_X(int *B,int X){
    static int i=0; //using static i instead of running on all array each time
    int j;
    for(j=i;j<X;j++){
        if(!B[j])
            return 0;
        else
            i=j;
    }
    return 1;
}
