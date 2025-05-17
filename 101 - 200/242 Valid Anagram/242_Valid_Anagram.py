class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        list_a = [0] * 26
        list_b = [0] * 26

        for a in s:
            list_a[ord(a) - ord('a')] += 1

        for b in t:
            list_b[ord(b) - ord('a')] += 1
    
        return list_a == list_b