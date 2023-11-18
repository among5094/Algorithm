#include <stdio.h>
#include <stdlib.h> //malloc을 위해
//작성 날짜: 23년도 11월 16일 목요일 
//CH06-1강: 버블 정렬 알고리즘(Heap영역 사용/ 실행 시점(Run Time)때 메모리 할당이 결정됨)

//버블 정렬 수행
void bubbleSort(int *arr, int n) { //n은 배열의 크기
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


//배열 출력
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main() {

    //사용자로부터 배열의 크기 n을 입력받기
    int n;
    printf("배열의 크기 입력:");
    scanf("%d", &n);

    //동적 메모리 할당
    int *arr; //stack 메모리 영역에 저장됨
    *arr = (int*)malloc(n*sizeof(int)); //Heap 메모리 영역에 저장됨
    //sizeof(int): int 자료형크기
    
    //동적 메모리 할당에 실패한다면?
    if (arr == NULL) {
        printf("메모리 할당 실패!\n");
        return 1;
    }

    //원하는 배열 입력받기
    printf("입력된 배열의 크기: %d\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //그냥 줄바꿈
    printf("\n");

    //정렬 전 배열 출력
    printf("정렬 전 배열: \n");
    printArray(arr, n);

    //버블 정렬 수행
    bubbleSort(arr, n);

    //정렬된 배열 출력
    printf("정렬 후 배열: \n");
    printArray(arr, n);

    // 동적 할당 해제
    free(arr);
    return 0;
}
//8
//12 58 23 29 55 34 95 11
