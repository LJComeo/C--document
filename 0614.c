#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//fputc\fgetc
//int main(){
//	char c;
//	FILE *fpr = NULL;
//	FILE *fpw = NULL;
//	fpr = fopen("C:\\Users\\86155\\Desktop\\1.txt","r");
//	fpw = fopen("C:\\Users\\86155\\Desktop\\2.txt", "w");
//	if (fpr == NULL)
//	{
//		printf("open fail\n");
//	}
//	if (fpw == NULL)
//	{
//		printf("open fail\n");
//	}
//	while ((c = fgetc(fpr)) != EOF)//读字符,知道得到的字符不等于EOF
//	{
//		putchar(c);
//		fputc(c, fpw);
//	}
//	fclose(fpr);//每一个fopen对应一个fclose
//	fclose(fpw);
//	fpr = NULL;//每一个指针都要最后附空
//	fpw = NULL;
//	system("pause");
//	return 0;
//}

//fputs\fgets
//rewind:把文件的指针附到文件的开头
//int main(){
//	FILE *fpr = fopen("C:\\Users\\86155\\Desktop\\1.txt", "r");
//	FILE *fpw = fopen("C:\\Users\\86155\\Desktop\\2.txt", "w");//a是追加的意思，相当于重复写  nihao->nihaonihao
//	char *buf = NULL;
//	if (fpr == NULL)
//	{
//		printf("null\n");
//	}
//	fgets(buf, 5, fpr); //'\0'
//	puts(buf);  //1234
//	fputs("nihao", fpw);
//	fclose(fpr);
//	fclose(fpw);
//	fpr = NULL;
//	system("pause");
//	return 0;
//}

//fscanf\fprintf
//int main(){
//	int a, b, c;
//	FILE *fpr = fopen("C:\\Users\\86155\\Desktop\\1.txt", "r");	
//	FILE *fpw = fopen("C:\\Users\\86155\\Desktop\\2.txt", "w");	 
//	char *buf = NULL;	
//	if (fpr == NULL)	
//	{	
//		printf("null\n");	
//	}	
//	if (fpw == NULL)	
//	{	
//		printf("null\n");	
//	}	
//	fscanf(fpr,"%2d%3d%1d", &a, &b, &c);	
//	fprintf(fpw,"a=%d,b=%d,c=%d\n", a, b, c);	
//	fclose(fpr);	
//	fclose(fpw);	
//	fpr = NULL;	
//	system("pause");
//	return 0;
//}

//int main(){
//	int a, b,n;
//	char c;
//	FILE *fpr = fopen("C:\\Users\\86155\\Desktop\\1.txt", "r");
//	FILE *fpw = fopen("C:\\Users\\86155\\Desktop\\2.txt", "w");
//	char *buf = NULL;
//	if (fpr == NULL)
//	{
//		printf("null\n");
//	}
//	if (fpw == NULL)
//	{
//		printf("null\n");
//	}
//	//n = fread(buf, 3, 5, fpr);//从当前的fpr里面读取了两次，每次读取三个放到buf里面
//	//puts(buf);
//	//fseek(fpr, 2, 0);//读取距离0位置正2个位置的字符
//	//fseek(fpr, -2, 2);//9
//	//0:开头  1:当前位置  2:末尾
//	fseek(fpr, 0, 2);
//	c = fgetc(fpr);
//	printf("%c\n", c);
//	n = ftell(fpr);//读出距离开头的偏移量
//	rewind(fpr);
//	printf("n=%d\n", n);
//	buf = (char *)malloc(sizeof(char)*n);
//	fread(buf, n, 1, fpr);
//	fwrite(buf, n, 1, fpw);
//	fclose(fpr);
//	fclose(fpw);
//	fpr = NULL;
//	system("pause");
//	return 0;
//}

//typedef struct data
//{
//	char name[20];
//	char age[3];
//	char sex[3];
//}Data;
//
//
//int main()
//{
//	Data t = { "zhangsan", "5", "m" };
//	//FILE *fpw = fopen("C:\\Users\\86155\\Desktop\\2.txt", "rb");
//	FILE *fpw = fopen("C:\\Users\\86155\\Desktop\\2.txt", "wb");
//	fprintf(fpw, "%s %d %c", t.name, t.age, t.sex);
//	fclose(fpw);
//	fpw = NULL;
//	return 0;
//}

