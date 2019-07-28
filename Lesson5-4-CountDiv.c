/*Compute number of integers divisible by k in range [a..b].
Write a function:
that, given three integers A, B and K, returns the number of integers within the range [A..B] that are divisible by K, i.e.:
*/
int solution(int A, int B, int K)
{
    return (B/K) - (A/K) + (((A%K)==0) ? 1 : 0);
}