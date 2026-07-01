import java.util.Arrays;

public class PrefixSum {
    public static int[] runningSum(int[] nums) {
        if (nums == null || nums.length == 0) {
            return new int[0];
        }

        int[] prefixSum = new int[nums.length];
        prefixSum[0] = nums[0];
        for (int i = 1; i < nums.length; i++) {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }
        return prefixSum;
    }

    public static int fetchSumBetweenIndices(int[] prefixSum, int left, int right) {
        if (prefixSum == null || left < 0 || right >= prefixSum.length || left > right) {
            throw new IllegalArgumentException("Invalid indices");
        }
        return prefixSum[right] - (left > 0 ? prefixSum[left - 1] : 0);
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4};
        int[] prefixSum = runningSum(nums);

        System.out.println("Prefix sum array: " + Arrays.toString(prefixSum));
        int sum = fetchSumBetweenIndices(prefixSum, 1, 3);
        System.out.println("Sum between indices 1 and 3 is " + sum);
    }
}
