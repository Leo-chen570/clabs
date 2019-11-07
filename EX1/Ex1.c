#include<stdio.h>
int main(){
 unsigned int z=1;
 unsigned int x=0;
 while(z>0)
 {
  z=z<<1;
  x=x+1;
 }  
 printf("the max:%d digit:%d\n",z-1,x);

}
 

 
