#include <iostream>
#include <vector>

using namespace std;
int main ()
{
    vector<int> vect = {5};
    int target = 4;
    int left = 0;
    int right = vect.size() - 1;
    int size = vect.size();
    int step = 0;
    while (left <= right && right < size && left < size) {
        int mid = left + (right - left)/2;
        cout<<mid<<" ";
        if(vect[mid] > target){
            right = mid - 1;
        }else if (vect[mid] < target){
            left  = mid + 1;
        } else {
            cout<<"answer "<<mid;
            break;
        }
        step++;
        if(step>10){
            break;
        }
    }
    cout<<"-1";
    return 0;
}