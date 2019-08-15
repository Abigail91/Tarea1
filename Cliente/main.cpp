#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>
#include <netdb.h>
#include <string>

using namespace std;

int
main() {
    int cliente = socket(AF_INET, SOCK_STREAM,0);
    if (cliente == -1){
        return 1;
    }
    int puerto = 54000;
    string ipadress = "127.0.0.1";

    sockaddr_in direccion;
    direccion.sin_family = AF_INET;
    direccion.sin_port = htons(puerto);
    inet_pton(AF_INET,ipadress.c_str(),&direccion.sin_addr);

    //Conexiòn con el server
    int connectRes = connect(cliente,(sockaddr*)&direccion, sizeof(sockaddr_in));
    if(connectRes == -1) {
        return 1;
    }

    char buf[4096];
    string userInput;

    do{
        cout << "> ";
        getline(cin,userInput);

        //Enviar al server
        int sendRes = send(cliente,userInput.c_str(),userInput.size(),0);
        if(sendRes==-1){
            cout << "No se envio la informacion al server.";
            continue;
        }
        //Espera una respuesta
        memset(buf,0,4069);
        int bytesReceived = recv(cliente,buf,4069,0);
        //Mostrar respuesta
        cout << "SERVER> " <<string(buf,bytesReceived) << "\r\n";



    }while (true);

    close(cliente);
    return 0;
}