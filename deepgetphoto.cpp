/**********************************************************
* 文件名称：deepgetphoto.cpp
* 内容摘要：该代码用于获取满足后缀要求的第一个文件
* 其他说明：该文件为存放获取网站中所有图片的函数的头文件
* 当前版本：1.32V
* 作    者：许力荣(hatebugs)(烟台大学)
***********************************************************/

int newa = 0;

size_t newwrite(void* ptr, size_t size, size_t nmemb, void *userdata)
{
	newa = 1;
	FILE *fp = (FILE*)userdata;
	fwrite(ptr, size, nmemb, fp);
	return size*nmemb;
}
int getphoto()            //获取图片的函数
{
	char ch1[500], ch4[5] = ".png", ch2[50] = "photo/", ch3[10], temp[100];
	int i = 1;
	FILE *fp, *fp1;
	fp = fopen("temp1.txt", "r");
	fscanf(fp, "%s", ch1);
	while (!feof(fp))
	{
		if (i < 10)                            //该判断为确定图片名称的判断，下同
		{
			CURL *curl;
			CURLcode res;
			curl_global_init(CURL_GLOBAL_ALL); //在程序调用libcurl中其他函数之前，curl_global_init必须被调用一次。一旦初始化，那么在你的程序生存期内都有效。
			curl = curl_easy_init();           //初始化一个CURL类型的指针
			sprintf(ch3, "%d", i);
			strcpy(temp, ch2);
			strcpy(temp + 6, ch3);
			strcpy(temp + 7, ch4);            //组合图片名称
			fp1 = fopen(temp, "wb");           //将图片以二进制的方式写入.png文件
			curl_easy_setopt(curl, CURLOPT_URL, ch1);
			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, newwrite);
			curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp1);
			res = curl_easy_perform(curl);
			curl_easy_cleanup(curl);
			fclose(fp1);
			if (newa == 0)
			{
				remove(temp);
			}
			else
				i++;
			newa = 0;
			memset(temp, 0, sizeof temp);
			fscanf(fp, "%s", ch1);
		}
		else if (i < 100)
		{
			CURL *curl;
			CURLcode res;
			curl_global_init(CURL_GLOBAL_ALL); //在程序调用libcurl中其他函数之前，curl_global_init必须被调用一次。一旦初始化，那么在你的程序生存期内都有效。
			curl = curl_easy_init();           //初始化一个CURL类型的指针
			sprintf(ch3, "%d", i);
			strcpy(temp, ch2);
			strcpy(temp + 6, ch3);
			strcpy(temp + 7, ch4);
			fp1 = fopen(temp, "wb");
			curl_easy_setopt(curl, CURLOPT_URL, ch1);
			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, newwrite);
			curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp1);
			res = curl_easy_perform(curl);
			curl_easy_cleanup(curl);
			fclose(fp1);
			if (newa == 0)
			{
				remove(temp);
			}
			else
				i++;
			newa = 0;
			memset(temp, 0, sizeof temp);
			fscanf(fp, "%s", ch1);
		}
		else
		{
			CURL *curl;
			CURLcode res;
			curl_global_init(CURL_GLOBAL_ALL); //在程序调用libcurl中其他函数之前，curl_global_init必须被调用一次。一旦初始化，那么在你的程序生存期内都有效。
			curl = curl_easy_init();           //初始化一个CURL类型的指针
			sprintf(ch3, "%d", i);
			strcpy(temp, ch2);
			strcpy(temp + 6, ch3);
			strcpy(temp + 9, ch4);
			fp1 = fopen(temp, "wb");
			curl_easy_setopt(curl, CURLOPT_URL, ch1);
			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, newwrite);
			curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp1);
			res = curl_easy_perform(curl);
			curl_easy_cleanup(curl);
			fclose(fp1);
			if (newa == 0)
			{
				remove(temp);
			}
			else
				i++;
			newa = 0;
			memset(temp, 0, sizeof temp);
			fscanf(fp, "%s", ch1);
		}
	}
	fclose(fp);
	remove("temp1.txt");
	choice3();
	return 0;
}