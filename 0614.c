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
//	while ((c = fgetc(fpr)) != EOF)//���ַ�,֪���õ����ַ�������EOF
//	{
//		putchar(c);
//		fputc(c, fpw);
//	}
//	fclose(fpr);//ÿһ��fopen��Ӧһ��fclose
//	fclose(fpw);
//	fpr = NULL;//ÿһ��ָ�붼Ҫ��󸽿�
//	fpw = NULL;
//	system("pause");
//	return 0;
//}

//fputs\fgets
//rewind:���ļ���ָ�븽���ļ��Ŀ�ͷ
//int main(){
//	FILE *fpr = fopen("C:\\Users\\86155\\Desktop\\1.txt", "r");
//	FILE *fpw = fopen("C:\\Users\\86155\\Desktop\\2.txt", "w");//a��׷�ӵ���˼���൱���ظ�д  nihao->nihaonihao
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
//	//n = fread(buf, 3, 5, fpr);//�ӵ�ǰ��fpr�����ȡ�����Σ�ÿ�ζ�ȡ�����ŵ�buf����
//	//puts(buf);
//	//fseek(fpr, 2, 0);//��ȡ����0λ����2��λ�õ��ַ�
//	//fseek(fpr, -2, 2);//9
//	//0:��ͷ  1:��ǰλ��  2:ĩβ
//	fseek(fpr, 0, 2);
//	c = fgetc(fpr);
//	printf("%c\n", c);
//	n = ftell(fpr);//�������뿪ͷ��ƫ����
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

