#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//pretreatmanet learn  of c code 

/*
	1.Predefine symbol 
	2.Macro definition 
	3.File includation 
	4.Conditional compilation 
*/


	/*
		define symbol:
			conception:
				the predefine symbol that represent same value of same meaning.They can be used straightly in the program.
	*/
	void file_path() {
		printf("%s\n", __FILE__);
	}

	void fuction_name() {
		printf("%s\n", __FUNCTION__);
	}

	void nowing_date_time() {
		printf("%s\n", __DATE__);
		printf("%s\n", __TIME__);
	}

	void line_number() {
		printf("%d\n", __LINE__);
	}

	/*
	* Macro definition:
	* 	conception:
	*				replace the symbol to other value;
	*/
	#define PI 3.1415926
	#define gen2 sqrt(2)
	#define ROW 10
	#define COL 20 //it's easy to control the value of you need.
	#define ���� int
	#define ������ long long int
	#define ������ short int
	#define �ַ� char
	#define �ַ��� char*
	#define  ����A int_a

	//define format:
		//#define macro name value don,t add ';' at the end of the line.

	void print_macro_image_canvas() {
		int i, j;
		for (i = 0; i < ROW; i++) {
			for (j = 0; j < COL; j++) {
				printf("*");
			}
			printf("\n");
		}
	}

	//the marco defination of parameter
	  //format:
			//#deine macro name(parameter) value don't add ';' at the end of the line.
		#define count_add(a,b) printf("%d\n",a+b);//like fuction but haven't return value.
		//and it not need define the kind of the parameter.
	#define Add(a,b) a+b
	#define multiply(a,b) a * b//if your put 2+1 and 1+2 it will put 5,becasue it is replace in fact,so it express 2+1*1+2.
	/*
	* File includation:
	* 	conception:
	* 
	*/


int main() {
	/*
	file_path();//put print the path of the file in the console.
	fuction_name();//put print the name of the function in the console.
	nowing_date_time();//put print the date and time in the console.
	line_number();//put print the line number in the console.\
	*/

	/*
	print_macro_image_canvas();
	count_add(10,20);
	printf("%d\n",multiply(2+1,1+2));
	printf("%d\n", multiply(Add(2,1), Add(1,2)));//the priority of replacement in mrocro defination that have parameter is higher than compute.
	*/

	//const value:
		//define:
			const int a = 10;//it is don't allow to change the value of a.
			//so also it is must to be initialised at the beginning of the program.
	���� ����A = 10;
	printf("%d\n", int_a);
	return 0;
	
}
