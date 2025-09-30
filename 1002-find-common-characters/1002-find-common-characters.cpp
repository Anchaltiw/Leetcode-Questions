class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>minfreq(26,INT_MAX);
        for(int i=0;i<words.size();i++){
            string word=words[i];
        vector<int>freq(26,0);
        for(char c:word){
            freq[c-'a']++;
        }
        for(int i=0;i<26;i++){
            minfreq[i]=min(minfreq[i],freq[i]);
        }
        }
        vector<string>result;
        for(int i=0;i<26;i++){
            for(int j=0;j<minfreq[i];j++){
               result.push_back(string(1,'a'+i));
            }
        }
        return result;
    }
};