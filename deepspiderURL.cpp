/**********************************************************
* �ļ����ƣ�deepspiderURL.cpp
* ����ժҪ���ô������ڻ�ȡ�����׺Ҫ��ĵ�һ���ļ�
* ����˵�������ļ�Ϊ�����ε���ȡ��ҳ��ͼƬ�����ӵĺ�����ͷ�ļ�
* ��ǰ�汾��1.32V
* ��    �ߣ�������(hatebugs)(��̨��ѧ)
***********************************************************/


void deepspiderurl()
{
	FILE *fp1, *fp2;
	int a = 0, b = 1, c = 1, m, n;
	char temp[500];
	char ch;
	fp1 = fopen("result.txt", "r");
	fp2 = fopen("temp.txt", "w");
	ch = fgetc(fp1);
	while (!feof(fp1))
	{
		if (ch == '"'&&b == 1)
		{
			a = 1;
			b = 2;
			ch = fgetc(fp1);
			if (ch != 'h')
			{
				c = 0;
				a = 0;
			}
			continue;
		}
		if (ch == '"'&&b == 2)
		{
			a = 0;
			b = 1;
			if (c == 1)
			{
				fprintf(fp2, "\n");
				ch = fgetc(fp1);
			}
			else
			{
				c = 1;
				ch = fgetc(fp1);
			}
			continue;
		}
		if (a == 1)
		{
			fprintf(fp2, "%c", ch);
		}
		ch = fgetc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
	fp1 = fopen("temp.txt", "r");
	fp2 = fopen("temp1.txt", "w");
	fscanf(fp1, "%s", temp);
	while (!feof(fp1))
	{
		m = strlen(temp);
		if (temp[m - 4] == '.'&&temp[m - 3] == 'j'&&temp[m - 2] == 'p'&&temp[m - 1] == 'g')
		{
			fprintf(fp2, "%s\n", temp);
		}
		if (temp[m - 4] == '.'&&temp[m - 3] == 'p'&&temp[m - 2] == 'n'&&temp[m - 1] == 'g')
		{
			fprintf(fp2, "%s\n", temp);
		}
		if (temp[m - 4] == '.'&&temp[m - 3] == 'g'&&temp[m - 2] == 'i'&&temp[m - 1] == 'f')
		{
			fprintf(fp2, "%s\n", temp);
		}
		if (temp[m - 4] == '.'&&temp[m - 3] == 'J'&&temp[m - 2] == 'P'&&temp[m - 1] == 'G')
		{
			fprintf(fp2, "%s\n", temp);
		}
		if (temp[m - 4] == '.'&&temp[m - 3] == 'P'&&temp[m - 2] == 'N'&&temp[m - 1] == 'G')
		{
			fprintf(fp2, "%s\n", temp);
		}
		if (temp[m - 4] == '.'&&temp[m - 3] == 'G'&&temp[m - 2] == 'I'&&temp[m - 1] == 'G')
		{
			fprintf(fp2, "%s\n", temp);
		}
		fscanf(fp1, "%s", temp);
	}
	fclose(fp1);
	fclose(fp2);
	remove("temp.txt");
	return;
}