
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int arms = 10;
int legs = 5;
int heads = 6;
float torso =0.5f;


int main(void) {
    printf("total %d\n", arms*legs*heads);
    scanf("%d", &arms);
    printf("%d\n", arms);
    printf("torso %f\n", torso);
    return 0;
}
