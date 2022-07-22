#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

char convert(string s)
{
    if (s == "write")
    {
        return 'W';
    } 
    else if (s == "read")
    {
        return 'R';
    }
    else 
    {
        return 'X';
    }
}

bool check_in(char s, vector <char> v)
{
    bool f = false;
    for (auto i : v)
        if (s == i)
            return true;
    return false;
}

int main()
{
    int n, req;
    map <string, vector <char> > m;

    cin >> n;

    string chist;
    getline(cin, chist);
    char r;

    for (int i = 0; i < n; i++)
    {
        string s_cin;
        getline(cin, s_cin);
        string nakop;
        string name_file;
        int ll = 0;
        for (int j = 0; j < s_cin.length(); j++)
        {
            if (s_cin[j] == ' ' && ll == 0)
            {
                ll = 1;
                name_file = nakop;
                nakop = "";
            }
            else if (s_cin[j] == ' ')
            {
                m[name_file].push_back(r);
            } 
            else if (ll == 1)
            {
                r = s_cin[j];
            }
            else
                nakop += s_cin[j];
        }
        m[name_file].push_back(r);
    }

    /*for (auto i : m)
    {
        cout << i.first << "\n";
        for (auto j : i.second)
        {
            cout << j << " ";
        }
        cout << endl;
    }*/

    cin >> req;
    for (int i = 0; i < req; i++)
    {
        string request, file_req;
        cin >> request >> file_req;
        if (check_in(convert(request), m[file_req]))
            cout << "OK\n";
        else 
            cout << "Access denied\n";
    }

    return 0;
}