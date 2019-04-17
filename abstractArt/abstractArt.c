#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int x;
    int y;
} Coords;

typedef struct {
    int sides;
    Coords *c;
} Polygon;

double polygonArea(Polygon p) {
    Polygon s = p;
    int j = p.sides - 1;
    double area = 0.0;
    for(int i = 0; i < p.sides; i++) {
        area += (p.c[j].x + p.c[i].x) * (p.c[j].y - p.c[i].y);
        j = i;
    }
    return area;
}

int main(int argc, char *argv[]) {

    int currX, currY;

    int numPolygons = 0;
    scanf("%d", &numPolygons);
    
    Polygon *shapes = malloc(numPolygons * sizeof(Polygon));
    
    for(int i = 0; i < numPolygons; i++) {
        scanf("%d", &shapes[i].sides);
        shapes[i].c = malloc(shapes[i].sides * sizeof(Coords));
        for(int j = 0; j < shapes[i].sides; j++) {
            scanf("%d %d", &shapes[i].c[j].x, &shapes[i].c[j].y);
        }
    }

    double totalArea = 0.0;

    for(int i = 0; i < numPolygons; i++) {
        totalArea += polygonArea(shapes[i]);
    }

    printf("%0.8f\n", totalArea);
}
