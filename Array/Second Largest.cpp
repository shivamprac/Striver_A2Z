class Solution{
public:	
	// Function returns the second
	// largest elements

int print2largest(int arr[], int n) {
	    // code here
	    if (n==1) return -1;
	    sort (arr, arr+n);
	    for (int i=n-2; i>=0; i--) {
	        if (arr[i]<arr[n-1]) return arr[i];
	    }
	    return -1;
	}
};
