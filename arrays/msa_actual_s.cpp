int Solution::maxSubArray(const vector<int> &A) {
    int sum=0,max=INT_MIN;
    int size=A.size();
    for(int i=0;i<size;i++){
        sum+=A[i];
        if(sum>max)max=sum;
        if(sum<0)sum=0;
    }
    return max;
}

