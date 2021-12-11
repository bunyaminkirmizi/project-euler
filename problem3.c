#include<stdio.h>
#define	NUMBER	600851475143
#define PRIME_COUNT 1000000
unsigned long long memo_prime[PRIME_COUNT];
unsigned long long memo_prime_index;

unsigned long long is_prime(unsigned long long number){
    if(number < 2){
        return 0;
    }

    for(unsigned long long i = 0;i<memo_prime_index+1;i++){
        if( (number % memo_prime[i]) == 0){
            return 0;
        }
    }
    memo_prime[++memo_prime_index] = number;
    return 1;
}


int main(){
	memo_prime_index = 0;
	unsigned long long largest_prime = 0;
	unsigned long long num = NUMBER;
    memo_prime[memo_prime_index] = 2;
	for(unsigned long long i = 2; i<=num;i++){
		if(NUMBER % i == 0){
			if(is_prime(i)){
				num = num/i;
				largest_prime = i;
			}
		}
	}
	printf("ANSWER = %d",largest_prime);
	return 0;
}