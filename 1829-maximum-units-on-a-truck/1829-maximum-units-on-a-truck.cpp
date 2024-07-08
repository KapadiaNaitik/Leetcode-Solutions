class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
            for(int i=0;i<boxTypes.size();i++){
                for(int j=i+1;j<boxTypes.size();j++){
                    if(boxTypes[i][1]<boxTypes[j][1]) swap(boxTypes[i],boxTypes[j]);
                }
            }
            long units=0;
            int i=0;
            while(truckSize!=0&& i<boxTypes.size()){
                if(boxTypes[i][0]<truckSize) {
                    units+=boxTypes[i][0]*boxTypes[i][1];
                    truckSize-=boxTypes[i][0];
                    i++;
                    cout<<truckSize<<endl;
                }
                else{
                    units+=truckSize*boxTypes[i][1];
                    i++;
                    truckSize=0;

                }
            }
            return units;
    }
};