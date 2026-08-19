class Solution {
public:

long long totalhours(vector<int>& group , int hourly ){
    long long totalhours = 0;
    for(int i = 0 ; i<group.size(); i++){
        totalhours += ceil((double)group[i]/(double)hourly);
        }
                return totalhours;
}
int highestpile1(vector<int> cell ){
                int highestpile = INT_MIN;
        for(int i =  0; i<cell.size(); i++){
        highestpile = max(highestpile ,cell[i] );
        }
        return highestpile;
        }

    int minEatingSpeed(vector<int> piles, int h) {
        int maxi = highestpile1(piles);
        int answer = 0;

        int low = 1 , high = maxi;
        while(low<=high){
            int mid = low + (high - low)/2;
            long long rnd = totalhours(piles , mid);
            if(rnd<=h){
                answer = mid;  
                 high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return answer;
        }
        
        
        
    
};