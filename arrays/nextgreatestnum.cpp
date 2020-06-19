#include<bits/stdc++.h>
using namespace std;
void input(vector<int> &a,int size){
    int i;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }

}

void ngn(vector<int> &a,int size){
    vector<int> b(size,0);
    stack<int> s;
    for(int i=0;i<size;i++){
        while(!s.empty()&&a[i]>s.top()){
            int temp=s.top();
            s.pop();
            b[temp]=a[i];
        }
        s.push(a[i]);
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" "<<b[a[i]]<<"\n";
    }

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int size;
    cin>>size;
    vector<int> a(size);
    input(a,size);
    ngn(a,size);
    return 0;
}