#include <stdio.h>

//제목: 직각삼각형 출력하기 
//문제: 입력받는 개수 n에 맞춰서 직각 삼각형 출력하기 
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120823

int main(void)
{
    int n;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        for(int k=0; k<=i ; k++)
            printf("*");

        printf("\n");
    }
    return 0;
}