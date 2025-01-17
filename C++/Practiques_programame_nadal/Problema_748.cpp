#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <vector>
#include <limits>
using namespace std;

bool interrogante (string input){
    if (input[0]=='?'){
        return true;
    }
    return false;
}

int main (){
    map <string, int> dicc;
    int num;
    int valor = 0;
    int i = 0;
    bool ok = true;
    cin >> num;
    string algo;
    vector <string> anticalgo;
    for (int i=0; i<num ; i++){
        string input;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline (cin, input);
        stringstream ss (input);
        if (input == "0") break;
        anticalgo.clear();
        while (ss >> algo){
            if (interrogante(input)){
                valor += dicc[algo];
                dicc.erase(algo);
                continue;
            }
            anticalgo.push_back(algo);
            ok=false;
        }
        if (ok){
            if (dicc.find(anticalgo[0])!=dicc.end()){
                dicc[anticalgo[0]]+stoi(anticalgo[1]);
                continue;
            }
            dicc.insert({anticalgo[0],stoi(anticalgo[1])});
            continue;
        }
        cout << valor << endl;
    }
    int res;
    cin >> res;
    cout << "---" << endl;
}