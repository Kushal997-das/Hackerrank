n=int(input())
arr=list(map(int,input().split()))
pos=[]
neg=[]
zero=[]
for i in arr:
    if i>0:
        pos.append(i)
    elif i<0:
        neg.append(i)
    elif i==0:
        zero.append(i)
print("%.6f"%(len(pos)/len(arr)))  
print("%.6f"%(len(neg)/len(arr))) 
print("%.6f"%(len(zero)/len(arr)))      
             
