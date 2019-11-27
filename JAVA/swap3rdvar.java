import java.util.*;
public class swap3rdvar
{
    public static void main(String args[])
    {
        int a,b,temp;
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter value of a and b:");
        a=scan.nextInt();
        b=scan.nextInt();
        System.out.println("values before swap a="+a+"and b="+b);
        temp=a;
        a=b;
        b=temp;
        System.out.println("values after swapping a="+a+"and b="+b);
    }
}