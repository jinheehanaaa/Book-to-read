


<!-- ##### START OF TOPIC: 1. Signatures, Hashing, Hash Chains, e-cash, and Motivation ##### -->
<details>
<summary>1. Signatures, Hashing, Hash Chains, e-cash, and Motivation</summary>

# Cryptocurrencyt Engineering and Design
## Origins of Money
- Physical
## Traditional payments
- Digital Payment (Bank, Credit Card, Venmo, etc)
## Bank
- Privacy problem
## Chaumian e-cash
- Client gets to choose SN with Signature
- Double spend detection
- Privacy problem solved
- BUT, bank can still censor withdrawals and deposits

# Lecture 1
## Hash Functions
- Input data can be any size, output is fixed size
- Deterministic, no randomness (but "random" looking)
- Avalanche effect: change 1bit of the input, about half the output bits should change
- "Preimage Resistance" (From output given, you should be able to find input) => Takes 2^256 operations for sha256
- "2nd Preimage Resistance" (From output, input given, you can't find another x that leads to y) => Not useful
- "Collision Resistance" (Nobody can find any x, z suh that x != z)
- Collision resistance is broken while preimage resistance remains (Ex: sha-1, md5)

## Usages
- Hash of files
- Pointer/reference for sorting (Linked list, map)
- Commit reveal (Commit to something secret by publishing a hash)

# What is Signature?
- Messages from someone (3 functions needed)
## GenerateKeys()
- Returns a privateKey, publicKey pair.
- Takes in only randomness
## Sign(secretKey, message)
- Signs a message given a secretKey.
- Returns a signature
## Verify(publicKey, message, signature)
- Verify a signature on a message from a public key
- Returns a boolean whether it worked or not

# Signatures from hashes
- You can construct the signature system using just hash function
- Lamport Signatures

## Lamport Signatures
1. Generate Private Key (Make up 256*2 random 256 bit numbers)
2. Generate Public Key (Hashes of Private Key)
3. Sign
- Hash string to sign ("Hi" = 8f4343........327aa4)
- Pick private key blocks to reveal based on bits of message to sign 01101110 (Signature is sequence of these bits, 256 bits blocks long)
5. Verify
- Take signature and hash each block of the signature
- See that it maps into that part of public key

### Signing again
- Signing more than once reveals more pieces of the private key


</details>
<!-- ##### END OF TOPIC: 1. Signatures, Hashing, Hash Chains, e-cash, and Motivation ##### -->



# Resources
- [MIT Opencourse](https://www.youtube.com/watch?v=IJquEYhiq_U&list=PLUl4u3cNGP61KHzhg3JIJdK08JLSlcLId)