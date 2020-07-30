#include <stdio.h>
int main()
{
  int arr[] = {4, 1, 3, 2, 1, 3, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  int res = arr[0];
  for (int i = 0; i < n; i++)
  {
    if(arr[i] & 1 == 1)
    printf("%d is odd \n",arr[i]);
    else
    {
      printf("%d is even \n",arr[i]);
    }
    
  }
}