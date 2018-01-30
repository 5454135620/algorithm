//FBNICO  时间限制：1.0s   内存限制：256.0MB 
//方法一：
/*
#include<stdio.h>
int main(){
	int n,i=0;
	while(scanf("%d",&n)!=EOF){
		int F[n+1];
		F[1]=1;
		F[2]=1;
		for(i=3;i<=n;i++){
			F[i]=((F[i-1]+F[i-2])%10007);
		}
		printf("%d\n",F[n],n);
	}
	return 0;
}
*/
//方法三：  
#include<stdio.h>
int main(){
	int n,i,a,b,sum;
	while(scanf("%d",&n)!=EOF){
		sum=0;
		a=1;
		b=1;
		if(n==1||n==2){
			printf("1\n");	
		}else{
			for(i=3;i<=n;i++){
			sum = a+b;
			a=b;
			b=sum;
		}
		printf("%d\n",sum%10007);
		} 
		
	}
	return 0;
} 
//方法二： 递归（效率低） 
/*
#include<stdio.h>
int a,b,sum;
int main(){
	
	int f(int n);
	int n; 
    while(scanf("%d",&n)!=EOF){
    	printf("%d ",f(n)%10007);
	}
	return 0;
}

int f(int n){
	if(n==0 ){
		a=0;
		return 0;
	}else if(n==1){
		b=1;
		return 1;
	}else{
		sum = f(n-1)+f(n-2);
		return sum;
	}
}*/

//输出数列：  0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 
/* printf("输入N：");
	int n; 
    scanf("%d",&n);
    int sum = 0;
    int a,b; 
    for(int i=1;i<n;i++){
    	if(i<3){
    		a=1;
    		b=1;
    		printf("1 ");
		}else{
			sum=b+a;
			printf("%d ",sum);
			a=b;
			b=sum;
		}
		
	}
*/

/*
int main(){
 
// 99biao 

  
  for( int i=1;i < 10;i++)
  {
 	for(int j=1; j<=i; j++)
	{
		printf(" %d * %d = %d   ",i,j,i*j);
		
	}
	printf("\n");
  }
	
  
  return 0; 

}*/
/*
1.C99语法规定了变量定义必须在函数之前 包括for()中的局部变量也必须遵守
2.递归算法解题相对常用的普通循环来说效率低。
  因此尽量避免使用，在递归调用的过程当中系统为每一层的返回点、局部量等开辟了栈来存储。递归次数过多容易造成栈溢出等。
  适用于问题本身就递归解题模式
 
*/ 
