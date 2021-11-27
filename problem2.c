#include<stdio.h>
#define LIMIT 4000000

int main(){
    int a = 1;
    int b = 1;
    int c = 0;
    int sum = 0;

    while(a < LIMIT){
        c = a + b;
        b = a + c;
        sum +=c ;
        a = b + c;
    }

    printf("ANSWER = %d",sum);
    return 0;
}