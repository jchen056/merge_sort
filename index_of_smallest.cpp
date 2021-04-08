

#include <iostream>
using namespace std;
#include<vector>
using std::vector;

int index_smallest(const vector<int> &V){
    int iMin=0;//assume the first number is the smallest 
    for(int i=1;i<V.size();i++){
        if (V[i]<V[iMin])
            iMin=i;
    }
    return iMin;
}
int main()
{   vector<int> V;
    int a;//store the input temporarily
    while(cin>>a){
        V.push_back(a);
    }
    int b=index_smallest(V);
    cout<<"the index of the smallest number is "<<b<<endl;

    return 0;
}
