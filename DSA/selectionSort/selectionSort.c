#include<stdio.h>
void selectionSort(int arr[], int n){
    int min = 0,temp =0;
    int j;
    for (int i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp; 
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
}
int main(int argc, char const *argv[])
{
    int arr[] = {8,7,6,5,4,3,2,1};
    int n = 8;
    selectionSort(arr,n);
    return 0;
}
