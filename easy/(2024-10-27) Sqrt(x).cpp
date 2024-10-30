class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) 
            return x; 
        
        int closest = INT_MAX;
        for (int i = 0; i <= 46340; i++) { // sqrt(INT_MAX) ~~ 46340
            if (i * i <= x)  
                closest = i;
            else 
                break; 
            
        }
        return closest; 
        
    }
};
