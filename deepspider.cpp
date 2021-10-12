/**********************************************************
* 文件名称：deepspider.cpp
* 内容摘要：该代码用于获取满足后缀要求的第一个文件
* 其他说明：该文件为存放较深层次的爬取网页的函数的头文件(不精确搜索)
* 当前版本：1.32V
* 作    者：许力荣(hatebugs)(烟台大学)
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