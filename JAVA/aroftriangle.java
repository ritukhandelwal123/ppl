import java.util.*;
public class aroftriangle
{
    public static void main(String args[])
    {
        double ar,b,h;
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter base and height:");
        b=scan.nextDouble();
        h=scan.nextDouble();
        ar=0.5*b*h;
        System.out.println("area of triangle="+ar);
    }
}