#

<details> <!-- OBJECTIVE -->
<summary>Objective</summary>

- Learn Backend Engineering

</details>

<details> <!-- 002 -->
<summary>002 - Backend Communication Design Patterns</summary>

<!-- ##### START OF TOPIC ##### -->
<details>
<summary>Request-Response</summary>

## Request Response Model
- Client sends a Request
- Server parses the Request (Ex: parse)
- Server processes the Request (Ex: query db, deserialization)
- Server sends a Response
- Client parses the Response and consume
## Where it is used?
- Web, HTTP, DNS, SSH
- RPC (remote procedure call)
- SQL and Database Protocols
- APIs (REST/SOAP/GraphQL)
## Examples:
### Building an upload image service with request response
- Send large request with the image (simple, not resumable)
- Chunk image and send a request per chunk (resumable with unique identifier)
### Request Response doesn't work everywhere (Not scalable, latency)
- Notification service
- Chatting application
- Very long requests
- What if client disconnects?

## curl example
- curl -v --trace out.txt http://google.com
- cat out.txt

</details>
<!-- ##### END OF TOPIC ##### -->

<!-- ##### START OF TOPIC ##### -->
<details>
<summary>Synchronous vs Asynchronous</summary>

- Can I do work while waiting?
# Synchronous I/O
- Caller sends a request and blocks
- Caller cannot execute any code meanwhile
- Receiver responds, Caller unblocks
- Caller and Receiver are in "sync"
## Example of an OS synchronous I/O
- Program asks OS to read from disk
- Program main thread is taken off of the CPU
- Read completes, program can resume execution

# Asynchronous I/O
- Caller sends a request
- Caller can work until it gets a response
- Caller either:
- - Checks if the response is ready (epoll)
- - Receiver calls back when it's done (io_uring)
- - Spins up a new thread that blocks
- Caller and receiver are not necessary in sync

## Example of an OS asynchronous call (NodeJS)
- Program spins up a secondary thread
- Secondary thread reads from disk, OS blocks it
- Main program still running and executing code
- Thread finish reading and calls back main thread

# Synchronous vs Asynchronous in Request Response
- Synchronicity is a client propert
- Most modern client libraries are asynchronous
- Ex: Clients send an HTTP request and do work

# Synchronous vs Asynchronous in real life
- In synchronous communication the caller waits for a response from receiver
- - ex: Asking someone a question in a meeting
- Asynchronous communication the response can come whenever. Caller and receiver  can do anything meanwhile
- - email

# Asynchronous workload is everywhere
- Asynchronous Programming (promises/futures)
- Asynchronous backend processing
- Asynchronous commits in postgres
- Asynchronous IO in Linux (epoll, io_uring)
- Asynchronous replication
- Asynchronous OS fsync (fs cache)

</details>
<!-- ##### END OF TOPIC ##### -->

<!-- ##### START OF TOPIC ##### -->
<details>
<summary>TEMP</summary>

- Content

</details>
<!-- ##### END OF TOPIC ##### -->


</details>


