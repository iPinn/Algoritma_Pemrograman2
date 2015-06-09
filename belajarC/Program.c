#include <stdio.h>
int n, j, i, temp, pos, a[100];

main() //main program//
{
	printf("PROGRAM SORTING DENGAN SELECTION SORT\n");
	inputArray();
	printf("\n===Proses Selection Sort=== \n");
	selSort();
	}

int inputArray() //proses input Array//
{	
	printf("Input Banyaknya Data = "); scanf("%d",&n);
	for (i=0; i<n;i++)
	{
	printf("A[%d]= ",i); scanf("%d",&a[i]);
	}
	printf("\nArray Sebelum di Sorting\n");
	for(i=0;i<n;i++)
    {
            printf("%d \t",a[i]);
     }
     printf("\n");
}

int selSort() //proses Selection Sort//
{
  for(i=0; i<(n-1); i++)
  {
			pos=i;
            for(j=i+1; j<n; j++)
            {
                if ( a[pos] > a[j] )
				pos=j;
			}
			
			if (pos != i)
                  {
                        temp = a[i];
                        a[i] = a[pos];
                        a[pos] = temp;
                  }
   }
      printf("Array setelah di Sorting\n");
      for(i=0;i<n;i++)
      {
            printf("%d \t",a[i]);
      }
      printf("\n");
}
