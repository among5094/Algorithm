#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//제목: 주사위의 개수
//문제: 직사각형의 box에는 정사각형의 주사위가 몇 개 들어가는지 구하기
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120845

//내 풀이
int solution(int box[], size_t box_len, int n)// box_len은 배열 box의 길이입니다.
{
    int answer = 0;
    answer=(box[0]/n)*(box[1]/n)*(box[2]/n);
    return answer;
}

//다른 사람의 풀이
int solution(int box[], size_t box_len, int n) {
    
    int answer = 1;
    for(int i=0; i < 3; i++)
        answer *= (box[i] / n);
    
    return answer;
}