


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



<!-- ##### START OF TOPIC: 2. Proof of Work and Mining ##### -->
<details>
<summary>2. Proof of Work and Mining</summary>

# Distributed consensus
- Log

## Crash Fault tolerence model
- Tolerate crash
- BUT, We still need more than crash
- - We want to be able to tolerate actively malicious behaviour

## Byzantine fault tolerance distributed consensus
- Tolerate actively malicious behaviour
- Old idea

## Addressing the Sybil attack Problem

# Lecture 2
## Preventing sybil attacks
- Hashcash (Stop email spam, but didn't take off)
### Signature collision with a fixed string
- Increased costs of equivocation/sybil resistance
- scalable

# Block chain
## Definition
- m = message, nonce r, target t
- hash(m, r) = h; h < t
## Message for block N includes some data and hash of block N-1
- m(n) = (data, h(n-1))
- EX: m(2) = (data(2), hash(data(1), r(1)))
## Hashing the block data
### block has following data & we hash this block to generate new block
- - privious hash (prev: 00ce)
- - current message (msg: hi)
- - nonce (nonce: 5ffc)
- We use hash block as identifier (hash: 00db)
- Next block includes hash of last block
# Chain forks
- Can have 2 branches at a given height (# of blocks from origin)
- Highest (most work) wins, Everyone uses chain with most work
- Less work chains can be discarded after the fact. "Reorg"

# Pros & Cons of Proof of Work
## Pros
- Anonymous
- Memoryless
- Scalable
- Non-interactive
- Tied to real world

## Cons
- All nonces fail (Almost all attempts fail)
- Electricity
- 51% attacks

</details>
<!-- ##### END OF TOPIC: 2. Proof of Work and Mining  ##### -->


<!-- ##### START OF TOPIC: 3. Signatures ##### -->
<details>
<summary>3. Signatures </summary>

# Signatures
## Lamport Signatures
### Pros
- hash
### Cons
- 1 time use
- kind of big (8kb sig, 16k priv/pub key)

# How can I use key more than once?
## Make multiple public key (Less efficient)
- It works with cost of extra bytes
## Make multiple hash functions (Efficient)
- h0 = H(x, 0)
- h1 = H(x, 1) and so on
- So we can do 16kb priv => 32kb pub
## Multiple use hash signatures
- h0 = H(x,0)
- h1 = H(x,1)
- ??
## How to deal with large pub key?
- Commit to pubkey with hash (hash of all 16KB)
- Signature 8k -> 24k
- Pubkey hash (or PKH)

## Pubkey Hash
- Used in bitcoin and all other cryptocurrencies
- Size benefit
- Signature is still big

## Merkle Tree
- Stores much smaller private key
- Commit to much smaller public key
- Signature is still big but it's ok in general

## RSA
- A one way function but not a hash function
- But Bitcoin (and other coins) uses elliptic curve signatures

## Elliptic Curves
- Define point additioon line of 3 points
- Generator point
- private key a = 256 bit scalar
- public key A = a*G
- 32 byte x coord, 32 byte y coord = 64B
- Since curve is symmetric about x-axis, can encode x-coord only and 1 bit for y. Down to 33 bytes

# ECDSA
- What Bitcoin, other coins use today
- It's ugly

# ECsig
- Have message m, privkey a
- A new random private key k
- Public key just for the signature, R = k*G
- Signer, s = k - hash(m, R)a
- signature = R, s
- ONLY ELLIPCTIC CURVE OPERATION is "R" (Others are all scaler, so ECsig is very fast)
- Verification is CPU-Intense
- - Multiplying by G => pre-compute coefficient times G, store them in RAM (Less CPU-Intense)
- - Multiplying by A => different each time for all different signatures

# Fun With Points
## Diffie Hellman
- A = aG
- B = bG
- aB = bA = (aG)b = (bG)a = (ab)G = C
- Shared Point (C)
- A, B are public
- C is not public
- USE CASE: HTTPS Request

## Combination
- D = A + B = (a+b)G = dG
- private key d can sign for public key D

# Problem
- If quantum computer becomes popular
- - All elliptic stuffs stop working
- - Hash stuffs still works


</details>
<!-- ##### END OF TOPIC: 3. Signatures  ##### -->




# Resources
- [MIT Opencourse](https://www.youtube.com/watch?v=IJquEYhiq_U&list=PLUl4u3cNGP61KHzhg3JIJdK08JLSlcLId)

# Other Resources
