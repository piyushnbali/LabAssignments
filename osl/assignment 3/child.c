#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<time.h>

int main(int args,char * argv[])
{
    

    printf("\n\n\tThis is the child process\n");
    int arr[args-1],i,j,c,max;
    for(i=1;i<args;i++)
        arr[i-1]=atoi(argv[i]);     //Converting the string variable to integer.
    printf("\t\nBefore sorting:\n");
    

        for(i=0;i<args-1;i++)
        
    {   
               printf("%d\n",arr[i]);
     }

    
    printf("\n\nAfter sorting\n");
    args--;

    for(i=0;i<args-1;i++)       //Descending order using buble sort.
    {
        c=i;
        for(j=i;j<args;j++)
        {
            if(arr[j]>arr[c])
                c=j;
        }
        max=arr[i];
        arr[i]=arr[c];
        arr[c]=max;
    }

    for(i=0;i<args;i++)
        {
         printf("%d\n",arr[i]);
        }
    return 0;
}
