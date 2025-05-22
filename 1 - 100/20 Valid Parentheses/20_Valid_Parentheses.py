class Solution:
    def isValid(self, s: str) -> bool:
        half = []

        for i in range(len(s)):
            if s[i] in "([{":
                half.append(s[i])
            else:
                if not half:
                    return False
                if s[i] == ")" and half[-1] != "(":
                    return False
                if s[i] == "]" and half[-1] != "[":
                    return False
                if s[i] == "}" and half[-1] != "{":
                    return False
                half.pop()

        return True