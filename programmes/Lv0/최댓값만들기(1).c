#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//문제: 최대값 만들기(1)
//문제 출처: https://school.programmers.co.kr/learn/courses/30/lessons/120847


int solution(int numbers[], size_t numbers_len)// numbers_len은 배열 길이입니다.
{
    int answer=0;
    
    for(int i=0; i< numbers_len; i++)
    {
        for(int j=i+1; j<numbers_len; j++)
            if(numbers[i]*numbers[j]>answer)
                answer=numbers[i]*numbers[j];
    }
    
   return answer; 
    
}


//----------내풀이 틀린 이유 찾기----------------//

int solution(int numbers[], size_t numbers_len)// numbers_len은 배열 길이입니다.
{
    int answer = 0;
    int i,j;
    int temp=0; //값을 임시적으로 저장할 변수
    int len = sizeof(numbers)/sizeof(int); //1차원 배열은 분모가 int
    //2차원 배열이 분모가 배열의 index0번째
    
    
    //오름차순으로 정리
	for (int i = 1; i < numbers_len ; i++) //i=0이라도 상관없는데 마지막 숫자는 탐색할 필요 없어서 0이다.
	{
		for (int j = 1 ; j < numbers_len; j++)
		{
            //최대값을 numbers[i]에 저장하기
			if (numbers[i] < numbers[j])
            {
                temp = numbers[i];
		        numbers[i] = numbers[j];
		        numbers[j] = temp;
            }
				
		}

        //동적할당 -> size만들어 주기
        answer = numbers[sizeof(numbers)*sizeof(numbers)-1];
       
       // 방법1 (가장 끝 배열)*(가장 끝 배열-1) 끼리 곱하기
        if(numbers[i]>numbers[j])
            answer=numbers[i]*numbers[j];
        else if(numbers[i]==numbers[j])
            answer=numbers[i]*numbers[i];

        //방법 2
        //answer=numbers[i]*numbers[j];

        //방법3
        //answer=numbers[i]*numbers[i-1];

	}
   
   
   return answer; 
    

}



//http://www.blognawa.com/i/28895/7509552/https://code-trainee.tistory.com/entry/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%A8%B8%EC%8A%A4-2%EC%B0%A8%EC%9B%90%EC%9C%BC%EB%A1%9C-%EB%A7%8C%EB%93%A4%EA%B8%B0-c%EC%96%B8%EC%96%B4