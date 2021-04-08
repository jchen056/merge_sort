

#include <iostream>
using namespace std;
#include<vector>
using std::vector;

int index_smallest(const vector<int> &V,int start){
    int iMin=start;//assume the first number is the smallest 
    for(int i=start+1;i<V.size();i++){
        if (V[i]<V[iMin])
            iMin=i;
    }
    return iMin;
}

void swap(vector<int> &V,int i, int j){
    int temp=V[i];
    V[i]=V[j];
    V[j]=temp;
}


int main()
{   vector<int> V;
    int a;//store the input temporarily
    while(cin>>a){
        V.push_back(a);
    }
    
    for (int i=0;i<V.size()-1;i++){
        swap(V[i],V[index_smallest(V,i)]);
    }
    for (int j=0;j<V.size();j++)
        cout<<V[j]<<" ";
    return 0;
}
