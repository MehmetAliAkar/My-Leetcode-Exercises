int maxProfit(int* prices, int pricesSize){
    int i = 0, max = 0;
    int minPrice = prices[0];
    while (i < pricesSize)
    {
        if (prices[i] < minPrice)
            minPrice = prices[i];
        if (prices[i] - minPrice > max)
            max = prices[i] - minPrice;
        i++;
    }
    return (max);
}