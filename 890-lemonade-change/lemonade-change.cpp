class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int n  = bills.size();
        int five = 0 , ten = 0;

        for(int i = 0; i<n ; i++){

            int amt = bills[i];

            if(amt == 5){
                five++;
            }else if(amt == 10){

                if(five == 0){
                    return false;
                }else{
                    five--;
                    ten++;
                }


            }else{

                if(ten > 0 && five >=1){
                    ten--;
                    five--;
                }else if(ten  == 0 && five >=3){
                    five = five -3;
                }else{
                    return false;
                }

            }



        }
        return true;
        
    }
};