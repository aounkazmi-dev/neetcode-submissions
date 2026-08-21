class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dict={}
        for x in strs:
            word=''.join(sorted(x))
            if word not in dict:
                dict[word]=[]
            dict[word].append(x)

        return list(dict.values())

            
        
            

        