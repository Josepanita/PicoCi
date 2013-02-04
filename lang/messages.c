#include <stdlib.h>
#include <string.h>

#define ASSIGN_ERR "error de asignación"
#define ASSIGN "asignar"
#define FIX "fijar"
#define ARG_BAD_CALL " in argument %d of call to %s()"
#define FUNC_ERR "no puedo %s "
#define VOID_POINTER_DERREFERENCE_ERR "desreferencia a un puntero nulo"
#define QUOTATION_MARK_ERR "el primer argumento a '?' debe ser un numero"
#define CANT_GET_ADDRESS_ERR "no puedo obtener la direccion de esto."
#define INVALID_OP_ERR "operacion invalida"
#define INVALID_VOID_POINTER_ERR "uso no valido de un puntero nulo"
#define NOT_SUPPORTED "no soportado"
#define INVALID_EXPR_ERR "expresion invalida"
#define ARRAY_INDEX_ERR "el indice del arreglo debe ser un entero"
#define NOT_AN_ARRAY_ERR "this %t is not an array"
#define INVALID_MEMBER_NAME "se necesita una miembro de estructura o union luego de '%s'"
#define INVALID_MEMBER_OPERATOR_ERR "no puedo usar '%s' en algo que no es una structura o union %s : es un %t"
#define MEMBER_DONT_EXIST_ERR "no tiene un miembro llamado '%s'"
#define UNEXPECTED_OPERATOR_ERR "no esperaba un operador aqui"
#define BRACKET_NOT_CLOSED "corchetes mal cerrados"
#define UNEXPECTED_IDENTIFIER_ERR "no esperaba un identificador aqui"
#define MISUSED_VOID_ERR "un valor vacio no es de mucho uso aqui"
#define UNEXPECTED_VALUE_ERR "valor no esperado aqui"
#define UNEXPECTED_TYPE_ERR "tipo de dato no esperado aqui"
#define OUT_OF_MEMORY_ERR "me quede sin memoria x_x"
#define TOO_MAY_ARGS_ERR "demasiados argumentos para %s()"
#define EXPECTED_COMMA_ERR "esperaba una coma"
#define BAD_ARG_ERR "mal argumento"
#define NOT_ENOUGH_ARGS_ERR "faltan argumentos para '%s'"
#define NOT_DEFINED_ERR "'%s' no esta definido"
#define NOT_A_FUNC_ERR "'%s' no es una funcion - no la puedo llamar"
#define EXPECTED_EXPR_ERR "esperaba una expresion"
#define EXPECTED_INT_ERR "esperaba un entero en vez de un %t"
#define EXPECTED_IDENTIFIER_ERR "esperaba un identificador"
#define EXPECTED_VAL_ERR "esperaba un valor"
#define PP_ELSE_NOT_IF_ERR "#else sin #if"
#define PP_ENDIF_NOT_IF_ERR "#endif sin #if"
#define EMBEDDED_FUNCTION_ERR "definicion de funciones anidadas no soportada"
#define TO_MANY_ARGS_ERR "demasiados parametros"
#define RET_TYPE_MAIN_ERR "main() debe devolver entero or vacio"
#define BAD_PARAM_MAIN_ERR "mal parametro para main()"
#define BAD_FUNC_DEF_ERR "mala definicion de funcion"
#define EXPECTED_FUNC_DEF_ERR "esperaba una definicion de funcion"
#define ALREADY_DEFINED_ERR "'%s' ya esta definida"
#define LBRACE_EXPECTED_ERR "esperaba '}'"
#define RBRACE_EXPECTED_ERR "esperaba '{'"
#define VOID_VARIABLE_ERR "no puedes definir una variable vacia"
#define LPAREN_EXPECTED_ERR "esperaba '('"
#define RPAREN_EXPECTED_ERR "esperaba ')'"
#define DECL_EXPECTED_ERR "esperaba una declaracion"
#define SEMICOLON_EXPECTED_ERR "esperaba ';'"
#define WHILE_EXPECTED_ERR "esperaba 'while'"
#define FILENAME_EXPECTED_ERR "esperaba \"filename.h\""
#define COLON_EXPECTED_ERR "esperaba ':'"
#define RET_VAL_ERR "requiero un valor para devolver"
#define VOID_RET_VAL_ERR "valor devuelto en una funcion de tipo vacia"
#define TYPE_ALREADY_EXISTS_ERR "tipo de dato '%s' ya existe"
#define UNDEFINED_STRUCT_ERR "la estructura '%s' no esta definida en este ambito"
#define NOT_GLOBAL_STRUCT_ERR "las estructuras/uniones solo pueden definirse en un ambito global"
#define INVALID_TYPE_STRUCT_ERR "tipo invalido en estructura"
#define ALREADY_DEFINED_MEMBER_ERR "el miembro '%s' ya esta definido"
#define UNDEFINED_ENUM_ERR "enum '%s' isn't defined"
#define NOT_GLOBAL_ENUM_ERR "enum definitions can only be globals"
#define BAD_TYPE_DECL_ERR "bad type declaration"
#define RBRACKET_EXPECTED_ERR "']' expected"
#define STACK_UNDERRUN_ERR "stack underrun"
#define EMPTY_STACK_ERR "stack is empty - can't go back"

char* getErrorMessage(char * err){
	char* y;
	if(strcmp(err, "assign_err") == 0){
		y = malloc(sizeof(ASSIGN_ERR));
		strcpy(y, ASSIGN_ERR);
	} else if(strcmp(err, "void_pointer_derreference_err") == 0){
		y = malloc(sizeof(VOID_POINTER_DERREFERENCE_ERR));
		strcpy(y, VOID_POINTER_DERREFERENCE_ERR);
	} else if(strcmp(err, "quotation_mark_err") == 0){
		y = malloc(sizeof(QUOTATION_MARK_ERR));
		strcpy(y, QUOTATION_MARK_ERR);
	} else if(strcmp(err, "cant_get_address_err") == 0){
		y = malloc(sizeof(CANT_GET_ADDRESS_ERR));
		strcpy(y, CANT_GET_ADDRESS_ERR);
	} else if(strcmp(err, "invalid_op_err") == 0){
		y = malloc(sizeof(INVALID_OP_ERR));
		strcpy(y, INVALID_OP_ERR);
	} else if(strcmp(err, "invalid_void_pointer_err") == 0){
		y = malloc(sizeof(INVALID_VOID_POINTER_ERR));
		strcpy(y, INVALID_VOID_POINTER_ERR);
	} else if(strcmp(err, "not_supported") == 0){
		y = malloc(sizeof(NOT_SUPPORTED));
		strcpy(y, NOT_SUPPORTED);
	} else if(strcmp(err, "invalid_expr_err") == 0){
		y = malloc(sizeof(INVALID_EXPR_ERR));
		strcpy(y, INVALID_EXPR_ERR);
	} else if(strcmp(err, "array_index_err") == 0){
		y = malloc(sizeof(ARRAY_INDEX_ERR));
		strcpy(y, ARRAY_INDEX_ERR);
	} else if(strcmp(err, "not_an_array_err") == 0){
		y = malloc(sizeof(NOT_AN_ARRAY_ERR));
		strcpy(y, NOT_AN_ARRAY_ERR);
	} else if(strcmp(err, "invalid_member_name") == 0){
		y = malloc(sizeof(INVALID_MEMBER_NAME));
		strcpy(y, INVALID_MEMBER_NAME);
	} else if(strcmp(err, "invalid_member_operator_err") == 0){
		y = malloc(sizeof(INVALID_MEMBER_OPERATOR_ERR));
		strcpy(y, INVALID_MEMBER_OPERATOR_ERR);
	} else if(strcmp(err, "member_dont_exist_err") == 0){
		y = malloc(sizeof(MEMBER_DONT_EXIST_ERR));
		strcpy(y, MEMBER_DONT_EXIST_ERR);
	} else if(strcmp(err, "unexpected_operator_err") == 0){
		y = malloc(sizeof(UNEXPECTED_OPERATOR_ERR));
		strcpy(y, UNEXPECTED_OPERATOR_ERR);
	} else if(strcmp(err, "bracket_not_closed") == 0){
		y = malloc(sizeof(BRACKET_NOT_CLOSED));
		strcpy(y, BRACKET_NOT_CLOSED);
	} else if(strcmp(err, "unexpected_identifier_err") == 0){
		y = malloc(sizeof(UNEXPECTED_IDENTIFIER_ERR));
		strcpy(y, UNEXPECTED_IDENTIFIER_ERR);
	} else if(strcmp(err, "misused_void_err") == 0){
		y = malloc(sizeof(MISUSED_VOID_ERR));
		strcpy(y, MISUSED_VOID_ERR);
	} else if(strcmp(err, "unexpected_value_err") == 0){
		y = malloc(sizeof(UNEXPECTED_VALUE_ERR));
		strcpy(y, UNEXPECTED_VALUE_ERR);
	} else if(strcmp(err, "unexpected_type_err") == 0){
		y = malloc(sizeof(UNEXPECTED_TYPE_ERR));
		strcpy(y, UNEXPECTED_TYPE_ERR);
	} else if(strcmp(err, "out_of_memory_err") == 0){
		y = malloc(sizeof(OUT_OF_MEMORY_ERR));
		strcpy(y, OUT_OF_MEMORY_ERR);
	} else if(strcmp(err, "too_may_args_err") == 0){
		y = malloc(sizeof(TOO_MAY_ARGS_ERR));
		strcpy(y, TOO_MAY_ARGS_ERR);
	} else if(strcmp(err, "expected_comma_err") == 0){
		y = malloc(sizeof(EXPECTED_COMMA_ERR));
		strcpy(y, EXPECTED_COMMA_ERR);
	} else if(strcmp(err, "bad_arg_err") == 0){
		y = malloc(sizeof(BAD_ARG_ERR));
		strcpy(y, BAD_ARG_ERR);
	} else if(strcmp(err, "not_enough_args_err") == 0){
		y = malloc(sizeof(NOT_ENOUGH_ARGS_ERR));
		strcpy(y, NOT_ENOUGH_ARGS_ERR);
	} else if(strcmp(err, "not_defined_err") == 0){
		y = malloc(sizeof(NOT_DEFINED_ERR));
		strcpy(y, NOT_DEFINED_ERR);
	} else if(strcmp(err, "not_a_func_err") == 0){
		y = malloc(sizeof(NOT_A_FUNC_ERR));
		strcpy(y, NOT_A_FUNC_ERR);
	} else if(strcmp(err, "expected_expr_err") == 0){
		y = malloc(sizeof(EXPECTED_EXPR_ERR));
		strcpy(y, EXPECTED_EXPR_ERR);
	} else if(strcmp(err, "expected_int_err") == 0){
		y = malloc(sizeof(EXPECTED_INT_ERR));
		strcpy(y, EXPECTED_INT_ERR);
	} else if(strcmp(err, "expected_identifier_err") == 0){
		y = malloc(sizeof(EXPECTED_IDENTIFIER_ERR));
		strcpy(y, EXPECTED_IDENTIFIER_ERR);
	} else if(strcmp(err, "expected_val_err") == 0){
		y = malloc(sizeof(EXPECTED_VAL_ERR));
		strcpy(y, EXPECTED_VAL_ERR);
	} else if(strcmp(err, "pp_else_not_if_err") == 0){
		y = malloc(sizeof(PP_ELSE_NOT_IF_ERR));
		strcpy(y, PP_ELSE_NOT_IF_ERR);
	} else if(strcmp(err, "pp_endif_not_if_err") == 0){
		y = malloc(sizeof(PP_ENDIF_NOT_IF_ERR));
		strcpy(y, PP_ENDIF_NOT_IF_ERR);
	} else if(strcmp(err, "embedded_function_err") == 0){
		y = malloc(sizeof(EMBEDDED_FUNCTION_ERR));
		strcpy(y, EMBEDDED_FUNCTION_ERR);
	} else if(strcmp(err, "to_many_args_err") == 0){
		y = malloc(sizeof(TO_MANY_ARGS_ERR));
		strcpy(y, TO_MANY_ARGS_ERR);
	} else if(strcmp(err, "ret_type_main_err") == 0){
		y = malloc(sizeof(RET_TYPE_MAIN_ERR));
		strcpy(y, RET_TYPE_MAIN_ERR);
	} else if(strcmp(err, "bad_param_main_err") == 0){
		y = malloc(sizeof(BAD_PARAM_MAIN_ERR));
		strcpy(y, BAD_PARAM_MAIN_ERR);
	} else if(strcmp(err, "bad_func_def_err") == 0){
		y = malloc(sizeof(BAD_FUNC_DEF_ERR));
		strcpy(y, BAD_FUNC_DEF_ERR);
	} else if(strcmp(err, "expected_func_def_err") == 0){
		y = malloc(sizeof(EXPECTED_FUNC_DEF_ERR));
		strcpy(y, EXPECTED_FUNC_DEF_ERR);
	} else if(strcmp(err, "already_defined_err") == 0){
		y = malloc(sizeof(ALREADY_DEFINED_ERR));
		strcpy(y, ALREADY_DEFINED_ERR);
	} else if(strcmp(err, "lbrace_expected_err") == 0){
		y = malloc(sizeof(LBRACE_EXPECTED_ERR));
		strcpy(y, LBRACE_EXPECTED_ERR);
	} else if(strcmp(err, "rbrace_expected_err") == 0){
		y = malloc(sizeof(RBRACE_EXPECTED_ERR));
		strcpy(y, RBRACE_EXPECTED_ERR);
	} else if(strcmp(err, "void_variable_err") == 0){
		y = malloc(sizeof(VOID_VARIABLE_ERR));
		strcpy(y, VOID_VARIABLE_ERR);
	} else if(strcmp(err, "lparen_expected_err") == 0){
		y = malloc(sizeof(LPAREN_EXPECTED_ERR));
		strcpy(y, LPAREN_EXPECTED_ERR);
	} else if(strcmp(err, "rparen_expected_err") == 0){
		y = malloc(sizeof(RPAREN_EXPECTED_ERR));
		strcpy(y, RPAREN_EXPECTED_ERR);
	} else if(strcmp(err, "decl_expected_err") == 0){
		y = malloc(sizeof(DECL_EXPECTED_ERR));
		strcpy(y, DECL_EXPECTED_ERR);
	} else if(strcmp(err, "semicolon_expected_err") == 0){
		y = malloc(sizeof(SEMICOLON_EXPECTED_ERR));
		strcpy(y, SEMICOLON_EXPECTED_ERR);
	} else if(strcmp(err, "while_expected_err") == 0){
		y = malloc(sizeof(WHILE_EXPECTED_ERR));
		strcpy(y, WHILE_EXPECTED_ERR);
	} else if(strcmp(err, "filename_expected_err") == 0){
		y = malloc(sizeof(FILENAME_EXPECTED_ERR));
		strcpy(y, FILENAME_EXPECTED_ERR);
	} else if(strcmp(err, "colon_expected_err") == 0){
		y = malloc(sizeof(COLON_EXPECTED_ERR));
		strcpy(y, COLON_EXPECTED_ERR);
	} else if(strcmp(err, "ret_val_err") == 0){
		y = malloc(sizeof(RET_VAL_ERR));
		strcpy(y, RET_VAL_ERR);
	} else if(strcmp(err, "void_ret_val_err") == 0){
		y = malloc(sizeof(VOID_RET_VAL_ERR));
		strcpy(y, VOID_RET_VAL_ERR);
	} else if(strcmp(err, "type_already_exists_err") == 0){
		y = malloc(sizeof(TYPE_ALREADY_EXISTS_ERR));
		strcpy(y, TYPE_ALREADY_EXISTS_ERR);
	} else if(strcmp(err, "undefined_struct_err") == 0){
		y = malloc(sizeof(UNDEFINED_STRUCT_ERR));
		strcpy(y, UNDEFINED_STRUCT_ERR);
	} else if(strcmp(err, "not_global_struct_err") == 0){
		y = malloc(sizeof(NOT_GLOBAL_STRUCT_ERR));
		strcpy(y, NOT_GLOBAL_STRUCT_ERR);
	} else if(strcmp(err, "invalid_type_struct_err") == 0){
		y = malloc(sizeof(INVALID_TYPE_STRUCT_ERR));
		strcpy(y, INVALID_TYPE_STRUCT_ERR);
	} else if(strcmp(err, "already_defined_member_err") == 0){
		y = malloc(sizeof(ALREADY_DEFINED_MEMBER_ERR));
		strcpy(y, ALREADY_DEFINED_MEMBER_ERR);
	} else if(strcmp(err, "undefined_enum_err") == 0){
		y = malloc(sizeof(UNDEFINED_ENUM_ERR));
		strcpy(y, UNDEFINED_ENUM_ERR);
	} else if(strcmp(err, "not_global_enum_err") == 0){
		y = malloc(sizeof(NOT_GLOBAL_ENUM_ERR));
		strcpy(y, NOT_GLOBAL_ENUM_ERR);
	} else if(strcmp(err, "bad_type_decl_err") == 0){
		y = malloc(sizeof(BAD_TYPE_DECL_ERR));
		strcpy(y, BAD_TYPE_DECL_ERR);
	} else if(strcmp(err, "rbracket_expected_err") == 0){
		y = malloc(sizeof(RBRACKET_EXPECTED_ERR));
		strcpy(y, RBRACKET_EXPECTED_ERR);
	} else if(strcmp(err, "stack_underrun_err") == 0){
		y = malloc(sizeof(STACK_UNDERRUN_ERR));
		strcpy(y, STACK_UNDERRUN_ERR);
	} else if(strcmp(err, "empty_stack_err") == 0){
		y = malloc(sizeof(EMPTY_STACK_ERR));
		strcpy(y, EMPTY_STACK_ERR);
	}else if(strcmp(err, "assign") == 0){
		y = malloc(sizeof(ASSIGN));
		strcpy(y, ASSIGN);
	}else if(strcmp(err, "fix") == 0){
		y = malloc(sizeof(FIX));
		strcpy(y, FIX);
	}else if(strcmp(err, "func_err") == 0){
		y = malloc(sizeof(FUNC_ERR));
		strcpy(y, FUNC_ERR);
	}else if(strcmp(err, "arg_bad_call") == 0){
		y = malloc(sizeof(ARG_BAD_CALL));
		strcpy(y, ARG_BAD_CALL);
	}
	return y;
}
