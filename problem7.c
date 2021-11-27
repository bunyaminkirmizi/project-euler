#include<stdio.h>

#define PRIME_COUNT 10001

int memo_prime[PRIME_COUNT];
int memo_prime_index;

int is_prime(int number){
    if(number < 2){
        return 0;
    }

    for(int i = 0;i<memo_prime_index+1;i++){
        if( (number % memo_prime[i]) == 0){
            return 0;
        }
    }
    memo_prime[++memo_prime_index] = number;
    return 1;
}

int nth_prime(int nth){
    int i =0;
    while(memo_prime_index<nth){
        i++;
        is_prime(i);
    }

    return memo_prime[nth-1];
}

int main(){
    memo_prime_index = 0;
    memo_prime[memo_prime_index] = 2;

    printf("ANSWER = %d",nth_prime(PRIME_COUNT));
    return 0;
}