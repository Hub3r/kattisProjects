import java.util.*;
public class stuck_in_a_time_loop {
    public static void main(String[] args) {
        String output = "Abracadabra";
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        for(int i = 0; i < x; i++) {
            System.out.println((i + 1) + " " + output);
        }
    }
}
