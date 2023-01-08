#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//문제: 들어온 정수 n의 각 자리수의 합 구하기
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120906

int solution(int n)
{
    int sum=0;//Variables that store the sum, 합을 저장하는 변수입니다
    
    while(n>10)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    sum=sum+(n%10);

    return sum;

}