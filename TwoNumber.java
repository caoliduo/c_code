import java.util.Scanner;
public class TwoNumber{
	public static void main(String[] args) {
		System.out.println("请输入一个整数");
		Scanner sc=new Scanner(System.in);
		int num=sc.nextInt();
		int num1=num|0;
		int count =0;
		while(num1!=0){
			if(num1%2==1){
				count++;
			}
			num1/=2;
		}
		System.out.println(count);
		sc.close();
	}
}