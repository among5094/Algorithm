#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

//제목: 가위 바위 보
//문제: 가위(2), 바위(0), 보(5)가 들어오면 이기는 경우를 return하기
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120839

//가위2, 바위0, 보5
//이길 수 있는 수를 return하기
char* solution(const char* rsp)
{
    int len = strlen(rsp); //문자열 rsp의 길이
    char* answer = (char*)malloc(len);
    int i=0;

    for(i=0; i<len; i++)
    {
        if(rsp[i]=='2')//가위가 들어오면?
            answer[i]='0'; //바위 내기
        else if(rsp[i]=='0') //바위가 들어오면?
            answer[i]='5'; //보 내기
        else if(rsp[i]=='5') //보가 들어오면?
            answer[i]='2'; //가위 내기

    }

    answer[i]='\0'; //마지막에 NULL문자 넣어주기
    return answer;

}

/*
계속 큰 따옴표를 써서 틀렸다. 
작은 따옴표(' ')는 문자 하나를 쓸 때 사용하고, 
큰 따옴표(" ")는 문자열을 쓸 때 사용해야한다.
*/