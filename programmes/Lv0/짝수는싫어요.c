#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//문제: 홀수가 담긴 배열만 return하기
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120813


int* solution(int n)
{
    int* answer = (int*)malloc(n*sizeof(int));
    int k=0; // 동적 할당된 배열 answer을 위한 k

    for(int i=1; i<=n; i++) //0은 포함 안 해도 되니까
    {
        if(i%2!=0) //홀수라면?
        {
            answer[k]=answer[i];
            k++;
        }
    }
    return answer;
}