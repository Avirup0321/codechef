import java .util.Scanner;
public class remainder {
    public static void main(String[] args) {
        Scanner in = new Scanner (System.in);
        int t = in.nextInt();
          int rem=0;
        while ( t-->0 )
        {
            int a=in.nextInt();
            int b=in.nextInt();
         rem =a%b;
         System.out.println(rem);
        }

    }
}