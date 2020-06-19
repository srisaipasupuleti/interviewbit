vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector<int> result;
    int rows=A.size();
    int columns=A[0].size();
    int t=0;
    int b=rows-1;
    int l=0;
    int r=columns-1;
    int dir=0;
   
    LOOP:while(t<=b && l<=r){
        if(dir==0){
            for(int j=l;j<=r;j++){
                result.push_back(A[t][j]);
            }
            
            dir=1;
            t++;
            goto LOOP;
        }
        else if(dir==1){
            for(int i=t;i<=b;i++){
                result.push_back(A[i][r]);
            }
            
            dir=2;
            r--;
            goto LOOP;
        }
        else if(dir==2){
            for(int j=r;j>=l;j--){
                result.push_back(A[b][j]);
            }
           
            dir=3;
            b--;
            goto LOOP;
        }
        else if(dir==3) {
            for(int i=b;i>=t;i--){
                result.push_back(A[i][l]);
            }
            
            dir=0;
            l++;
            goto LOOP;
        }
        
    }
    return result;
}
