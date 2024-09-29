#include "syscall.h"

main()
{
    int len;
    len=Print("Helle NachOS2024!\n");
    PrintInt(len);
    len=Print("Have a nice day at school!\n");
    PrintInt(len);
}