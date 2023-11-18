#include <stdio.h>
//작성 날짜: 23년도 11월 16일 목요일 
//CH06-1강: 버블 정렬 알고리즘(stack영역 사용/ 컴파일 시점에서 메모리 할당이 결정됨.)

//bubbleSort: 배열과 배열의 크기(n)를 인자로 받아 버블 정렬을 수행함.
void bubbleSort(int arr[], int n) {

    //이 for문은 배열을 한 번 순회할 때마다 가장 큰 요소를 배열의 끝으로 이동시키는 역할이다.
    for (int i = 0; i < n-1; i++) {     
        //n-1인 이유: 버블 정렬에서 마지막 요소는 자동으로 정렬된 상태에 있게 되기 때문.
        // i++ -> 배열의 다음 요소로 이동.

        //이 for문은 n이 1씩 증가할 때마다, 인접한 요소끼리 비교하고 필요한 경우 위치를 바꾼다.(if문)
        for (int j = 0; j < n-i-1; j++) {
            //n-i-1: n은 배열의 크기, i는 바깥 for문임.
            //이미 정렬된 요소들을 다시 검사하지 않도록 범위를 제한하는 역할

            //두 수를 비교했을 때, 뒤에 위치한 요소의 수가 더 작다면? arr[j]와 arr[j+1]를 교환함.
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1]; //더 작은 수를 뒤에 두기
                arr[j+1] = temp; //더 큰 수를 앞에 두기
            }
        }
    }
}

//printArray: 정렬된 배열을 출력함
void printArray(int arr[], int size) { //size: arr의 개수
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

//테스트할 배열을 정의하고, bubbleSort 함수를 호출하여 배열을 정렬한 다음, 결과를 출력함.
int main() {

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]); //인자의 개수

    //정렬 전 배열 출력
    printf("정렬 전: \n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    //정렬 수행
    bubbleSort(arr, n);

    //정렬된 배열 출력
    printf("정렬 후: \n"); 
    printArray(arr, n);
    return 0;
}
