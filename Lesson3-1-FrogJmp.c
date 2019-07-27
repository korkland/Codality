/*A small frog wants to get to the other side of the road. The frog is currently 
located at position X and wants to get to a position greater than or equal to Y. 
The small frog always jumps a fixed distance, D.

Count the minimal number of jumps that the small frog must perform to reach its target.
*/
int solution(int X, int Y, int D) {
    // write your code in C99 (gcc 6.2.0)
    return (Y-X)%D==0 ? (Y-X)/D : (Y-X)/D+1;
}