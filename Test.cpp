#include <iostream>
#include <string>
using namespace std;
int main() {
    string array[5] = {"459", "523", "871", "135", "012"};
    string temp;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5 - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}