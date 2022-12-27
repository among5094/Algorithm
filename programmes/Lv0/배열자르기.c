#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//문제: 배열 자르기 (통과)
//출처: https://school.programmers.co.kr/learn/courses/30/lessons/120833

// numbers_len은 배열 numbers의 길이입니다.
//The numbers_len is the length of the array numbers.
int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    
    //동적할당
    int j= num2-num1+1; 
    int* answer=(int*)malloc(j*sizeof(int));
    int k=0;

    for(int i=num1; i<=num2;i++)
    {
        answer[k]=numbers[i]; //배열을 자르고 싶은 1번째 index에서 2번째 index까지 answer[k]에 담는다
        k++; //그리고 담을 때마다 배열의 size를 1씩 증가해서 다음 배열을 담을 수 있게 한다.
    }
        
    return answer;
}