#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> //Header file for strlen

//문제: 배열 원소의 길이
// https://school.programmers.co.kr/learn/courses/30/lessons/120854

// 파라미터로 주어지는 문자열은 const로 주어집니다.
int* solution(const char* strlist[], size_t strlist_len)
{ // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.

    
    for(int i=0;i<strlist_len;i++)
        if(strlist[i]=" ")
            i++;

    
    return 0;//strlen(strlish[i]);
        
}

/*
알고리즘
1. strtok함수로 공백과 문자열을 분리한 뒤
2. 분리된 문자열의 개수를 strlen으로 세어준다.

*/