/**********************************************************
* 文件名称：choice.cpp
* 内容摘要：该代码用于获取满足后缀要求的第一个文件
* 其他说明：文件说明：该文件为存放选择界面和一些文字的函数的头文件（存放文字的txt文件）
* 当前版本：1.32V
* 作    者：许力荣(hatebugs)(烟台大学)
***********************************************************/

int start()
{
	FILE *fp;
	char ch;
	fp = fopen("start.txt", "r");
	ch = fgetc(fp);
	while (!feof(fp))
	{
		printf("%c", ch);
		ch = fgetc(fp);
	}
	printf("\n");
	fclose(fp);
	return 0;
}

int choice1()
{
	int a;
	FILE *fp;
	char ch;
	fp = fopen("choice1.txt", "r");
	ch = fgetc(fp);
	while (!feof(fp))
	{
		printf("%c", ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	scanf("%d", &a);
	return a;
}

int choice2()
{
	FILE *fp;
	char ch;
	fp = fopen("choice2.txt", "r");
	ch = fgetc(fp);
	while (!feof(fp))
	{
		printf("%c", ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	return 0;
}

int choice3()
{
	FILE *fp;
	char ch;
	fp = fopen("choice3.txt", "r");
	ch = fgetc(fp);
	while (!feof(fp))
	{
		printf("%c", ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	return 0;
}

int choice4()
{
	FILE *fp;
	char ch;
	fp = fopen("choice4.txt", "r");
	ch = fgetc(fp);
	while (!feof(fp))
	{
		printf("%c", ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	return 0;
}

int choice5()
{
	FILE *fp;
	char ch;
	fp = fopen("choice5.txt", "r");
	ch = fgetc(fp);
	while (!feof(fp))
	{
		printf("%c", ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	return 0;
}

int choice6()
{
	FILE *fp;
	char ch;
	fp = fopen("choice6.txt", "r");
	ch = fgetc(fp);
	while (!feof(fp))
	{
		printf("%c", ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	return 0;
}

int choice7()
{
	FILE *fp;
	char ch;
	fp = fopen("choice7.txt", "r");
	ch = fgetc(fp);
	while (!feof(fp))
	{
		printf("%c", ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	return 0;
}

int choice8()
{
	FILE *fp;
	char ch;
	fp = fopen("choice8.txt", "r");
	ch = fgetc(fp);
	while (!feof(fp))
	{
		printf("%c", ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	return 0;
}