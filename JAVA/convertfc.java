import java.util.*;
public class convertfc 
{
    public static void main(String args[])
    {
        double f,c;
        System.out.println("Enter temperature in fahrenheit:");
        Scanner scan=new Scanner(System.in);
        f=scan.nextDouble();
        c=(f-32)*5/9;
        System.out.println("Temp in celcius="+c);
    }
}