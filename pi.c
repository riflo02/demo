#include <stdio.h>
#include <stdlib.h>


int main() {

 int i,count,n;
 double x,y,pi;

 printf("Enter number of points: ");
 scanf("%d", &n);

 count = 0;
 for(i = 0; i < n; i++) {
     x=(double)2*rand()/RAND_MAX-1;
     y=(double)2*rand()/RAND_MAX-1;
     if(x*x+y*y<=1) count++;
 }
 pi = (double) 4*count/n; 
 printf("Approximate value of PI = %f", pi);
}
