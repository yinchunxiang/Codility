#include <iostream> 
#include <vector> 

using namespace std;


int solution(vector<int> &A) {
    int size = A.size();
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result += A[i] - i - 1;
    }
    return size + 1 - result;
}

int main(int argc, const char *argv[])
{
    {
        vector<int> v= {2,3,1,5};
        cout << solution(v) << endl;
    }
    {
        vector<int> v= {2,3,1,4};
        cout << solution(v) << endl;
    }
    {
        vector<int> v= {2, 3, 4, 5};
        cout << solution(v) << endl;
    }
    {
        vector<int> v= {};
        cout << solution(v) << endl;
    }
    return 0;
}

