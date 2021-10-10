#include "myhead.h"
FILE *fp;
size_t write(char *buffer, size_t size, size_t nitems, void *outstream);
size_t write(char *buffer, size_t size, size_t nitems, void *outstream)
{
	int written = fwrite(buffer, size, nitems, (FILE*)outstream);
	return written;
}


int getphoto()
{
	CURL *curl;
	CURLcode res;
	FILE *photofp;
	char photoname[200];
	choice8();
	scanf("%s", photoname);
	photofp = fopen("resultphoto.jpg", "wb");
	curl = curl_easy_init();
	curl_easy_setopt(curl, CURLOPT_URL, photoname);
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write);
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, photofp);
	res = curl_easy_perform(curl);
	curl_easy_cleanup(curl);
	fclose(photofp);
	choice3();
	return 0;
}