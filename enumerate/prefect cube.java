package algorathm;
/*
 枚举(完美立方)
题目描述： 
Description
a3 = b3 + c3 + d3为完美立方等式。例如123 = 63 + 83 + 103 。
编写一个程序，对任给的正整数N (N≤100)，寻找所有的四元组(a, b, c, d)。
使得a3 = b3 + c3 + d3(3次方)，其中1<a, b, c, d ≤N。
Input
正整数N (N≤100)
Output
每行输出一个完美立方，按照a的值，从小到大依次输出。
当两个完美立方等式中a的值相同，则依次按照b、c、d进行非降升序排列输出。
即b值小的先输出、然后c值小的先输出、然后d值小的先输出。
Sample Input
24
Sample Output
Cube = 6, Triple = (3,4,5) 
Cube = 12, Triple = (6,8,10) 
Cube = 18, Triple = (2,12,16) 
Cube = 18, Triple = (9,12,15) 
Cube = 19, Triple = (3,10,18) 
Cube = 20, Triple = (7,14,17) 
Cube = 24, Triple = (12,16,20)
*/
import java.util.Scanner;//导入输入数据的包

public class Pretectcube {
	public static void main(String[] args)
	{
		System.out.println("putinto N:");
		Scanner sc = new Scanner(System.in);//使用Scanner类定义对象
		int N = sc.nextInt();//接受整形数据
		
		for(int a = 2 ;a<=N; ++a)
		{
			System.out.println(N);
			for(int b = 2 ;b<a; ++b)
			{
				for(int c = b ;c<a; ++c)
				{
					for(int d = c ;d<a; ++d)
					{
						if((a*a*a) == (b*b*b)+(c*c*c)+(d*d*d));
						{
						System.out.println("Cube = "+a+",Tripe = ("+b+","+c+","+d+")");
						}
						
					}
					
				}
				
				
			}
			
		}
	
		
		
		
	}

}
