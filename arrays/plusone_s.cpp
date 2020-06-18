void removezeros(vector<int> &A){
    while(A[0]==0){
        A.erase(A.begin());
    }
}


vector<int> Solution::plusOne(vector<int> &A) {
    reverse(A.begin(),A.end());
    int carry=0;
    int index=0;
    A[index]+=1;
    if(A[index]==10){
        A[index]=0;
        carry=1;
        while(carry==1){
            if(index==A.size()-1){
                A.push_back(1);
                break;
            }
            index++;
            A[index]+=1;
            carry=0;
            if(A[index]==10){
                A[index]=0;
                carry=1;
            }
        }
        reverse(A.begin(),A.end());
        removezeros(A);
        return A;
    }
    else{
        reverse(A.begin(),A.end());
        removezeros(A);
        return A;
    }
}
