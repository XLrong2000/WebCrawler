/**********************************************************
* �ļ����ƣ�deepspider.cpp
* ����ժҪ���ô������ڻ�ȡ�����׺Ҫ��ĵ�һ���ļ�
* ����˵�������ļ�Ϊ��Ž����ε���ȡ��ҳ�ĺ�����ͷ�ļ�(����ȷ����)
* ��ǰ�汾��1.32V
* ��    �ߣ�������(hatebugs)(��̨��ѧ)
***********************************************************/


void deepspider()
{
	FILE *fp;
	int a = 0, b = 1, c = 1;
	char ch;
	choice6();
	fp = fopen("result.txt", "r");
	ch = fgetc(fp);
	while (!feof(fp))
	{
		if (ch == '"'&&b == 1)
		{
			a = 1;
			b = 2;
			ch = fgetc(fp);
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
				printf("\n");
				ch = fgetc(fp);
			}
			else
			{
				c = 1;
				ch = fgetc(fp);
			}
			continue;
		}
		if (a == 1)
		{
			printf("%c", ch);
		}
		ch = fgetc(fp);
	}
	fclose(fp);
	return;
}