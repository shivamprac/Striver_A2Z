
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int x = INT_MIN;
    for(int i=0 ; i<n ; i++){
		if(arr[i] > x ){
			x = arr[i];}
    }
			return x; 
    }
};
