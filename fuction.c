//#include <stdio.h>
//
////fuction is an encapsulated tool box to solve the problem
////fuction define mode
//
///*
//    the type of return value fuction name(parameter list
//    {
//        //fuction body
//    }
//    fuction name is sign symbol
//*/
//
//// if don't need return define fuction type as void
//
//int One(){
//    
//    return 3;//3 is data of int type
//}
//
//void Two(){//print 9*9 mutiplication table
//    for(int i = 1; i < 10; i++){
//        for(int j = 1;j <= i; j++){
//            printf("%d*%d=%d\t",j,i,i*j);
//        }
//        printf("\n");
//    }
//}//no return value
//
//int Three(int num_1,int num_2){//return the sum of two number ,num_1 and num_2 is form parameter
//
//    return num_1 + num_2;
//}//return value
////the way that make actual parameter to form parameter is called transmit value
//
//int One_end();//fuction statement
//
//
///*
//    Global variables:
//    if your add the variable in global area,it can be used in any fuction,and don't renamed it in another fuction
//    and in same but back logic fuction,limit area variable(privacy area variable)  can't be used in the public area  fuction.
//    The reason is the box of private used to store the data of fuction will free in the end of the fuction.
//    In the other word,the apple box is no apple in the box,so it will be a banana box or not,computer don't know,so it should be renamed,if you want to use the box to save stuffs.
//    
//*/
//int Global_int = 100;
////pay attention to the fuction name is appeal to same name
////the use like dump a public box apple to private box apple,free variable is means to free the box (the memory),not data!
//void Private_int(){
//    Global_int = 50;
//}//the person can use the public,but the public can't use the private
//
///*
//    the static(solid) fuction and variable : // they are only be identified once in the program,it will be free in the end of the program
//    the memory area:
//        all have four area:
//            1,static global area: to save global variable and static variable
//            2,stack area: to save limit fuction area variable,int box,the memory will be auto applied and auto free by system
//            3,
//            4,code area:
//*/
//static int static_num_1 = 10;//save in the static global area
//int limit_fuction(){
//    int private_num_1 = 10;//save in the stack area
//    return private_num_1;
//}//the memory of private_num_1 will be free in the end of the fuction
//
//static int static_num_2 = 11;//save in the static global area
//
//int example_num_1(){
//    for (int i = 0; i < 10; i++)
//    {
//        static int static_num_2 = 10;//save in the static global area,but the static_num_2 is not be free,apply memory box and stuff is with original data will fail
//        static_num_2++;
//        printf("%d\n",static_num_2);//so print 11- 20
//    }
//   
//    return static_num_2;
//}
////Pay attention static int static_num_2 in public area is not be apply,be static num is not be apply in first so it is 10 be stuff the box and apply the box;
////in easy is = 10 this sentence first to apply the box,and the box is not be change before the program killed.
//
//
//
//int main(){//the main fuction is the entry of the program
///*
//    Two();
//    return 0;
//*/
//    /*
//    int sum = Three(1,2);//1 and 2 is actual parameter
//    printf("%d",sum);
//    */
//
//    example_num_1();
//    return 0;// to show the program is end,stop clip fuction
//}
//
//int One_end(){
//
//    return 3;
//}











#include <stdio.h>
#include <stdlib.h>

//1.address tansmit value
//2,array to be a parameter in fuction
//3,Recursion of functions

//adress:
	//when we int the variable,array,fuction etc,it will be distribute in the memory by system,it put data in these memory.
	//so address is a pointer number of the memory location.
	//&;&a //& is a symbol to get adress of a,a is a variable.
int*** initialize_parray(int n, int j, int k) {
	int*** p = (int***)malloc(sizeof(int**) * n); //allocate memory for a pointer variable
	for (int i = 0; i < n; i++)
		p[i] = (int**)malloc(sizeof(int*) * j); //allocate memory for an array of pointers
	for (int i = 0; i < n; i++)
		for (int z = 0; z < j; z++)
			p[i][z] = (int*)malloc(sizeof(int) * k); //allocate memory for an array of integers
	return p; //return the pointer variable
}
int*** parry_func(int*** p) {
	int a = 10;
	p[0][0][0] = a; //change the value of the memory location of a by pointer p.
	return p;
}
//������˵���ģ�
//ָ�����ָ���ַ��ָ�꣬��ַ���Ǵ洢�������Ǹ��ڴ���ӵı�š�
//һ��ָ�����ָֻ��һ���ڴ棬����ָ�����ָ��һ���ڴ��е�һ���ڴ棬�Դ����ơ�
// ����˵��ÿһ��ָ�������һ���������һ����Χ����Щ�����뷶Χ��������һ�������㣬��������ָ���˴����ַ�ڴ���ӵ��Ǹ���ͼ�ָ�����
//��Ȼ���۶��ټ�ָ�룬���ն�ָ�����ͬһ���ڴ��ַ�����Ǽ����������˷�Χ�뷽��ĳ��󣬾�������������ı�Ȼ�ںϹ�ϵ����Ϊ����Ҳ�ܴ������뷶Χ�ĳ���,��������������������Ѱ�ҵ�ַ��Ч�ʡ�
//example:
//�ܵ���˵��ǰ�涼��ƨ��������һ��һ���ĵ�ַ��ָ�룩��˵����һ���ĵ�ַ������һ����ָ�룬�����һ���ĵ�ַ���Ǳ�����ʵ��ֵ��
//ָ�벻�����飬ָ��ֻ�ǵ�ַ��һ�ֱ�ʾ��ʽ������ֻ��һϵ�еĵ�ַ�ļ��ϡ�
//һ��ָ��ָ������ַ�ĸ����壬���ָ����ɵľ��ǵ�ַ�ĸ����壬ָ����ǵ�ַ����ַ����ָ�롣
//Ҳ��˵ָ��Ķ༶ָ��ı��ʾ���һ����ַ�ĸ������У�һ����ַָ������ַ�ĸ����壬��Щ��ַ������ν��ָ�룬���ǲ��ݽ��ģ���ָ��ĵ�ַ�����ǵ�ַ�ĸ�����ʱ�����ָ��������һ�������ĵ�ַ��Ҳ�������һ��ָ�롣
int main() {
	int a = 10;
	char b = 'a';
	float c = 3.14; // a kind of variable can be saved in the memory by system.
	//so the address is also can be saved in the memory as a variable.
	//int *p = &a; //p is a pointer variable to point to the memory location of a.
	//address is a constant value,it can't be change,but the data can be change.
	int*** array = initialize_parray(2, 3, 4); //initialize a 3D array
	array = parry_func(array);
	printf("%d", array[0][0][0]); // output: 10
	printf("\n");
	//printf("%d", ***array); // output: 0
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			free(array[i][j]); //free the memory of the array
		}
		free(array[i]); //free the memory of the array
	}
	free(array); //free the memory of the array
	return 0;
}