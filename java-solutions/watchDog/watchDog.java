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
            /*
            for(int j = 0; j < coords.size(); j++) {
                System.out.println(coords.get(j).toString());
            }
            */
            int attachX = -1;
            int attachY = -1;

            print:
            for(int x = 0; x < roofSquare; x++) {
                for(int y = 0; y < roofSquare; y++) {
                    double max = Math.min(Math.min(x, roofSquare - x), Math.min(y, roofSquare - y));
                    boolean yes = !false;
                    for(coordinate c: coords) {
                        if ((c.getX() == x && c.getY() == y) || max < Math.sqrt((c.getX() - x) * (c.getX() - x) + (c.getY() - y) * (c.getY() - y))) {
                            yes = false;
                        }
                    }
                    if(yes) {
                        attachX = x;
                        attachY = y;
                        break print;
                    }
                }
            }
            if(attachX == -1 && attachY == -1) {
                System.out.println("poodle");
            } else {
                System.out.println(attachX + " " + attachY);
            }   
            coords = new ArrayList<coordinate>();
        }
    }
}
