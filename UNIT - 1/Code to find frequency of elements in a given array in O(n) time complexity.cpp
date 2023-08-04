/* Code to find frequency of elements in a given array in O(n) time complexity */
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void freq(vector<int>& v)
{
    unordered_map<int,int> mp;
    for(int i=0;i<v.size();i++)
    mp[v[i]]++;
    
    std::unordered_map<int,int>::iterator it=mp.begin();
    while(it!=mp.end())
    {
        cout<<it->first<<" -> "<<it->second<<endl;
        it++;
    }
}
int main()
{
    int n;
    cout<<"Enter size of a vector - ";
    cin>>n;
    
    vector<int> v(n);
    cout<<"Enter "<<n<<" elements of a vector ";
    
    for(int i=0;i<n;i++)
    cin>>v[i];
    
    freq(v);

    return 0;
}

