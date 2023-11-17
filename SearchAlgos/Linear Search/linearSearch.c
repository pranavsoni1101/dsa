#include <stdio.h>

int searchAlgo(int arr[], int len, int num){
    for(int i = 0; i < len; i++){
        if(arr[i] == num){
            return i;
        }
    }
    // This check is to avoid any errors that 
    // may occur if the number is not present in the array
    return -1;
}

void main(){
    int arr[] = {12, 4, 54, 81, 10, 1};
    int num = 12;
    int len = sizeof(arr) / sizeof(arr[0]); 
    int result = searchAlgo(arr, len, num);

    if(result != -1){
        printf("%d is found at %d", num, result);
    }
    else{
        printf("Number is not found in the array");
    }
}