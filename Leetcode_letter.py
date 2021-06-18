from typing import List
class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        dict = {
            '2': 'abc',
            '3': 'def',
            '4': 'ghi',
            '5': 'jkl',
            '6': 'mno',
            '7': 'pqrs',
            '8': 'tuv',
            '9': 'wxyz'
        }

        if digits == "":
            return []

        digits_list = []
        for i in range(len(digits)):
            digits_list.append(digits[i])

        output = []

        def combineNext(letter='', i=0):
            if len(digits_list) > i:
                digit = digits_list[i]
                for le in dict[digit]:
                    k = letter + le
                    combineNext(k, i + 1)

            else:
                output.append(letter)

        combineNext()
        return output
run = Solution()
print(run.letterCombinations("3745"))