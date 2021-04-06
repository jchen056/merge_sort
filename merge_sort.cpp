

#include <iostream>
using namespace std;
#include<vector>
using std::vector;

void merge(const vector<int>& A,const vector<int>& B, vector<int>& C){
    for (size_t i=0;i<A.size();i++){
        C.push_back(A[i]);
    }
    for (size_t j=0;j<B.size();j++){
        C.push_back(B[j]);
    }
}

void mergesort(const vector<int>& A,const vector<int>& B, vector<int>& C){
    int a=A[0];
    int b=B[0];
    int i=0,j=0;//i is index for element in A;j is the index for element in B
    if (a<b){
        C.push_back(a);
        i++;}
    else if(a>b){
        C.push_back(b);
        j++;}
    else{
        C.push_back(a);
        i++;
        C.push_back(b);
        j++;
    }
    
    while (i<A.size() && j<B.size()){
        if (A[i]<B[j]){
            C.push_back(A[i]);
            i++;}
        else if (A[i]>B[j]){
            C.push_back(B[j]);
            j++;
        }
        else{
            C.push_back(A[i]);
            i++;
            C.push_back(B[j]);
            j++;
        }
       
        }
    while(i<A.size()){
            C.push_back(A[i]);
            i++;
        }
    while(j<B.size()){
        C.push_back(B[j]);
        j++;
    }
}
int main(){
    vector<int> A={2,4,5,9,13,17};
    vector<int> B={1,3,7,8,18};
    vector<int> C;
    mergesort(A,B,C);
    for (size_t a=0;a<C.size();a++){
        cout<<C[a]<<" ";
    }
    return 0;
}
