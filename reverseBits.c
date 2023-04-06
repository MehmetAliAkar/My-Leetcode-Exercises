uint32_t reverseBits(uint32_t n) {
    uint32_t reverseNum = 0;
    int i=32;
    while(i--)
    {   
        reverseNum=reverseNum<<1;
        reverseNum |= n&1;
        n = n>>1;
    }

    return reverseNum;
}