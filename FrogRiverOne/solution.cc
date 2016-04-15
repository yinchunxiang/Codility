#include <iostream> 
#include <vector> 
#include <unordered_set> 

using namespace std;

int solution(int X, vector<int> &A) {
    unordered_set<int> myset;
    for (int i = 0; i < A.size(); ++i) {
        myset.insert(A[i]);
        if (myset.size() == X) {
            return i;
        }
    }
    return -1;
}

int main(int argc, const char *argv[])
{
    {
        vector<int> v = {1,3,1,4,2,3,5,4};
        cout << solution(5, v) << endl;
    }  

    
    return 0;
}



