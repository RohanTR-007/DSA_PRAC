
def play(x,y,nc):
    countx=0; county=0
    for i in nc:
        if(i%x == 0):
            countx+=1
            nc.remove(i)
    for i in nc:
        if(i%y == 0):
            county+=1
            nc.remove(i)
    if(countx > county):
        print("ALEXA")
    elif(county >= countx):
        print("SIRI")
    
l=[]
T= int(input())
for i in range(T):
    numb= input()
    inte= numb.split()
    N= int(inte[0])
    X= int(inte[1])
    Y= int(inte[2])    
    yz=(input())
    xyz= yz.split()
    for j in xyz:
        ni= int(j)
        l.append(ni)
    play(X,Y,l)
    l.clear()   
