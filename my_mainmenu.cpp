/**********************************************************
* �ļ����ƣ�mymain.cpp
* ����ժҪ���ô������ڻ�ȡ�����׺Ҫ��ĵ�һ���ļ�
* ����˵�������ļ�Ϊ�ܺ���������������Ŀ��
* ��ǰ�汾��1.32V
* ��    �ߣ�������(hatebugs)(��̨��ѧ)
***********************************************************/

int a = 0;

size_t write(void* ptr, size_t size, size_t nmemb, void *userdata)
{
	a = 1;
	FILE *fp = (FILE*)userdata;
	fwrite(ptr, size, nmemb, fp);
	return size*nmemb;
}
int mymain()
{
	system("color a");
	FILE *fp;
	int b, d;
	char URL[500], ch;
	CURL *curl;                        //����һ��CURL���͵�ָ��
	CURLcode res;                      //����CURLcode���͵ı���
	start();
	choice2();                       //��ȡ��ַ
	scanf("%s", URL);
	curl_global_init(CURL_GLOBAL_ALL); //�ڳ������libcurl����������֮ǰ��curl_global_init���뱻����һ�Ρ�һ����ʼ������ô����ĳ����������ڶ���Ч��
	curl = curl_easy_init();           //��ʼ��һ��CURL���͵�ָ��
	fp = fopen("result.txt", "w");   //��������������
	b = choice1();
	if (b == 1)
	{
		fclose(fp);
		remove("result.txt");     //ֻ��Ҫ�ڿ���̨��ʾʱ��ɾ���ļ�
		if (curl)
		{
			//curl_slist *head = NULL;            //ע�Ͳ���Ϊ����ͷ����ΪUTF-8
			//head = curl_slist_append(head, "Content-Type:application/x-www-form-urlencoded;charset=UTF-8");
			//curl_easy_setopt(curl, CURLOPT_HTTPHEADER, head);

			curl_easy_setopt(curl, CURLOPT_URL, URL);           //��ѡ������Ҫ�����URL��ַ
			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write);
			res = curl_easy_perform(curl);          //���curl_easy_setoptָ��������ѡ�������ɴ�������
			if (a == 0)
			{
				choice4();
				remove("result.txt");
				system("pause");
				mymain();
			}
			else
			{
				choice3();
				remove("result.txt");
			}
			curl_easy_cleanup(curl);

			//curl_slist_free_all(head);
		}
	}
	else
	{
		if (curl)
		{
			curl_easy_setopt(curl, CURLOPT_URL, URL);
			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write);     //�ص�����
			curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);            //�� 3 �����������Ǹ� FILE ָ��
			res = curl_easy_perform(curl);
			curl_easy_cleanup(curl);
			curl_global_cleanup();
		}
		fclose(fp);
		if (a == 0)
		{
			choice4();
			remove("result.txt");
			system("pause");
			mymain();
		}
		else
		{
			choice3();
			choice5();
			scanf("%d", &d);
			if (d == 1)
			{
				deepspider();
				choice7();
				scanf("%d", &a);
				if (a == 1)
				{/*                      //ע�Ͳ���Ϊ��ȡ����ͼƬ������չΪdeepgetpgoto.h
				 CURL *photocurl;
				 CURLcode photores;
				 FILE *photofp;
				 char photoname[200];
				 choice8();
				 scanf("%s", photoname);
				 photofp = fopen("C:\\Users\\lenovo\\Desktop\\resultphoto.png", "wb");
				 photocurl = curl_easy_init();
				 if (photocurl)
				 {
				 curl_easy_setopt(photocurl, CURLOPT_URL, photoname);
				 curl_easy_setopt(photocurl, CURLOPT_WRITEFUNCTION, write);
				 curl_easy_setopt(photocurl, CURLOPT_WRITEDATA, photofp);
				 photores = curl_easy_perform(photocurl);
				 curl_easy_cleanup(photocurl);
				 fclose(photofp);
				 choice3();
				 }*/
					deepspiderurl();            //���ú�������ȡͼƬ
					choice8();
					getphoto();
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 0;
}