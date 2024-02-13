#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{3, 4, 6, 2, 1, 5, 7, 8, 9};
    vector<int> brr{2, 4, 6, 10, 11};
    vector<int> vec;

    // Copy arr to vec
    for (int i = 0; i < arr.size(); i++)
    {
        vec.push_back(arr[i]);
    }

    // Insert elements from brr to vec if they are not already present
    for (int j = 0; j < brr.size(); j++)
    {
        bool found = false;
        for (int k = 0; k < vec.size(); k++)
        {
            if (brr[j] == vec[k])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            vec.push_back(brr[j]);
        }
    }

    cout << "Union of these two arrays is: " << endl;
    for (auto value : vec)
    {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}
