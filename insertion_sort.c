/*
Author : Simanta Kumar Roy
roy35-909@diu.edu.bd
*/
#include<stdio.h>

int main()
{

    int arr[5] = {8,2,5,1,7};
    int size = 5;

    for(int i=1;i<size;i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    for(int i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }

}