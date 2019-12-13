#include<stdio.h>
void main(){
int a,b,max;
printf("input two numbers:\n");
scanf("%d%d",&a,&b);
max=(a,b);
printf("max value=%2.3d",max);
}
int max(int a,int b){
if(a>b){
return a;}else{
return b;}
}
