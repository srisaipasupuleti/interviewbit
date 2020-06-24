bool Solution::hotel(vector<int> &A, vector<int> &B, int c) {
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int i=0,j=0;
    while(i<A.size()&&j<B.size()){
        if(A[i]<B[j]){
            if(c==0)return false;
            else {
            c--;i++;    
            }
        }
        else{
            i++;j++;
        }
    }
    return true;
}
