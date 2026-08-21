class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s)!=len(t)):
            return False

        dict={}
        for x in s:
            if x in dict:
                dict[x]=dict[x]+1
            else:
                dict[x]=1

        for x in t:
            if x not in dict:
                return False
            else:
                dict[x]=dict[x]-1
            if dict[x]<0:
                return False
    
        return True
            
