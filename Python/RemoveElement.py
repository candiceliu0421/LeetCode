class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        # 用兩個指針，一個指針依序掃描所有元素判斷當前元素是否是要刪除，另一個指針一直指向下一個不是要刪除元素的位置。
        i=0
        for j in range(len(nums)):
            if (nums[j]!=val):
                nums[i]=nums[j]
                i=i+1
        return i