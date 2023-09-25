class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=0;
        int hold=capacity;


        for(int i=0;i<plants.size();i++){

            if(plants[i]<=capacity){
                steps+=1;
                capacity-=plants[i];
            }
            else{
                capacity=hold;
                steps+=i;
                steps+=i+1;
                capacity-=plants[i];
            
            }
            cout<<steps<<endl;

        }
        return steps;
    }
};