#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> //strstr함수를 위한 헤더파일

//문제: 문자열 안에서 문자열 찾기
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120908

/* 문자열 함수에 대한 설명

strchr(s,c) : 문자"열"s 안에서 문자 c를 찾는다. 문자열과 문자!
strstr(s1,s2) : 문자열"s1"안에서 문자열 "s2"를 찾는다. 문자열과 문자열!
return 값은 -> 문자열 s1안에서 찾은 s2의 "첫 번째 표시 시작 위치에 대한 주소값을 리턴한다"


*/

int solution(const char* str1, const char* str2)
{
    int len=strlen(str1); //문자열 str1의 길이
    for(int i=0; i<len; i++) //str1이 끝나기 전까지 반복
    {
        if(strstr(str1,str2) !=0) //s1안에서 s2를 찾았다면? (찾았다면 주소값을 반환하니까 0이 아닌 것이라고 뒀음)
            return 1; //일치하면 리턴1
        else
            return 2;
    }

}