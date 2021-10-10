/**********************************************************
* 文件名称：mymain.cpp
* 内容摘要：该代码用于获取满足后缀要求的第一个文件
* 其他说明：该文件为总函数，是整个程序的框架
* 当前版本：1.32V
* 作    者：许力荣(hatebugs)(烟台大学)
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
	CURL *curl;                        //定义一个CURL类型的指针
	CURLcode res;                      //定义CURLcode类型的变量
	start();
	choice2();                       //获取网址
	scanf("%s", URL);
	curl_global_init(CURL_GLOBAL_ALL); //在程序调用libcurl中其他函数之前，curl_global_init必须被调用一次。一旦初始化，那么在你的程序生存期内都有效。
	curl = curl_easy_init();           //初始化一个CURL类型的指针
	fp = fopen("result.txt", "w");   //将结果存放在桌面
	b = choice1();
	if (b == 1)
	{
		fclose(fp);
		remove("result.txt");     //只需要在控制台显示时，删除文件
		if (curl)
		{
			//curl_slist *head = NULL;            //注释部分为数据头设置为UTF-8
			//head = curl_slist_append(head, "Content-Type:application/x-www-form-urlencoded;charset=UTF-8");
			//curl_easy_setopt(curl, CURLOPT_HTTPHEADER, head);

			curl_easy_setopt(curl, CURLOPT_URL, URL);           //该选项设置要处理的URL地址
			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write);
			res = curl_easy_perform(curl);          //完成curl_easy_setopt指定的所有选项，函数完成传输任务
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
			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write);     //回调函数
			curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);            //第 3 个参数必须是个 FILE 指针
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
				{/*                      //注释部分为获取单张图片，后拓展为deepgetpgoto.h
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
					deepspiderurl();            //调用函数，获取图片
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