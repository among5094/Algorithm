#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> //strlen의 헤더파일

//제목: 암호 해독
//문제: 암호화된 문자열 cipher을 입력받으면 code라는 숫자의 배수번째 글자만 return하기 
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120892

//깔끔한 풀이(정답)
char* solution(const char* cipher, int code)//cipher: 암호화된 문자열, code: 숫자가 들어옴
{
    int cnt=0; //배열 answer의 index역할을 할 변수 count를 줄인 cnt임
    char* answer = (char*)malloc( strlen(cipher)/code+1 );

    for(int i=1; i<= strlen(cipher)/code; i++) //i가 0부터 시작하면 code*i할 때 계속 0이 되므로 1부터 시작해야됨
    {
        answer[cnt]=cipher[code*i-1];//배열 answer에 code의 배수를 집어넣기,  배열은 0부터 시작하니까 -1 해주기
        cnt++; // 배열 answer의 다음 인덱스로 보내기 위해서 존재함. 
    }

    answer[cnt]='\0'; //마지막에 NULL 넣기
    return answer;

}
