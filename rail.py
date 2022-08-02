def generateTheKey(key):
	key=key.replace(" ", "")
	key=key.upper()
	key=key.replace("J", "I")
	result=list()
	for c in key: #storing key
		if c not in result:
			result.append(c)
	for i in range(65,91): #storing other character
		if chr(i) not in result:
			if i==74:
				pass    
			else:
				result.append(chr(i))
    
	k=0 # pointer for result list
	key_matrix=matrix(5,5,0) #initialize matrix
	for i in range(0,5): #making matrix
		for j in range(0,5):
			key_matrix[i][j]=result[k]
			k+=1
	return key_matrix


def matrix(x,y,initial):
    return [[initial for i in range(x)] for j in range(y)]


def locindex(c): #get location of each character
    loc=list()
    if c=='J':
        c='I'
    for i ,j in enumerate(k_matrix):
        for k,l in enumerate(j):
            if c==l:
                loc.append(i)
                loc.append(k)
                return loc

def encrypt():  #Encryption
    msg=str(input("ENTER MSG:"))
    msg=msg.upper()
    msg=msg.replace(" ", "")
             
    for s in range(0,len(msg)+1,2):
        if s<len(msg)-1:
            if msg[s]==msg[s+1]:
                msg=msg[:s+1]+'X'+msg[s+1:]
    if len(msg)%2!=0:
        msg=msg[:]+'X'

    print("CIPHER TEXT:",end=' ')
    i=0
    while i<len(msg):
        loc=list()
        loc=locindex(msg[i])
        loc1=list()
        loc1=locindex(msg[i+1])
        if loc[1]==loc1[1]:
            print("{}{}".format(k_matrix[(loc[0]+1)%5][loc[1]],k_matrix[(loc1[0]+1)%5][loc1[1]]),end=' ')
        elif loc[0]==loc1[0]:
            print("{}{}".format(k_matrix[loc[0]][(loc[1]+1)%5],k_matrix[loc1[0]][(loc1[1]+1)%5]),end=' ')  
        else:
            print("{}{}".format(k_matrix[loc[0]][loc1[1]],k_matrix[loc1[0]][loc[1]]),end=' ')    
        i=i+2
        
key=input("Enter key")
k_matrix = generateTheKey(key)        
print(k_matrix)
encrypt()
