#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> //문자열 len을 위해서 선언한 헤더파일

//제목: 암호 해독
//문제: 암호화된 문자열 cipher을 입력받으면 code라는 숫자의 배수번째 글자만 return하기 
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120892

//cipher: 암호화된 문자열, code: 숫자가 들어옴
char* solution(const char* cipher, int code)
{
    int len = strlen(cipher); //문자열 cipher의 길이
    char* answer = (char*)malloc(len); //동적할당

    for(int i=0; i<len; i++)
    {
        int k=1;
        if(cipher[i] == cipher[code*k]) //i가 0이면 안됨
        {
            strchr()
            //answer[i] = cipher[code*k];
            k++;
        }    
        
    }
    
    free(answer); //동적할당 메모리 해제
    return answer;

}