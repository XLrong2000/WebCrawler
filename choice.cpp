/**********************************************************
* �ļ����ƣ�choice.cpp
* ����ժҪ���ô������ڻ�ȡ�����׺Ҫ��ĵ�һ���ļ�
* ����˵�����ļ�˵�������ļ�Ϊ���ѡ������һЩ���ֵĺ�����ͷ�ļ���������ֵ�txt�ļ���
* ��ǰ�汾��1.32V
* ��    �ߣ�������(hatebugs)(��̨��ѧ)
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