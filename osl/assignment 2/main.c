#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<math.h>
void tostring(char str[], int num)
{
    int i, rem, len = 0, n;
 
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
}

int main()
{
    int n;
   printf("Enter no of inputs\n");
   scanf("%d",&n);
   int no[n];
   for (int i=0;i<n;i++)
   {
      scanf("%d",&no[i]);
   }
   char str[10];
   char ans[1000];
   ans[0] ='\0';
   for(int i =0;i<n;i++)
   {
   tostring(str,no[i]);
   strcat(ans,str);
   strcat(ans," ");
    }


   printf("%s",ans);
    return 0;
}




  
