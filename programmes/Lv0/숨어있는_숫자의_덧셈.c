#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
 
//문제: 숨어있는 숫자의 덧셈(1)
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120851

int solution(const char* my_string)
{
    int sum = 0;
    int len=strlen(my_string);//문자열의 길이

    for(int i=0; i<len ;i++)//
    {
        if(my_string[i]>'0' && my_string[i]<='9')//1~9까지 정수형 값을 얻을 수 있고
            sum=sum+my_string[i]-'0'; //answer배열에 더해주면 원하는 답을 얻을 수 있다. 
    }
    return sum;
}
//'0'의 아스키코드 값 == 48, '9'의 아스키코드 값 == 57