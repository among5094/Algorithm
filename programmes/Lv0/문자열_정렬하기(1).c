#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

//제목: 문자열 정렬하기(1)
//문제: 무작위로 들어오는 배열 my_string에서 숫자만 고르고 그 숫자를 오름차순으로 정렬하기
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120850

int* solution(const char* my_string)
{
    int len=strlen(my_string);
    int* answer = (int*)malloc(sizeof(int)*len);
    int cnt=0, temp=0;
    
    //배열 my_string에서 숫자만 고르기
    for(int i=0; i<len; i++)
    {
        if(my_string[i]>='0' && my_string[i]<='9')
        {
            answer[cnt]=my_string[i]-'0';
            cnt++;
        }   
            
    }

    //고른 숫자를 오름차순으로 정렬하기
    for(int i=0; i<cnt; i++)
    {
        for(int j=i; j<cnt; j++)
        {
            if(answer[i])
        }
    }
    
    //answer[i]='\0';
    return answer;
}