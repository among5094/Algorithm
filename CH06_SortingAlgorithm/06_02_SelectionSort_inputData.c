#include <stdio.h>
#include <stdlib.h>
//CH06.2 선택 정렬 동적 할당하기

//두 변수의 값을 서로 교환(swap)하는 역할
/* 포인터를 사용한 이유: 값에 의한 호출(call by value)에서는 함수에 전달된 변수의 사본이 만들어지고,
이 사본에 대한 변경은 원본 변수에 영향을 주지 않기 때문(원본과 별개의 메모리 위치에 저장되기 때문) */
void swap(int *xp, int *yp) {
    int temp = *xp; //xp가 가리키는 주소에 있는 실제 값을 temp라는 임시 변수에 복사
    *xp = *yp; //yp가 가리키는 변수의 값을 xp가 가리키는 변수의 위치로 복사
    *yp = temp; //yp가 가리키는 변수의 위치로 복사
}
// *참고: 복사란? 원본 데이터의 정확한 값이 다른 위치(변수, 메모리 등)에 저장되는 것을 의미
/* 함수가 하는 일은 xp와 yp가 가리키는 메모리 주소에 저장된 값들을 서로 교환하는 것이다. 
그래서 xp와 yp의 위치값(즉, 가리키는 메모리 주소)은 변경되지 않는다. */


//선택 정렬을 위한 함수
void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    /* 변수 설명: 배열은 이미 정렬된 부분과 정렬되지 않은 부분으로 나뉨.
    i: 정렬되지 않은 부분의 시작점을 나타냄, j: 정렬되지 않은 배열 부분에서 최소값을 찾기 위한 인덱스.
    min_idx: 이중for문이 전부 다 끝나고 나면 최소값의 인덱스가 저장되어있음 */

    for (i = 0; i < n-1; i++) {//n-1인 이유: 배열의 마지막 원소는 자동으로 정렬되므로
        min_idx = i;//min_idx를 현재 인덱스 i로 초기화

        //현재 위치인 i "이후"의 배열 부분에서 최소값을 찾는 과정
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        //이 내부 루프가 끝나면 min_idx에는 가장 작은 원소의 인덱스가 저장되어 있다.
        swap(&arr[min_idx], &arr[i]);//swap() 호출-> i 위치의 원소와 min_idx 위치의 원소를 교환
    }
}

//배열 출력
void printArray(int arr[], int size) {
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {

    int *arr; //stack메모리 영역
    int n, i;

    //배열의 개수 입력받기
    printf("배열의 크기를 입력: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int)); //Heap메모리 영역

    //메모리가 제대로 할당되지 않았다면?
    if (arr == NULL) {
        printf("메모리 할당 실패!\n");
        exit(0);
    }

    //배열 입력받기
    printf("%d개의 정수를 입력: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //배열 정렬하기
    selectionSort(arr, n);

    //정렬된 배열 출력
    printf("정렬된 배열: \n");
    printArray(arr, n);

    //동적 할당 해제
    free(arr); 
    return 0;
}
