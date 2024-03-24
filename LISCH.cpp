#include <iostream>
#include <vector>
using namespace std;
const int TABLE_SIZE = 11;

class LISCHHash{
private:
    vector<int>table;
public:
    LISCHHash() : table(TABLE_SIZE,-1){}

    void insert(int key){
        int index = key % TABLE_SIZE;

        if(table[index] == -1){
            table[index] = key;
        }else{
            while(table[index] != -1){
                index = (index + 1) % TABLE_SIZE;
            }
            table[index] = key;
        }
    }
    void display(){
        for (int i = 0; i <TABLE_SIZE; ++i) {
            cout << "Index " << i << ": ";
            if(table[i] != -1){
                cout << table[i];
            }
            cout << endl;
        }
    }

};

int main(){
    LISCHHash hashTable;


    hashTable.insert(2);
    hashTable.insert(3);
    hashTable.insert(4);
    hashTable.insert(5);
    hashTable.insert(56);
    hashTable.insert(65);
    hashTable.insert(32);
    hashTable.insert(37);
    hashTable.insert(29);
    hashTable.insert(18);
    hashTable.insert(22);

    hashTable.display();
}