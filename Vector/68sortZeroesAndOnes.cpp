// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//   vector<int> arr{0, 0, 1, 1, 0, 1, 1, 0, 1};
//   //vector<int> arr{0, 1, 0, 1, 1, 0, 1, 0, 1,1};

//   int start = 0;
//   int end = arr.size()-1;
//   int i = 0;
//   while(start <= end){
//     if(arr[i] == 0){
//       swap(arr[start],arr[i]);
//       i++;
//       start++;
//     }
//     if(arr[i] == 1){
//       swap(arr[i],arr[end]);
//       end--;
//     }
//   }
//    for(auto value : arr){
//     cout<<value<<" ";
//    }
//    cout<<endl;
//   return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{
   // vector<int> arr{0, 0, 1, 1, 0, 1, 1, 0, 1};
     vector<int> arr{0, 1, 0, 1, 1, 0, 1, 0, 1,1};
    int start = 0;
    int end = arr.size() - 1;
    
    while (start < end) {
        if (arr[start] == 1 && arr[end] == 0) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        } else {
            if (arr[start] == 0) start++;
            if (arr[end] == 1) end--;
        }
    }

    for (auto value : arr) {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}

