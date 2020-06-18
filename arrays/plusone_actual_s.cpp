void removezeros(vector<int> &A){
    while(A[0]==0){
        A.erase(A.begin());
    }
}


vector<int> Solution::plusOne(vector<int> &A) {
    reverse(A.begin(),A.end());
    vector<int> ans;
    int carry=1;
    int index=0;
    int sum;
    for(int i=0;i<A.size();i++){
        sum=A[i]+carry;
        ans.push_back(sum%10);
        carry=sum/10;
    }
    while(carry){
        ans.push_back(carry%10);
        carry/=10;
    }
    reverse(ans.begin(),ans.end());
    removezeros(ans);
    return ans;
}
