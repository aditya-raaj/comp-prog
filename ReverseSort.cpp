#include <bits/stdc++.h>
using namespace std;

#define ll  long long int
#define vi  vector<int>
#define vll vector<long long int>
#define fastIO() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int reversesort_cost(vi &L){
    int cost=0;
    for(int i=0;i<L.size()-1;i++){
        // Finding the minimum element
        int m=*min_element(L.begin()+i,L.end());
        // Finding the index of the element 
        auto pos = find(L.begin(),L.end(),m);
        // Reverse the elements
        reverse(L.begin()+i,pos+1);
        // Determining the cost
        cost += distance(L.begin(),pos) - i + 1;
    }
    return cost; 
}


int main() {
    fastIO(); // Fast I/O
    std::ios::sync_with_stdio(false);

    int t;
    cin >> t; // Comment this line if there's only one test case

    vi L;

    while (t--) {
        int n;
        cin>>n;
        
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            L.push_back(ele);
        }
        cout<<reversesort_cost(L)<<endl;
        L.erase(L.begin(),L.end());
    }

    return 0;
}

