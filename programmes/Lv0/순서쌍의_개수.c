#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//문제: 순서쌍의 개수 return하기
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120836

int solution(int n)
{
    int answer = 0;
    
    for(int i=1; i<=n; i++)
    {
        if(i*(n-1-i) ==20)
            answer++;
        
    }
    return answer;
}