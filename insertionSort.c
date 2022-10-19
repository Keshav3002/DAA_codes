#include<stdio.h>
void InsertionSort (int *A, int n) 
{
    int i, j, k;
    for (i = 1; i < n; i++)
    {
      k = A[i];
      j = i - 1;
      while (j >= 0 && A[j] > k)
	  {
	      A[j + 1] = A[j];
	      j = j - 1;
	  }
	  A[j + 1] = k;
    }
}
int main () 
{
    int size;
    printf ("Enter the size of the array=");
    scanf ("%d", &size);
    int a[size];
    printf ("Enter %d number of elements in the array in random order:\n",size);
    for (int i = 0; i < size; i++)
    {
        scanf ("%d", &a[i]);
    } 
    InsertionSort (a, size);
    printf ("The sorted array is as follows:");
    for (int i = 0; i < size; i++)
    {
        printf ("%d", a[i]);
    } 
}
