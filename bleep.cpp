#include "std_lib_facilities.h"
using namespace std;

int main()
{
    vector<string> original;
    for (string words; cin >> words;)
        original.push_back(words);

    vector<string> forbidden = {"Shit", "shit", "fuck", "Fuck", "bastard", "Bastard"};

    //Creates parallel censored vector called 'clean'
    vector<string> clean = original;
    for (int i = 0; i < clean.size(); ++i)
    {
        for (int i2 = 0; i2 < forbidden.size(); ++i2)
        {
            if (clean[i] == forbidden[i2])
            {
                for (int i3 = 1; i3 < forbidden[i2].size(); ++i3)
                {
                    clean[i][i3] = '*';
                }
            }
        }
    }

    //Displays censored vector 'clean'
    for (int i = 0; i < clean.size(); ++i)
        cout << clean[i] << ' ';
    cout << '\n';

    return 0;
}
