
t = 1

s = "avbvvcvvvd"

def twice (s):
    for i in range(len(s)-1):
        if(s[i]==s[i+1]):
            return True
    return False

#i need to check the repetition this version xorks only with a pair of redondant characters
def adj(s):
    for i in range(len(s)-1):
        if(s[i]==s[i+1] and i==0):
            s=s[i]+s[i+3:]
            break
        elif(s[i]==s[i+1]):
            s=s[:i-1]+s[i+1:]
            break
    return s

while(len(s)!=0 and len(s)!=1):
    print(s)
    if(twice(s)):
        s=adj(s)
    else:
        s=s[2:]
    
    if(twice(s) and len(s)==2):
        break

print(len(s))





