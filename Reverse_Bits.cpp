class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int m=32;
        uint32_t res=0;
        while(m!=0){
            res=res<<1;
            if(n&1==1) res++;
            n=n>>1;
            m--;
        }
        return res;
    }
};
