#include <bits/stdc++.h>
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout<< "Hello, CLion"
             << std::endl;
    vector<int> v{1,2,3,4,5,6};
    copy(v.begin(), v.end(), ostream_iterator<int>(cout," "));



    return 0;
}

