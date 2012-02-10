#ifndef __LEXERSYMBOLS_H__
#define __LEXERSYMBOLS_H__

// Union to pass information between lexer and caller
typedef union {
   char *str;
} YYSTYPE;

extern YYSTYPE yylval;

// Lexer constants
enum {
   UNUSED = 257,  // start above 256 (we can also return actual chars)
   ERROR_TOKEN, // returned if illegal character found
   END_STMT,   // end of statement
   ID,         // identifier
};

#endif
