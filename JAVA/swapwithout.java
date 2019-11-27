import java.util.*;
public class swapwithout
{
    public static void main(String args[])
    {
        int a,b;
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter the value of a and b:");
        a=scan.nextInt();
        b=scan.nextInt();
        a=a+b;
        b=a-b;
        a=a-b;
        System.out.println("after swapping:");
        System.out.println(a);
        System.out.println(b);

    }
}