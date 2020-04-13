#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/wait.h>


int main()
{

     int i = 0;
     int n;
    
      // as argv consists of address and NULL part along with the main string so the size is n+2
	printf(" This is the parent process ");
        printf(" Enter the array size ");
        scanf("%d",&n);
	 int arr[n];
	char *argv[n+2];

        printf("Enter the integers ");
  

       for(i=1;i<n+1;i++)
         {
           
	   argv[i] = (char*)malloc (4*sizeof(char));
           scanf("%4s",argv[i]);
         }
   	argv[n+1] = NULL; 
       
   if(fork()== 0)
   {
     argv[0]="./child";
     execv(argv[0],argv);
   }
   else
    {
         int pid;
         pid = wait(NULL);
         int j= 0;
        printf("\n\n\tParent process with pid %d /n",pid);// applying the wait system call and getting pid of parent process

        
 
      for(i=1;i<n+1;i++)
          arr[i-1]=atoi(argv[i]); 
	
// buble sort
        for(i = 0;i<n;i++)     
        {
         for(j = 0;j<n-i-1;j++)
          {
      		int temp;
      		if(arr[j]>arr[j+1]) 
      		 {
      	  	 temp = arr[j];
      	   	arr[j] = arr[j+1];
      	   	arr[j+1]=temp;
      	 	}
      	  }
        }
        
	
           printf("\n\n\tElements sorted in ascending order /n");// printing inputs in ascending orders
		printf("\n");
        for(i = 0;i<n;i++)
         {
            printf("%d \t",arr[i]);
   		printf("\n");
         }
       
    }
return 0;
};
