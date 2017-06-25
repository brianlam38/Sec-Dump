#Use this tool to solve multi-time pads
#Written on 4th march 2016
#Took me a good 30 minutes
#How this tool works:
#1. Suppose you guess a crib " the "
#2. We have n messages each of length k
#3. For each of the n messages and at each position k we want to guess the crib
#4. However, we can make our lives vastly easier if we guess the other way round:
#5. Instead of guessing each message separately, we guess at the same position for all the messages at the same time
#This will make it easier to spot when crib for message m at position k produces the wrong output for any other message
#Therefore, what this program does is to guess for each combination of message and position the crib for all messages at position k
#Suppose at message m position k the plaintext is " the ", then we can derive the key at position k with the length of our crib
#Once we have derived that part of the key we then apply it to the rest of the messages to see if we get a sensible output
#Therefore for any crib there are n * k outputs where n is the number of ciphertexts and k is the length of each ciphertext
#Each output is n strings of characters representing the "decoded" portion of each message at position k

#Todo: Use a dictionary to automate this.

from itertools import combinations
a="7ECC555AB95BF6EC605E5F22B772D2B34FF4636340D32FABC29B"
b="73CB4855BE44F6EC60594C2BB47997B60EEE303049CD3CABC29B"
c="64C6401BAF45F6A930435F3DF875C4E102F8742A45C824AFCA9B"
d="72C24A52B550B3B8624D4F22F86BD2B30ABD642C498122A1D29B"
e="73CC5457BF17E7A4750C5423B178D0A44FFF756355C03CABC28A"
f="74CC0155B443B3A8795F4224AA7E97B507F2632606CF3FA0D59B"
crib = " the ".encode("hex")
#data = [line.strip() for line in open("20k.txt", 'r')]

binary_a = a.decode("hex")
binary_b = b.decode("hex")
binary_c = c.decode("hex")
binary_d = d.decode("hex")
binary_e = e.decode("hex")
binary_f = f.decode("hex")
L1=[binary_a,binary_b,binary_c,binary_d,binary_e,binary_f]

def xor_strings(xs, ys,i=0):
    return "".join(chr(ord(x) ^ ord(y)) for x, y in zip(xs[i:], ys))

def initial_drag(crib):
    '''for combo in combinations(L1, 2):
        xored= xor_strings(combo[0], combo[1]).encode("hex")
        print combo[0].encode("hex"), combo[1].encode("hex")
        print xored
        for i in range(27):
            print xor_strings(xored.decode("hex"),the2.decode("hex"),i)'''
    for cipher in L1:
        for position in range(len(cipher)-len(crib)):
            #when we XOR our crib with the ciphertext, we should get back the key
            key = xor_strings(cipher,crib.decode("hex"),position).encode("hex") 
            for c in L1:
                #we then XOR the key we got back with the other ciphertexts
                print xor_strings(c,key.decode("hex"),position), cipher.encode("hex"),position 
            print ""

def crib_drag(crib,ciphertext,position):
    key = xor_strings(ciphertext,crib.decode("hex"),position).encode("hex")
    for c in L1:
        #we then XOR the key we got back with the other ciphertexts
        print xor_strings(c,key.decode("hex"),position), c.encode("hex"),position 

# Step 1. Do an initial crib drag through all possible key fragments for your crib.
initial_drag(crib)

# Step 2. Once you have found a valid key fragment, expand on that fragment. I did this manually in the interpreter.
crib_drag(" the ".encode("hex"),L1[4],5)
crib_drag("ble pr".encode("hex"),L1[0],4)
crib_drag("able pr".encode("hex"),L1[0],3)
crib_drag("able pri".encode("hex"),L1[0],3)
crib_drag("nese puzzle".encode("hex"),L1[1],3)
crib_drag("chinese puzzle ".encode("hex"),L1[1],0)
crib_drag("notable prisoner ".encode("hex"),L1[0],0)
crib_drag("do not disturb those ".encode("hex"),L1[5],0)
crib_drag("notable prisoner is freed ".encode("hex"),L1[0],0)