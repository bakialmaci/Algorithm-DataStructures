#include <iostream>
#include <vector> // Vector
#include <algorithm> // Sıralama (sort) algoritması

using namespace std;

int main()
{

    vector<int> sayilar;
    sayilar.push_back(10);
    sayilar.push_back(30);
    sayilar.push_back(60);
    sayilar.push_back(70);

    for(auto current : sayilar)
    {
        cout << current << endl;
    }

    sort(sayilar.begin(), sayilar.end());

    for(auto current : sayilar)
    {
        cout << current << endl;
    }

    return 0;
}