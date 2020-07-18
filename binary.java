public class binary{
	public static void main(String[] args) {
		int a=13;
		System.out.println("奇数位：");
		for(int i=0;i<32;i++){
				//System.out.print((a)&1);

			if(i%2==0){
				System.out.print((a>>i)&1);
			}
		}
		System.out.println();
		System.out.println("偶数位：");
		for(int i=1;i<=32;i++){
			if(i%2==1){
				System.out.print((a>>i)&1);
			}
		}
	}

}