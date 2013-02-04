#include <stdlib.h>
#include <string.h>

#define TokenHashDefine "#define"
#define TokenHashElse "#else"
#define TokenHashEndif "#endif"
#define TokenHashIf "#if"
#define TokenHashIfdef "#ifdef"
#define TokenHashIfndef "#ifndef"
#define TokenHashInclude "#include"
#define TokenIntType "int"
#define TokenAutoType "auto"
#define TokenBreak "break"
#define TokenCase "case"
#define TokenCharType "char"
#define TokenContinue "continue"
#define TokenDefault "default"
#define TokenDelete "delete"
#define TokenDo "do"
#ifndef NO_FP
#define TokenDoubleType "double"
#define TokenFloatType "float"
#endif
#define TokenElse "else"
#define TokenEnumType "enum"
#define TokenExternType "extern"
#define TokenFor "for"
#define TokenGoto "goto"
#define TokenLongType "long"
#define TokenNew "new"
#define TokenRegisterType "register"
#define TokenReturn "return"
#define TokenShortType "short"
#define TokenSignedType "signed"
#define TokenSizeof "sizeof"
#define TokenStaticType "static"
#define TokenStructType "struct"
#define TokenSwitch "switch"
#define TokenTypedef "typedef"
#define TokenUnionType "union"
#define TokenVoidType "void"
#define TokenWhile "while"
#define TokenUnsignedType "unsigned"

char* getToken(char *token_name){
	char* y;
		if(strcmp(token_name, "hashdefine") == 0){
		y = malloc(sizeof(TokenHashDefine));
		strcpy(y, TokenHashDefine);
	} else if(strcmp(token_name, "hashelse") == 0){
		y = malloc(sizeof(TokenHashElse));
		strcpy(y, TokenHashElse);
	} else if(strcmp(token_name, "hashendif") == 0){
		y = malloc(sizeof(TokenHashEndif));
		strcpy(y, TokenHashEndif);
	} else if(strcmp(token_name, "hashif") == 0){
		y = malloc(sizeof(TokenHashIf));
		strcpy(y, TokenHashIf);
	} else if(strcmp(token_name, "hashifdef") == 0){
		y = malloc(sizeof(TokenHashIfdef));
		strcpy(y, TokenHashIfdef);
	} else if(strcmp(token_name, "hashifndef") == 0){
		y = malloc(sizeof(TokenHashIfndef));
		strcpy(y, TokenHashIfndef);
	} else if(strcmp(token_name, "hashinclude") == 0){
		y = malloc(sizeof(TokenHashInclude));
		strcpy(y, TokenHashInclude);
	} else if(strcmp(token_name, "inttype") == 0){
		y = malloc(sizeof(TokenIntType));
		strcpy(y, TokenIntType);
	} else if(strcmp(token_name, "autotype") == 0){
		y = malloc(sizeof(TokenAutoType));
		strcpy(y, TokenAutoType);
	} else if(strcmp(token_name, "break") == 0){
		y = malloc(sizeof(TokenBreak));
		strcpy(y, TokenBreak);
	} else if(strcmp(token_name, "case") == 0){
		y = malloc(sizeof(TokenCase));
		strcpy(y, TokenCase);
	} else if(strcmp(token_name, "chartype") == 0){
		y = malloc(sizeof(TokenCharType));
		strcpy(y, TokenCharType);
	} else if(strcmp(token_name, "continue") == 0){
		y = malloc(sizeof(TokenContinue));
		strcpy(y, TokenContinue);
	} else if(strcmp(token_name, "default") == 0){
		y = malloc(sizeof(TokenDefault));
		strcpy(y, TokenDefault);
	} else if(strcmp(token_name, "delete") == 0){
		y = malloc(sizeof(TokenDelete));
		strcpy(y, TokenDelete);
	} else if(strcmp(token_name, "do") == 0){
		y = malloc(sizeof(TokenDo));
		strcpy(y, TokenDo);
	}
#ifndef NO_FP
	if(strcmp(token_name, "doubletype") == 0){
		y = malloc(sizeof(TokenDoubleType));
		strcpy(y, TokenDoubleType);
	} else if(strcmp(token_name, "floattype") == 0){
		y = malloc(sizeof(TokenFloatType));
		strcpy(y, TokenFloatType);
	}
#endif
	if(strcmp(token_name, "else") == 0){
		y = malloc(sizeof(TokenElse));
		strcpy(y, TokenElse);
	} else if(strcmp(token_name, "enumtype") == 0){
		y = malloc(sizeof(TokenEnumType));
		strcpy(y, TokenEnumType);
	} else if(strcmp(token_name, "externtype") == 0){
		y = malloc(sizeof(TokenExternType));
		strcpy(y, TokenExternType);
	} else if(strcmp(token_name, "for") == 0){
		y = malloc(sizeof(TokenFor));
		strcpy(y, TokenFor);
	} else if(strcmp(token_name, "goto") == 0){
		y = malloc(sizeof(TokenGoto));
		strcpy(y, TokenGoto);
	} else if(strcmp(token_name, "longtype") == 0){
		y = malloc(sizeof(TokenLongType));
		strcpy(y, TokenLongType);
	} else if(strcmp(token_name, "new") == 0){
		y = malloc(sizeof(TokenNew));
		strcpy(y, TokenNew);
	} else if(strcmp(token_name, "registertype") == 0){
		y = malloc(sizeof(TokenRegisterType));
		strcpy(y, TokenRegisterType);
	} else if(strcmp(token_name, "return") == 0){
		y = malloc(sizeof(TokenReturn));
		strcpy(y, TokenReturn);
	} else if(strcmp(token_name, "shorttype") == 0){
		y = malloc(sizeof(TokenShortType));
		strcpy(y, TokenShortType);
	} else if(strcmp(token_name, "signedtype") == 0){
		y = malloc(sizeof(TokenSignedType));
		strcpy(y, TokenSignedType);
	} else if(strcmp(token_name, "sizeof") == 0){
		y = malloc(sizeof(TokenSizeof));
		strcpy(y, TokenSizeof);
	} else if(strcmp(token_name, "statictype") == 0){
		y = malloc(sizeof(TokenStaticType));
		strcpy(y, TokenStaticType);
	} else if(strcmp(token_name, "structtype") == 0){
		y = malloc(sizeof(TokenStructType));
		strcpy(y, TokenStructType);
	} else if(strcmp(token_name, "switch") == 0){
		y = malloc(sizeof(TokenSwitch));
		strcpy(y, TokenSwitch);
	} else if(strcmp(token_name, "typedef") == 0){
		y = malloc(sizeof(TokenTypedef));
		strcpy(y, TokenTypedef);
	} else if(strcmp(token_name, "uniontype") == 0){
		y = malloc(sizeof(TokenUnionType));
		strcpy(y, TokenUnionType);
	} else if(strcmp(token_name, "voidtype") == 0){
		y = malloc(sizeof(TokenVoidType));
		strcpy(y, TokenVoidType);
	} else if(strcmp(token_name, "while") == 0){
		y = malloc(sizeof(TokenWhile));
		strcpy(y, TokenWhile);
	} else if(strcmp(token_name, "unsignedtype") == 0){
		y = malloc(sizeof(TokenUnsignedType));
		strcpy(y, TokenUnsignedType);
	}
	return y;
}
