#include<stdio.h>
#include<stdlib.h>
struct stu{
int age;
const char *name;
};

void main(void){
struct stu *p ;
 p = (struct stu *)malloc(sizeof(struct stu));
 p->name = "a";
 p->age = 10;
 printf("%s",p->name);
 printf("---------"); 
 printf("%p",p->name);
}
