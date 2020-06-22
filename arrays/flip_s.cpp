vector<int> Solution::flip(string A) {
    int n=A.length();
    vector<int>s(n);
    for(int i=0;i<n;i++){
        if(A[i]=='0')s[i]=1;
        else s[i]=-1;
    }
    int sum=0,max=0;
    int lr=-1,rr=-1;
    int l=-1,r=-1;
    for(int i=0;i<n;i++){
        sum+=s[i];
        if(l==-1){
            if(sum>0){
                l=i;
            }
        }
        if(sum>max){
            max=sum;
            lr=l;
            rr=i;
        }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
        else if(sum<0){
            sum=0;
            l=-1;
        }
    }
    vector<int> res;
    if(lr==-1)return res;
    else {
        res.push_back(lr+1);
        res.push_back(rr+1);
        return res;
    }
    
}
