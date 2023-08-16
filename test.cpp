#include "chandrayaan.cpp"
#include <cassert>
#include <iostream>
using namespace std;
int main() {
    
    Chandrayaan obj(0, 0, 0, 'N');
    assert(obj.x == 0);
    assert(obj.y== 0);
    assert(obj.z == 0);
    assert(obj.direction == 'N');

    cout << "Chandrayaan constructor test passed!" << endl;

    obj.forward();
    assert(obj.x == 0);
    assert(obj.y == 1);
    assert(obj.z == 0);
    

    cout << "Chandrayaan forward movement test passed!" << endl;

    obj.backward();
    assert(obj.x == 0);
    assert(obj.y == 0);
    assert(obj.z == 0);


    cout << "Chandrayaan backward movement test passed!" << endl;

    obj.left();
    assert(obj.direction == 'W');
    assert(obj.x == 0);
    assert(obj.y == 0);
    assert(obj.z == 0);


    cout << "Chandrayaan left movement test passed!" << endl;

    obj.right();
    assert(obj.direction == 'N');
    assert(obj.x == 0);
    assert(obj.y == 0);
    assert(obj.z == 0);

    cout << "Chandrayaan right movement test passed!" << endl;

    obj.up();
    assert(obj.direction == 'U');
    assert(obj.x == 0);
    assert(obj.y == 0);
    assert(obj.z == 0);

    cout << "Chandrayaan up movement test passed!" << endl;

    obj.down();
    assert(obj.direction == 'D');
    assert(obj.x == 0);
    assert(obj.y == 0);
    assert(obj.z == 0);

    cout << "Chandrayaan down movement test passed!" << endl;
    return 0;
}