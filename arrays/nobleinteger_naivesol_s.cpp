//naive sol

int lsv(vector<int> &A,int i){
    if(i==0)return 0;
    else{
        int j=i-1;
        while(j>=0){
            if(A[j]>A[i])
            return j;
        }
        return 0;
    }
}


int rsv(vector<int> &A,int i,int size){
    if(i==size-1)return 0;
    else{
        int j=i+1;
        while(j<size){
            if(A[j]>A[i])return j;
        }
        return 0;
    }
}

int Solution::maxSpecialProduct(vector<int> &A) {
    int l,r;
    long max=0,prod;
    int size=A.size();
    for(int i=0;i<size;i++){
        l=lsv(A,i);
        r=rsv(A,i,size);
        prod=(l*r);
        if(prod>max)max=prod;
    }
    return max%1000000007;
}
