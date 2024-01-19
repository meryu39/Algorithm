#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = 0;
    long i = 1;
    int k = 0;
    while(i<=n+1){
        if(n/i == i){
            if(i*i == n){
            i++;
            answer = i*i;
            k = 1;
            break;
            }
            
        }
        i++;
    }
    if(k!=1){
        answer = -1;
    }
    return answer;
}