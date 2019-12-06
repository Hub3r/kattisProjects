import java.util.*;

public class solution {
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int mapSizeX = scan.nextInt();
        int mapSizeY = scan.nextInt();
        int[][] map = new int[mapSizeX][mapSizeY];
        for(int i = 0; i < mapSizeX; i++) {
            for(int j = 0; j < mapSizeY; j++) {
                map[i][j] = scan.nextInt();
            }
        }
    }
}
