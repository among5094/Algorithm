#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> //strlen()을 위한 헤더파일

//문제: 문자 반복 출력하기 
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120825

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.

char* solution(const char* my_string, int n)// my_string -> 문자열, n -> 반복하고 싶은 횟수
{
    int str_len = strlen(my_string); //배열string의 길이
    char* answer = (char*)malloc( str_len*n*sizeof(char) );
    int answer_index=0; //동적할당 answer을 위한 index

    for(int j=0; j<str_len ; j++) //문자열 my_string만큼 반복해주기 위해서 선언된 j
    {
        for(int i=0; i<n; i++) //입력받은 문자n만큼 반복하기 위해서 선언된 i
        {   
            answer[answer_index]=my_string[j]; //문자열 my_string[j]만큼 반복
            answer_index++; //하나씩 answer[answer_index]를 증가하기 
        }
    }
    answer[answer_index]=NULL; //NULL = '/0' , 이 문장의 역할: 마지막임을 알려주는 역할
    return answer; //

}

//for(index=0; index<strlen(my_string); index++)