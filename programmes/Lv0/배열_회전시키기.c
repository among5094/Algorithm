#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.

int* solution(int numbers[], size_t numbers_len, const char* direction)
{
    int* answer = (int*)malloc(sizeof(int)*numbers_len);

    //오른쪽으로 한 칸씩 밀기
    if(strcmp(direction,"right") == 0 ) //strcmp함수는 두 문자열이 같으면 0을 반환한다. 
    {
        for(int i=1; i<numbers_len; i++)
            answer[i]=numbers[i-1]; //answer[1]부터 차례대로 넣어주고

        answer[0]=numbers[numbers_len-1]; //첫 번째 배열에는 numbers의 마지막 배열 넣어주기

    }
    else//왼쪽으로 한 칸씩 밀기
    {
        for(int i=0; i<numbers_len-1; i++)
            answer[i]=numbers[i+1]; //answer[0]부터 그 다음 배열을 차례대로 넣어주고

        answer[numbers_len-1]=numbers[0];//마지막 배열은 주어지는 배열 numbers의 첫 번째 배열 넣기
    }
    return answer;
}