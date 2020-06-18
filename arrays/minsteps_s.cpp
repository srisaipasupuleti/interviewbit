int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int d1,d2;
    int size=A.size();
    int sum=0;
    for(int index=0;index<size-1;index++){
        d1=abs(A[index+1]-A[index]);
        d2=abs(B[index+1]-B[index]);
        if(d1>d2){
            sum+=d1;
        }
        else sum+=d2;
    }
    return sum;
    
    
}

