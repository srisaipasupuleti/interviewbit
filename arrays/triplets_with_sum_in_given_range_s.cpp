int Solution::solve(vector<string> &S) {
    int size=S.size();
    vector<float> A;
    for(int i=0;i<size;i++){
        A.push_back(stof(S[i]));
    }
    float a=A[0],b=A[1],c=A[2];
    float sum=0;
    for(int i=3;i<size;i++){
        sum=a+b+c;
        if(sum>=1&&sum<=2)return 1;
        else if(sum>2){
            if(a>b&&a>c){
                a=A[i];
            }
            else if(b>a&&b>c){
                b=A[i];
            }
            else c=A[i];
        }
        else if(sum<1){
            if(a<b&&a<c)a=A[i];
            else if(b<a&&b<c)b=A[i];
            else c=A[i];
        }
    }
    sum=a+b+c;
    if(sum>=1&&sum<=2)return 1;
    else return 0;
}
