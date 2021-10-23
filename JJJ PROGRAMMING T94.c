/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
int location,bus,fare,ticket,payment,change;
char yn;


printf("[1]Valencia\n[2]Maramag\n[3]Cagayan\n");
  printf("Your Selection:");
scanf("%d",&location);
printf("Preferred bus?\n");
printf("[1]Rural[2]Pabama[3]Super5\n");
printf("Your choice?:");
scanf("%d",&bus);

switch(location){

case 1:
  fare=60;

  printf("MalaybalaytoValencia\n");
  printf("distance:44 km\n");
  printf("fare:php60\n");
  printf("bus:");
  switch(bus){
  case 1:
   printf("bus:rural\n");
  break;
  case 2:
   printf("bus:pabama\n");
  break;
  case 3:
   printf("bus:super5\n");
  default:
   printf("Invalid input\n"); 
  break;
}
  printf("Buy a ticket? Y/N\n");
  scanf("%s",&yn);
  if(yn=='y'|| yn=='Y'){
  printf("Enter Funds:");
  scanf("%d",&payment);
   if(payment>=fare){
    change=payment-fare;
     printf("change:%d\n",change);
      printf("You have Purchased the ticket!");
}
  else{
    printf("Not enough funds!");
  }
}
  else if(yn=='n'||yn=='N'){
    printf("Booking cancelled!");
    }
  else{
    printf("Invalid Input");
}
break;

case 2:
   fare = 80;
   printf("MalayabalaytoMaramag\n");
  printf("distance:57km\n");
  printf("fare:php80\n");
  printf("bus:");
  switch(bus){
  case 1:
   printf("bus:rural\n");
  break;
  case 2:
   printf("bus:pabama\n");
  break;
  case 3:
   printf("bus:super5\n");
  default:
   printf("Invalid input\n"); 
  break;
}
printf("Buy a ticket? Y/N\n");
  scanf("%s",&yn);
  if(yn=='y'|| yn=='Y'){
  printf("Enter Funds:");
  scanf("%d",&payment);
   if(payment>=fare){
    change=payment-fare;
     printf("change:%d\n",change);
      printf("You have Purchased the ticket!");
}
  else{
    printf("Not enough funds!");
  }
}
  else if(yn=='n'||yn=='N'){
    printf("Booking cancelled!");
    }
  else{
    printf("Invalid Input");
}
break;

case 3:
  fare = 150;
  printf("MalayabalaytoCagayan\n");
  printf("distance:164km\n");
  printf("fare:php150\n");
  printf("bus:");
  switch(bus){
  case 1:
   printf("bus:rural\n");
  break;
  case 2:
   printf("bus:pabama\n");
  break;
  case 3:
   printf("bus:super5\n");
  default:
   printf("Invalid input\n"); 
  break;
  }
  printf("Buy a ticket? Y/N\n");
  scanf("%s",&yn);
  if(yn=='y'|| yn=='Y'){
  printf("Enter Funds:");
  scanf("%d",&payment);
   if(payment>=fare){
    change=payment-fare;
     printf("change:%d\n",change);
      printf("You have Purchased the ticket!");
}
  else {
    printf("Not enough funds!");
  }
}
  else if(yn=='n'||yn=='N'){
    printf("Booking cancelled!");
    }
  else{
    printf("Invalid Input");
}
break;
}

return 0;
}