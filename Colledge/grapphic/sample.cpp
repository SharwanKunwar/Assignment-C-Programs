#include <graphics.h>
#include <conio.h>

int main() {
    int win = initwindow(800, 600, "Circle Example");

    setcolor(RED);
    circle(400, 300, 100);

    getch(); // Wait for a key press
    closegraph();

    return 0;
}
