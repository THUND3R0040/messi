




    
from collections import Counter


t = int(input())


for i in range(t):
    s = (input())
    c = Counter(s)
    l=c.most_common()
    nbred=0
    nbgreen=0
    test = False
    for el in l:
        if(el[1]>=2):
            nbred+=1
            nbgreen+=1
        else:
            if(nbred!=nbgreen):
                nbgreen+=1
            else:
                nbred+=1
    print(nbgreen)
                

            
    
            
        
            
    
    
    
        
        