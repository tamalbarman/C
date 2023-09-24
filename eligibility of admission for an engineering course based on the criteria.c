#include<stdio.h>
int main()
{
   int math,physics,chamestry,total1,total2;
   
   printf("For admission bellow the marks are mandatory\n");
   printf("Mathamatics=65\n");
   printf("Physics=55\n");
   printf("Chamestry=50\n");
   printf("Total marks for admission=180\n");
   printf("or Mathamatics and Physics=140\n");
   
   printf("Enter your marks in mathamatics: ");
   scanf("%d",&math);
   printf("Enter your marks in physics: ");
   scanf("%d",&physics);
   printf("Enter your marks in chamestry: ");
   scanf("%d",&chamestry);
   
   total1=math+physics+chamestry;
   total2=math+physics;
   
   printf("Total marks obtain:%d\n",total1);
   printf("Total marks in Mathamatic and Physics: %d\n",total2);
   
   if(math >= 65)
   if(physics >= 55)
   if(chamestry >= 50)
   if(total1 >= 180 || total2 >=140)
   {
   	printf("Your are eligable for admission\n");
   }
   else
   {
   	printf("Your are not eliglbe");
   }
   else
   {
   	printf("You are not eligble");
   }
   else
   {
   	printf("You are not eligble");
   }
   else
   {
   	printf("Your are not eligble for admission");
   }
   
   return 0;

}
