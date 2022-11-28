#include <stdio.h>
#include <math.h>

int main() {

    float tile_width,tile_length,floor_width,floor_length;

    printf("Input tile width (ft) : ");
    scanf("%f",&tile_width);

    printf("Input tile length (ft) : ");
    scanf("%f",&tile_length);

    printf("Input floor width (ft) : ");
    scanf("%f",&floor_width);

    printf("Input floor length (ft) : ");
    scanf("%f",&floor_length);

    float floor_area = floor_length * floor_width;
    float tile_area = tile_length * tile_width;
    int no_of_tile = ceil(floor_area / tile_area);

    printf("No of tile: %d",no_of_tile);
    return 0;
}
