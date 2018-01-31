//累加
// 方法三： 数学提高程序计算速度 
/*
#include<stdio.h>
int main(){ 
	long long sum,n;
	while(scanf("%I64d",&n)!=EOF){
		sum = (1+n)*n/2;
		printf("%I64d",sum);
		
	}
 return 0; 
	
} */ 
//方法二：
/*
	int n,i=1;
    long long sum=0;
	while(scanf("%d",&n)!=EOF)
	{
		
		for(i=1;i<=n;i++){
			sum =sum +i;
		}
	
	printf("%I64d",sum);	
	} 
*/ 
//方法一： 
/*	if(n%2==0){
			while(i<n)
			{
				sum = sum+i+n;
				n--;
				i++;
			}
		}else{
			while(i!=n)
			{
			sum = sum+i+n;
			n--;
			i++;
			}
			sum=sum+i;
		}*/

//yuanmianji
/*
#include<stdio.h>
#define PI  3.14159265358979323

int main(){
	int r;
	while(scanf("%d",&r)!=EOF){
		printf("%0.7f",PI*r*r);	
	}
	
	return 0;
} 
*/
/*
1. #define PI  3.14159265358979323
2. long long sum=0;  
   printf("%I64d",sum);	
   输入数据是1000000000 超过了int -32768~32767的范围   
   如果定义不符会结果为负数的溢出现象
3. 超时问题：程序循环次数过多 
4. long long 不能和int类型的数据运算 否则会产生溢出现象 
5. 注意数据规模与约定：比如1 <= n <= 1,000,000,000。
6.
		unsigned   int   0～4294967295   
		int   -2147483648～2147483647     == pow（2，4*8） 
		unsigned long 0～4294967295
		long   -2147483648～2147483647
		long long的最大值：9223372036854775807
		long long的最小值：-9223372036854775808
		unsigned long long的最大值：1844674407370955161
		
		__int64的最大值：9223372036854775807
		__int64的最小值：-9223372036854775808
		unsigned __int64的最大值：18446744073709551615
7. 
    #include<math.h> 
	int main(){
		//pow函数的返回值为double类型 
		printf("%lf",pow(2,5)); 
		printf("%d",1);	
		return 0;
	} 
 



*/
