#include <iostream>
using namespace std;

int main(){
    long int key = 123456789;
    int addressSpace = 1000;

    for (int i = 0; i < 3; ++i) {
        key = (key / addressSpace) * (key % addressSpace);

        if(key < 0){
            key = -key;
        }
        cout << "Fold " << i+1 << ": " << key << endl;
    }
    return 0;
}