import java.util.Scanner;

public class enormousinput {
    public static void main(String[] args) {
        Scanner sc =new Scanner (System.in);
        long n = sc.nextLong();
        int k = sc.nextInt();

        int i,c=0;
        for(i=0;i<n;i++)
        {
            int t;
            t= sc.nextInt();

            if (t%k ==0)
            {
                c++;
            }
        }
        System.out.println(c);
        sc.close();
    }
    
}

