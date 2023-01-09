#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h> //pow(), sqrt() Header file with function defined, 함수가 정의된 헤더파일

/*

explation

involution,거듭제곱 
pow(2,10) == 1024

square rood,제곱근
sqrt(9) == 3

*/

int solution(int n)
{
    if(sqrt(n)==(int)sqrt(n)) //Returns if the square number is an integer , 제곱수이면 정수임
        return 1;
    else //Returns double if it is not a square number, 제곱수가 아니면 정수로 리턴되지 않음 소수점 단위로 나옴
        return 2;
    
}