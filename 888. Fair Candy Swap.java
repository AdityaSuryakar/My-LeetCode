class Solution {
    public int[] fairCandySwap(int[] aliceSizes, int[] bobSizes) {

        int[] ans = new int[2];

        int sumA = 0;
        int sumB = 0;

        // Find total candies
        for (int i = 0; i < aliceSizes.length; i++) {
            sumA += aliceSizes[i];
        }

        for (int i = 0; i < bobSizes.length; i++) {
            sumB += bobSizes[i];
        }

        // Try every possible swap
        for (int i = 0; i < aliceSizes.length; i++) {
            for (int j = 0; j < bobSizes.length; j++) {

                if (sumA - aliceSizes[i] + bobSizes[j] ==
                    sumB - bobSizes[j] + aliceSizes[i]) {

                    ans[0] = aliceSizes[i];
                    ans[1] = bobSizes[j];
                    return ans;
                }
            }
        }

        return ans;
    }
}
