#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

//문제: 특정 문자 제거하기
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120826


char* solution(const char* my_string, const char* letter)
{
    int len = strlen(my_string);
    int j=0; //answer에 쓸 index변수 선언
    char* answer = (char*)malloc(sizeof(char)*len-1);
    // sizeof(char)은 안 해줘도 된다. 왜냐하면 sizeof(char)은 1이기 때문에
    // len-1아니라 len만 있어도 상관없음 근데 NULL문자 빼준것
    
    for(int i=0; i<len ; i++)
    {
        if( my_string[i] != letter[0] ) //letter만 있으면 안됨. letter[0]이 있어야함
           answer[j++]= my_string[i]; // !!!!!!!!!!! answer의 index에 똑같은 i를 적용하면 안됨. 새로운 index가 있어야됨 !!!!!!!!!!!!!!!1
        
    }
    answer[j]=NULL; //새로 선언한 answer배열 마지막에 문자열의 끝을 알리는 NULL문자 선언
    return answer;
}
//가장 큰 문제: answer에서 새로 쓸 index변수 j를 선언해주지 못해서 제일 힘들었다.


// ----------------- 최대한 간단하게 짠 코드 -----------------
char* solution(const char* my_string, const char* letter)
{
    int len = strlen(my_string);
    int j=0; //answer에 쓸 index변수 선언
    char* answer = (char*)malloc(len-1); // sizeof(char)은 안 해줘도 된다. 왜냐하면 sizeof(char)은 1이기 때문에 
    
    for(int i=0; i<len ; i++)
    {
        if( my_string[i] != letter[0] )
           answer[j++]= my_string[i];
        
    }
    answer[j]=NULL; 
    return answer;
}
//참고 코드 링크
//https://code-trainee.tistory.com/entry/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%A8%B8%EC%8A%A4-%ED%8A%B9%EC%A0%95-%EB%AC%B8%EC%9E%90-%EC%A0%9C%EA%B1%B0%ED%95%98%EA%B8%B0
