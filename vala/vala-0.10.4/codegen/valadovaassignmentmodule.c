/* valadovaassignmentmodule.c generated by valac, the Vala compiler
 * generated from valadovaassignmentmodule.vala, do not modify */

/* valadovaassignmentmodule.vala
 *
 * Copyright (C) 2006-2009  Jürg Billeter
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Jürg Billeter <j@bitron.ch>
 */

#include <glib.h>
#include <glib-object.h>
#include <vala.h>
#include <valaccode.h>
#include <stdlib.h>
#include <string.h>
#include <valagee.h>


#define VALA_TYPE_DOVA_BASE_MODULE (vala_dova_base_module_get_type ())
#define VALA_DOVA_BASE_MODULE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DOVA_BASE_MODULE, ValaDovaBaseModule))
#define VALA_DOVA_BASE_MODULE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DOVA_BASE_MODULE, ValaDovaBaseModuleClass))
#define VALA_IS_DOVA_BASE_MODULE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DOVA_BASE_MODULE))
#define VALA_IS_DOVA_BASE_MODULE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DOVA_BASE_MODULE))
#define VALA_DOVA_BASE_MODULE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DOVA_BASE_MODULE, ValaDovaBaseModuleClass))

typedef struct _ValaDovaBaseModule ValaDovaBaseModule;
typedef struct _ValaDovaBaseModuleClass ValaDovaBaseModuleClass;
typedef struct _ValaDovaBaseModulePrivate ValaDovaBaseModulePrivate;

#define VALA_TYPE_CCODE_DECLARATION_SPACE (vala_ccode_declaration_space_get_type ())
#define VALA_CCODE_DECLARATION_SPACE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_DECLARATION_SPACE, ValaCCodeDeclarationSpace))
#define VALA_CCODE_DECLARATION_SPACE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_DECLARATION_SPACE, ValaCCodeDeclarationSpaceClass))
#define VALA_IS_CCODE_DECLARATION_SPACE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_DECLARATION_SPACE))
#define VALA_IS_CCODE_DECLARATION_SPACE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_DECLARATION_SPACE))
#define VALA_CCODE_DECLARATION_SPACE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_DECLARATION_SPACE, ValaCCodeDeclarationSpaceClass))

typedef struct _ValaCCodeDeclarationSpace ValaCCodeDeclarationSpace;
typedef struct _ValaCCodeDeclarationSpaceClass ValaCCodeDeclarationSpaceClass;

#define VALA_DOVA_BASE_MODULE_TYPE_EMIT_CONTEXT (vala_dova_base_module_emit_context_get_type ())
#define VALA_DOVA_BASE_MODULE_EMIT_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_DOVA_BASE_MODULE_TYPE_EMIT_CONTEXT, ValaDovaBaseModuleEmitContext))
#define VALA_DOVA_BASE_MODULE_EMIT_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_DOVA_BASE_MODULE_TYPE_EMIT_CONTEXT, ValaDovaBaseModuleEmitContextClass))
#define VALA_DOVA_BASE_MODULE_IS_EMIT_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_DOVA_BASE_MODULE_TYPE_EMIT_CONTEXT))
#define VALA_DOVA_BASE_MODULE_IS_EMIT_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_DOVA_BASE_MODULE_TYPE_EMIT_CONTEXT))
#define VALA_DOVA_BASE_MODULE_EMIT_CONTEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_DOVA_BASE_MODULE_TYPE_EMIT_CONTEXT, ValaDovaBaseModuleEmitContextClass))

typedef struct _ValaDovaBaseModuleEmitContext ValaDovaBaseModuleEmitContext;
typedef struct _ValaDovaBaseModuleEmitContextClass ValaDovaBaseModuleEmitContextClass;

#define VALA_TYPE_DOVA_STRUCT_MODULE (vala_dova_struct_module_get_type ())
#define VALA_DOVA_STRUCT_MODULE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DOVA_STRUCT_MODULE, ValaDovaStructModule))
#define VALA_DOVA_STRUCT_MODULE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DOVA_STRUCT_MODULE, ValaDovaStructModuleClass))
#define VALA_IS_DOVA_STRUCT_MODULE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DOVA_STRUCT_MODULE))
#define VALA_IS_DOVA_STRUCT_MODULE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DOVA_STRUCT_MODULE))
#define VALA_DOVA_STRUCT_MODULE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DOVA_STRUCT_MODULE, ValaDovaStructModuleClass))

typedef struct _ValaDovaStructModule ValaDovaStructModule;
typedef struct _ValaDovaStructModuleClass ValaDovaStructModuleClass;
typedef struct _ValaDovaStructModulePrivate ValaDovaStructModulePrivate;

#define VALA_TYPE_DOVA_METHOD_MODULE (vala_dova_method_module_get_type ())
#define VALA_DOVA_METHOD_MODULE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DOVA_METHOD_MODULE, ValaDovaMethodModule))
#define VALA_DOVA_METHOD_MODULE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DOVA_METHOD_MODULE, ValaDovaMethodModuleClass))
#define VALA_IS_DOVA_METHOD_MODULE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DOVA_METHOD_MODULE))
#define VALA_IS_DOVA_METHOD_MODULE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DOVA_METHOD_MODULE))
#define VALA_DOVA_METHOD_MODULE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DOVA_METHOD_MODULE, ValaDovaMethodModuleClass))

typedef struct _ValaDovaMethodModule ValaDovaMethodModule;
typedef struct _ValaDovaMethodModuleClass ValaDovaMethodModuleClass;
typedef struct _ValaDovaMethodModulePrivate ValaDovaMethodModulePrivate;

#define VALA_TYPE_DOVA_CONTROL_FLOW_MODULE (vala_dova_control_flow_module_get_type ())
#define VALA_DOVA_CONTROL_FLOW_MODULE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DOVA_CONTROL_FLOW_MODULE, ValaDovaControlFlowModule))
#define VALA_DOVA_CONTROL_FLOW_MODULE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DOVA_CONTROL_FLOW_MODULE, ValaDovaControlFlowModuleClass))
#define VALA_IS_DOVA_CONTROL_FLOW_MODULE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DOVA_CONTROL_FLOW_MODULE))
#define VALA_IS_DOVA_CONTROL_FLOW_MODULE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DOVA_CONTROL_FLOW_MODULE))
#define VALA_DOVA_CONTROL_FLOW_MODULE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DOVA_CONTROL_FLOW_MODULE, ValaDovaControlFlowModuleClass))

typedef struct _ValaDovaControlFlowModule ValaDovaControlFlowModule;
typedef struct _ValaDovaControlFlowModuleClass ValaDovaControlFlowModuleClass;
typedef struct _ValaDovaControlFlowModulePrivate ValaDovaControlFlowModulePrivate;

#define VALA_TYPE_DOVA_MEMBER_ACCESS_MODULE (vala_dova_member_access_module_get_type ())
#define VALA_DOVA_MEMBER_ACCESS_MODULE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DOVA_MEMBER_ACCESS_MODULE, ValaDovaMemberAccessModule))
#define VALA_DOVA_MEMBER_ACCESS_MODULE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DOVA_MEMBER_ACCESS_MODULE, ValaDovaMemberAccessModuleClass))
#define VALA_IS_DOVA_MEMBER_ACCESS_MODULE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DOVA_MEMBER_ACCESS_MODULE))
#define VALA_IS_DOVA_MEMBER_ACCESS_MODULE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DOVA_MEMBER_ACCESS_MODULE))
#define VALA_DOVA_MEMBER_ACCESS_MODULE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DOVA_MEMBER_ACCESS_MODULE, ValaDovaMemberAccessModuleClass))

typedef struct _ValaDovaMemberAccessModule ValaDovaMemberAccessModule;
typedef struct _ValaDovaMemberAccessModuleClass ValaDovaMemberAccessModuleClass;
typedef struct _ValaDovaMemberAccessModulePrivate ValaDovaMemberAccessModulePrivate;

#define VALA_TYPE_DOVA_ASSIGNMENT_MODULE (vala_dova_assignment_module_get_type ())
#define VALA_DOVA_ASSIGNMENT_MODULE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DOVA_ASSIGNMENT_MODULE, ValaDovaAssignmentModule))
#define VALA_DOVA_ASSIGNMENT_MODULE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DOVA_ASSIGNMENT_MODULE, ValaDovaAssignmentModuleClass))
#define VALA_IS_DOVA_ASSIGNMENT_MODULE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DOVA_ASSIGNMENT_MODULE))
#define VALA_IS_DOVA_ASSIGNMENT_MODULE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DOVA_ASSIGNMENT_MODULE))
#define VALA_DOVA_ASSIGNMENT_MODULE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DOVA_ASSIGNMENT_MODULE, ValaDovaAssignmentModuleClass))

typedef struct _ValaDovaAssignmentModule ValaDovaAssignmentModule;
typedef struct _ValaDovaAssignmentModuleClass ValaDovaAssignmentModuleClass;
typedef struct _ValaDovaAssignmentModulePrivate ValaDovaAssignmentModulePrivate;
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaDovaBaseModule {
	ValaCodeGenerator parent_instance;
	ValaDovaBaseModulePrivate * priv;
	ValaSymbol* root_symbol;
	ValaDovaBaseModuleEmitContext* emit_context;
	ValaCCodeDeclarationSpace* header_declarations;
	ValaCCodeDeclarationSpace* source_declarations;
	ValaCCodeFragment* source_type_member_definition;
	ValaCCodeFragment* module_init_fragment;
	ValaCCodeFragment* instance_init_fragment;
	ValaCCodeFragment* instance_finalize_fragment;
	ValaCCodeFragment* pre_statement_fragment;
	gint next_wrapper_id;
	ValaDataType* void_type;
	ValaDataType* bool_type;
	ValaDataType* char_type;
	ValaDataType* short_type;
	ValaDataType* ushort_type;
	ValaDataType* int_type;
	ValaDataType* uint_type;
	ValaDataType* long_type;
	ValaDataType* ulong_type;
	ValaDataType* string_type;
	ValaDataType* float_type;
	ValaDataType* double_type;
	ValaClass* object_class;
	ValaClass* type_class;
	ValaClass* value_class;
	ValaClass* string_class;
	ValaClass* array_class;
	ValaClass* delegate_class;
	ValaClass* error_class;
};

struct _ValaDovaBaseModuleClass {
	ValaCodeGeneratorClass parent_class;
	void (*generate_struct_declaration) (ValaDovaBaseModule* self, ValaStruct* st, ValaCCodeDeclarationSpace* decl_space);
	void (*generate_delegate_declaration) (ValaDovaBaseModule* self, ValaDelegate* d, ValaCCodeDeclarationSpace* decl_space);
	void (*generate_cparameters) (ValaDovaBaseModule* self, ValaMethod* m, ValaCCodeDeclarationSpace* decl_space, ValaCCodeFunction* func, ValaCCodeFunctionDeclarator* vdeclarator, ValaCCodeFunctionCall* vcall);
	void (*generate_property_accessor_declaration) (ValaDovaBaseModule* self, ValaPropertyAccessor* acc, ValaCCodeDeclarationSpace* decl_space);
	ValaCCodeExpression* (*get_dup_func_expression) (ValaDovaBaseModule* self, ValaDataType* type, ValaSourceReference* source_reference, gboolean is_chainup);
	ValaCCodeExpression* (*get_unref_expression) (ValaDovaBaseModule* self, ValaCCodeExpression* cvar, ValaDataType* type, ValaExpression* expr);
	void (*append_local_free) (ValaDovaBaseModule* self, ValaSymbol* sym, ValaCCodeFragment* cfrag, gboolean stop_at_loop);
	ValaCCodeExpression* (*get_ref_cexpression) (ValaDovaBaseModule* self, ValaDataType* expression_type, ValaCCodeExpression* cexpr, ValaExpression* expr, ValaCodeNode* node);
	void (*generate_class_declaration) (ValaDovaBaseModule* self, ValaClass* cl, ValaCCodeDeclarationSpace* decl_space);
	void (*generate_interface_declaration) (ValaDovaBaseModule* self, ValaInterface* iface, ValaCCodeDeclarationSpace* decl_space);
	void (*generate_method_declaration) (ValaDovaBaseModule* self, ValaMethod* m, ValaCCodeDeclarationSpace* decl_space);
	ValaCCodeExpression* (*get_implicit_cast_expression) (ValaDovaBaseModule* self, ValaCCodeExpression* source_cexpr, ValaDataType* expression_type, ValaDataType* target_type, ValaExpression* expr);
	char* (*get_custom_creturn_type) (ValaDovaBaseModule* self, ValaMethod* m);
	gboolean (*method_has_wrapper) (ValaDovaBaseModule* self, ValaMethod* method);
	void (*add_simple_check) (ValaDovaBaseModule* self, ValaCodeNode* node, ValaCCodeFragment* cfrag, gboolean always_fails);
};

struct _ValaDovaStructModule {
	ValaDovaBaseModule parent_instance;
	ValaDovaStructModulePrivate * priv;
};

struct _ValaDovaStructModuleClass {
	ValaDovaBaseModuleClass parent_class;
};

struct _ValaDovaMethodModule {
	ValaDovaStructModule parent_instance;
	ValaDovaMethodModulePrivate * priv;
};

struct _ValaDovaMethodModuleClass {
	ValaDovaStructModuleClass parent_class;
};

struct _ValaDovaControlFlowModule {
	ValaDovaMethodModule parent_instance;
	ValaDovaControlFlowModulePrivate * priv;
};

struct _ValaDovaControlFlowModuleClass {
	ValaDovaMethodModuleClass parent_class;
};

struct _ValaDovaMemberAccessModule {
	ValaDovaControlFlowModule parent_instance;
	ValaDovaMemberAccessModulePrivate * priv;
};

struct _ValaDovaMemberAccessModuleClass {
	ValaDovaControlFlowModuleClass parent_class;
};

struct _ValaDovaAssignmentModule {
	ValaDovaMemberAccessModule parent_instance;
	ValaDovaAssignmentModulePrivate * priv;
};

struct _ValaDovaAssignmentModuleClass {
	ValaDovaMemberAccessModuleClass parent_class;
};


static gpointer vala_dova_assignment_module_parent_class = NULL;

GType vala_dova_base_module_get_type (void) G_GNUC_CONST;
gpointer vala_ccode_declaration_space_ref (gpointer instance);
void vala_ccode_declaration_space_unref (gpointer instance);
GParamSpec* vala_param_spec_ccode_declaration_space (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_ccode_declaration_space (GValue* value, gpointer v_object);
void vala_value_take_ccode_declaration_space (GValue* value, gpointer v_object);
gpointer vala_value_get_ccode_declaration_space (const GValue* value);
GType vala_ccode_declaration_space_get_type (void) G_GNUC_CONST;
gpointer vala_dova_base_module_emit_context_ref (gpointer instance);
void vala_dova_base_module_emit_context_unref (gpointer instance);
GParamSpec* vala_dova_base_module_param_spec_emit_context (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_dova_base_module_value_set_emit_context (GValue* value, gpointer v_object);
void vala_dova_base_module_value_take_emit_context (GValue* value, gpointer v_object);
gpointer vala_dova_base_module_value_get_emit_context (const GValue* value);
GType vala_dova_base_module_emit_context_get_type (void) G_GNUC_CONST;
GType vala_dova_struct_module_get_type (void) G_GNUC_CONST;
GType vala_dova_method_module_get_type (void) G_GNUC_CONST;
GType vala_dova_control_flow_module_get_type (void) G_GNUC_CONST;
GType vala_dova_member_access_module_get_type (void) G_GNUC_CONST;
GType vala_dova_assignment_module_get_type (void) G_GNUC_CONST;
enum  {
	VALA_DOVA_ASSIGNMENT_MODULE_DUMMY_PROPERTY
};
static ValaCCodeExpression* vala_dova_assignment_module_emit_property_assignment (ValaDovaAssignmentModule* self, ValaAssignment* assignment);
void vala_dova_base_module_generate_property_accessor_declaration (ValaDovaBaseModule* self, ValaPropertyAccessor* acc, ValaCCodeDeclarationSpace* decl_space);
gboolean vala_dova_base_module_add_generated_external_symbol (ValaDovaBaseModule* self, ValaSymbol* external_symbol);
ValaCCodeNode* vala_dova_base_module_get_ccodenode (ValaDovaBaseModule* self, ValaCodeNode* node);
ValaCCodeFunctionCall* vala_dova_base_module_get_property_set_call (ValaDovaBaseModule* self, ValaProperty* prop, ValaMemberAccess* ma, ValaCCodeExpression* cexpr, ValaExpression* rhs);
static ValaCCodeExpression* vala_dova_assignment_module_emit_simple_assignment (ValaDovaAssignmentModule* self, ValaAssignment* assignment);
gboolean vala_dova_base_module_requires_destroy (ValaDovaBaseModule* self, ValaDataType* type);
gboolean vala_dova_base_module_is_pure_ccode_expression (ValaDovaBaseModule* self, ValaCCodeExpression* cexpr);
gint vala_dova_base_module_get_next_temp_var_id (ValaDovaBaseModule* self);
void vala_dova_base_module_set_next_temp_var_id (ValaDovaBaseModule* self, gint value);
ValaArrayList* vala_dova_base_module_get_temp_vars (ValaDovaBaseModule* self);
ValaCCodeExpression* vala_dova_base_module_get_variable_cexpression (ValaDovaBaseModule* self, const char* name);
ValaLocalVariable* vala_dova_base_module_get_temp_variable (ValaDovaBaseModule* self, ValaDataType* type, gboolean value_owned, ValaCodeNode* node_reference);
ValaCCodeExpression* vala_dova_base_module_get_unref_expression (ValaDovaBaseModule* self, ValaCCodeExpression* cvar, ValaDataType* type, ValaExpression* expr);
static ValaCCodeExpression* vala_dova_assignment_module_emit_fixed_length_array_assignment (ValaDovaAssignmentModule* self, ValaAssignment* assignment, ValaArrayType* array_type);
static void vala_dova_assignment_module_real_visit_assignment (ValaCodeVisitor* base, ValaAssignment* assignment);
ValaDovaAssignmentModule* vala_dova_assignment_module_new (void);
ValaDovaAssignmentModule* vala_dova_assignment_module_construct (GType object_type);
ValaDovaMemberAccessModule* vala_dova_member_access_module_new (void);
ValaDovaMemberAccessModule* vala_dova_member_access_module_construct (GType object_type);



static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


static gpointer _vala_ccode_node_ref0 (gpointer self) {
	return self ? vala_ccode_node_ref (self) : NULL;
}


static ValaCCodeExpression* vala_dova_assignment_module_emit_property_assignment (ValaDovaAssignmentModule* self, ValaAssignment* assignment) {
	ValaCCodeExpression* result = NULL;
	ValaExpression* _tmp0_;
	ValaMemberAccess* ma;
	ValaProperty* prop;
	ValaCCodeExpression* cexpr;
	ValaCCodeFunctionCall* ccall;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (assignment != NULL, NULL);
	ma = _vala_code_node_ref0 ((_tmp0_ = vala_assignment_get_left (assignment), VALA_IS_MEMBER_ACCESS (_tmp0_) ? ((ValaMemberAccess*) _tmp0_) : NULL));
	prop = _vala_code_node_ref0 (VALA_PROPERTY (vala_expression_get_symbol_reference (vala_assignment_get_left (assignment))));
	if (!VALA_IS_DYNAMIC_PROPERTY (prop)) {
		gboolean _tmp1_ = FALSE;
		vala_dova_base_module_generate_property_accessor_declaration ((ValaDovaBaseModule*) self, vala_property_get_set_accessor (prop), ((ValaDovaBaseModule*) self)->source_declarations);
		if (!vala_symbol_get_external ((ValaSymbol*) prop)) {
			_tmp1_ = vala_symbol_get_external_package ((ValaSymbol*) prop);
		} else {
			_tmp1_ = FALSE;
		}
		if (_tmp1_) {
			if (vala_dova_base_module_add_generated_external_symbol ((ValaDovaBaseModule*) self, (ValaSymbol*) prop)) {
				vala_code_visitor_visit_property ((ValaCodeVisitor*) self, prop);
			}
		}
	}
	cexpr = _vala_ccode_node_ref0 (VALA_CCODE_EXPRESSION (vala_code_node_get_ccodenode ((ValaCodeNode*) vala_assignment_get_right (assignment))));
	if (vala_assignment_get_operator (assignment) != VALA_ASSIGNMENT_OPERATOR_SIMPLE) {
		ValaCCodeBinaryOperator cop = 0;
		ValaCCodeExpression* _tmp2_;
		ValaCCodeExpression* _tmp3_;
		if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_BITWISE_OR) {
			cop = VALA_CCODE_BINARY_OPERATOR_BITWISE_OR;
		} else {
			if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_BITWISE_AND) {
				cop = VALA_CCODE_BINARY_OPERATOR_BITWISE_AND;
			} else {
				if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_BITWISE_XOR) {
					cop = VALA_CCODE_BINARY_OPERATOR_BITWISE_XOR;
				} else {
					if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_ADD) {
						cop = VALA_CCODE_BINARY_OPERATOR_PLUS;
					} else {
						if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_SUB) {
							cop = VALA_CCODE_BINARY_OPERATOR_MINUS;
						} else {
							if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_MUL) {
								cop = VALA_CCODE_BINARY_OPERATOR_MUL;
							} else {
								if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_DIV) {
									cop = VALA_CCODE_BINARY_OPERATOR_DIV;
								} else {
									if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_PERCENT) {
										cop = VALA_CCODE_BINARY_OPERATOR_MOD;
									} else {
										if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_SHIFT_LEFT) {
											cop = VALA_CCODE_BINARY_OPERATOR_SHIFT_LEFT;
										} else {
											if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_SHIFT_RIGHT) {
												cop = VALA_CCODE_BINARY_OPERATOR_SHIFT_RIGHT;
											} else {
												g_assert_not_reached ();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cexpr = (_tmp3_ = (ValaCCodeExpression*) vala_ccode_binary_expression_new (cop, _tmp2_ = VALA_CCODE_EXPRESSION (vala_dova_base_module_get_ccodenode ((ValaDovaBaseModule*) self, (ValaCodeNode*) vala_assignment_get_left (assignment))), cexpr), _vala_ccode_node_unref0 (cexpr), _tmp3_);
		_vala_ccode_node_unref0 (_tmp2_);
	}
	ccall = vala_dova_base_module_get_property_set_call ((ValaDovaBaseModule*) self, prop, ma, cexpr, vala_assignment_get_right (assignment));
	if (!VALA_IS_EXPRESSION_STATEMENT (vala_code_node_get_parent_node ((ValaCodeNode*) assignment))) {
		ValaCCodeCommaExpression* ccomma;
		ValaCCodeExpression* _tmp4_;
		ccomma = vala_ccode_comma_expression_new ();
		vala_ccode_comma_expression_append_expression (ccomma, (ValaCCodeExpression*) ccall);
		vala_ccode_comma_expression_append_expression (ccomma, _tmp4_ = VALA_CCODE_EXPRESSION (vala_dova_base_module_get_ccodenode ((ValaDovaBaseModule*) self, (ValaCodeNode*) ma)));
		_vala_ccode_node_unref0 (_tmp4_);
		result = (ValaCCodeExpression*) ccomma;
		_vala_ccode_node_unref0 (ccall);
		_vala_ccode_node_unref0 (cexpr);
		_vala_code_node_unref0 (prop);
		_vala_code_node_unref0 (ma);
		return result;
	} else {
		result = (ValaCCodeExpression*) ccall;
		_vala_ccode_node_unref0 (cexpr);
		_vala_code_node_unref0 (prop);
		_vala_code_node_unref0 (ma);
		return result;
	}
	_vala_ccode_node_unref0 (ccall);
	_vala_ccode_node_unref0 (cexpr);
	_vala_code_node_unref0 (prop);
	_vala_code_node_unref0 (ma);
}


static ValaCCodeExpression* vala_dova_assignment_module_emit_simple_assignment (ValaDovaAssignmentModule* self, ValaAssignment* assignment) {
	ValaCCodeExpression* result = NULL;
	ValaCCodeExpression* rhs;
	ValaCCodeExpression* lhs;
	ValaCCodeCommaExpression* outer_ccomma;
	gboolean unref_old;
	ValaCCodeAssignmentOperator cop;
	ValaCCodeExpression* codenode;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (assignment != NULL, NULL);
	rhs = _vala_ccode_node_ref0 (VALA_CCODE_EXPRESSION (vala_code_node_get_ccodenode ((ValaCodeNode*) vala_assignment_get_right (assignment))));
	lhs = VALA_CCODE_EXPRESSION (vala_dova_base_module_get_ccodenode ((ValaDovaBaseModule*) self, (ValaCodeNode*) vala_assignment_get_left (assignment)));
	outer_ccomma = NULL;
	unref_old = vala_dova_base_module_requires_destroy ((ValaDovaBaseModule*) self, vala_expression_get_value_type (vala_assignment_get_left (assignment)));
	if (unref_old) {
		ValaCCodeCommaExpression* ccomma;
		ValaLocalVariable* temp_decl;
		ValaCCodeExpression* _tmp10_;
		ValaCCodeAssignment* _tmp11_;
		ValaCCodeExpression* _tmp13_;
		ValaCCodeExpression* _tmp14_;
		ccomma = vala_ccode_comma_expression_new ();
		if (!vala_dova_base_module_is_pure_ccode_expression ((ValaDovaBaseModule*) self, lhs)) {
			ValaCCodeCommaExpression* _tmp0_;
			ValaDataType* lhs_value_type;
			gint _tmp1_;
			char* lhs_temp_name;
			char* _tmp2_;
			ValaLocalVariable* _tmp3_;
			ValaLocalVariable* lhs_temp;
			ValaCCodeExpression* _tmp4_;
			ValaCCodeUnaryExpression* _tmp5_;
			ValaCCodeAssignment* _tmp6_;
			ValaCCodeExpression* _tmp7_;
			ValaCCodeUnaryExpression* _tmp8_;
			ValaCCodeExpression* _tmp9_;
			outer_ccomma = (_tmp0_ = vala_ccode_comma_expression_new (), _vala_ccode_node_unref0 (outer_ccomma), _tmp0_);
			lhs_value_type = vala_data_type_copy (vala_expression_get_value_type (vala_assignment_get_left (assignment)));
			lhs_temp_name = g_strdup_printf ("_tmp%d_", (_tmp1_ = vala_dova_base_module_get_next_temp_var_id ((ValaDovaBaseModule*) self), vala_dova_base_module_set_next_temp_var_id ((ValaDovaBaseModule*) self, _tmp1_ + 1), _tmp1_));
			lhs_temp = (_tmp3_ = vala_local_variable_new (lhs_value_type, _tmp2_ = g_strconcat ("*", lhs_temp_name, NULL), NULL, NULL), _g_free0 (_tmp2_), _tmp3_);
			vala_collection_add ((ValaCollection*) vala_dova_base_module_get_temp_vars ((ValaDovaBaseModule*) self), lhs_temp);
			vala_ccode_comma_expression_append_expression (outer_ccomma, (ValaCCodeExpression*) (_tmp6_ = vala_ccode_assignment_new (_tmp4_ = vala_dova_base_module_get_variable_cexpression ((ValaDovaBaseModule*) self, lhs_temp_name), (ValaCCodeExpression*) (_tmp5_ = vala_ccode_unary_expression_new (VALA_CCODE_UNARY_OPERATOR_ADDRESS_OF, lhs)), VALA_CCODE_ASSIGNMENT_OPERATOR_SIMPLE)));
			_vala_ccode_node_unref0 (_tmp6_);
			_vala_ccode_node_unref0 (_tmp5_);
			_vala_ccode_node_unref0 (_tmp4_);
			lhs = (_tmp9_ = (ValaCCodeExpression*) vala_ccode_parenthesized_expression_new ((ValaCCodeExpression*) (_tmp8_ = vala_ccode_unary_expression_new (VALA_CCODE_UNARY_OPERATOR_POINTER_INDIRECTION, _tmp7_ = vala_dova_base_module_get_variable_cexpression ((ValaDovaBaseModule*) self, lhs_temp_name)))), _vala_ccode_node_unref0 (lhs), _tmp9_);
			_vala_ccode_node_unref0 (_tmp8_);
			_vala_ccode_node_unref0 (_tmp7_);
			_vala_code_node_unref0 (lhs_temp);
			_g_free0 (lhs_temp_name);
			_vala_code_node_unref0 (lhs_value_type);
		}
		temp_decl = vala_dova_base_module_get_temp_variable ((ValaDovaBaseModule*) self, vala_expression_get_value_type (vala_assignment_get_left (assignment)), TRUE, NULL);
		vala_collection_add ((ValaCollection*) vala_dova_base_module_get_temp_vars ((ValaDovaBaseModule*) self), temp_decl);
		vala_ccode_comma_expression_append_expression (ccomma, (ValaCCodeExpression*) (_tmp11_ = vala_ccode_assignment_new (_tmp10_ = vala_dova_base_module_get_variable_cexpression ((ValaDovaBaseModule*) self, vala_symbol_get_name ((ValaSymbol*) temp_decl)), rhs, VALA_CCODE_ASSIGNMENT_OPERATOR_SIMPLE)));
		_vala_ccode_node_unref0 (_tmp11_);
		_vala_ccode_node_unref0 (_tmp10_);
		if (unref_old) {
			ValaCCodeExpression* _tmp12_;
			vala_ccode_comma_expression_append_expression (ccomma, _tmp12_ = vala_dova_base_module_get_unref_expression ((ValaDovaBaseModule*) self, lhs, vala_expression_get_value_type (vala_assignment_get_left (assignment)), vala_assignment_get_left (assignment)));
			_vala_ccode_node_unref0 (_tmp12_);
		}
		vala_ccode_comma_expression_append_expression (ccomma, _tmp13_ = vala_dova_base_module_get_variable_cexpression ((ValaDovaBaseModule*) self, vala_symbol_get_name ((ValaSymbol*) temp_decl)));
		_vala_ccode_node_unref0 (_tmp13_);
		rhs = (_tmp14_ = _vala_ccode_node_ref0 ((ValaCCodeExpression*) ccomma), _vala_ccode_node_unref0 (rhs), _tmp14_);
		_vala_code_node_unref0 (temp_decl);
		_vala_ccode_node_unref0 (ccomma);
	}
	cop = VALA_CCODE_ASSIGNMENT_OPERATOR_SIMPLE;
	if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_BITWISE_OR) {
		cop = VALA_CCODE_ASSIGNMENT_OPERATOR_BITWISE_OR;
	} else {
		if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_BITWISE_AND) {
			cop = VALA_CCODE_ASSIGNMENT_OPERATOR_BITWISE_AND;
		} else {
			if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_BITWISE_XOR) {
				cop = VALA_CCODE_ASSIGNMENT_OPERATOR_BITWISE_XOR;
			} else {
				if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_ADD) {
					cop = VALA_CCODE_ASSIGNMENT_OPERATOR_ADD;
				} else {
					if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_SUB) {
						cop = VALA_CCODE_ASSIGNMENT_OPERATOR_SUB;
					} else {
						if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_MUL) {
							cop = VALA_CCODE_ASSIGNMENT_OPERATOR_MUL;
						} else {
							if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_DIV) {
								cop = VALA_CCODE_ASSIGNMENT_OPERATOR_DIV;
							} else {
								if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_PERCENT) {
									cop = VALA_CCODE_ASSIGNMENT_OPERATOR_PERCENT;
								} else {
									if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_SHIFT_LEFT) {
										cop = VALA_CCODE_ASSIGNMENT_OPERATOR_SHIFT_LEFT;
									} else {
										if (vala_assignment_get_operator (assignment) == VALA_ASSIGNMENT_OPERATOR_SHIFT_RIGHT) {
											cop = VALA_CCODE_ASSIGNMENT_OPERATOR_SHIFT_RIGHT;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	codenode = (ValaCCodeExpression*) vala_ccode_assignment_new (lhs, rhs, cop);
	if (outer_ccomma != NULL) {
		ValaCCodeExpression* _tmp15_;
		vala_ccode_comma_expression_append_expression (outer_ccomma, codenode);
		codenode = (_tmp15_ = _vala_ccode_node_ref0 ((ValaCCodeExpression*) outer_ccomma), _vala_ccode_node_unref0 (codenode), _tmp15_);
	}
	result = codenode;
	_vala_ccode_node_unref0 (outer_ccomma);
	_vala_ccode_node_unref0 (lhs);
	_vala_ccode_node_unref0 (rhs);
	return result;
}


static ValaCCodeExpression* vala_dova_assignment_module_emit_fixed_length_array_assignment (ValaDovaAssignmentModule* self, ValaAssignment* assignment, ValaArrayType* array_type) {
	ValaCCodeExpression* result = NULL;
	ValaCCodeExpression* rhs;
	ValaCCodeExpression* lhs;
	ValaCCodeIdentifier* _tmp0_;
	ValaCCodeFunctionCall* _tmp1_;
	ValaCCodeFunctionCall* sizeof_call;
	char* _tmp2_;
	ValaCCodeIdentifier* _tmp3_;
	char* _tmp4_;
	ValaCCodeConstant* _tmp5_;
	ValaCCodeBinaryExpression* _tmp6_;
	ValaCCodeBinaryExpression* size;
	ValaCCodeIdentifier* _tmp7_;
	ValaCCodeFunctionCall* _tmp8_;
	ValaCCodeFunctionCall* ccopy;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (assignment != NULL, NULL);
	g_return_val_if_fail (array_type != NULL, NULL);
	rhs = _vala_ccode_node_ref0 (VALA_CCODE_EXPRESSION (vala_code_node_get_ccodenode ((ValaCodeNode*) vala_assignment_get_right (assignment))));
	lhs = VALA_CCODE_EXPRESSION (vala_dova_base_module_get_ccodenode ((ValaDovaBaseModule*) self, (ValaCodeNode*) vala_assignment_get_left (assignment)));
	sizeof_call = (_tmp1_ = vala_ccode_function_call_new ((ValaCCodeExpression*) (_tmp0_ = vala_ccode_identifier_new ("sizeof"))), _vala_ccode_node_unref0 (_tmp0_), _tmp1_);
	vala_ccode_function_call_add_argument (sizeof_call, (ValaCCodeExpression*) (_tmp3_ = vala_ccode_identifier_new (_tmp2_ = vala_data_type_get_cname (vala_array_type_get_element_type (array_type)))));
	_vala_ccode_node_unref0 (_tmp3_);
	_g_free0 (_tmp2_);
	size = (_tmp6_ = vala_ccode_binary_expression_new (VALA_CCODE_BINARY_OPERATOR_MUL, (ValaCCodeExpression*) (_tmp5_ = vala_ccode_constant_new (_tmp4_ = g_strdup_printf ("%d", vala_array_type_get_length (array_type)))), (ValaCCodeExpression*) sizeof_call), _vala_ccode_node_unref0 (_tmp5_), _g_free0 (_tmp4_), _tmp6_);
	ccopy = (_tmp8_ = vala_ccode_function_call_new ((ValaCCodeExpression*) (_tmp7_ = vala_ccode_identifier_new ("memcpy"))), _vala_ccode_node_unref0 (_tmp7_), _tmp8_);
	vala_ccode_function_call_add_argument (ccopy, lhs);
	vala_ccode_function_call_add_argument (ccopy, rhs);
	vala_ccode_function_call_add_argument (ccopy, (ValaCCodeExpression*) size);
	result = (ValaCCodeExpression*) ccopy;
	_vala_ccode_node_unref0 (size);
	_vala_ccode_node_unref0 (sizeof_call);
	_vala_ccode_node_unref0 (lhs);
	_vala_ccode_node_unref0 (rhs);
	return result;
}


static void vala_dova_assignment_module_real_visit_assignment (ValaCodeVisitor* base, ValaAssignment* assignment) {
	ValaDovaAssignmentModule * self;
	gboolean _tmp0_ = FALSE;
	self = (ValaDovaAssignmentModule*) base;
	g_return_if_fail (assignment != NULL);
	if (vala_code_node_get_error ((ValaCodeNode*) vala_assignment_get_left (assignment))) {
		_tmp0_ = TRUE;
	} else {
		_tmp0_ = vala_code_node_get_error ((ValaCodeNode*) vala_assignment_get_right (assignment));
	}
	if (_tmp0_) {
		vala_code_node_set_error ((ValaCodeNode*) assignment, TRUE);
		return;
	}
	if (VALA_IS_PROPERTY (vala_expression_get_symbol_reference (vala_assignment_get_left (assignment)))) {
		ValaCCodeExpression* _tmp1_;
		vala_code_node_set_ccodenode ((ValaCodeNode*) assignment, (ValaCCodeNode*) (_tmp1_ = vala_dova_assignment_module_emit_property_assignment (self, assignment)));
		_vala_ccode_node_unref0 (_tmp1_);
	} else {
		ValaDataType* _tmp2_;
		ValaArrayType* array_type;
		gboolean _tmp3_ = FALSE;
		array_type = _vala_code_node_ref0 ((_tmp2_ = vala_expression_get_value_type (vala_assignment_get_left (assignment)), VALA_IS_ARRAY_TYPE (_tmp2_) ? ((ValaArrayType*) _tmp2_) : NULL));
		if (array_type != NULL) {
			_tmp3_ = vala_array_type_get_fixed_length (array_type);
		} else {
			_tmp3_ = FALSE;
		}
		if (_tmp3_) {
			ValaCCodeExpression* _tmp4_;
			vala_code_node_set_ccodenode ((ValaCodeNode*) assignment, (ValaCCodeNode*) (_tmp4_ = vala_dova_assignment_module_emit_fixed_length_array_assignment (self, assignment, array_type)));
			_vala_ccode_node_unref0 (_tmp4_);
		} else {
			ValaCCodeExpression* _tmp5_;
			vala_code_node_set_ccodenode ((ValaCodeNode*) assignment, (ValaCCodeNode*) (_tmp5_ = vala_dova_assignment_module_emit_simple_assignment (self, assignment)));
			_vala_ccode_node_unref0 (_tmp5_);
		}
		_vala_code_node_unref0 (array_type);
	}
}


ValaDovaAssignmentModule* vala_dova_assignment_module_construct (GType object_type) {
	ValaDovaAssignmentModule* self = NULL;
	self = (ValaDovaAssignmentModule*) vala_dova_member_access_module_construct (object_type);
	return self;
}


ValaDovaAssignmentModule* vala_dova_assignment_module_new (void) {
	return vala_dova_assignment_module_construct (VALA_TYPE_DOVA_ASSIGNMENT_MODULE);
}


static void vala_dova_assignment_module_class_init (ValaDovaAssignmentModuleClass * klass) {
	vala_dova_assignment_module_parent_class = g_type_class_peek_parent (klass);
	VALA_CODE_VISITOR_CLASS (klass)->visit_assignment = vala_dova_assignment_module_real_visit_assignment;
}


static void vala_dova_assignment_module_instance_init (ValaDovaAssignmentModule * self) {
}


/**
 * The link between an assignment and generated code.
 */
GType vala_dova_assignment_module_get_type (void) {
	static volatile gsize vala_dova_assignment_module_type_id__volatile = 0;
	if (g_once_init_enter (&vala_dova_assignment_module_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaDovaAssignmentModuleClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_dova_assignment_module_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaDovaAssignmentModule), 0, (GInstanceInitFunc) vala_dova_assignment_module_instance_init, NULL };
		GType vala_dova_assignment_module_type_id;
		vala_dova_assignment_module_type_id = g_type_register_static (VALA_TYPE_DOVA_MEMBER_ACCESS_MODULE, "ValaDovaAssignmentModule", &g_define_type_info, 0);
		g_once_init_leave (&vala_dova_assignment_module_type_id__volatile, vala_dova_assignment_module_type_id);
	}
	return vala_dova_assignment_module_type_id__volatile;
}



