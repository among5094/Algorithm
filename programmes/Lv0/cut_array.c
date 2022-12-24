#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//문제: 배열 자르기
//출처: https://school.programmers.co.kr/learn/courses/30/lessons/120833

// numbers_len은 배열 numbers의 길이입니다.
//The numbers_len is the length of the array numbers.
int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    
    int j= num2-num1+1;

    int* answer=(int*)malloc(j*sizeof(int));
    int k=0;
    for(int i=num1; i<=num2;i++)
    {
        answer[k]=numbers[i];
        k++;
    }
        
    return answer;
}