import java.util.Scanner;
public class addition {
    public static void main(String[] args) {
        Scanner ac =new Scanner (System.in);;
int t=ac.nextInt();

int a=0,b,i,c=0;
for(i=1;i<=t;i++)
{
    a=ac.nextInt();
    b=ac.nextInt();
    c= a+b;
    
  System.out.println(c);

}
ac.close();
    }
    
}
