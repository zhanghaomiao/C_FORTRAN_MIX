#include <list>
#include <iostream>

using namespace std;

extern "C" void add_i_(int array[3][3])
{
    list<int> a;
    for(int i=0; i<3; i++)
        a.push_back(i*10);
    for(int i =0; i<3; i++)
    {
        int n = a.front();
        cout << n << endl;
        a.pop_front();
        for(int j =0; j< 3; j++)
        {
            array[j][i] += n;
        }
    }
}
