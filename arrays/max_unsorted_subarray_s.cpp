vector<int> Solution::subUnsort(vector<int> &A) {
    int size=A.size();
    int start=-1,end=-1;
    vector<int>B;
    B=A;
    sort(B.begin(),B.end());
    for(int i=0;i<size;i++){
        B[i]-=A[i];
        if(B[i]!=0){
            if(start==-1)start=i;
            else end=i;
        }
        
    }
    vector<int> ans;   
    if(start==-1)ans.push_back(-1);
    else {
        ans.push_back(start);
        ans.push_back(end);
    }
    return ans;
}
