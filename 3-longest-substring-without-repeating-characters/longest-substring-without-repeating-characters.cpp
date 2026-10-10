
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int cnt = 0;
        int maxlen = 0;
        vector<int> arr(n);

        for(int i = 0; i < n; i++){
            cnt = 1;

            for(int j = i+1; j < n; j++){
                bool flag = false;

                for(int k = i; k < j; k++){
                    if(s[k] == s[j]){
                        flag = true;
                        break;
                    }
                }

                if(flag){
                    break;
                }
                else{
                    cnt++;
                }

                maxlen = max(maxlen, cnt);
            }

            maxlen = max(maxlen, cnt);
        }

        return maxlen;
    }
};
