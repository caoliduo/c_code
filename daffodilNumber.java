public class  daffodilNumber{
	public static void main(String[] args) {
		int num=0;
		for(num=0;num<999;num++){
			if((Math.pow((num%10),3)+Math.pow(((num/10)%10),3)+Math.pow((num/100),3))==num){
				System.out.println(num);
			}
		}
	}
}