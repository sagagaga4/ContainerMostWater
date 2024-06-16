int maxArea(int* height, int heightSize) 
{
    if (heightSize == 0)
        return 0;
    
    int left = 0, right = heightSize - 1;
    int mostWater = 0;
    
    while (left < right)
    {
        int minHeight = (height[left] < height[right]) ? height [left] : height[right];
        int currentArea = minHeight * (right - left);
        
        if (currentArea > mostWater)
        {
            mostWater = currentArea;
        }
        
        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    
    return mostWater;
}
