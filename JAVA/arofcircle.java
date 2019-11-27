import java.util.*;
public class arofcircle
{
    public static void main(String args[])
    {
        double ar,r,cir;
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter radius:");
        r=scan.nextDouble();
        ar=3.14*r*r;
        cir=2*3.14*r;
        System.out.println("area of circle="+ar);
        System.out.println("area of circumference="+cir);
    }
}