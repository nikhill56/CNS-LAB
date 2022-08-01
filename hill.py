import numpy as np

def encryption(pt,key,size):
    
    while(len(pt)%size!=0):
        pt+="x"
    pt=np.array([(ord(a)-97) for a in pt])
    ptm=np.array_split(pt,len(pt)/size)
    ct=""
    for a in ptm:
        a=a.reshape(size,1)
        encr=np.dot(key,a)%26
        for a in np.nditer(encr):
            ct+=chr(a+97)
    return ct

def decryption(ct,key,size):
    adj=np.linalg.inv(key)
    det=round(np.linalg.det(key))
    adj=adj*det
    np.where(adj<0,adj+26,adj)
    
    x=1
    while((det*x)%26!=1):
        x+=1
    final=(x*adj)%26
    enc=np.array([(ord(a)-97) for a in ct])
    encm=np.array_split(enc,len(enc)/size)
    decrypt=""
    for a in encm:
        a=a.reshape(size,1)
        decr=np.round_(np.dot(final,a))
        decr=decr.astype(int)
        decr=decr%26
        for a in np.nditer(decr):
            decrypt+=chr(a+97)
    return decrypt
    
pt=input("Enter plain text")
pt=pt.lower()
size = int(input("Enter size of key"))
print("enter key row wis\n")
key=[]
for i in range(size*size):
    key.append(int(input(f"Enter element {i}")))
key=np.array(key)
key=key.reshape(size,size)
print("The key recieved is:")
print(key)

cipher=encryption(pt,key,size)
print("Encrypted text is:",cipher)

decipher=decryption(cipher,key,size)
print("Dencrypted text is:",decipher)
