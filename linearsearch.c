/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int size,x,i,flag=0;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    int a[size];
    printf("Enter the elements in the array: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &x);
    for(i=0;i<size;i++)
    {
        if(a[i]==x)
        {
            flag=1;
            printf("element found at index %d", i);
            break;
        }
    }
    if(flag==0)
    {
        printf("element not found");
    }
}
