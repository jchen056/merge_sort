
#include <iostream>
#include<vector>
using namespace std;

void swap(vector<int> &V,int i, int j){
    int temp=V[i];
    V[i]=V[j];
    V[j]=temp;
}

void reverseOdds(vector<int> &v) { 
        for (unsigned i=0, j=v.size()-1; i<j; i++, j--) {
                while (v[i]%2 == 0)
                        i++;
                while (v[j]%2 == 0)
                        j--;
                if(i>j)
                    break;
                if(v[i]%2!=0 && v[j]%2!=0)
                    swap(v, i, j);
                    
        }
}

int main()
{
    vector<int> V={5,1,2,7,8,3,12};
    for(int i=0;i<V.size();i++){
        cout<<V[i]<<" ";
    }
    cout<<endl;
    reverseOdds(V);
    for(int i=0;i<V.size();i++){
        cout<<V[i]<<" ";
    }

    return 0;
}
