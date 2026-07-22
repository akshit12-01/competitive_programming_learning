#include <bits/stdc++.h>

using namespace std;

bool func(int a, int b)
{
    // returning true means we want a before b ([a,b])
    // returning false means we want ([b,a])
    return (a < b);
}


//sorting
int main()
{
    vector<int> v;

    sort(v.begin(), v.end());   // Simple sort
    sort(v.rbegin(), v.rend()); // sort and reverse

    sort(v.begin(), v.end(), func); // you can also give your own requirement to sort

    vector<tuple<int, int, int>> tup;
    sort(tup.begin(), tup.end()); //(a,b,c)  first compare a's , then b's then c's

    // for structs
    struct P
    {
        int x, y;
        bool operator<(const P &p)  //!Assign order function here
        {
            if (x != p.x)
                return x < p.x;
            else
                return y < p.y;
        }
    };

    
}


//searching
//in sorted list
//searching x in array A(n elements)
// auto a = lower_bound(A,A+n,x);   //value atleast x
// auto b = upper_bound(A,A+n,x);   //value atmost x
// cout<<b-a;
//OR
//auto c = equal_range(A,A+n,x);
//cout<<c.second-c.first;