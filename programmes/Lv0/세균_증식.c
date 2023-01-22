#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//문제: 세균 증식
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120910

int solution(int n, int t)
{
    for(int i=0; i<t; i++) //t시간 만큼 반복
        n=n*2;

    return n;
}

//해결 포인트: 자신이 곱한 것을 반복해서 곱해주면 된다.
