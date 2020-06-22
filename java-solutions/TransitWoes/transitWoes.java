import java.util.*;

public class transitWoes {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int s = scan.nextInt();
        int t = scan.nextInt();
        int n = scan.nextInt();
        int[] d = new int[n+1];
        for(int i = 0; i < n+1; i++) {
            d[i] = scan.nextInt();
        }
        int[] b = new int[n];
        for(int i = 0; i < n; i++) {
            b[i] = scan.nextInt();
        }
        int[] c = new int[n];
        for(int i = 0; i < n; i++) {
            c[i] = scan.nextInt();
        }
        scan.close();
        for(int i = 0; i < n; i++) {
            s += d[i];
            s += 
            s += b[i];
            if(s > t) {
                System.out.println("no");
                return;
            }
        }
        s += d[n];
        if(s > t) {
            System.out.println("no");
            return;            
        }
        System.out.println("yes");
    }
}