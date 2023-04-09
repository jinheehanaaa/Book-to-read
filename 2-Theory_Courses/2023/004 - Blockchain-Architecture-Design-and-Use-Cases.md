


<!-- ##### START OF TOPIC: 001 - Intoduction to Blockchain ##### -->
<details>
<summary>001 - Intoduction to Blockchain</summary>

# Centralized
- Single point of failure

# Decentralized
- Multiple points of coordination

# Distributed
- Everyone collectively execute the job

# A Very Simplified Look of the Blockchain
- Every node maintains a local copy of the global data-sheet
- Local copy = Public Ledger

# Ensure a number of different aspects
## Protocols for Commitment
- During transaction time, ensure that the transaction is commited to existing public ledger
- Validity checking is required
## Consensus
- Everyone has the most updated copy
## Security
- Tamper proof
## Privacy and Authenticity
- Because the transactions belong to various clients

# Blockchain Definition
- Open distributed ledger (Accessible to all)
- Distributed or Decentralized (No single party control)
- Efficient transactions (Fash and scalable)
- Verifiable (Everyone can check the validity of information)
- Tamper-proof (Once you have inserted information into blockchain, you will not be able to update that information)



</details>
<!-- ##### END OF TOPIC: 001 - Intoduction to Blockchain: History ##### -->

<!-- ##### START OF TOPIC: 002 - Intoduction to Blockchain: History ##### -->
<details>
<summary>002 - Intoduction to Blockchain</summary>

# Hash Functions
- H(x) = x % n
- Cryptographically Secured
- - One way
- - If x1 != x2, then H(x1) != H(x2)

# Avalanche effect
- A small change in the data results in a significant change in the ouput

# time-stamp a digital document
- Harber and Stornetta, 1991 for more information
- For securing digital document
# Merkle Trees
- Can secure multiple documents
- Peer to Peer Networks: Other peers do not lie about a block
- Bitcoin implemenation: No one can lie about a transaction

# Blockchain & Bitcoin
## Biotcoin
- Completely decentralized
- Peer-to-peer
- Permissionless

</details>
<!-- ##### END OF TOPIC: 002 - Intoduction to Blockchain: History ##### -->

<!-- ##### START OF TOPIC: 003 - Intoduction to Blockchain: Architecture ##### -->
<details>
<summary>003 - Intoduction to Blockchain: Architecture</summary>

# Contracts in a Centralized Platform
- EX: Kickstarter
- Middleman takes significant charge to process

# Smart Contract
- Immutable (Nobody can change the contract)
- Distributed (Don't need middleman)

# Structure of a Block
## Block Header
- Previous block hash (For tamper proof)
- Mining statistics (timestamp, nonce, and difficulty)
- Mekle tree root (For organizing transactions)
## List of Transactions

# Consensus
- Permission-less protocol
- Proof of Work algorithm (Ensures consensus over a permission-less setting based on challenge-response)

</details>
<!-- ##### END OF TOPIC: 003 - Intoduction to Blockchain: Architecture ##### -->


<!-- ##### START OF TOPIC: 004 - Intoduction to Blockchain: Conceptualization ##### -->
<details>
<summary>004 - Intoduction to Blockchain: Conceptualization</summary>

# Block Chain
- Always include it in the longest chain
- Other chains are forks (Orphaned Blocks)

# The Permissioned Model
- Strict notion of security and privacy
- Greater transactional throughput

# IPFS Tool

# Hyperledger Fabric
- A permissioned blockchain framework
- Strong privacy and confidential transactions
- Channels (Subnet of peer) for restricted visibility
- Fabric has no notion of mining, use the notion of distributed consensus under a closed environment

# The Fabric Network
- IBM Code Tech Talk

</details>
<!-- ##### END OF TOPIC: 004 - Intoduction to Blockchain: Conceptualization ##### -->


<!-- ##### START OF TOPIC: 005 - Basic Crypto Primitives - 1##### -->
<details>
<summary>005 - Basic Crypto Primitives - 1</summary>

# Cryptographic Hash Function
- Input message, M
- Message digest, H(M)
- Collision-Free (If M1 != M2, then H(M1) != H(M2))
- Hiding (Avalanche effect)
- Puzzle-friendly
- Hash function is efficient b/c the size of the digest is significantly less than the size of the original messages

# SHA256 Hash Function
- Bitcoin
- 256 bit message digest

# Hash Pointer (Tamper proof)
- Hashchain
- Merkle Tree

</details>
<!-- ##### END OF TOPIC: 005 - Basic Crypto Primitives - 1 ##### -->


<!-- ##### START OF TOPIC: 006 - Basic Crypto Primitives - 2 ##### -->
<details>
<summary>006 - Basic Crypto Primitives - 2</summary>

# Digital Signature
- The content of the document is authenticated
- The identity of the sender
- Prevent non-repudiation - sender will not be able to deny about the origin of the document

# Public & Private Key
- Public Key is used for encryption of message
- Private Key is used for decryption of message

# RSA
- Anyone can encrypt the data
- Only the intended receiver can decrypt the data

# ECDSA
- Bitcoin uses Elliptic Curve Digital Signature Algorithm


</details>
<!-- ##### END OF TOPIC: 006 - Basic Crypto Primitives - 2 ##### -->


<!-- ##### START OF TOPIC: 007 - Bitcoin Basics - 1 ##### -->
<details>
<summary>007 - Bitcoin Basics - 1</summary>

# Sending Payment

# Double Spending
- Same bitcoin is used for more than one transactions
- We need to prevent double spending in a decentralized network
- Proof of work (Solution to Double Spending)
- - <code>Y = H(x | nonce)</code>; Y, nonce are known, x is prev hash value

# Bitcoin Anonymity
- permision-less
- Bitcoin address (Public key based on ECDSA)

# Bitcoin Script
## Sender Side (Alice, Output)
- (Transaction, Signature, Public Key) of Alice
## Receiver Side (Bob, Input)
- Stack-based Bitcoin Script
- FORTH & RPN


</details>
<!-- ##### END OF TOPIC: 007 - Bitcoin Basics - 1 ##### -->

<!-- ##### START OF TOPIC: 008 - Bitcoin Basics - 2 ##### -->
<details>
<summary>008 - Bitcoin Basics - 2</summary>

# Bitcoin Scripts
- Bitcoin Scripts is inspired by FORTH Language
## scriptSig
- Transaction Input
- Signature & Public Key inside scriptSig
## scriptPubKey
- Transaction Output
- Use PubKey to verify the public signature
- Number of Operations

# Script Combination
- We combine 2 script together
- Process with similar concept of Reverse Polish Notation
## Stack analysis for Validation (Simple way, see video for detail)
- Push Operand <pubKey><sig>
- OP_HASH160
- pubKeyHash
- OP_EQUALVERIFY OP_CHECKSIG (Equality is checked b/w the top two items in the stack)
- OP_CHECKSIG (Signature is checked based on the top 2 stack item)
- True


</details>
<!-- ##### END OF TOPIC: 008 - Bitcoin Basics - 2 ##### -->

<!-- ##### START OF TOPIC: 009 - Bitcoin Basics - 3 ##### -->
<details>
<summary>009 - Bitcoin Basics - 3</summary>

# Block Generation
- Find nonce value to generate new block

# Block Flooding
- Transactions
- Blocks from the miners

# Block Propagation
- 51% Rule

# Block Propagation Latency
- Information propagation in the bitcoin network (2013)
- Mean time = 12.6 Seconds
- 95% of the nodes can see the block within 40 seconds




</details>
<!-- ##### END OF TOPIC: 009 - Bitcoin Basics - 3 ##### -->



<!-- ##### START OF TOPIC: 010 - Distributed Consensus ##### -->
<details>
<summary>010 - Distributed Consensus</summary>

# 3 Types of failures
## Crash Fault
- A node suddendly crashes
## Network or Partitioned Fault
- A network fault occurs and the network gets partitioned
## Byzantine Fault
- A node starts behaving maliciously

# Synchronous vs Asynchronous Systems
## Synchronous
- Wait for certain amount of time
- Simple to implement
## Asynchronous
- Not much delay
- Complex to implement

# FLP85
- Impossibility Result
- It's impossible to achieve a concensus with a purely asynchronous distributed system in the presence if failure

# Why do we require Consensus in Bitcoin Network
- Bitcoin is a peer-to-peer network
- Alice broadcast a transaction in this peer-to-peer network
- All the nodes in this network need to agree on the correctness of this transaction
- A node does not know all the peers in the netowrk - this is an open network
- Some nodes can also initiate malicious transactions

# Consensus in Bitcoin
- Per transaction consensus (Inefficient)
- Block based consensus (Efficient)


</details>
<!-- ##### END OF TOPIC: 010 - Distributed Consensus ##### -->

<!-- ##### START OF TOPIC: 011 - Consensus in Bitcoin - 1 ##### -->
<details>
<summary>011 - Consensus in Bitcoin - 1</summary>

# Proof of WOrk (Pow)
- An economic measure to deter service abuses by requiring some work from the service requester

# Hashcash Pow
- A textual encoding of a hashcash stamp is included in an email header
- - Proof that the sender has expended a modest amount of CPU time calculating the stamp before sending the email
- - It is unlikely that the sender is a spammer
- The receiver can verify the hashcash stamp very easily
- Any change in the header requires a change in the hashcash
- - Brute force is the only way to find a hashcash



</details>
<!-- ##### END OF TOPIC: 011 - Consensus in Bitcoin - 1 ##### -->



<!-- ##### START OF TOPIC: 012 - Consensus in Bitcoin - 2 ##### -->
<details>
<summary>012 - Consensus in Bitcoin - 2</summary>

# Denial of Service (DoS) Attacks
- Send lot of data to a node - they will not be able to process normal Bitcoin transactions

# Breaking Bitcoin PoW
- Bitcoin PoW is computationally difficult to break, but not impossible
- Attackers can deploy high power servers to do more work than the total work of the blockchain
- A known case of successful double-spending
- - (Nov 2013) "It was discovered that the GHash.io mining pool appeared to be negaging in repeated payment fraud against BetCoin Dice, a gambling site" [Source: https://en.bitcoin.it]

# Monopoly Problem
- Tragedy of the Commons (Theory)
- - Monopoly can increase over time
=
# PoW vs PoS
## PoW (Proof of work)
- Probability of mining a block depends on the work done by the miner
## PoS (Proof of Stake)
- Amount of bitcoin that the miner holds - Miner holding 1% of the Bitcoin can mine 1% of the PoS blocks

# Proof of Stake (PoS)
- Provides increased protection

# Proof of Burn (PoB)
- Miners should show proof that they have burned some coins
- - Sent them to a verifiably un-spendable address
- - Expensive (like PoW), but no external resources are used other than the vurned coins
- PoW vs PoB - Real resources vs virtual/digital resources
- PoB works by burning PoW mined cryptocurrencies

# Proof of Elapsed Time (PoET)
- Proposed by Intel, as a part of Hyperledger Sawtooth - a blockchain platform for building distributed ledger applications

## Intel Software Guard Ectension (SGX)
- The trusted code is private to the rest of the application
- Hardware-level verification

# Other Mateirals for Blockchain Consensus Algorithm
- Analysis of hashrate-based double-spending by Meni Rosenfeld
- The proposal of PoS
- The Peercoin protocol
- Hyperledger Sawtooth

</details>
<!-- ##### END OF TOPIC: 012 - Consensus in Bitcoin - 2 ##### -->


<!-- ##### START OF TOPIC: 013 - Consensus in Bitcoin - 3 ##### -->
<details>
<summary>013 - Consensus in Bitcoin - 3</summary>

# Mining Hardware
## Specialized hardware
- GPU
- FPGA
## ASIC
- Released in 2013
- Fast computation of SHA256

# TerraMiner 4
- ASIC based bitcoin mining rig
- 2 Terahash per second
- Cost USD 3500 approx

# Mining Pool
## Pooling of resources by the miners
- Share the processing power over a network to mine a new block
- Split the reward proportionally to the amount of work they contributed

## Pros
- Small miners can participate
- Predictable mining
## Cons
- Leads to centralization
- Dicourages miners for unning complete mining procedure




</details>
<!-- ##### END OF TOPIC: 013 - Consensus in Bitcoin - 3 ##### -->




# Terminology
## Public Ledger
- Local copy


# Resources
- [Blockchain Architecture Design and Use Cases](https://www.youtube.com/playlist?list=PLbRMhDVUMngfxxyVLh2t2gKDUfsOdGn56)

# Related Resources introduced by lecturer
- [The Truth About Blockchain. Harvard Business Review]