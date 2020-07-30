#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
struct obj
{
    ll val,wt;
    obj(ll val,ll wt):val(val),wt(wt)
    {}
};
bool pred(obj a,obj b)
{
    double r1 = (double)a.val/a.wt;
    double r2 = (double)b.val/b.wt;
    return r1 > r2;
}

// Main greedy function to solve problem
double fractionalKnapsack(int W, struct Item arr[], int n)
{
    //    sorting Item on basis of ratio
    sort(arr, arr + n, cmp);

    //    Uncomment to see new order of Items with their ratio
    /*
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].value << "  " << arr[i].weight << " : "
             << ((double)arr[i].value / arr[i].weight) << endl;
    }
    */

    int curWeight = 0;  // Current weight in knapsack
    double finalvalue = 0.0; // Result (value in Knapsack)

    // Looping through all Items
    for (int i = 0; i < n; i++)
    {
        // If adding Item won't overflow, add it completely
        if (curWeight + arr[i].weight <= W)
        {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }

        // If we can't add current Item, add fractional part of it
        else
        {
            int remain = W - curWeight;
            finalvalue += arr[i].value * ((double) remain / arr[i].weight);
            break;
        }
    }

    // Returning final value
    return finalvalue;
}
int main()
{
    ll n,cap;cin>>n>>cap;
    vector< pair<ll,ll> >items;
    for(int i =0;i<n;i++)
    {
        ll val,wt;cin>>val>>wt;
        items.push_back({val,wt});
    }
    cout<<fixed<<setprecision(4)<<knapsack(items,n,cap)<<endl;
}

