// in the name of god

#include<stdio.h>
/*void merge(int arr[], int l, int m, int r)
{
int i, j, k;
int n1 = m - l + 1;
int n2 = r - m;
// Create temp arrays
int L[n1], R[n2];
// Copy data to temp array
for (i = 0; i < n1; i++)
L[i] = arr[l + i];
for (j = 0; j < n2; j++)
R[j] = arr[m + 1+ j];
// Merge the temp arrays
i = 0;
j = 0;
k = l;
while (i < n1 && j < n2)
{
if (L[i] <= R[j])
{
arr[k] = L[i];
i++;
}
else
{
arr[k] = R[j];
j++;
}
k++;
}
// Copy the remaining elements of L[]
while (i < n1)
{
arr[k] = L[i];
i++;
k++;
}
// Copy the remaining elements of R[]
while (j < n2)
{
arr[k] = R[j];
j++;
k++;
}
}
void mergeSort(int arr[], int l, int r)
{
if (l < r)
{
int m = l+(r-l)/2;
mergeSort(arr, l, m);
mergeSort(arr, m+1, r);
merge(arr, l, m, r);
}
}*/
void fcfs(int N,int * bt,int * at)
{
   int tat[N],wt[N];
   wt[0]=0;
   tat[0]=bt[0];
   int avwt=0,avtat=0,x=0,y=0,pon=bt[0];
   double time;
   for(int i=1;i<N;i++)
{
     avwt=avwt+bt[i-1];
     x=avwt-at[i];
     wt[i]=x;
     y=y+wt[i];
    
}
time=((double)y/(double)N);
y=0;
for(int i=0;i<N;i++)
{   
   tat[i]=bt[i]+wt[i];
   y= y+tat[i];
}
printf("no brust time arrival time waiting time turn around time");
for(int i=0;i<N;i++)
{
     printf("\n%d .\t%d\t%d\t%d\t%d",i+1,bt[i],at[i],wt[i],tat[i]);
  
}

printf("\n\n Average waiting time %f\n",time);
time=(double)y/(double)(N);
printf("\n\n Average turn around time %f\n",time);

}



void sjf(int N,int * bt,int * at)
{
    
int wt[N],tat[N];
int visited[N];
int time,index;
int min=at[0];
/*for(int i=1;i<N;i++)
{   
    if(min<at[i])
   {
        min=at[i];
    }
}*/
time=0;
printf("no brust time arrival time waiting time turn around time");
for(int j=0;j<N;j++)
{int minbt=1800;
for(int i=0;i<N;i++)
{   
    if(at[i]<=time && visited[i]!=-1)
        {   
             if(bt[i]<minbt)
                {  
                 // printf("%d",minbt);
                  //printf("%d",bt[i]);
                  minbt=bt[i];
                  index=i;
                       }
           }
}
 visited[index]=-1;
 wt[index]=time-at[index];
 tat[index]=wt[index]+bt[index];
 time=time+bt[index];
 
  
  
  printf("\n\t%d . \t%d\t%d\t%d\t%d",index+1,bt[index],at[index],wt[index],tat[index]);

}
}









int main()
{
   // below code takes input
   int N,choice=1;
   printf("Enter No of process: ");
   scanf("%d",&N); 
   printf("\n\n\n");
   int bt[N],at[N];
   for(int i=0;i<N;i++)
   {
      printf("Enter arrival time for process %d: ",i+1);
      scanf("%d",&at[i]);
      printf("Enter brust time for process %d: ",i+1);
      scanf("%d",&bt[i]);
      printf("\n\n\n");
   }
   
   while(choice)
{ 
      printf("\n\n\tEnter Scheduling to perform \n  \t1.FCFS\n  \t2.SJF\n  \t3.Round Robin\n \t4.All\n \tEnter 0 to exit\n");
      scanf("%d",&choice);
      printf("\n");
     
      switch(choice)
         {
               case 1: fcfs(N,bt,at);
                        break;
               case 2: sjf(N,bt,at);
                        break;
               case 3: printf("rr output");
                        break;
                case 4: printf("all output");
                        break;
               default : continue; 
         } 
      
   


}

}

