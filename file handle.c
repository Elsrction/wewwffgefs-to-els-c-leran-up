#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//FLIE
//Type
//1,text file the person can read and write
//2,binary file the computer can read and write
	//compiler:make text to binary .c .cpp ----->.obj--save the binary code

//How to handle file:
		//FILE * name(path in fact)_of_file;//pointer to file
		//fopen (path of file, mode of file);
//the fuction of file in consle is:
		//1,fopen(path of file, mode of file);
		//2,fclose(pointer to file);
		//3,fputs(string to write, pointer to file);
		//4,fgetc(pointer to file);
		//5,fgets(string to read, size of string, pointer to file);
		//6,fseek(pointer to file, offset, origin);
//How:to read the whole file:

int main() {
	char strc;
	int a = 10;//10 compile to binary is 0000 1010
	int b = 10;
	/*
	FILE* path_of_test_txt_file;//pointer to file path;
	path_of_test_txt_file = fopen("D:\\Learn\\setC\\git clone\\File\\Text_File_Test.txt", "w");//open file in write mode 打开文件函数的目录初始化在项目的根目录下，所以无法用相对路径打开打开File目录，得用绝对路径打开，并且要小心转译字符，路径翻页用\\path\\fpath\\ffpath，文件名不能有中文，否则会报错。
	//所以建议把东西都写在项目文件夹下，然后就都可以用相对路径打开了。
	//本质上就是外部导入外部找，函数内部打开内部找的问题，打开文件这个行为本应在项目内部打开。
	if (path_of_test_txt_file != NULL) {
    printf("File opened successfully\n");
    fputs("Hello File", path_of_test_txt_file);
    fputc('c', path_of_test_txt_file);
	
    fflush(path_of_test_txt_file); // 确保所有数据都已写入

    //fseek(path_of_test_txt_file, 0, SEEK_SET); // 移动文件指针到开头
	
    char s[1024] = {0}; // 初始化字符数组
	path_of_test_txt_file = fopen("D:\\Learn\\setC\\git clone\\File\\Text_File_Test.txt", "r");//前面的操作不奏效，故要重新打开文件
	fgets(s, sizeof(s) / sizeof(s[0] - 1), path_of_test_txt_file);
    printf("%s", s); // 输出读取的内容
	printf("\n");
	fgets(s, sizeof(s) / sizeof(s[0]), path_of_test_txt_file);
    printf("%s", s); // 输出读取的内容
	path_of_test_txt_file = fopen("D:\\Learn\\setC\\git clone\\File\\Text_File_Test.txt", "r");//前面的操作不奏效，故要重新打开文件
	printf("\t");
	strc = fgetc(path_of_test_txt_file); // 读取下一个字符
	printf("%c", strc); // 输出读取的字符
	strc = fgetc(path_of_test_txt_file); // 读取下一个字符
	printf("%c", strc); // 输出读取的字符
	strc = fgetc(path_of_test_txt_file); // 读取下一个字符
	printf("%c", strc); // 输出读取的字符
	strc = fgetc(path_of_test_txt_file); // 读取下一个字符
	printf("%c", strc); // 输出读取的字符
	strc = fgetc(path_of_test_txt_file); // 读取下一个字符
	printf("%c", strc); // 输出读取的字符

    fclose(path_of_test_txt_file);
	}
	*/

	/*
	const char *path = "D:\\Learn\\setC\\git clone\\File\\Text_File_Test.txt";
	FILE *file = fopen(path, "r");
	char str[1024] = {0};//不初始化就会越界，输出就会乱码//英文未初始化的就是0，是个数字，当成输出会乱码，当成数值占用最小
	int i = 0;
	while (!feof(file)) {
		str[i] = fgetc(file);
		i++;
	}
	str[i-1] = '\0';//最后一个字符对应的是'-1'(不知道为什么),所以要手动赋值为'\0'，否则会输出乱码
	printf("%s", str);
	*/

	/*
	char *file_path = "D:\\Learn\\setC\\git clone\\File\\1.txt";
	FILE * to_flie = fopen(file_path,"w");
	int put_int = 10;
	char *put_char = "dadada";//char string can't be defined in char's mode.
	fprintf(to_flie,"%d %s\n",put_int, put_char);
	fprintf(to_flie, "%d %s\n", put_int, put_char);
	fprintf(to_flie, "%d %s\n", put_int, put_char);//modular output
	fclose(to_flie);
	int get_int;
	char get_char[1024] = {0};
	to_flie = fopen(file_path, "r");
	fscanf(to_flie,"%d %s\n", &get_int, get_char);//use address to get data
	fclose(to_flie);
	printf("%d\t%s\n", put_int, put_char);
	file_path = "D:\\Learn\\setC\\git clone\\File\\3.txt";
	to_flie= fopen(file_path, "wb");
	fwrite(&put_int, sizeof(int), 1, to_flie);//1,wirte things to file;2,size of data to write;3,number of data to write;
	fclose(to_flie);
	to_flie = fopen(file_path, "rb");//open file with binary read mode
	int get_data_int;
	fread(&get_data_int, sizeof(int), 1, to_flie);
	fclose(to_flie);
	printf("%d\n", get_data_int);//make the conslusion that handle the data with out eviroment need use address to get or wirte data
	//so why? because the data is not in the global memory, it is in the fuction memory, so the data direct need pointer to get or wirte data.
	//不返回值，需要指针来操作内存，使值传递
	*/

	FILE* image_file;
	FILE* text_file;
	const char* image_path = "D:\\Learn\\setC\\git clone\\File\\image1.jpg";
	const char* text_path = "D:\\Learn\\setC\\git clone\\File\\text1.txt";
	image_file = fopen(image_path, "rb");//the image file is binary file, so we need use "rb" mode to open it.
	if (image_file == NULL) {
		printf("Error: unable to open file\n");
		return 1;
	}
	//position of move start:0:haed of file;1:pointer current position;2:end of file;
	/*
	fseek(image_file, 0, SEEK_END);//parameter:1,pointer position(pointer);2,move direction(?Bytes);3,position of move start from;
	int size = ftell(image_file);//get the size of file move //获取文件指针的偏移量，即文件大小
	fclose(image_file);//close the file
	printf("Size of file: %d\n", size);//output the size of file,SEEK_END make the pointer move to the end of file, so we can get the size of file with move size of pointer.
	text_file = fopen(text_path, "r+");//the text file is text file, so we need use "w" mode to open it. 
	if (text_file == NULL) {
		printf("Error: unable to open file\n");
		return 1;
	}
	char put_char1;
	char *put_charstring = "hello world";
	fseek(text_file, 3, SEEK_SET);//move the 3 position of file to the start of file so it pointer the 4th position of file.Like the use way of arr* in  arr variable[index] = value;
	put_char1 = getchar();
	fputc(put_char1, text_file);//write 'd' to the 4th position of file
	fseek(text_file, 0, SEEK_SET);//move the 0 position of file to the start of file so it pointer the 1st position of file.
	fputs(put_charstring, text_file);//write "hello world" to the 1st position of file.will recover char behind the pointer.
	fclose(text_file);//close the file
	*/

	//insert char string
	
	text_file = fopen(text_path, "r+");//open the file again to read the data
	if (text_file == NULL) {
		printf("Error: unable to open file\n");
		return 1;
	}
	int insert_position; printf("insert position:\n"); scanf("%d", &insert_position);
	char* insert_charstring = (char*)malloc(1024); printf("insert charstring:\n"); scanf("%s", insert_charstring);
	char* behind_char = (char*)malloc(1024);
	fputs("123456789000",text_file);//insert the string to the 1st position of file.
	fseek(text_file, insert_position, SEEK_SET);//move the 0 position of file to the start of file so it pointer the 1st position of file.
	fgets(behind_char, 1024, text_file);//read the char behind the pointer.
	fseek(text_file, insert_position, SEEK_SET);//move the 0 position of file to the start of file so it pointer the 1st position of file.
	fputs(insert_charstring, text_file);//write "hello world" to the 1st position of file.will recover char behind the pointer.
	fseek(text_file, insert_position + strlen(insert_charstring), SEEK_SET);//move the 0 position of file to the start of file so it pointer the 1st position of file.
	fputs(behind_char, text_file);//write the char behind the pointer to the insert position.
	fclose(text_file);//close the file
	free(behind_char);//free the memory of behind_char.
	printf("behind_char:%s\n", behind_char);
	system("pause");
	return 0; //success
}