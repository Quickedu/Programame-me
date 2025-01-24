#include <iostream>
#include <string>
#include <sstream>
using namespace std;
 

void operacions () {
    int v = -1, d = -1, t = -1;
		int valor;
		char variable, aux;
		cin >> variable >> aux >> valor;
		if (variable == 'D') d = valor;
		else if (variable == 'V') v = valor;
		else t = valor;
		cin >> variable >> aux >> valor;
		if (variable == 'D') d = valor;
		else if (variable == 'V') v = valor;
		else t = valor;
		if (v == -1) cout << "V=" << d / t << '\n';
		else if (d == -1) cout << "D=" << v * t << '\n';
		else cout << "T=" << d / v << '\n';
}

int main (){
    int num;
    cin >> num;
    for (int i = 0; i<num; i++){
        operacions();
    }
    return 0;
}