#include<stdio.h>
void insertionSort(int arr[10], int n){
    for(int i = 1; i<n; i++){
        int temp = arr[i];
        int j = i - 1;

        for (; j >= 0; j--)
        {
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
        
    }
}
int main()
{
    /* code */
    int arr[10] = {9,8,7,6,5,4,3,2,1,0};
    for(int i = 0; i<10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, 10);
    for(int i = 0; i<10; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
