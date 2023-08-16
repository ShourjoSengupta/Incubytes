#include <iostream>
#include <vector>
using namespace std;

class Chandrayaan
{
public:
    Chandrayaan(int initialX, int initialY, int initialZ, char initialDirection)
        : x(initialX), y(initialY), z(initialZ), direction(initialDirection) {}

    void forward()
    {
        if (direction == 'N')
            y++;
        else if (direction == 'S')
            y--;
        else if (direction == 'E')
            x++;
        else if (direction == 'W')
            x--;
        else if (direction == 'U')
            z++;
        else if (direction == 'D')
            z--;
    }

    void backward()
    {
        if (direction == 'N')
            y--;
        else if (direction == 'S')
            y++;
        else if (direction == 'E')
            x--;
        else if (direction == 'W')
            x++;
        else if (direction == 'U')
            z--;
        else if (direction == 'D')
            z++;
    }
    void left() {
        if (direction == 'N') direction = 'W';
        else if (direction == 'S') direction = 'E';
        else if (direction == 'E') direction = 'N';
        else if (direction == 'W') direction = 'S';
        else if (direction == 'U') direction = 'N';
        else if (direction == 'D') direction = 'S';
    }
     void right() {
        if (direction == 'N') direction = 'E';
        else if (direction == 'S') direction = 'W';
        else if (direction == 'E') direction = 'S';
        else if (direction == 'W') direction = 'N';
        else if (direction == 'U') direction = 'N';
        else if (direction == 'D') direction = 'S';
    }

    void up() {
        if (direction == 'N' || direction == 'S'||direction == 'E' || direction == 'W'|| direction == 'D') direction = 'U';
    }

    void down() {
        if (direction == 'N' || direction == 'S'||direction == 'E' || direction == 'W'|| direction == 'U' ) direction = 'D';
    }



public:
    int x, y, z;
    char direction;
};