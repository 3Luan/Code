#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n <= 5)
    {
        cout << 0;
        return 0;
    }

    bool prime[n + 1];
    int count = 0;
    vector<int> arr;

    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == true)
        {
            arr.push_back(i);
        }
    }

    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int x = 1; x < sqrt(n); x++)
            {
                for (int y = 1; y < sqrt(n); y++)
                {
                    if (pow(arr[i], x) * pow(arr[j], y) <= n)
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }

    cout << count;

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     bool prime[n+1];
//     int arr[n+1];

//     int count=0;

//     memset(prime, false, sizeof(prime));
//     memset(arr, 0, sizeof(arr));

//     for (int p = 2; p <= n; p++) {
//         if (prime[p] != true) {
//             for (int i = p + p; i <= n; i+=p){
//                 prime[i] = true;
//                 arr[i]+=1;
//             }
//         }
//     }

//     for(int i=2; i<=n; i++){
//         if(arr[i]==2){
//             count++;
//         }
//     }

//     cout<<count;

//     return 0;
// }