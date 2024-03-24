#include <iostream>
#include <vector>
#include <list>
using namespace std;

class LICHHash{
private:
    const int TABLE_SIZE = 11;
    vector<list<int>>table;

    int hashFunction(int key){
        return key % TABLE_SIZE;
    }
public:
    LICHHash() : table(TABLE_SIZE){}

    void insert(int key){
        int index = hashFunction(key);

        while(!table[index].empty()){
            index = (index + 1) % TABLE_SIZE;
        }
        table[index].push_back(key);
    }

    void display(){
        for (int i = 0; i < TABLE_SIZE; ++i) {
            cout << "Index " << i << ": ";
            for(int key : table[i]){
                cout << key << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    LICHHash hashTable;

    hashTable.insert(22);
    hashTable.insert(42);
    hashTable.insert(32);
    hashTable.insert(112);
    hashTable.insert(562);
    hashTable.insert(12);
    hashTable.insert(72);

    hashTable.display();
}