#include "Finder.h"
using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;
        size_t catchup=0;
        for(size_t i = 1; i <= s2.size(); i++) {
            string prefix = s2.substr(0, i);
            size_t found = s1.find(prefix, catchup);
            if (found != string::npos) {
                result.push_back(found);
                catchup = found;
            } else {
                for(size_t j = i; j <= s2.size(); j++) {
                    result.push_back(-1);
                }
                break;
            }
        }
        return result;
    }


/*
int main()
{
    Finder f1;
    vector<int> result = f1.findSubstrings("4634554567","45689");
    for (int i =0; i<result.size();++i)
    {
        cout << result[i] << endl;
   } 
}
*/
