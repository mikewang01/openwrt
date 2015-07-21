#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <curl/curl.h>
#include <assert.h>
int main(void)
{
	struct sockaddr_in server_addr,client_addr;
	socklen_t clientadrr_len;
	int listen_fd, conn_fd;
	char buf[1024];
	char str[INET_ADDRSTRLEN];
 	int i, n;
	
	curl_global_init(1);
	listen_fd = socket(AF_INET, SOCK_STREAM, 0);
	
	bzero(&server_addr, sizeof(server_addr));
	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.s_addr = htons(INADDR_ANY);
	server_addr.sin_port = htons(8087);
	bind(listen_fd, (struct sockaddr*)&server_addr, sizeof(server_addr));
	listen(listen_fd, 20);
	printf("accepting connection...\n");
	while(1){
		clientadrr_len  = sizeof(client_addr);
		conn_fd = accept(listen_fd, (struct sockaddr*)&client_addr, &clientadrr_len);
		n = read(conn_fd, buf, 1024);
		buf[n] = '\0';
		char *a = inet_ntop(AF_INET, &client_addr.sin_addr, str, sizeof(str));
		printf("recieved from = %s PORT =%d DATA= %s\n",a , ntohs(server_addr.sin_port), buf);
		
		write(conn_fd, buf, n);
		close(conn_fd);
		
		

}


     printf("Hello world\n");
     return 0;
}
