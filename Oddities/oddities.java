import java.util.*;

public class oddities {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int cases = scan.nextInt();
        int current = 0;
        for(int i = 0; i < cases; i++) {
            current = scan.nextInt();
            if(current % 2 != 0)
                System.out.println(current + " is odd");
            else
                System.out.println(current + " is even");
        }
    }
}
