#include <stdio.h>
#include <stdlib.h>


void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int* array, int n){
    int pass = 0;
    for(int i = 0; i < n - 1; i++){
        int swaps = 0;//resets the number of swaps after each pass
        for(int j = 0; j < n - i - 1; j++){
            if(array[j] > array[j + 1]){
                swap(&array[j], &array[j + 1]); 
                swaps++;//increment number of swaps after each swap occurs
                
            }
        }
        pass++;//updates the pointer keeping track of the number of passes
        printf("Pass %d: %d\n", pass, swaps);//prints out the current pass and the number of swaps needed
    }
}

void print(int* array, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){
    printf("Lab Assignment 7\n\n");

    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int size = (sizeof(array) / sizeof(array[0]));
    printf("Unsorted Array: ");
    print(array, size);
    bubbleSort(array, size);
    printf("Sorted Array: ");
    print(array, size);

    return 0;
}