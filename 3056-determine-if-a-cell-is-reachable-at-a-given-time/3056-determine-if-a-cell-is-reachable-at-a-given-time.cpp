class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        // Calculate the absolute differences in x and y coordinates between the start and target points.
        int xDistance = abs(sx - fx);
        int yDistance = abs(sy - fy);
        
        // Calculate the minimum Manhattan distance (minimum steps) to reach the target.
        int min_dist = min(xDistance, yDistance) + abs(yDistance - xDistance);

        // If the starting and target cells are the same, check if t is not 1.
        if (min_dist == 0) {
            if (t == 1) {
                return false; // If t is 1, it's impossible to stay at the same cell for that time, so return false.
            } else {
                return true; // If t is greater than 1, we can stay at the same cell for t seconds, so return true.
            }
        }
        
        // If the minimum distance is greater than 0, check if t is greater than or equal to the minimum distance.
        return t >= min_dist; // If t is sufficient to cover the minimum distance, return true; otherwise, return false.
    }
};