#ifndef SERVER_MANAGER_H
#define SERVER_MANAGER_H

class ServerManager
{

private:
    //singleton stuff
    ServerManager(int PORT);

    static ServerManager *singleton;

    ServerManager(ServerManager &other) = delete;
    void operator=(const ServerManager &) = delete;

    //aquí método para deserealizar json?

    //método general para comunicarse con server, tipo para mandar mensajes y que luego creamos métodos públicos para mandar mensajes específicos

public:
    //! port number to which it connects
    int PORT;

    //public singleton stuff
    ServerManager(ServerManager &other) = delete;   //delete copy constructor (non-cloneable)
    void operator=(const ServerManager &) = delete; //delete assignment operator (non-assignable)

    static ServerManager *getInstance(int PORT = 9999);
};

#endif