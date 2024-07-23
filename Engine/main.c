#include <stdio.h>
#include <stdlib.h>
typedef enum{
INT,
}TypeLiteral;
typedef enum{
    EXIT,
}TypeKeyWord;
typedef enum{
    SEMI,
    OPEN_PAREN,
    CLOSE_PAREN
}TypeSeparator;

 typedef struct {
    TypeKeyWord type;
 }TokenKeyWord;

typedef struct {
    TypeLiteral type;
}TokenLiteralWord;
typedef struct {
    TypeSeparator type;
}TokenTypeSeparator;