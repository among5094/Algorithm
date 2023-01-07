#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//문제: 순서쌍의 개수 return하기, 약수 찾기
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120836

int solution(int n)
{
    int answer = 0;
    
    for(int i=1; i<=n; i++)
    {
        if(i*(n-1-i) ==n )
            answer++;
        
    }
    return answer;
}

//다른 사람 풀이
/*
for(int i=1; i<=n; i++)
    {
        if( i%n==0 )
            answer++;
        
    }

    return 0;
*/