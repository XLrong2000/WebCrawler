/***********************************************************
* 版权所有：许力荣(hatebugs)(烟台大学)
*
* 程序作用：简单爬虫(C语言)
* 程序作者：许力荣(hatebugs)(烟台大学)
* 完成时间：2020年4月29日
* 版本：1.32V
* ====================================
* 版本日志：
* 1.0V	初步完成
* 1.01V	为源码添加注释
* 1.1V	完成深度的爬取功能(获取初步爬取的网页内可能的链接)
* 1.11V	解决部分乱码问题
* 1.12V	优化程序
* 1.13V	添加封面图像(伪可视化QwQ...)
* 1.2V	添加爬取图片功能(单个图片)
* 1.3V  可以爬取网页的所有图片
* 1.31V	对爬取的图片进行初步的筛选
* 1.32V	微小优化
***********************************************************/
/**********************************************************
* 文件名称：spider.cpp
* 内容摘要：该代码用于获取满足后缀要求的第一个文件
* 其他说明：该文件为主函数，只存放总函数
* 当前版本：1.32V
* 作    者：许力荣(hatebugs)(烟台大学)
***********************************************************/
#include "my_head.h"           //存放头文件的头文件QwQ
int main()
{
	//使用前请在桌面新建一个名为photo的文件夹(作者的储存位置为C:/Users/lenovo/Desktop/photo/)可适当更改
	//主要更改deepgetphoto.h等文件中的文件位置以及strcpy的内部数据
	//发生问题应主要为文件位置的问题
	//UTF-8的问题尚未完美解决，控制台显示时的乱码可以通过在CMD时先运行chcp 65001，
	//强制转换为UTF-8，然后在CMD运行Dbug中的.exe
	//在mymain.h中有转换处理，但是没有作用
	mymain();            //进入主框架
	system("pause");
	return 0;
}