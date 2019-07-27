/*Find longest sequence of zeros in binary representation of an integer.
A binary gap within a positive integer N is any maximal sequence of consecutive 
zeros that is surrounded by ones at both ends in the binary representation of N. */

int solution(int N) {
    int result=0,temp_max=0;
    
    while(!(N%2)) N/=2; //get rid of zeros at the beginning
    
    while(N){
        if(N%2){ //if residual is 1 update result and set counter to 0
            if(result<temp_max)
                result=temp_max;
            temp_max=0;
            N/=2;
        }
        else{ //if residual is 0 increase counter
            temp_max++;
            N/=2;
        }
    }
    return result;
}