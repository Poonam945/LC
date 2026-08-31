# class Solution:
#     def checkInclusion(self, s1: str, s2: str) -> bool:
class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:

        if len(s1) > len(s2):
            return False

        count1 = [0] * 26
        count2 = [0] * 26

        # s1 ke characters ki frequency
        for ch in s1:
            count1[ord(ch) - ord('a')] += 1

        # s2 ki first window
        for i in range(len(s1)):
            count2[ord(s2[i]) - ord('a')] += 1

        # first window check
        if count1 == count2:
            return True

        # sliding window
        for i in range(len(s1), len(s2)):

            # naya character add
            count2[ord(s2[i]) - ord('a')] += 1

            # purana character remove
            count2[ord(s2[i - len(s1)]) - ord('a')] -= 1

            # frequency same hai?
            if count1 == count2:
                return True

        return False