/* valactype.c generated by valac, the Vala compiler
 * generated from valactype.vala, do not modify */

/* valactype.vala
 *
 * Copyright (C) 2009  Mark Lee
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
 *	Mark Lee <marklee@src.gnome.org>
 */

#include <glib.h>
#include <glib-object.h>
#include <vala.h>
#include <stdlib.h>
#include <string.h>


#define VALA_TYPE_CTYPE (vala_ctype_get_type ())
#define VALA_CTYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CTYPE, ValaCType))
#define VALA_CTYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CTYPE, ValaCTypeClass))
#define VALA_IS_CTYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CTYPE))
#define VALA_IS_CTYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CTYPE))
#define VALA_CTYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CTYPE, ValaCTypeClass))

typedef struct _ValaCType ValaCType;
typedef struct _ValaCTypeClass ValaCTypeClass;
typedef struct _ValaCTypePrivate ValaCTypePrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaCType {
	ValaDataType parent_instance;
	ValaCTypePrivate * priv;
};

struct _ValaCTypeClass {
	ValaDataTypeClass parent_class;
};

struct _ValaCTypePrivate {
	char* _ctype_name;
};


static gpointer vala_ctype_parent_class = NULL;

GType vala_ctype_get_type (void) G_GNUC_CONST;
#define VALA_CTYPE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CTYPE, ValaCTypePrivate))
enum  {
	VALA_CTYPE_DUMMY_PROPERTY
};
ValaCType* vala_ctype_new (const char* ctype_name);
ValaCType* vala_ctype_construct (GType object_type, const char* ctype_name);
void vala_ctype_set_ctype_name (ValaCType* self, const char* value);
static ValaDataType* vala_ctype_real_copy (ValaDataType* base);
const char* vala_ctype_get_ctype_name (ValaCType* self);
static char* vala_ctype_real_get_cname (ValaDataType* base);
static void vala_ctype_finalize (ValaCodeNode* obj);



ValaCType* vala_ctype_construct (GType object_type, const char* ctype_name) {
	ValaCType* self = NULL;
	g_return_val_if_fail (ctype_name != NULL, NULL);
	self = (ValaCType*) vala_data_type_construct (object_type);
	vala_ctype_set_ctype_name (self, ctype_name);
	return self;
}


ValaCType* vala_ctype_new (const char* ctype_name) {
	return vala_ctype_construct (VALA_TYPE_CTYPE, ctype_name);
}


static ValaDataType* vala_ctype_real_copy (ValaDataType* base) {
	ValaCType * self;
	ValaDataType* result = NULL;
	self = (ValaCType*) base;
	result = (ValaDataType*) vala_ctype_new (self->priv->_ctype_name);
	return result;
}


static char* vala_ctype_real_get_cname (ValaDataType* base) {
	ValaCType * self;
	char* result = NULL;
	self = (ValaCType*) base;
	result = g_strdup (self->priv->_ctype_name);
	return result;
}


const char* vala_ctype_get_ctype_name (ValaCType* self) {
	const char* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_ctype_name;
	return result;
}


void vala_ctype_set_ctype_name (ValaCType* self, const char* value) {
	char* _tmp0_;
	g_return_if_fail (self != NULL);
	self->priv->_ctype_name = (_tmp0_ = g_strdup (value), _g_free0 (self->priv->_ctype_name), _tmp0_);
}


static void vala_ctype_class_init (ValaCTypeClass * klass) {
	vala_ctype_parent_class = g_type_class_peek_parent (klass);
	VALA_CODE_NODE_CLASS (klass)->finalize = vala_ctype_finalize;
	g_type_class_add_private (klass, sizeof (ValaCTypePrivate));
	VALA_DATA_TYPE_CLASS (klass)->copy = vala_ctype_real_copy;
	VALA_DATA_TYPE_CLASS (klass)->get_cname = vala_ctype_real_get_cname;
}


static void vala_ctype_instance_init (ValaCType * self) {
	self->priv = VALA_CTYPE_GET_PRIVATE (self);
}


static void vala_ctype_finalize (ValaCodeNode* obj) {
	ValaCType * self;
	self = VALA_CTYPE (obj);
	_g_free0 (self->priv->_ctype_name);
	VALA_CODE_NODE_CLASS (vala_ctype_parent_class)->finalize (obj);
}


/**
 * A C type, used only for code generation purposes.
 */
GType vala_ctype_get_type (void) {
	static volatile gsize vala_ctype_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ctype_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ctype_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCType), 0, (GInstanceInitFunc) vala_ctype_instance_init, NULL };
		GType vala_ctype_type_id;
		vala_ctype_type_id = g_type_register_static (VALA_TYPE_DATA_TYPE, "ValaCType", &g_define_type_info, 0);
		g_once_init_leave (&vala_ctype_type_id__volatile, vala_ctype_type_id);
	}
	return vala_ctype_type_id__volatile;
}



