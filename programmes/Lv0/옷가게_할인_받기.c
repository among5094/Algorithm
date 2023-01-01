#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//문제: 할인률 구하기
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120818

int solution(int price)
{
    int answer=0;

    if(price>=100000 && price<300000 )
        answer=price*0.95; //5%할인이면 price의 5%를 구하고 price에서 price의 5%를 빼야하는데, 95/100을 곱하니 더 편리하다
    else if(price>=300000 && price<500000)
        answer=price*0.9; //10%할인이니까
    else if(price>=500000)
        answer=price*0.8; //20%할인이니까
    else
        answer=price;

    return answer;
}

//다른사람 풀이중 더 짧은 것
//answer을 없애고 *=를 추가해 price를 return 함
int solution(int price) {
    if (price>=500000)
        price *= 0.8;
    else if (price>=300000)
        price *= 0.9;
    else if (price>=100000)
        price *= 0.95;
    
    return price;
}



int solution(int price)
{
    int answer = 0;

    if(100000)//10만원 이상 구매하면?
    {
        price=price-price*(int)(5/100);
        answer=price;
    }
    else if (300000) //30만원 이상?
    {
        price=price-price*(int)(10/100);
        answer=price;
    } 
    else if (500000)//50만원 이상?
    {
        price=price-price*(int)(20/100);
        answer=price;
    }   

    return answer;
}