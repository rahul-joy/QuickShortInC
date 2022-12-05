#include<stdio.h>
#include<stdlib.h>

int A[10]={20,80,70,60,7,10,30,40};
void QuickSort(int left, int right);
int Partition(int left, int right);
void swap(int i, int j);

void swap(int i, int j){
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;

}


int Partition(int left, int right){

    int x = A[right];
    int i = left - 1;

    for(int j = left; j<right; j++){

    if(A[j] <= x){

    i++;
    swap(j , i);

}
       }

        swap(i+1,right);
        return i+1;

}

void QuickSort(int left, int right){

    if(left < right){
        int q = Partition(left, right);
        QuickSort(left,q-1);
        QuickSort(q+1, right);




    }





}


int main()
{

    QuickSort(0,7);

    printf("Sorted Array\n");

    for(int i = 0; i<8; i++){
        printf("%d ", A[i]);

    }
     printf("\n");

}
