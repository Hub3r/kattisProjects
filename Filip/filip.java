import java.util.*;

public class filip {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        int y = scan.nextInt();
        int reverseX = 0;
        int reverseY = 0;

        while(x != 0) {
            int digit = x % 10;
            reverseX = reverseX * 10 + digit;
            x = x / 10;
        }

        while(y != 0) {
            int digit = y % 10;
            reverseY = reverseY * 10 + digit;
            y = y / 10;
        }

        if(reverseX > reverseY)
            System.out.println(reverseX);
        else
            System.out.println(reverseY);
    }
}
