#include <stdio.h>
#include <stdlib.h>
//6.3: 삽입 정렬
//정렬된 부분(앞부분)과 정렬이 안 된 부분(뒷부분)으로 나누고, 정렬 안 된 부분의 가장 앞쪽을 정렬된 부분의 적절한 위치에 삽입

//삽입 정렬
void insertionSort(int arr[], int n) {

    int i, key, j;
    //i: 외부루프idx. 정렬 안 된 배열부분을 탐색함.
    //j: 내부루프idx. i가 가리키는 값(key)가 올바른 위치에 삽입될 수 있게 찾는 역할

    for (i = 1; i < n; i++) { //0번째 배열말고 1번째 배열부터 시작함.
        key = arr[i];
        j = i - 1;

        // 배열의 이전 요소들과 key를 비교하여 적절한 위치에 삽입
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; //key를 삽입할 공간 만들기
            j = j - 1; //
        }
        arr[j + 1] = key;
    }
}
//temp가 필요없는 이유? arr[j] 값을 다른 위치인 arr[j + 1]로 "이동"하는 동작 때문
//arr[j]의 원래 값은 arr[j + 1]로 복사되고, arr[j]에 있던 값은 여전히 메모리에 남아 있음.

int main() {
    
    int n, i;
    int *arr;

    //배열의 개수 입력받기
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // 동적 배열 할당
    arr = (int*)malloc(n * sizeof(int)); 

    //배열 입력받기
    printf("Enter the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    // 삽입 정렬 실행
    insertionSort(arr, n);

    //정렬된 배열 출력
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 동적 배열 해제
    free(arr); 

    return 0;
}
