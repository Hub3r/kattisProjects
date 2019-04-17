import java.util.*;

public class watchDog {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int testCases = scan.nextInt();
        int roofSquare;
        int roof[][];
        int hatches;
        ArrayList<coordinate> coords = new ArrayList<coordinate>();
        for(int i = 0; i < testCases; i++) {
            roofSquare = scan.nextInt();
            roof = new int[roofSquare][roofSquare];
            hatches = scan.nextInt();
            for(int j = 0; j < hatches; j++) {
                coords.add(new coordinate(scan.nextInt(), scan.nextInt()));
            }
            for(int j = 0; j < coords.size(); j++) {
                System.out.println(coords.get(j).toString());
            }
            coords = new ArrayList<coordinate>();
        }
    }
}
