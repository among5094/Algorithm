#include <stdio.h>

int main(void)
{
    int arr[10];
    int len=sizeof(arr)/sizeof(int);

    printf("%d", len);

    return 0;
}