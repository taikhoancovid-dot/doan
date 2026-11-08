#include "POP3CLI.h"
#include <winsock2.h>

int main() {
    WSADATA wsa; WSAStartup(MAKEWORD(2,2), &wsa);
    POP3CLI().run();
    WSACleanup();
    return 0;
}
