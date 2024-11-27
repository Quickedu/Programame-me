#include <iostream>
using namespace std;

void casoDePrueba() {
    unsigned long x;
    cin >> x;
    if (x%2!=0){
        cout << x-1 << endl;
        return;
    }
    cout << x+1 << endl;
    return;
}

int main() {

  unsigned long numCasos;

  cin >> numCasos;
  for (unsigned long i = 0; i < numCasos; ++i) {
    casoDePrueba();
  }

  return 0;

}