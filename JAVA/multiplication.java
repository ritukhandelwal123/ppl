import java.util.*;
public class multiplication
{
    public static void main(String args[])
    {
        int i,n;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter no:");
        n=s.nextInt();
        for(i=1;i<11;i++)
        {
            System.out.println(" "+n+"X"+i+"="+n*i);
        }
    }
}