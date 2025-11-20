#include <iostream>
using namespace std;
int main()
{
    for (int z = 4, multi = 2; z <= 30; multi = multi * z, z = z + 2)
    {
        cout << "\n"
             << multi << "\n\t\t\t" << z;
    }

    return 0;
}
