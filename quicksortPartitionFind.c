#include<stdio.h>

int A[8]= {20,80,70,60,7,10,30,40};

void Quicksort(int left, int right);
int Partition(int left, int right);
void swap(int i,int j);

void swap(int i,int j)
{
    int temp=A[i];
    A[i] = A[j];
    A[j]=temp;
}

void Quicksort(int left, int right)
{
    if(left<right)
    {
        int q = Partition(left,right);
        Quicksort(left,q-1);
        Quicksort(q+1,right);
    }
}

int Partition(int left, int right)
{
    int x = A[right];
    int i = left - 1;

    for(int j = left; j<right; j++)
    {
        if(A[j] <= x)
        {
            i++;
            swap(i,j);
        }
    }

    swap(i+1,right);

    printf("\nPivot: \n\n");
    for(int i=0; i<8; i++)
    {
        printf("%d ",A[i]);
    }

    return i+1;
}

int main()
{
    Quicksort(0,7);
    printf("\nSorted Array: \n\n");
    for(int i=0; i<8; i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}

