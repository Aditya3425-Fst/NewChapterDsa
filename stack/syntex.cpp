#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<int> s; 

    s.push(10); 
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;

    s.pop();
    cout << "Top after pop: " << s.top() << endl;

    cout << "Stack size: " << s.size() << endl;

    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;

    while(s.empty()){
        cout << "res" << endl;
    }

    return 0;
}
