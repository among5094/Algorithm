#include <stdio.h>
//23년 11월 18일 토요일
//CH06_2: 선택 정렬
//작동방식: 입력 배열 전체에서 최솟값을 '선택'하여, 배열의 0번 원소와 자리를 바꾸고,
//다음에는 0번 원소를 제외한 나머지 원소에서 최소값을 선택해서, 배열의 1번 원소와 자리를 바꿈.


//선택 정렬을 위한 함수
void selectionSort(int arr[], int n) {

    int i, j, min_idx; //i는 현재위치
    for (i = 0; i < n-1; i++) { //배열의 모든 원소를 순차적으로 방문하기
        min_idx = i; //현재의 인덱스를 최소값이라고 가정하기

        //현재 위치 i의 다음 위치부터 배열의 끝까지 반복
        for (j = i+1; j < n; j++) { 
            //비교해서 더 작은 인덱스 찾기
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        // 찾은 최소값을 현재 위치로 이동
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// 배열을 출력하는 함수
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    
    printf("\n");
}

// 메인 함수
int main() {

    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    //정렬 전 배열 출력하기
    //배열 정렬하기
    selectionSort(arr, n);
    printf("정렬된 배열: \n");
    printArray(arr, n);
    return 0;
}
