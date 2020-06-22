import java.util.*;

public class Autori {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        scan.useDelimiter("-");
        String answer = "";
        while(scan.hasNext()) {
            String currentName = scan.next();
            answer += currentName.charAt(0);
        }
        System.out.println(answer);
        scan.close();
    }
}