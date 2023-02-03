#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//제목: n의 배수 고르기 
//문제: 배열numlist에서 n의 배수인 배열만 return하기
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120905

int* solution(int n, int numlist[], size_t numlist_len)// numlist_len은 배열 numlist의 길이입니다.
{
    int* answer = (int*)malloc(sizeof(int)*numlist_len); //int형이므로 sizeof(int)해줌.
    int cnt=0; //동적할당 answer의 index
    
    for(int i=0; i<numlist_len; i++)
    {
        if(numlist[i]%n==0)
        {
            answer[cnt]=numlist[i];
            cnt++;
        }    
        
    }
    
    return answer;
}