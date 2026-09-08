class Solution {
public:
    double angleClock(int hour, int minutes) {
        // double minangle=minutes*6;
        // double hourangle= ((30 * hour) + (minutes * 0.5));
        // double final=abs(hourangle - minangle);
        double final= abs((30*hour) - (5.5*minutes));

        return min(final,360-final);
        
        
    }

};