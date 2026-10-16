// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int main() {
    float a, b;
char omtk;
    
    cin >> a >> omtk >> b;
    
switch (omtk) {
    case '+':
    cout << a + b; break;
    case '-':
    cout << a - b; break;
    case '*':
    cout << a * b; break;
    case '/':
    if (b !=0) cout << a / b;
    else cout << "Tidak dapat membagi dengan nol";
    
}
   
}

