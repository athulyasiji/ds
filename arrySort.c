 #include<stdio.h>

  int *arrySort(int a[],int n){
  int temp;
 for (int i = 0; i < n; ++i)
        {

            for (int j = i + 1; j < n; ++j)
            {

                if (a[i] > a[j])
                {

                    temp =  a[i];
                    a[i] = a[j];
                    a[j] = temp;

                }

            }

        }
        return a;
    }

void main()
{

    int a[10],i,n,item,flag=0,low,high,mid,*b;

    printf("\n  Enter the size of an array: ");
    scanf("%d",&n);

    printf("\n  Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

     b=arrySort(a,n);

     printf("\n sorted array is :\n");
     for(i=0;i<n;i++){
        printf("\t %d\n",b[i]);
     }





}



