/**********************************************************
* �ļ����ƣ�my_head.h
* ����ժҪ���ô������ڻ�ȡ�����׺Ҫ��ĵ�һ���ļ�
* ����˵�������ļ�Ϊ���ͷ�ļ���һЩԤָ���ͷ�ļ�
* ��ǰ�汾��1.32V
* ��    �ߣ�������(hatebugs)(��̨��ѧ)
***********************************************************/
#define CURL_STATICLIB        //�����ڰ���curl.hǰ����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>
#include "choice.cpp"           //��Ŵ�ӡ����ĺ�����ͷ�ļ�
#include "deepspider.cpp"       //�����һ��ε���ȡ��ͷ�ļ�
#include "deepspiderURL.cpp"    //��ȡ�����ͼƬ���ӵĺ���
#include "deepgetphoto.cpp"     //��ȡ��ҳ�����е�ͼƬ
#include "my_mainmenu.cpp"
#pragma comment (lib,"libcurl.lib" )        //Ԥ����ָ��轫libcurl.lib�ļ���ŵ���Ŀ�ļ������£�
#pragma comment (lib, "ws2_32.lib" )         //�Բ����������API��֧��
#pragma comment (lib, "winmm.lib" )          //ò��û��ʲô�ô���ע��������Ӱ��
#pragma comment (lib, "wldap32.lib" )        //ͬ��

int start();
int choice1();	//以下函数是用于输出一些字符，具体输出字符在相应.txt文件中
int choice2();
int choice3();
int choice4();
int choice5();
int choice6();
int choice7();
int choice8();
size_t newwrite(void* ptr, size_t size, size_t nmemb, void *userdata);   //写入数据的函数
void deepspider();               //获取爬取内容中的可能存在的链接的函数
void deepspiderurl();    //爬取网页中图片的连接的函数的函数
size_t write(void* ptr, size_t size, size_t nmemb, void *userdata);