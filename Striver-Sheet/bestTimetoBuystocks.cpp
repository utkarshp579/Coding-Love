class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // in my solution high could be eplaced by prices[i];
        //     int low,high, neww = 0,old = 0;
        //     low = high = prices[0];
        //     for(int i = 1;i<prices.size();i++){
        //         if(low>prices[i]) low = high = prices[i];
        //         if(high<prices[i]) high = prices[i];
        //         if(high-low>0) neww = high - low;/// profit if sold today
        //         if(neww>old) old = neww;// old is overall profit.
        // }return old>0?old:0;
        int lsf = INT_MAX; // least profit so far.
        int op = 0;                  // overall profit
        int pist = 0;                // profit if sold today
        // this above line gives logicc of dp
        // and op is the maximum element of dp array and could also be passed by maxelement iterator.
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < lsf) { // if we found new buy value which is more
                                   // smaller then previous one
                lsf = prices[i];   // update our least so far
            }
            pist = prices[i] -
                   lsf;      // calculating profit if sold today by, Buy - sell
            if (op < pist) { // if pist is more then our previous overall profit
                op = pist;   // update overall profit
            }
        }
        return op; // return op
    }
};