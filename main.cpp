#include <iostream>
using namespace std;
int arr[4] = {8, 3, 6, 2};
void arraySubscript();
void arrayName();
void subscriptNotation();
void offsetNotation();
int main(){
    
    arraySubscript();
    arrayName();
    subscriptNotation();
    offsetNotation();
    
    return 0;
}
void arraySubscript(){
    cout << "Array subscript notation\n";
    for(int i = 0; i < 4; i++){
        cout << "a[" << i <<"] = " << arr[i] << endl; 
    }
}
void arrayName(){
    int *ptr = arr;
    cout << "Pointer/offset notation where\nthe pointer is the array name\n";
    for(int i = 0; i < 4; i++){
        cout << "*(a + " << i <<") = " << *(ptr + i) << endl; 
    }
}
void subscriptNotation(){
    int *cPtr = arr;
    cout << "Pointer subscript notation\n";
    for(int i = 0; i < 4; i++){
        cout << "cPtr[" << i <<"] = " << cPtr[i] << endl; 
    }
}
void offsetNotation(){
    int *cPtr = arr;
    cout << "Pointer/offset notation\n";
    for(int i = 0; i < 4; i++){
        cout << "*(cPtr + " << i <<") = " << *(cPtr + i) << endl; 
    }
}