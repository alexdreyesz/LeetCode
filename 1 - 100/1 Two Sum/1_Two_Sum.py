class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        my_map = {}

        for i, number in enumerate(nums):
            complement = target - number
            
            if complement in my_map:
                return [my_map[complement], i]
            
            my_map[number] = i