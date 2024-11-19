#include<stdio.h>
int main()
{
     int n,i,s;
     printf("Enter the number of elements");
     scanf("%d",&n);
     int a[n];
     printf("Enter the elements");
     for(i=0;i<n;i++)
     {
      scanf("%d",&a[i]);
     }
      printf("Enter the element to search");
      scanf("%d",&s);
      for(i=0;i<n;i++)
      {
      if(a[i]==s)
      {
          printf(s+" Element is found at the postion ",(i+1));
          exit(0);
      }
      }
      printf("Element not found");
      return 0;
}
