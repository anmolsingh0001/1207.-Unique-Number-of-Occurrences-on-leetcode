class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        map<int,int> order;
        for(int i=0; i<arr.size(); i++){
            order[arr[i]]++;
        }
        vector<int> result;
        for(auto j:order){
            result.push_back(j.second);
        }
        sort(result.begin(),result.end());
        for(int k=0; k<result.size()-1; k++){
            if(result[k]==result[k+1]){
                return false;
            }
        }
        return true;
        return {};
    }
};