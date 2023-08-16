#include <iostream>
#include <vector>
using namespace std;

class Chandrayaan {
public:
    Chandrayaan(int initialX, int initialY, int initialZ, char initialDirection)
        : x(initialX), y(initialY), z(initialZ), direction(initialDirection) {}

void forward() {
        if (direction == 'N') y++;
        else if (direction == 'S') y--;
        else if (direction == 'E') x++;
        else if (direction == 'W') x--;
        else if (direction == 'U') z++;
        else if (direction == 'D') z--;
    }

public:
    int x, y, z;
    char direction;
};