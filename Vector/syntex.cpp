#include <iostream>
#include <vector>

using namespace std;

int main(){
    // vector<int> vac; // size = 0

    // vector<int> vac = {1,2,3}; // size = 3
    // cout << vac[0] << endl;

    vector<int> vac ;
    vac.push_back(0);
    vac.push_back(1);
    vac.push_back(2);
    vac.push_back(3);
    vac.push_back(4);

    cout << "size " << vac.size() << endl;
    cout << "capacity " << vac.capacity();


  return 0;
}