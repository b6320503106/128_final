#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,b[n],x=0,j=0;
    if(n>=2||n<=1000)
    {
         for(i=0;i<n;i++)
         {
           scanf("%d",&a[i]);
           b[i]=0;
         }

         while(j<n)
         {
            for(i=0;i<n;i++)
         {
           if(a[j]==a[i])
           {
            b[j]++;

           }
         }j++;
         }

                  for(i=0;i<n;i++)
             {
                 if(b[i+1]>=b[i])
                 {
                      printf("%d ",a[i+1]);
                         break;
                     }

                 }

             }

    }

