For each of the following declarations, identify the storage class, type qualifiers, type specifiers, declarators and initializers.

(a) static char **lookup(int level);
(b) volatile unsigned long io_flags;
(c) extern char *file_name[MAX_FILES], path[];
(d) static const char token_but[] = "";


a)
function:
Storage class -  static 
type qualifier - not shown 
type specifier - char** 
declarators: lookup

argument
storage class - auto 
type qualifier - not shown
type specifier - int
declarators: level

b)
Storage class -  auto 
type qualifier -  volatile
type specifier - unsigned long
declarators: io_flags

c)
Storage class -  extern 
type qualifier -  not shown
type specifier - char *[]
declarators: file_name

d)
Storage class -  static 
type qualifier - const
type specifier -  char[]
declarators: token_but

