#include<stdio.h>
#include<stdlib.h>
int main(void){
 int a;
 int b=0;
 int c[100];
 int count=0;
 printf("long long input:\n");
 scanf("%d",&a);
 printf("input% 2 == 1");
 while(a){
c[b]=a%2;
b++;
a/=2;


}
for(int j=b-1;j>=0;j--){
printf("%d",c[j]);
if(c[j]==1){
count++;

}
printf("%d\n",count);
system("pause");
return 0;

}
