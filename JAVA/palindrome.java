import java.util.*;
public class armstrong
{
    public static void main(String args[])
    {
        int n,r,temp,sum=0;
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter number:");
        n=scan.nextInt();
        temp=n;
        while(n>0)
        {
            r=n%10;
            sum=sum+(r*r*r);
            n=n/10;
        }
        if(temp==sum)
        System.out.println(temp+" is a armstrong");
        else
        System.out.println(temp+" not a armstrong");
    }
}