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

    void run(const vector<string>& commands) {
        for (const string& command : commands) {
            if (command == "f") forward();
            else if (command == "b") backward();
            else if (command == "l") left();
            else if (command == "r") right();
            else if (command == "u") up();
            else if (command == "d") down();
        }
    }

    void display() {
        cout << "Position: (" << x << ", " << y << ", " << z << ")\n";
        cout << "Direction: " << direction << "\n";
    }


public:
    int x, y, z;
    char direction;
};

int main() {
    // Initialize variables for user input
    vector<int> initialPosition(3); // Vector for initial position (x, y, z)
    char initialDirection;

    cout << "Enter initial X coordinate: ";
    cin >> initialPosition[0];

    cout << "Enter initial Y coordinate: ";
    cin >> initialPosition[1];

    cout << "Enter initial Z coordina0te: ";
    cin >> initialPosition[2];

    cout << "Enter initial direction (N/S/E/W): ";
    cin >> initialDirection;

    // Validate initialDirection
    if (initialDirection != 'N' && initialDirection != 'S' &&
        initialDirection != 'E' && initialDirection != 'W') {
        cout << "Invalid initial direction. Exiting program.\n";
        return 1;
    }

    // Initialize the Chandrayaan
    Chandrayaan obj(initialPosition[0], initialPosition[1], initialPosition[2], initialDirection);

   vector<string> commands;
    cout << "Enter commands (f=forward, b=backward, l=left, r=right, u=up, d=down),"
            " or enter stop to finish:\n";

    while (true) {
        string command;
        cout << "Enter command: ";
        cin >> command;

        if (command=="stop") {
            break;
        }

        commands.push_back(command);
    }
    // Execute commands and display position
    obj.run(commands);
    obj.display();

    return 0;
}