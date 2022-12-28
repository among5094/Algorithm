#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//문제: 배열 두배 만들기 (성공)
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120809

int* solution(int numbers[], size_t numbers_len)
{
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(numbers_len*sizeof(int));
    
    for(int i=0; i<numbers_len; i++)
        answer[i]=numbers[i]*2;
    
    return answer;
}