int compare(string a,string b){
    string pre=a.append(b);
    string suc=b.append(a);
    return pre.compare(suc)>0?1:0;
} 



string Solution::largestNumber(const vector<int> &A) {
    vector<string> B;
    for(auto x:A){
        B.push_back(to_string(x));
    }
    sort(B.begin(),B.end(),compare);
    string result;
    for(auto x:B){
        result+=x;
    }
    int index=0;
    while(result[index]=='0')index++;
    if(index==result.length())result="0";
    return result;
}
