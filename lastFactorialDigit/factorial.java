import java.util.*;
import java.io.*;

public class factorial {
    public static void main(String[] args) {
        ArrayList<Integer> values = new ArrayList<Integer>();
        Scanner scan = new Scanner(System.in);
        int testCases = scan.nextInt();
        for(int i = 0; i < testCases; i++) {
            values.add(scan.nextInt());
        }
        for(int i = 0; i < testCases; i++) {
            System.out.println(factorial(values.get(i)) % 10);
        }
    }

    public static int factorial(int n) {
        if(n == 0)
            return 1;
        return n * factorial(n - 1);
    }
}
