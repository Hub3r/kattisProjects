import java.util.*;

public class heartRate {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int cases = scan.nextInt();
        for(int i = 0; i < cases; i++) {
            int b = scan.nextInt();
            double p = scan.nextDouble();
            double x = 60.0 / p;
            double xb = x * b;
            System.out.println((xb - x) + " " + xb + " " + ( xb + x));
        }
    }
}