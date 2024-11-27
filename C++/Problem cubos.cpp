#include <iostream>
using namespace std;

void casoDePrueba() {
  unsigned long long input;
  cin >> input;
  long long pow = input * input * input;
  long long pow2 = (input-2)*(input-2)*(input-2);
  cout << (pow-pow2) << endl;
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