#include <stdio.h>

int main() {
    int n, height_fence, height_person, i, road_width;
    i = 1; 
    road_width = 0;
    scanf("%d %d", &n, &height_fence);
    while (i <= n)
    {
        scanf("%d", &height_person);
        if (height_person > height_fence)
        {
            road_width = road_width + 2;
        }
        else
        {
            road_width = road_width + 1;
        }
        i++;
    }
    printf("%d\n", road_width);
    return 0;
}
