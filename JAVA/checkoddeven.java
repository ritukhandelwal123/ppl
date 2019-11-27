import java.util.*;
public class checkoddeven
{
    public static void main(String args[])
    {
        int n;
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter number=");
        n=scan.nextInt();
        if(n%2==0)
        {
            System.out.println("yes,no is even");
        }
        else
        System.out.println("no");
    }
}