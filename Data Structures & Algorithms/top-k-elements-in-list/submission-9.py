class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dict={}

        for i in nums:
            if(i not in dict):
                dict[i]=1
            else:
                dict[i]=dict[i]+1
        
        
        count=[]
        for x in dict:
            count.append(dict[x])

        count=sorted(count,reverse=True)
        num=0
        arr=[]
        for x in count:
            if(num==k):
                break
            else:
                arr.append(x)
                num=num+1
        output=[]
        for x in dict:
            if(dict[x] in arr):
                output.append(x)

            
        
        return output







            




    
