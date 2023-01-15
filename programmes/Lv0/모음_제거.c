#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> //strlen과 strtok

//문제: 영어 모음 a,e,i,o,u 제거
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120849

//try 2 - 성공
char* solution(const char* my_string)
{
    int len = strlen(my_string); //문자열 my_string의 길이
    char* answer = (char*)malloc(len); //동적 할당
    int index=0; 

    for(int i=0; i<len; i++)
    {
        if(my_string[i] != 'a' && my_string[i] != 'e' && my_string[i] != 'i' && my_string[i] != 'o' && my_string[i] != 'u')
            answer[index++]=my_string[i];
    }

    answer[index]='\0';
    return answer;
}



// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string)
{
    int len = strlen(my_string);//문자열 my_string의 길이
    char* answer = (char*)malloc(len); //동적 할당

    //for(int i=0; i<=len; i++){

    if(strchr(my_string, 'a') != NULL) //문자열 my_string에서 모음a가 찾아지면?
    {
        answer=strtok('a', my_string);//문자열 my_string 에서 문자'a'를 분리하기 (토큰함수 사용)
        while(answer != NULL)
        {
            answer=strchr(answer+1, 'a'); //포인터에 1더해서 a다음부터 검색
        }
    }    
    else if(strchr(my_string, 'e') != NULL)
    {
        answer=strtok('e', my_string);//문자열 my_string 에서 문자'a'를 분리하기 (토큰함수 사용)
        while(answer != NULL)
        {
            answer=strchr(answer+1, 'e'); //포인터에 1더해서 a다음부터 검색
        }
    }
    else if(strchr(my_string, 'i') != NULL)
    {
        answer=strtok('i', my_string);//문자열 my_string 에서 문자'a'를 분리하기 (토큰함수 사용)
        while(answer != NULL)
        {
            answer=strchr(answer+1, 'i'); //포인터에 1더해서 a다음부터 검색
        }
    }
    else if(strchr(my_string, 'o') != NULL)
    {
        answer=strtok('o', my_string);//문자열 my_string 에서 문자'a'를 분리하기 (토큰함수 사용)
        while(answer != NULL)
        {
            answer=strchr(answer+1, 'o'); //포인터에 1더해서 a다음부터 검색
        }
    }
    else if(strchr(my_string, 'u') != NULL)
    {
        answer=strtok('u', my_string);//문자열 my_string 에서 문자'a'를 분리하기 (토큰함수 사용)
        while(answer != NULL)
        {
            answer=strchr(answer+1, 'u'); //포인터에 1더해서 a다음부터 검색
        }
    }

    //} //for문


    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    return answer;
    //free(answer); //동적할당 반환
}
