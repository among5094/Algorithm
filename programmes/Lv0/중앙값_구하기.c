#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//문제: 배열의 중앙값 구하기
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120811?language=c

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len)
{
    int answer = 0;
    int len=0, temp=0;

    //오름차순으로 정렬
    for(int i=0; i<array_len; i++)
    {
        for(int k=0; k<array_len-1; k++)
        {
            if(array[k]>array[k+1]) //앞에 있는 index가 더 크다면?
            {
                temp=array[k];
                array[k]=array[k+1]; //더 작은 수를 앞으로 보내기
                array[k+1]=temp;
            }//if

        }//for(k)

    }//for(i) - >이 for문이 끝나면 배열은 오름차운으로 정렬된 상태


    len=(array_len/2)+1; //중앙값
    answer=array[len];
    return answer;

}

//틀린이유: 
//len=(array_len/2)+1; 배열이 홀수로만 입력되는데 0부터 시작하니까 +1하면 총 짝수개가 돼서 /2만 해주면 된다. 