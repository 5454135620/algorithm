#include<stdio.h>
int main(){
   	
	printf("Hello World!\n");
//输入输出 
	/*	
	double num;
	double m;
	printf("请输入一个数num:\n");
	scanf("%lf",&num);
	printf("请输入一个数m：\n");
	scanf("%lf",&m);
	printf("m的平方数： %d"，sqrt(m));
//	printf("你输入的数字之和是：%d",num+m);
	printf("%.6lf + %.2lf = %.1lf\n",num,m,num+m);//6.333333 + 50.21 = 56.5 
	printf("%.2lf / %.2lf = %lf",num,m,num/m);//C中求余数左右操作数两边必须是int类型 ，可以用小数精确结果 
	
	
	//字符转换为ASCALL码 
	getchar();//  清空输入缓存区里所有的残留 
	printf("字符转换为ASCALL码：\n");
	char c;
	scanf("%c",&c);
	printf("你输入的数%c的ASCALL为 %d",c,c); 
	*/
	
//计算字节大小 
	/*	
	int a;
	float b;
	double d;
	char e;
	long f;
	long long g;
	long double h; 
	printf("%d,%d,%d,%d,%d,%d,%d",sizeof(a),sizeof(b),sizeof(d),sizeof(e),sizeof(f),sizeof(g),sizeof(h)); 
	//4,4,8,1,4,8,16
	*/
	
//判断元音还是辅音：
	/*	
	char zm;
	int isLower,isHigh;
	printf("输入一个字母：");
	scanf("%c",&zm);
	
	isLower = (zm == 'a'|| zm =='e'|| zm =='i'|| zm =='o' || zm == 'u'); 
	isHigh = (zm == 'A'|| zm =='E'|| zm =='I'|| zm =='O' || zm == 'U');
	if(isLower||isHigh){
		printf("%c 是元音",zm);
	}else{
		printf("%c 是辅音",zm);
	}
	*/
	
//判断润年：润年被4整除/被100整除/被400整除
	/*  
	int years;
	printf("输入年份：");
	scanf("%d",&years);
	if(years%4 == 0){
		if(years%100 == 0){
			if(years%400 == 0){
				printf("% d是闰年",years);
			}else{
				printf("% d不是闰年",years);
			}
		}else{
			printf("% d不是闰年",years);
		}
		
	}else{
		printf("% d不是闰年",years);
	}
 	*/
	
//数字由1增加到输入的这个数字：
	//方法一： for 
	/*	
	int ends;
	printf("请输入数字：");
	scanf("%d",&ends);
	printf("输入累加的末尾的数 %d/n",ends);
	int sum = 0;
    for(int i=1; i<=ends; i++){
    	sum = sum +i;
	}
	printf("和为：%d",sum);	 
	*/ 
	
	//方法二：while
/*	int end;
	printf("请输入数字：");
	scanf("%d",&end);
	printf("输入累加的末尾的数 %d\n",end);
	int sum = 0;
	while(end>0){
		sum = sum +end;
		end--;
	}
	printf("和为：%d",sum);	
*/
	//方法三：递归
	int addNumbers(int n);//先声明再使用 
	int end;
	printf("请输入数字：");
	scanf("%d",&end);
	printf("输入累加的末尾的数 %d\n",end);
	printf("累加和为：%d",addNumbers(end));
	
	return 0;

} 

int addNumbers(int n){
		if(n != 0){
			return n+addNumbers(n-1);	
		}else{
			return n;
		}	
	}
