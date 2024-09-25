t = int(input())




for i in range(t):
    n = int(input())
    candies = input().split()
    candies = [int(i) for i in candies]
    i = 0
    j = n-1
    nb=0
    alice = 0
    bob = 0
    l=[]
    
    while(True):
        if(alice>=bob):
            
            bob+=candies[j]
            nb+=1
            j-=1
        elif(bob>alice):
            
            alice+=candies[i]
            nb+=1
            i+=1
        
        if(alice==bob):l.append(nb)
        if(i>j):break
        
    print(l[len(l)-1] if(len(l)!=0)else 0)
            
        
        
    