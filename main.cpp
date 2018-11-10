#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string twinString(string a, string b)
{
    string a_odd,b_odd,a_even,b_even;
    if(a.size()==b.size())
    {
        for(int i=0;i<a.size();++i)
        {
            if(i&1)
            {
                a_odd+=a[i];
                b_odd+=b[i];
            }
            else
            {
                a_even+=a[i];
                b_even+=b[i];
            }
        }
        sort(a_odd.begin(),a_odd.end());
        sort(b_odd.begin(),b_odd.end());
        if(a_odd==b_odd)
        {
            sort(a_even.begin(),a_even.end());
            sort(b_even.begin(),b_even.end());
            if(a_odd==b_odd) return "Yes";
            else return "No";
        }
        else return "No";
    }
    else return "No";
}
int main ()
{
    vector< string> a {"abcd","abcdefg","atgcag"};
    vector< string> b {"cdab","edagcb","gcatag"};
    vector< string> r;
if(a.size()==b.size())
    for(int i=0;i<a.size();++i)
    {
        r.push_back(twinString(a[i],b[i]));
    }
for (vector< string>::iterator it=r.begin(); it!=r.end(); ++it)
       cout << *it<<" ";

  return 0;
}
