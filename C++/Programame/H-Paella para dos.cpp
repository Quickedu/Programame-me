#include <iostream>
#include <vector>
using namespace std;

void X(int x, unsigned int right, unsigned int left){
    if (x<0){
        left++;
        return;
    }
    right++;
}

void Y(int y, unsigned int top, unsigned int bot){
    if (y<0){
        bot++;
        return;
    }
    top++;
}

int main() {
    unsigned int numCasos;

    
    while (true){
        unsigned int right=0;
        unsigned int left=0;
        unsigned int top=0;
        unsigned int bot=0;
        int m;
        int g;
        int x;
        int y;
        cin >> m;
        cin >> g;
        if ((g&m) == 0){
            break;
        }
        for (int i=0;i<m;i++){
            cin >> x;
            cin >> y;
            X(x, right, left);
            Y(y, top, bot);
        }
        for (int i=0;i<g;i++){
            cin >> x;
            cin >> y;
            X(x, right, left);
            Y(y, top, bot);
        }
        if (top==bot || right==left){
            cout << "SI" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
  
    return 0;
}