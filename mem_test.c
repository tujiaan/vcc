#include<stdlib.h>
#include<stdio.h>
struct student{
	int age;
	char  name[10];
};

int  main(void){
struct student *p;
printf("address is : %p \n",p);
printf("age is :%d \n",p->age);
}
//int  var_before_init=12;
//int static var= 13;
//void func1(int i){
//	i=i+3;
//	printf("%d \n",i);}
//void  func2(int *i){
//	*i+=3;
//	printf("%d \n",*i);	}
//void main(){
//	int i=3;
////	int *p;
//	func1(i);
//	printf("%d \n",i);
//	func2(&i);
//	printf("%d \n",i);
//	
////	int *p_1;
////	p = (int *)malloc(sizeof(int));
////	p_1 = (int *)malloc(sizeof(int));
////	printf("stack address of p is: %p \n",&p);
////	printf("static  is :%p \n",&var);
////	printf("global is :%p \n", &var_before_init);
////	printf("<--------------->");
////	printf("stack address of p_1 is: %p \n",&p);
////        printf("heap address of p_1 is :%p \n",p_1);
//}
