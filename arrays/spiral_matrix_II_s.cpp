vector<vector<int> > Solution::generateMatrix(int n) {
    vector<vector<int>> a(n,vector<int>(n));
    int top=0,left=0,right=n-1,bottom=n-1;
    int dir=0;
    int element=1;
    while(top<=bottom && left<=right){
        if(dir==0){
            for(int j=left;j<=right;j++){
                a[top][j]=element;
                element++;
            }
            top++;
            dir=1;
        }
        else if(dir==1){
            for(int i=top;i<=bottom;i++){
                a[i][right]=element;
                element++;
            }
            right--;
            dir=2;
        }
        else if(dir==2){
            for(int j=right;j>=left;j--){
                a[bottom][j]=element;
                element++;
            }
            bottom--;
            dir=3;
        }
        else if(dir==3){
            for(int i=bottom;i>=top;i--){
                a[i][left]=element;
                element++;
            }
            left++;
            dir=0;
        }
    }
    return a;
}