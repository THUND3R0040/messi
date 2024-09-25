


for _ in range(int(input())):
    t = ['a']
    s = ['a']
    for __ in range(int(input())):
        d , k , x = input().split()
        new = []
        if(d=='1'):
            new.extend(x*int(k))
            new.sort()
            s += new
        else:
            new.extend(x*int(k))
            new.sort(reverse=True)
            t = new + t
        
        if(s == t ):
            print("NO")
        else:
            test = False
            for i in range(min(len(s),len(t))):
                if(t[i]>s[i]):
                    print("YES")
                    test = True
                    break
                elif(t[i]==s[i]):
                    continue
                else:
                    print("NO")
                    test = True
                    break
            if(not test):
                print("NO" if(len(t)<len(s)) else "YES")
                    
                    
                    
            
        
            

        
        
        
    