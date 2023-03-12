// Include necessary header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>

// Define constant PORT as 8801
#define PORT 8801

// Compile with "gcc main.c"
// Run with "./a.out"
// Test with "nc 127.0.0.1 8801"
int main() {
  // Declare variables
  int sockfd; // Socket file descriptor
  struct sockaddr_in serverAddr; // Structure to store server socket address
  int newSocket; // Socket file descriptor for new incoming connection
  struct sockaddr_in newAddr; // Structure to store client socket address
  socklen_t addr_size; // Size of client socket address structure
  char buffer[1024]; // Character array to store message to be sent to client

  // Create socket
  sockfd = socket(AF_INET, SOCK_STREAM, 0);
  printf("Server Socket Created Successfully.\n");

  // Clear server address structure
  memset(&serverAddr, 0, sizeof(serverAddr));

  // Populate server address structure
  serverAddr.sin_family = AF_INET; // Set address family to IPv4
  serverAddr.sin_port = htons(PORT); // Set port number to constant PORT
  serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1"); // Set IP address to localhost

  // Bind socket to server address
  bind(sockfd, (struct sockaddr*)&serverAddr, sizeof(serverAddr));
  printf("[+] Bind to Port number %d.\n", PORT);

  // Listen for incoming connections on socket
  listen(sockfd, 5);
  printf("[+] Listening.\n");

  // Accept new incoming connection
  newSocket = accept(sockfd, (struct sockaddr*)&newAddr, &addr_size);

  // Populate buffer with message to send to client
  strcpy(buffer, "Hello");

  // Send message to client
  send(newSocket, buffer, strlen(buffer), 0);
  printf("[+] Closing the connection.\n");

  return 0;
}
