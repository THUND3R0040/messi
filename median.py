t = int(input())




for i in range(t):
    n,s = map(int,input().split())
    
    
    if(n==1):
        print(s)
        
    elif(n==2):
        print(s//2)
        
    elif(n%2==0):
        print((s)//(n-(n//2)+1))
    
    elif(n%2==1):
        print((s)//(n-(n//2+1)+1))
    
        