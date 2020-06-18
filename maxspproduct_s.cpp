vector<int> nxtgreaterinleft(vector<int> &A){
    stack<int> s;
    int size=A.size();
    vector<int> leftindex(size,0);
    for(int i=size-1;i>=0;i--){
        while(!s.empty()&&A[i]>A[s.top()-1]){
            int temp=s.top();
            s.pop();
            leftindex[temp-1]=i+1;
        }
        s.push(i+1);
    }
    return leftindex;
}

vector<int> nxtgreaterinright(vector<int> &A){
    int size=A.size();
    stack<int> s;
    vector<int> rightindex(size,0);
    for(int i=0;i<size;i++){
        while(!s.empty()&&A[i]>A[s.top()-1]){
            int temp=s.top();
            s.pop();
            rightindex[temp-1]=i+1;
        }
        s.push(i+1);
    }
    return rightindex;
}

int max(int a,int b){
    return a>b?a:b;
}

int Solution::maxSpecialProduct(vector<int> &A) {
    vector<int> left=nxtgreaterinleft(A);
    vector<int> right=nxtgreaterinright(A);
    int result=INT_MIN;
    int size=A.size();
    for(int i=1;i<=size;i++){
        result=max(result,left[i]*right[i]);
    }
    return result;
}
