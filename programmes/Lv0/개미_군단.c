#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//문제: 개미 군단 - 최소한의 병력을 구성하기
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120837

//try to 2 - success
//key point : all quotien(몫) add and hereditary remainder(나머지) with following code.
//몫은 전부 더하고 나머지는 전부 다음 코드로 세습해라
int solution(int hp)
{
    int answer=0; 
    int sum=0;

    if(hp>=5)
    {
        sum=sum+hp/5;//몫은 전부 더하고
        hp=hp%5; //나머지는 전부 다음 코드로 세습한다.
    }

   if(hp>=3) //3,4만 들어갈 수 있음
    {
        sum=sum+hp/3;
        hp=hp%3;
    }

    if(hp>=1) //2와 1만 들어갈 수 있음
    {
        sum=sum+hp/1;
    }
    
    return sum;
    
}

//frist try - error
//why error? -> I have to write "if" Instead of "else if".
int solution(int hp) //hp는 사냥감의 체력
{
    int answer=0;
    int sum=0; //개미들의 합계를 구해줄 변수 sum

    if(hp>=5) //천적의 hp가 5보다 적을 때 까지 반복
    {
        answer=hp/5;
        hp=hp%5;
        sum= sum+answer;
    }

    else if(hp>=3)
    {
        answer=hp/3;
        hp=hp%3;
        sum= sum+answer;
    }

    else if(hp>=1)
    {
        answer=hp/1;
        sum= sum+answer;
    }    

    return sum;
}