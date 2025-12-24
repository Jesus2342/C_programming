List the storage duration (static or automatic), scope (block or file) and linkage (internal, external or none) of each variable and parameter in the following file:

extern float a;

void f(register double b)
{
    static int c;
    auto char d;
}

variable (a):
Storage duration: static
scope: file 
linkage: external

variable (b):
Storage duration: auto
scope: block
linkage: none 

variable (c):
Storage duration: static 
scope: block
linkage: none

variable (d):
Storage duration: auto
scope: block
linkage: none
