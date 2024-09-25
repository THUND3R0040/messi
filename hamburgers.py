


s=input()
nb,ns,nc = map(int,input().split())
rb,rs,rc = map(int,input().split())
r = int(input())



needB = s.count("B")
needC = s.count("C")
needS = s.count("S")



bread = rb*nb
sau = rs*ns
chee = nc*rc


rt=0


#kol wa7ed nammelou flousou wa7dou w maahom flous lel kol eli howa r
test1 = 0
test2 = 0
test3 = 0

while(True):
    if (not(test1 and test2 and test3)):
        if(needB!=0):
            if(nb >= needB):
                nb -= needB
            elif(r>=(needB-nb)*rb):
                test1 = 1
                
                #r+=bread
                r = r-((needB-nb)*rb)
                nb=0
            else:
                break
        else:
            nb=0
            rb=0
            test1=1
        if(needS!=0):
            if(ns >= needS):
                ns -= needS
            elif(r>=(needS-ns)*rs):
                test2=1
                
                #r+=sau
                r = r-(needS-ns)*rs
                ns=0
            else:
                break
        else:
            rs=0
            ns = 0
            test2=1
        if(needC!=0):
            
            if(nc >= needC):
                nc -= needC
            elif(r>=(needC-nc)*rc):
                test3=1
                #r+=chee
                
                r = r-(needC-nc)*rc 
                nc=0
            else:
                break
        else:
            nc=0
            rc=0
            test3=1
        rt+=1
    elif(test1 and test2 and test3):
        r+=nb*rb+nc*rc+ns*rs
        rt = rt+ r//(needB*rb+needC*rc+needS*rs)
        break
        
    
    
    
print(rt)
        





