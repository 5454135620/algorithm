/*

问题描述
　　给定一个长度为n的数列，将这个数列按从小到大的顺序排列。1<=n<=200
输入格式
　　第一行为一个整数n。
　　第二行包含n个整数，为待排序的数，每个整数的绝对值小于10000。
输出格式
　　输出一行，按从小到大的顺序输出排序后的数列。
样例输入
5
8 3 6 4 9
样例输出
3 4 6 8 9
*/
/* 
#include<stdio.h>
int main(){
	int a,temp,j,i=0,length=0;
	scanf("%d",&a); 
	int b[a]; 
	while(a!=i){
		scanf("%d",&b[i]);
		i++;
	} 	
	for(i=0;i<a-1;i++){
		for(j=0;j<a-i-1;j++){
			if(b[j]>b[j+1]){
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;	
			}		
		}	
	}
	//printf("\n");画蛇添足 
	//length = sizeof(b)/sizeof(b[0]); 
	while(length != a){
		printf("%d ",b[length]);
		length++;
	} 
	
	return 0;
} */
/*
#include<stdio.h>
#include<math.h>
int main(){
	int n,i=0;
	//String s1,s2;
	char num[200];
	while(scanf("%d",&n)!=EOF){
		//将数字转换为单位数 存储在数组中  转换为字符串实现 
		gets(num);
		printf(num[2]);
		
		/*for(i=0;;i++){
			scanf("%d",&num[i]);
		}
	    for(i=0;i<length(num);i++){
			printf("%d",num[i]);
		}*/
	    /*for(i=0;i<length(num);i++){
	    	printf("%d",num[i]);
		}*/
	    
	    
	    
		/*while(num!=0){
			num=num-pow(2,i);
			printf("%lf %d ",num,i); 
			i++;
		}*/
		
/*		
	}
	
	return 0;
} */
/*
问题描述
　　给定n个十六进制正整数，输出它们对应的八进制数。

输入格式
　　输入的第一行为一个正整数n （1<=n<=10）。
　　接下来n行，每行一个由0~9、大写字母A~F组成的字符串，表示要转换的十六进制正整数，每个十六进制数长度不超过100000。

输出格式
　　输出n行，每行为输入对应的八进制正整数。

　　【注意】
　　输入的十六进制数不会有前导0，比如012A。
　　输出的八进制数也不能有前导0。

样例输入
　　2
　　39
　　123ABC

样例输出
　　71
　　4435274

　　【提示】
　　先将十六进制数转换成某进制数，再由某进制数转换成八进制。
*/
#include<stdio.h>
#include<string.h> //字符串函数标配 
#include<math.h> 
#include<stdlib.h> //字符串转化为数字 
void translate(char str2[200],char str);
int main() 
{
	int i ,j=-1;
	char str[200];
	char str2[200];
	double sum=0;
	double sum1=0;
	char ch[10];//接受字符的临时变量区 
	int count=0;//计算sum和的百分制 
	int n;
//	char s[100];
//	printf("%c",str2[2]);
//数组初始化为\0字符 

    	memset(str2,0x00,sizeof(char)*200);//string.h
    		memset(str,0x00,sizeof(char)*200);//string.h
    //scanf("%d",&n);
	gets(str);
	
	printf("原: %s \n",str2); 
	printf("%c %c \n",str[0],str[1]);
	
//	printf("%s %c",strcat(str2,"sdv"),str2[1]); //只定义未赋值的字符串会添加至定义长度的末尾 
//	printf("%s %d",strcop(str2,"sdv"),str2[1]);
	for(i=0;i<strlen(str);i++){
		switch(str[i]){
			case'1':
				str2[j+1]='0';
				str2[j+2]='0';
				str2[j+3]='0';
				str2[j+4]='1';
				if(j==0){
					j=j+5;
				}else{
					j=j+4;
				}
			
				break;
			case'2':
				str2[j+1]='0';
				str2[j+2]='0';
				str2[j+3]='1';
				str2[j+4]='0';
					if(j==0){
					j=j+5;
				}else{
					j=j+4;
				}
				break;
			case'3':
				printf("3: ");
				printf("3的j为：j+1=%d\n",j+1); 
				str2[j+1]='0';
				str2[j+2]='0';
				str2[j+3]='1';
				str2[j+4]='1';
					if(j==0){
					j=j+5;
				}else{
					j=j+4;
				}
				break;
			case'4':
				str2[j+1]='0';
				str2[j+2]='1';
				str2[j+3]='0';
				str2[j+4]='0';
					if(j==0){
					j=j+5;
				}else{
					j=j+4;
				}
				break;
			case'5':
				printf("dd");
				str2[j+1]='0';
				str2[j+2]='1';
				str2[j+3]='0';
				str2[j+4]='1';
					if(j==0){
					j=j+5;
				}else{
					j=j+4;
				}
				break;
			case'6':
				str2[j+1]='0';
				str2[j+2]='1';
				str2[j+3]='1';
				str2[j+4]='0';
					if(j==0){
					j=j+5;
				}else{
					j=j+4;
				}
				break;
			case'7':
				str2[j+1]='0';
				str2[j+2]='1';
				str2[j+3]='1';
				str2[j+4]='1';
					if(j==0){
					j=j+5;
				}else{
					j=j+4;
				}
				break;
			case'8':
				str2[j+1]='1';
				str2[j+2]='0';
				str2[j+3]='0';
				str2[j+4]='0';
					if(j==0){
					j=j+5;
				}else{
					j=j+4;
				}
				break;
			case'9':
				printf("9 \n");
				printf("9的j为: j+1=%d\n",j+1); 
				str2[j+1]='1';
				str2[j+2]='0';
				str2[j+3]='0';
				str2[j+4]='1';
					if(j==0){
					j=j+5;
				}else{
					j=j+4;
				}
				break;
			case'A':
				str2[j+1]='1';
				str2[j+2]='0';
				str2[j+3]='1';
				str2[j+4]='0';
					if(j==0){
					j=j+5;
				}else{
					j=j+4;
				}
				break;
			case'B':
				str2[j+1]='1';
				str2[j+2]='0';
				str2[j+3]='1';
				str2[j+4]='1';
					if(j==0){
					j=j+5;
				}else{
					j=j+4;
				}
				break;
			case'C':
				str2[j+1]='1';
				str2[j+2]='1';
				str2[j+3]='0';
				str2[j+4]='0';
					if(j==0){
					j=j+5;
				}else{
					j=j+4;
				}
				break;
			case'D':
				str2[j+1]='1';
				str2[j+2]='1';
				str2[j+3]='0';
				str2[j+4]='1';
					if(j==0){
					j=j+5;
				}else{
					j=j+4;
				}
				break;
			case'E':
				str2[j+1]='1';
				str2[j+2]='1';
				str2[j+3]='1';
				str2[j+4]='0';
					if(j==0){
					j=j+5;
				}else{
					j=j+4;
				} 
				break;
			case'F':
				str2[j+1]='1';
				str2[j+2]='1';
				str2[j+3]='1';
				str2[j+4]='1';
					if(j==0){
					j=j+5;
				}else{
					j=j+4;
				}
				break;
		}
	}
	printf(" \n结果：%s 长度为：%d",str2,strlen(str2));
	
	j=0;
	for(i=strlen(str2)-1;i>=0;i--){
			//printf("\n i=%d sum=%lf",i,sum);
	printf("\ni======================%d\n",i);
			
			sum1=0;
			for(j=0;j<3;j++){
				if(str2[i]=='1'){
					sum1 = sum1+pow(2,j);	
					printf("\n i = %d  j= %d  sum = %lf",i,j,sum1); 
					
				}
				i--;	
			}
			i=i+1;
	
			
		sum=sum+sum1*pow(10,count);
			printf("\n---结果：%lf",sum); 
			printf("\ni=%d  j=%d \n",i,j);
			count++;
		
	}
	printf("八进制结果：sum = %.0lf\n",sum);

	return 0;
	 
}	
/*
1.不需要什么多次循环输入的格式，测试系统自己实现多次调用

2.跳转行数不要画蛇添足自己加 

3.length = sizeof(b)/sizeof(b[0]); 

4.进制转换：16进制转换为二进制：case语句 

5.C语言字符串学习:
  C语言中，字符串实际是使用null字符‘\0’终止的一维字符数组。因此，一个以null结尾的字符串，包含了组成字符串的字符
  char a[3]={'1','5','\0'} 
  char a[2]="15";
  实际上第二种形式比第一种形式短一个字符
  
6.实现字符串的输出和输入 
   	char a[100];
	char s[100]="sssc";
	//输入两种方式 
	     gets(a);//scanf("%s",a);  同 
	//输出： 
		printf(" %s",a);
		printf(" %c",a[1]);//具体输出字符 
		
7.字符串相关函数：
	#include<string.h>
 	strcpy(s,a);//将a复制到s  strcop(str2,"sdv")这种实现方式是错误的 
	strcat(s,a); //连接a到s的末尾  不加\0 
	strcmp(s,a);//比较是否相同 相同返回0 s<a返回小于0 否则>0 指代的是代表字符额大小 而不是长度 
	strchar(s,ch);//返回 一个指针 指向s中第一次出现ch的地方
	strstr(s,a);//返回一个指针 指向s中第一次出现字符串a的地方 
	printf("%d",strcmp(s,a)); 
	
8.判断语句：
    (num%2==0)?printf("偶数")：printf("奇数");
	switch(ch){
		case'A':
				printf("这个A是外部switch的一部分");
				switch(ch2){
					case'A':
						printf("这个A是内部switch的一部分");
					    break;
					case'B':
						
				}
			    break;
		case'B'://外部Bcase代码
	}
	 
9.memset函数将字符串数组中所有元素设置为\0
 void memset(void *s,int ch,size_t n);
 char buf[256]="hello world"; 
 memset(buf,0x00,sixeof(char)*265)
 
10.atof()使用 ：http://blog.csdn.net/anhuibozhoushatu/article/details/52303561 
 函数 atof() 用于将字符串转换为双精度浮点数(double)，其原型为：
double atof (const char* str);
使用时注意：
①： 为什么要用数组：
该函数以/0为结束标志 
char ch[10];//接受字符的临时变量区 
//atof()函数内不能atof(str2[i])的形式使用	[Error] invalid conversion from 'char' to 'const char*' [-fpermissive]
②： 
 使用时必须加头文件：#include<stdlib.h> 
③：输出形式 
    /*ch[0]=str2[i];//==============虽然只存储一个字符 但仍然需要定义字符数组  因为输出以整个字符数组形式输出 
	sum=sum+pow(2,atof(ch));
	
11.[Error] ld returned 1 exit status
查看是否有未关闭的进程

12.getchar()吃掉手动回车
 
*/ 
