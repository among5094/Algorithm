#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//문제: 배열 뒤집기 (성공)
//문제 출처:https://school.programmers.co.kr/learn/courses/30/lessons/120821

// num_list_len: 배열 길이
// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
int* solution(int num_list[], size_t num_list_len)
{
    //동적 할당
    int* arr=(int*)malloc(sizeof(int)*num_list_len);
    int len=num_list_len-1;
    for(int i=0; i<num_list_len; i++)
    {
        arr[i]=num_list[len]; //가장 마지막 배열을 answer[0](첫 번째)배열에 넣고
        num_list_len--; //len개수를 낮추기

    }
    
    return arr;
}

//----다른 사람 풀이중에 가장 좋은 것---
int* solution(int num_list[], size_t num_list_len)
{
    int* answer = (int*)malloc(1000); //동적 할당 

    for(int i = 0; i < num_list_len; i++) //num_list_len만큼 반복하기
        answer[i] = num_list[num_list_len-i-1]; //answer배열 처음부터 끝까지 배열num_list마지막부터 넣어주기 
        //근데 -1이 있는 이유?

    return answer;
}


