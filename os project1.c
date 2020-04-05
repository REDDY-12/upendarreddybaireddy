#include<stdio.h>
void main()
{
 int bt[10],ct[10],turnaroundtime[10],i,n;
 float atat=0,at[10];
 printf("\nEnter number of processes:");
 scanf("%d",&n);
 printf("\nEnter burst time of processes:");
 for(i=0;i<n;i++)
 {
  printf("\nP%d:",i+1);
  scanf("%d",&bt[i]);
 }
 printf("\nEnter arrival time of processes:");
 for(i=0;i<n;i++)
 {
  printf("\nP%d:",i+1);
  scanf("%f",&at[i]);
 }
 ct[0]=bt[0]+at[0];
 for(i=1;i<n;i++)
 {
   ct[i]=ct[i-1]+bt[i];
 }
 for(i=0;i<n;i++)
 {
 turnaroundtime[i]=ct[i]-at[i];
 atat=atat+turnaroundtime[i];
 }
 printf("Process Arrival Burst_Time Turn_Around_Time \n");
 for(i=0;i<n;i++)
{
 printf("P%d      %.1f	    %d	           %d	        \n",i+1,at[i],bt[i],turnaroundtime[i]);
}
atat=atat/n;
printf("\nAverage Turn around time:%.2f",atat);
}
