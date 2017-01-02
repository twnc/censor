#include "std_lib_facilities.h"
using namespace std;

vector<string> forbidden = {"Shit", "shit", "fuck", "Fuck", "bastard", "Bastard"};

bool word_forbidden(string x)
{
    bool bad = 0;
    for (int i = 0; i < forbidden.size(); ++i)
        if (x == forbidden[i])
            bad = 1;

    return bad;
}

string censor_word(string x)
{
    for (int i = 1; i < x.size(); ++i)
        x[i] = '*';

    return x;
}

int main()
{
    vector<string> original;
    for (string words; cin >> words;)
        original.push_back(words);

    //Creates parallel censored vector called 'clean'
    vector<string> clean = original;

    for (int i = 0; i < clean.size(); ++i)
    {
        if(word_forbidden(clean[i]))
            clean[i] = censor_word(clean[i]);
    }

    //Displays censored vector 'clean'
    for (int i = 0; i < clean.size(); ++i)
        cout << clean[i] << ' ';
    cout << '\n';

    return 0;
}
