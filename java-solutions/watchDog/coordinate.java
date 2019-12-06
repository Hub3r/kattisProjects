import java.util.*;

public class coordinate {
    int coordX;
    int coordY;

    public coordinate(int x, int y) {
        coordX = x;
        coordY = y;
    }

    public int getX() {
        return coordX;
    }

    public int getY() {
        return coordY;
    }

    @Override
    public String toString() {
        return Integer.toString(coordX) + " " + Integer.toString(coordY);
    }
}
