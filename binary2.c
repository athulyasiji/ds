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

     printf("\n  Enter the number to be search: ");
    scanf("%d",&item);

     printf("sorted array is :\n");
     for(i=0;i<n;i++){
        printf("%d\n",b[i]);
     }



    low=0,high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(item==b[mid])
        {
            flag=1;
            break;
        }
        else if(item<b[mid])
        {
            high=mid-1;
        }
        else
        low=mid+1;
    }
    if(flag==0)
    printf("\n  The number is not found");
    else
    printf("\n  The number is found and its position is: %d",mid+1);

}



