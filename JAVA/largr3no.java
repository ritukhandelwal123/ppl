import java.util.*;
public class largr3no
{
    public static void main(String args[])
    {
        int a,b,c;
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter value for a and b and c:");
        a=scan.nextInt();
        b=scan.nextInt();
        c=scan.nextInt();
        if(a>b && a>c)
        System.out.println(a+  "is greatest");
        if(b>a && b>c)
        System.out.println(b+ "is greatest");
        if(c>a && c>b)
        System.out.println(c+ "is greatest");


    }
}