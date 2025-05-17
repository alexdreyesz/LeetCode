class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        my_set = set()

        for numbers in nums:
            if numbers in my_set:
                return True

            my_set.add(numbers)
        
        return False