#include <bits/stdc++.h>
using namespace std;

bool comp (const pair<string, unsigned int>& a, const pair<string, unsigned int>& b) {
    return a.second > b.second;
}

void inputto (map <string, unsigned int>& dicc){
    string input;
    cin >> input;
        auto ok = dicc.find(input);
        if (ok!=dicc.end()){
            dicc[input]++;
            return;
        }
        dicc.insert(make_pair(input,1));
}

string mayorque(map <string, unsigned int>& dicc){
    string gran;
    int num;
    vector <pair<string, unsigned int>> parelles(dicc.begin(), dicc.end());
    sort(parelles.begin(), parelles.end(), comp());

    for (int i=0 ; i<dicc.size() ; i++){
        
    }
    
    
    return gran;
}

int main (){
    map <string , unsigned int> dicc;
    long num;
    while (true){
        cin >> num;
        if (num==0){
            break;
        }
        for (int i=0 ; i<num ; i++){
            inputto(dicc);
        }
        mayorque(dicc);
    }

}