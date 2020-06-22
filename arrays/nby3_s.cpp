//used moores voting algorithm which gives us linear time solution 
//for naive solution we get o(n^2) solution

int Solution::repeatedNumber(const vector<int> &A) {
    
    int n=A.size();
    int first=INT_MAX,second=INT_MAX;
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(first==A[i])count1++;
        else if(second==A[i])count2++;
        else if(count1==0){
            first=A[i];
            count1++;
        }
        else if(count2==0){
            second=A[i];
            count2++;
        }
        
        else {
            count1--;count2--;
        }
    }
    count1=0;count2=0;
    for(int i=0;i<n;i++){
        if(A[i]==first)count1++;
        else if(A[i]==second)count2++;
    }
    if(count1>n/3)return first;
    else if(count2>n/3)return second;
    else return -1;
}
