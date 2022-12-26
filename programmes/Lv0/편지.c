#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> // strlen 함수가 선언된 헤더 파일

//문제: 문자열의 길이를 구한 뒤 곱하기 2해라. (성공)
//출처: https://school.programmers.co.kr/learn/courses/30/lessons/120898?language=c

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* message)
{
    int answer = 0; //변수 선언
    answer = strlen(message)*2;//strlen(message) :배열 message의 개수를 세어줌, 거기에 *2를 함
    return answer; 

}



//strlen에 대한 설명 링크:
//https://dojang.io/mod/page/view.php?id=345