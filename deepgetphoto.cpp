/**********************************************************
* �ļ����ƣ�deepgetphoto.cpp
* ����ժҪ���ô������ڻ�ȡ�����׺Ҫ��ĵ�һ���ļ�
* ����˵�������ļ�Ϊ��Ż�ȡ��վ������ͼƬ�ĺ�����ͷ�ļ�
* ��ǰ�汾��1.32V
* ��    �ߣ�������(hatebugs)(��̨��ѧ)
***********************************************************/

int newa = 0;

size_t newwrite(void* ptr, size_t size, size_t nmemb, void *userdata)
{
	newa = 1;
	FILE *fp = (FILE*)userdata;
	fwrite(ptr, size, nmemb, fp);
	return size*nmemb;
}
int getphoto()            //��ȡͼƬ�ĺ���
{
	char ch1[500], ch4[5] = ".png", ch2[50] = "photo/", ch3[10], temp[100];
	int i = 1;
	FILE *fp, *fp1;
	fp = fopen("temp1.txt", "r");
	fscanf(fp, "%s", ch1);
	while (!feof(fp))
	{
		if (i < 10)                            //���ж�Ϊȷ��ͼƬ���Ƶ��жϣ���ͬ
		{
			CURL *curl;
			CURLcode res;
			curl_global_init(CURL_GLOBAL_ALL); //�ڳ������libcurl����������֮ǰ��curl_global_init���뱻����һ�Ρ�һ����ʼ������ô����ĳ����������ڶ���Ч��
			curl = curl_easy_init();           //��ʼ��һ��CURL���͵�ָ��
			sprintf(ch3, "%d", i);
			strcpy(temp, ch2);
			strcpy(temp + 6, ch3);
			strcpy(temp + 7, ch4);            //���ͼƬ����
			fp1 = fopen(temp, "wb");           //��ͼƬ�Զ����Ƶķ�ʽд��.png�ļ�
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
			curl_global_init(CURL_GLOBAL_ALL); //�ڳ������libcurl����������֮ǰ��curl_global_init���뱻����һ�Ρ�һ����ʼ������ô����ĳ����������ڶ���Ч��
			curl = curl_easy_init();           //��ʼ��һ��CURL���͵�ָ��
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
			curl_global_init(CURL_GLOBAL_ALL); //�ڳ������libcurl����������֮ǰ��curl_global_init���뱻����һ�Ρ�һ����ʼ������ô����ĳ����������ڶ���Ч��
			curl = curl_easy_init();           //��ʼ��һ��CURL���͵�ָ��
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