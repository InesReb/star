
#include <iostream>

using namespace std;

void star(int s)
{

    for (int i = 0; i < s; i++)
    {
        for (int j = i; j < s - 1; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < s - 1; k++)
        {
            cout << "*" << endl;
        }
    }
}
int main()
{
    int s;

    cout << "Donner la valeur de s : " << endl;
    cin >> s;
    s = 1 + (s * 2);
    cout << s << endl;
    star(s);
    return 0;
}
