vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    int size=A.size();
    for(int i=0;i<size-1;i+=2){
        int temp=A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
    }
    return A;
}
