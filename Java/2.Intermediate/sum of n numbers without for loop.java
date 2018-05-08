import java.util.*;
import java.lang.*;

class Sum // Please put the classname as the specified filename to solve the error
{  
    public static void main(String args[])
    {
        int number,i;
        int sum = 0;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a number till which you want a sum of!");
        number = scanner.nextInt();
        sum = number * (number + 1)/2;
        System.out.println("The sum is: "+sum);
    }
}