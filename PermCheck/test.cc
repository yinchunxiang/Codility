#include <iostream> 
#include <vector> 


using namespace std;


int main(int argc, const char *argv[])
{
    vector<int> a = {1,2,3,4};
    vector<int> b = {1,2, 2, 5};
    int result = 0;
    for (int i = 0; i < 4; ++i) {
        result ^= a[i];
        result ^= b[i];
    }
    cout << result << endl;
    
    return 0;
}


