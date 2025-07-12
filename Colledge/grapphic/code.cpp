#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)" ");

    setcolor(RED);
    circle(200, 200, 100);

    getch();       // Wait for keypress
    closegraph();  // Close graphics window

    return 0;
}
