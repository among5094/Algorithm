#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

//제목: 암호 해독
//문제: 암호화된 문자열 cipher을 입력받으면 code라는 숫자의 배수번째 글자만 return하기 
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120892

//cipher: 암호화된 문자열, code: 숫자가 들어옴
char* solution(const char* cipher, int code)
{
    int len = strlen(cipher);
    char* answer = (char*)malloc(len); //동적할당

    for(int i=0; i<len; i++)
    {
        if(answer[i]==answer[code*i])
        {
            answer[i]=answer[];
        }
        

    }

    return answer;
}