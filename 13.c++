class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        count=0
        prev_value=0
        s1=list(s)
        d={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        for i in reversed(s1):
           value=d[i]
           if value<prev_value:
            count-=value
           else:
            count+=value
            prev_value= value
        return count    
