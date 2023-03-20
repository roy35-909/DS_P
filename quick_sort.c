#include<stdio.h>
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i= (low- 1);


    for (int j = low; j <= high - 1; j++) {

        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quick_sort(int q,int p,int arr[])
{
    if(q<p)
    {

    int pa = partition(arr,q, p);
    quick_sort( q, pa - 1,arr);
    quick_sort( pa + 1, p,arr);

    }

}




void swap(int *x,int *y){

    int t = *x;
    *x = *y;
    *y = t;
}

void print(int *z,int s)
{
    for(int i=0;i<s;i++)
    {
        printf("\n Index [%d] Value = %d",i,z[i]);

    }
}
void main()

{
    int s;
    printf("Array Size : ");
    scanf("%d",&s);
    int arr[s];

    for(int i=0;i<s;i++)
    {
        printf("\n Index [%d] Value : ",i);
        scanf("%d",&arr[i]);
    }


    print(&arr,s);
    quick_sort(0,s-1,arr);
    print(&arr,s);

}


