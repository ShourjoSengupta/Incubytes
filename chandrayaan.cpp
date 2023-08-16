#include <iostream>
#include <vector>
using namespace std;

class Chandrayaan {
public:
    Chandrayaan(int initialX, int initialY, int initialZ, char initialDirection)
        : x(initialX), y(initialY), z(initialZ), direction(initialDirection) {}


public:
    int x, y, z;
    char direction;
};