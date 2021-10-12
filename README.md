# WebCrawler
大一C语言程序设计课程设计
使用的平台是Windows10，VS2015，curl-7.38.0(文件中提供了一个curl压缩包)
该程序是2020年本人的程序设计课程设计，是通过调用curl库实现的简易爬虫，目前可以实现爬取网页源码，分析其中可能的链接并下载其中的图片
因为使用的是vs，所以项目的文件结构不是很规范，可以将源码取出自己创建项目，必需文件有.cpp文件、.h文件和.txt文件以及photo文件夹
已经配置好curl库的需将自己的libcurl.dll替换进来，没有配置curl的需要自己配置下curl库
因为这段代码是我大一写的，所以各个方面问题都比较大，有问题可以共同讨论
改天这里提供一个VS中使用curl的方法

注：本程序在本人主机上确实可以运行，代码没有问题，只是更换电脑后需要配置curl库，这里提供一个在vs中成功配置curl库的例子：
1、解压curl-7.38.0
2、使用vs打开curl-7.38.0\projects\Windows\VC6目录，使用DLL Release编译
3、新建curl项目，创建include和lib文件夹
4、将curl-7.38.0\build\Win32\VC6\DLL Release目录下的libcurl.dll和libcurl.lib复制到curl项目的include和lib目录下
5、curl测试项目属性 -> C/C++ -> 预处理器 –> 预处理器定义，添加 CURL_STATICLIB
6、curl测试项目属性 -> C/C++ -> 常规 –> 附加包含目录, 添加include
7、curl测试项目属性 -> 连接器 -> 常规 –> 附加库目录, 添加lib
8、将curl-7.38.0\include下的curl目录复制到curl项目的include目录下
9、将curl-7.38.0中生成的libcurl.dll复制到curl项目中和生成的Debug中

文件组成：
主文件夹下存放程序源码和要输出的.txt文件，.txt文件是vs默认的编码格式，配置好curl之后在vs打开即可
Debug中的.txt文件是CMD中的chcp 65001编码格式，需在cmd中打开