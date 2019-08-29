/* 
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

#include<stdio.h>
#include<math.h>


int main(){
  
    int N, i, j, isPrime, max = 0;
    N = sqrt(600851475143);
     for(i = 2; i <= N; i++){
        isPrime = 0;
        for(j = 2; j <= i/2; j++){
             if(i % j == 0){
                 isPrime = 1;
                 break;
             }
        }
          if(isPrime==0 && N!= 1)
            if(600851475143%i==0)
            	if(i > max)
            		max = i;
    }
  	printf("%d", max);
   return 0;
}
