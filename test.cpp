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

    return 0;
}