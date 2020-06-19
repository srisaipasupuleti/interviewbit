vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> ans;
    int n=A.size();
    int x=A[0];
    for(int i=1;i<n;i++){
        x=x^A[i];
    }
    for(int i=1;i<=n;i++){
        x=x^i;
    }
    int a=0,b=0;
    int setbit=(x)&~(x-1);
    for(int i=0;i<n;i++){
        if(A[i]&setbit){
            a=a^A[i];
        }
        else b=b^A[i];
    }
    int aflag=1,bflag=1;
    for(int i=1;i<=n;i++){
        if(setbit&i){
            a=a^i;
            if(a==0)
                aflag=2;
        }
        else {
            b=b^i;
            if(b==0)
                bflag=2;
        }
    }
    for(int i=0;i<n;i++){
        if(A[i]==a){
            ans.push_back(a);
            ans.push_back(b);
            break;
        }
        else if(A[i]==b){
            ans.push_back(b);
            ans.push_back(a);
            break;
        }
    }
    return ans;
}
