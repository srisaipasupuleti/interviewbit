int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int p,size=A.size();
    for(int i=0;i<size;i++){
        if(A[i]<0)continue;
        p=A[i];
        int index=i,prev;
        while(index<size && A[index]==p){
            prev=index;
            index++;
        }
        if(size-1-prev==p){
            return 1;
        }
    }
    return -1;
}
