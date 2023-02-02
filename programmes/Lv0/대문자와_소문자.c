#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>//strlen
#include <ctype.h> //isupper, islower, tolower, toupper

//제목: 대문자와 소문자
//문제: 대문자는 소문자로, 소문자는 대문자로 변환해서 return 하기
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120893

char* solution(const char* my_string)
{
    int len = strlen(my_string); //문자열 my_string의 개수
    char* answer = (char*)malloc(len+1); //len+1을 해야 NULL도 들어간다. 
    int i=0;

    for(i=0; i<len; i++)
    {
        if(isupper(my_string[i]) !=0) //대문자가 맞으면?
            answer[i]=tolower(my_string[i]); //대문자를 소문자로 바꾸고 answer에 넣어준다. 
        else if(islower(my_string[i]) !=0) //소문자가 맞으면?
            answer[i]=toupper(my_string[i]); //소문자를 대문자로 바꾸고 answer에 넣어준다.  
    }

    answer[i]='\0'; //마지막에 NULL 넣기
    return answer;
}

/*

isupper(c) : c가 대문자인가? 
대문자라면 0이 아닌것을 반환. 
대문자가 아니면 0을 반환

islower(c) : c가 소문자인가? 
소문자라면 0이 아닌것을 반환. 
소문자가 아니면 0을 반환

toupper(c) : 문자c를 대문자로 바꾼다. 
tolower(c) : 문자c를 소문자로 바꾼다. 

strlwr()

*/