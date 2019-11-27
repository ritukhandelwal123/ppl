import java.util.*;
public class armstrong
{
    public static void main(String args[])
    {
        Scanner scan=new Scanner(System.in);
        int n,temp,sum=0,r;
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
        
            System.out.println(temp+" is an armstrong number");
        
        else
        
            System.out.println(temp+" is not an armstrong number");
        
    }
}