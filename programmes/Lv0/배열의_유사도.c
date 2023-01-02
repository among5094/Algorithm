#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

//문제: 같은 배열이 있는 index의 개수를 측정하고 그 값을 return 하기
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120903


int solution(const char* s1[], size_t s1_len, const char* s2[], size_t s2_len)
{
    int answer=0;
    int i,k;
    
    for(int i=0; i<s1_len; i++)
    {
        for(int k=0; k<s2_len; k++)
        {
            if( strcmp(s2[k], s1[i])==0 )
                answer++;
        }
    }
    
    return answer;
}

//처음 내 풀이 -> 
//max와 min은 애초에 상관없다. s1의 len을 i로 설정했으면 s1[i]를 해야하는데 s1[k] 이런식으로 잘못 대응시켜줘서 틀림.

// s1_len은 배열 s1의 길이이고, s2_len은 배열 s2의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s1[], size_t s1_len, const char* s2[], size_t s2_len)
{
    int answer = 0;

    //max와 min에 최대값과 최소값을 넣어주기
    int max=0, min=0;
    if(s1_len>s2_len)
    {
        max=s1_len;
        min=s2_len;
    }    
    else if(s1_len<s2_len)
    {
        max=s2_len;
        min=s1_len;
    } 
    else if(s1_len==s2_len)
    {
        max=s1_len;
        min=s2_len;
    }

    //이 if문이 끝나면 최대값과 최소값이 각각 max와 min에 들어간 상태
    int k=0;
    for(int i=0; i< max; i++)
    {   
        for(int k=0; k<min; k++)
        {
            if( strcmp(s2[i], s1[k])==0 ) //s1[i],s2[k]에서 자리 바꾸니까 맞음..
                answer++;

        }
        k=0;

    }
    //테스트 1,4,7에서 펑크남
    return answer;
}

