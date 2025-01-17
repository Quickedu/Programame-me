#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void casoDePrueba() {
    string paraula;
    cin >> paraula;
    for (auto& x : paraula){
        x = tolower(x);
    }
    if (paraula == "colgadas"){
        cout << "Bien" << endl;
        return;
    }
    cout << "Mal" << endl;
}

int main() {
    unsigned int numCasos;

    cin >> numCasos;
    for (unsigned int i = 0; i < numCasos; ++i) {
        casoDePrueba();
    }
  
    return 0;
}