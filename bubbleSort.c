#include<stdio.h>
void BubbleSort(int *A,int n)
{
    int temp;
    int j = n-1;
    while(j>0)
    {
        for(int i = 0;i<j;i++)
        {
            if(A[i]>A[i+1])
            {
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
        }
        j--;
    }
}

int main()
{
    int n;
    printf("Enter no of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    BubbleSort(a,n);
    printf("The sorted array is as follows:\n");
    for(int  i =0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}