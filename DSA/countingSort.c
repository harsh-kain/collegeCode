#include<stdio.h>
void countingSort(int arr[], int k, int bArr[]){
    int cArr[k];
    int i,j,len = 10; 

    for ( i = 0; i < k; i++){
        cArr[i] = 0;
    }

    for(j = 1; j<=len; j++){
        cArr[arr[j]] = cArr[arr[j]] + 1;
    }

    for (i = 1; i < k ; i++){
        cArr[i] = cArr[i] + cArr[i-1];
    }

    for(j = len; j>=1; j--){
        bArr[cArr[arr[j]]] = arr[j];
        cArr[arr[j]] = cArr[arr[j]] - 1;
    }
    
}
int main()
{
    int arr[11] = {0,5,7,1,2,6,9,3,6,0,8};
    int bArr[11];
    countingSort(arr, 11 ,bArr);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", bArr[i]);
    }
    printf("\n");
    
    return 0;
}
