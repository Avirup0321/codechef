import java .util.Scanner; 
public class sumofdigit {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t= in.nextInt();
        int n=0,SUM=0;

        for (int i=1;i<=t;i++)
        {
             n=in.nextInt();
        
      
       while(n>0)
       {
           SUM+=n%10;
        n/=10;
    }
         System.out.println(SUM);
        SUM=0;}
         in.close();
    }
    
}
