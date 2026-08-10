#include<stdio.h>
#include<unistd.h>
void main() {
   int p2,p3;
   p2 = fork();
   if ( p2 < 0 ) {
      printf("Process Creation Failed\n");
   
   }
   else if ( p2 == 0 ) {
      int p4;
      p4 = fork();
      if ( p4 < 0 ) {
	 printf("Process Creation Failed\n");
      }
      else if ( p4 == 0 ) {
	 printf("p4 Process ID: %d \t Parent ID: %d \n",getpid(),getppid() );
      }
      else {
	 printf("p2 Process ID: %d \t Parent ID: %d \n",getpid(),getppid() );
      }
   }
   else {
      p3 = fork();
      if ( p3 < 0 ) {
	 printf("Process Creatin Faile\n");
      }
      else if ( p3 == 0 ) {
	 int p5;
	 p5 = fork();
	 if ( p5 < 0 ){
	    printf("Process Creation Failed\n");
	 }
	 else if ( p5 == 0 ) {
	    printf("p5 Process ID: %d \t Parent ID: %d \n",getpid(),getppid() );
	 }
	 else {
	    printf("p3 Process ID: %d \t Parent ID: %d \n",getpid(),getppid() );
	 }
      }
      else {
	 printf("p1  Process ID: %d \t Parent ID: %d \n",getpid(),getppid() );
      }
   }
}


