#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>
#include <netdb.h>
#include <string>
#include "Lista_Enlazada.h"
#include "arbol_binario.h"

using namespace std;


int main() {
    Lista_Enlazada lst;
    lst.Insertar(3);
    lst.Insertar(6);
    lst.Insertar(7);
    lst.Insertar(10);
    lst.print();
    lst.edit_pos(0,80);
    lst.edit_pos(1,50);
    lst.edit_pos(2,40);
    lst.edit_pos(4,10);
    lst.get(3);
    lst.get(1);
    cout << "\n";

    lst.print();
    lst.eliminar();
    cout << "\n";
    lst.print();

   int contador = 0;
    arbol_binario arbol;
    arbol.insertar(arbol.raiz,5);
    arbol.insertar(arbol.raiz,3);
    arbol.insertar(arbol.raiz,4);
    arbol.insertar(arbol.raiz,2);
    arbol.insertar(arbol.raiz,7);
    arbol.insertar(arbol.raiz,6);
    arbol.insertar(arbol.raiz,8);

    arbol.print(arbol.raiz,contador);





    //Se crear el socket
    int server = socket(AF_INET, SOCK_STREAM,0);
    if (server == -1){
        cerr << "¡Error al crear el socket!";
        return -1;
    }
    //Se le asigna un puerto al socket.
    sockaddr_in puerto{};
    puerto.sin_family =AF_INET;
    puerto.sin_port = htons(8800);
    inet_pton(AF_INET,"0.0.0.0", &puerto.sin_addr);

    if (bind(server,(struct sockaddr *)&puerto,sizeof(puerto))==-1)
    {
        cerr << "Error al asignar el puerto";
        return -2;

    }
    //Se pone al socket en espera, "Escuchando"

    if(listen(server,SOMAXCONN)==-1)
    {
        cerr << "¡No se pudo recibir informaciòn!";
        return -3;
    }

    //Aceptar informaciòn
    sockaddr_in client{};
    socklen_t clientSize = sizeof(client);
    char host[NI_MAXHOST];
    char svc[NI_MAXSERV];

    int clientSocket = accept(server,(sockaddr*)&client,&clientSize);

    if (clientSocket == -1){
        cerr << "¡Error de conexiòn con el cliente!";
        return -4;
    }
    close(server);
    memset(host,0,NI_MAXHOST);
    memset(svc,0,NI_MAXSERV);

    int result = getnameinfo((sockaddr*)&client, sizeof(client),host,NI_MAXHOST,svc,NI_MAXSERV,0);

    if(result){
        cout << host << " connected on " << svc << endl;
    }
    else{
        inet_ntop(AF_INET,&client.sin_addr,host,NI_MAXHOST);
        cout << host << " connected on " <<ntohs(client.sin_port);
    }

    //Receiving
    char buf[4096];

    while(true){
        //Clean
        memset(buf,0,4096);
        //Wait for message
        int bytesRecv = recv(clientSocket,buf,4096,0);

        if(bytesRecv == -1){
            cerr << "Problema de conexiòn." << endl;
            break;
        }
        if(bytesRecv == 0){
            cout << "El cliente se desconecto" << endl;
            break;
        }

        cout << "Received: "<< string(buf,0,bytesRecv)<<endl;
        send(clientSocket,buf,bytesRecv,0);
    }
        close(clientSocket);
        return 0;

}