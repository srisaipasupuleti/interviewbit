 bool comp(Interval a ,Interval b){
     return a.start<b.start;
 }
 
 
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    
    intervals.push_back(newInterval);
    sort(intervals.begin(),intervals.end(),comp);
    vector<Interval> result;
    result.push_back(intervals[0]);
    for(int i=1;i<intervals.size();i++){
        if(intervals[i].start<=result[result.size()-1].end){
            result[result.size()-1].end=max(result[result.size()-1].end,intervals[i].end);
        }
        else result.push_back(intervals[i]);
    }
    return result;
}