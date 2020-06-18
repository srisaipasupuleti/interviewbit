vector<int> Solution::maxset(vector<int> &A) {
    long sum=0;
    long max=INT_MIN;
    int size=A.size();
    vector<int > s;
    vector<int > maxs;
    for(int  i=0;i<size;i++){
        if(A[i]<0){
            sum=0;
            s.clear();
        }
        
        else {
            sum+=A[i];
            s.push_back(A[i]);
            if(sum>max){
                max=sum;
                maxs.clear();
                copy(s.begin(),s.end(),back_inserter(maxs));
            }
            else if(sum==max){
                if(s.size()>maxs.size()){
                    maxs.clear();
                    copy(s.begin(),s.end(),back_inserter(maxs));
                }
            }
        }
    }
    return maxs;
    
}

