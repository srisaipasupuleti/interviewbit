

int midmax(const vector<int> &A,int left,int mid,int right){
    if(left==right)return A[left];
    int sum=0;
    int max=INT_MIN;
    for(int i=mid;i>=left;i--){
        sum+=A[i];
        if(sum>max)max=sum;
    }
    sum=max;
    for(int i=mid+1;i<=right;i++){
        sum+=A[i];
        if(sum>max)max=sum;
    }
    return max;
}


int max(int a,int b){
    return a>b?a:b;
}

int msa(const vector<int> &A,int left ,int right){
    if(left==right) return A[left];
    else if(left<right){
        int mid=(left+right)/2;
        int lm,rm,mm;
        lm=msa(A,left,mid);
        rm=msa(A,mid+1,right);
        mm=midmax(A,left,mid,right);
        return max(max(lm,rm),mm);
    }
}


int Solution::maxSubArray(const vector<int> &A) {
    int size=A.size();
    int left=0;
    int right=size-1;
    int ans=msa(A,left,right);
    return ans;
}




