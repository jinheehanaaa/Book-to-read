import net from 'net';


// nc 127.0.0.1 8000
const server = net.createServer( socket => {
  console.log("TCP handshake successful with " + socket.remoteAddress + ":" + socket.remotePort);
  socket.write("Hello client!");
  socket.on("data", data=> {
    console.log("Received data " + data.toString())
  })
})

server.listen(8800, "127.0.0.1");