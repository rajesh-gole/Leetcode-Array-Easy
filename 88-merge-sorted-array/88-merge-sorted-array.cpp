class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        m--, n--;
        if (n != -1) 
            for (int i = n + m + 1; i > -1; i--) 
            {
                if (m == -1 || nums2[n] > nums1[m]) 
                    {
                    nums1[i] = nums2[n--];
                        if (n == -1) 
                            break;
                    }
                else 
                    {
                    nums1[i] = nums1[m--];
                    }
        }
    }
};

// Using Two Pointer

//rajesh-gole