// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int n,k;
//    cin>>n>>k;
//    int arr[n];
//    for(int i=0;i<n;i++)
//    {
//     cin>>arr[i];
//    }
//    int length=0;
//    if(n%k==0)
//    {
//      length=n/k;
//      for(int i=0;i<length;i++)
//      {
//       int min=INT_MAX;
//       for(int j=0;j<k;j++)
//       {
//         if(arr[j]<min)
//         {
//           min=arr[j];
//         }

//       }
//       cout<<min<<" ";
//      }
//    }
//   //  else
//   //  {
//   //   int ext=(n%k);
//   //   length=(n/k)+ext;
//   //  }
   

//   return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm> // for min_element
using namespace std;
int main() {
    int N, K;
    cin >> N >> K;
    vector<int> arr(N);

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i += K) {
        int end = min(i + K, N);
        int mn = arr[i];
        for (int j = i + 1; j < end; ++j) {
            if (arr[j] < mn) {
                mn = arr[j];
            }
        }
        cout << mn << " ";
    }

    return 0;
}