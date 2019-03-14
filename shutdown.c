/*
Programmer: Miguel Sobong
Date:August 22, 2015
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
   int n,h,m,s, cus;
   char custom[100];
   printf("===COMPUTER SHUTDOWN PROGRAM===\n");
   printf("Please select the shutdown timer:\n1 for 30mins\n2 for 1hour\n3 for 2hours\n4 for Custom\n5 for Abort Shutdown\n6 for Exit");
   printf("\nChoice: ");
   scanf("%d", &n);
   switch(n){
   case 1:system("C:\\Windows\\System32\\shutdown.exe -s -t 1800");
   break;
   case 2:system("C:\\Windows\\System32\\shutdown.exe -s -t 3600");
   break;
   case 3:system("C:\\Windows\\System32\\shutdown.exe -s -t 7200");
   break;
   case 4:printf("\nCustom timer:\nHours:");
   		  scanf("%d", &h);
   		  printf("Minutes: ");
   		  scanf("%d", &m);
   		  printf("Seconds: ");
   		  scanf("%d", &s);
   		  cus=(h*3600)+(m*60)+s;
   		  sprintf(custom, "C:\\Windows\\System32\\shutdown.exe -s -t %d", cus);
          system(custom);
		  break;
   case 5:system("C:\\Windows\\System32\\shutdown.exe -a");
   break;
   case 6:break;
   	}
   	return 0;
}

