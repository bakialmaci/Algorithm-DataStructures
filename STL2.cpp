#include <iostream>
#include <vector> // Vector
#include <algorithm> // Sıralama (sort) algoritması

using namespace std;

int main()
{

    vector<string> kisiler;
    kisiler.push_back("Yusuf SEZER");
    kisiler.push_back("Ramazan SEZER");
    kisiler.push_back("Sinan SEZER");
    kisiler.push_back("Mehmet SEZER");

    for(auto current : kisiler)
    {
        cout << current << endl;
    }

    sort(kisiler.begin(), kisiler.end());

    for(auto current : kisiler)
    {
        cout << current << endl;
    }

    return 0;
}