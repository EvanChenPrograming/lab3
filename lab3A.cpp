//

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
    int n,k,sum=0;
    ifstream openfile("file.in",ios::in);
    if(!openfile){
        cerr << "Failed opening" << endl;
        exit(1);
    }
    openfile>>n;
    vector<int>weight(n);
    for (int i=0; i<n; i++) {
        openfile>>k;
        weight[i]=k;
    }
    sort(weight.begin(),weight.end());
    for (int i=n-1; i>n-6; i--) {
        sum+=weight[i];
    }
    cout<<sum<<endl;
    
    
    return 0;
}
