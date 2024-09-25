 
def rec(el,n,dict = {}):
    if(n==0 or n==1):
        return 0
    if(tuple(el)in dict):
        return dict[tuple(el)]
    if(el[0]<=n-1):
        dict[tuple(el)] = min(1+rec(el[1:],n-1,dict),rec(el[el[0]+1:],n-el[0]-1,dict))
        return min(1+rec(el[1:],n-1,dict),rec(el[el[0]+1:],n-el[0]-1,dict))
    else:
        dict[tuple(el)] = 1+rec(el[1:],n-1,dict)
        return 1+rec(el[1:],n-1,dict)
    




for i in range(int(input())):
    n = int(input())
    el = list(map(int, input().split()))
    print(rec(el,n))

    
    

