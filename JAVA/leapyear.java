import java.util.*;
public class leapyear
{
    public static void main(String args[])
    {
        int yr;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter yr:");
        yr=s.nextInt();
        if((yr%4)==0 && (yr %100)!=0 || (yr%400)==0)
        {   
            System.out.println(yr+" is a leap year");
        }
        else
        {
            System.out.println(yr+" is not a leap year");
        }
    }
}