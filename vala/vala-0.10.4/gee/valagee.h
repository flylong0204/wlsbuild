/* valagee.h generated by valac, the Vala compiler, do not modify */


#ifndef __VALAGEE_H__
#define __VALAGEE_H__

#include <glib.h>
#include <glib-object.h>

G_BEGIN_DECLS


#define VALA_TYPE_COLLECTION_OBJECT (vala_collection_object_get_type ())
#define VALA_COLLECTION_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_COLLECTION_OBJECT, ValaCollectionObject))
#define VALA_COLLECTION_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_COLLECTION_OBJECT, ValaCollectionObjectClass))
#define VALA_IS_COLLECTION_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_COLLECTION_OBJECT))
#define VALA_IS_COLLECTION_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_COLLECTION_OBJECT))
#define VALA_COLLECTION_OBJECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_COLLECTION_OBJECT, ValaCollectionObjectClass))

typedef struct _ValaCollectionObject ValaCollectionObject;
typedef struct _ValaCollectionObjectClass ValaCollectionObjectClass;
typedef struct _ValaCollectionObjectPrivate ValaCollectionObjectPrivate;

#define VALA_TYPE_ITERABLE (vala_iterable_get_type ())
#define VALA_ITERABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ITERABLE, ValaIterable))
#define VALA_IS_ITERABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ITERABLE))
#define VALA_ITERABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), VALA_TYPE_ITERABLE, ValaIterableIface))

typedef struct _ValaIterable ValaIterable;
typedef struct _ValaIterableIface ValaIterableIface;

#define VALA_TYPE_ITERATOR (vala_iterator_get_type ())
#define VALA_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ITERATOR, ValaIterator))
#define VALA_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ITERATOR))
#define VALA_ITERATOR_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), VALA_TYPE_ITERATOR, ValaIteratorIface))

typedef struct _ValaIterator ValaIterator;
typedef struct _ValaIteratorIface ValaIteratorIface;

#define VALA_TYPE_COLLECTION (vala_collection_get_type ())
#define VALA_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_COLLECTION, ValaCollection))
#define VALA_IS_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_COLLECTION))
#define VALA_COLLECTION_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), VALA_TYPE_COLLECTION, ValaCollectionIface))

typedef struct _ValaCollection ValaCollection;
typedef struct _ValaCollectionIface ValaCollectionIface;

#define VALA_TYPE_LIST (vala_list_get_type ())
#define VALA_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_LIST, ValaList))
#define VALA_IS_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_LIST))
#define VALA_LIST_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), VALA_TYPE_LIST, ValaListIface))

typedef struct _ValaList ValaList;
typedef struct _ValaListIface ValaListIface;

#define VALA_TYPE_ARRAY_LIST (vala_array_list_get_type ())
#define VALA_ARRAY_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ARRAY_LIST, ValaArrayList))
#define VALA_ARRAY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ARRAY_LIST, ValaArrayListClass))
#define VALA_IS_ARRAY_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ARRAY_LIST))
#define VALA_IS_ARRAY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ARRAY_LIST))
#define VALA_ARRAY_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ARRAY_LIST, ValaArrayListClass))

typedef struct _ValaArrayList ValaArrayList;
typedef struct _ValaArrayListClass ValaArrayListClass;
typedef struct _ValaArrayListPrivate ValaArrayListPrivate;

#define VALA_TYPE_MAP (vala_map_get_type ())
#define VALA_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_MAP, ValaMap))
#define VALA_IS_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_MAP))
#define VALA_MAP_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), VALA_TYPE_MAP, ValaMapIface))

typedef struct _ValaMap ValaMap;
typedef struct _ValaMapIface ValaMapIface;

#define VALA_TYPE_SET (vala_set_get_type ())
#define VALA_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SET, ValaSet))
#define VALA_IS_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SET))
#define VALA_SET_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), VALA_TYPE_SET, ValaSetIface))

typedef struct _ValaSet ValaSet;
typedef struct _ValaSetIface ValaSetIface;

#define VALA_TYPE_HASH_MAP (vala_hash_map_get_type ())
#define VALA_HASH_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_HASH_MAP, ValaHashMap))
#define VALA_HASH_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_HASH_MAP, ValaHashMapClass))
#define VALA_IS_HASH_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_HASH_MAP))
#define VALA_IS_HASH_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_HASH_MAP))
#define VALA_HASH_MAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_HASH_MAP, ValaHashMapClass))

typedef struct _ValaHashMap ValaHashMap;
typedef struct _ValaHashMapClass ValaHashMapClass;
typedef struct _ValaHashMapPrivate ValaHashMapPrivate;

#define VALA_TYPE_HASH_SET (vala_hash_set_get_type ())
#define VALA_HASH_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_HASH_SET, ValaHashSet))
#define VALA_HASH_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_HASH_SET, ValaHashSetClass))
#define VALA_IS_HASH_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_HASH_SET))
#define VALA_IS_HASH_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_HASH_SET))
#define VALA_HASH_SET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_HASH_SET, ValaHashSetClass))

typedef struct _ValaHashSet ValaHashSet;
typedef struct _ValaHashSetClass ValaHashSetClass;
typedef struct _ValaHashSetPrivate ValaHashSetPrivate;

struct _ValaCollectionObject {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCollectionObjectPrivate * priv;
};

struct _ValaCollectionObjectClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCollectionObject *self);
};

struct _ValaIteratorIface {
	GTypeInterface parent_iface;
	gboolean (*next) (ValaIterator* self);
	gpointer (*get) (ValaIterator* self);
};

struct _ValaIterableIface {
	GTypeInterface parent_iface;
	GType (*get_element_type) (ValaIterable* self);
	ValaIterator* (*iterator) (ValaIterable* self);
};

struct _ValaCollectionIface {
	GTypeInterface parent_iface;
	gboolean (*contains) (ValaCollection* self, gconstpointer item);
	gboolean (*add) (ValaCollection* self, gconstpointer item);
	gboolean (*remove) (ValaCollection* self, gconstpointer item);
	void (*clear) (ValaCollection* self);
	gint (*get_size) (ValaCollection* self);
};

struct _ValaListIface {
	GTypeInterface parent_iface;
	gpointer (*get) (ValaList* self, gint index);
	void (*set) (ValaList* self, gint index, gconstpointer item);
	gint (*index_of) (ValaList* self, gconstpointer item);
	void (*insert) (ValaList* self, gint index, gconstpointer item);
	void (*remove_at) (ValaList* self, gint index);
};

struct _ValaArrayList {
	ValaCollectionObject parent_instance;
	ValaArrayListPrivate * priv;
};

struct _ValaArrayListClass {
	ValaCollectionObjectClass parent_class;
};

struct _ValaSetIface {
	GTypeInterface parent_iface;
};

struct _ValaMapIface {
	GTypeInterface parent_iface;
	ValaSet* (*get_keys) (ValaMap* self);
	ValaCollection* (*get_values) (ValaMap* self);
	gboolean (*contains) (ValaMap* self, gconstpointer key);
	gpointer (*get) (ValaMap* self, gconstpointer key);
	void (*set) (ValaMap* self, gconstpointer key, gconstpointer value);
	gboolean (*remove) (ValaMap* self, gconstpointer key);
	void (*clear) (ValaMap* self);
	gint (*get_size) (ValaMap* self);
};

struct _ValaHashMap {
	ValaCollectionObject parent_instance;
	ValaHashMapPrivate * priv;
};

struct _ValaHashMapClass {
	ValaCollectionObjectClass parent_class;
};

struct _ValaHashSet {
	ValaCollectionObject parent_instance;
	ValaHashSetPrivate * priv;
};

struct _ValaHashSetClass {
	ValaCollectionObjectClass parent_class;
};


gpointer vala_collection_object_ref (gpointer instance);
void vala_collection_object_unref (gpointer instance);
GParamSpec* vala_param_spec_collection_object (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_collection_object (GValue* value, gpointer v_object);
void vala_value_take_collection_object (GValue* value, gpointer v_object);
gpointer vala_value_get_collection_object (const GValue* value);
GType vala_collection_object_get_type (void) G_GNUC_CONST;
GType vala_iterator_get_type (void) G_GNUC_CONST;
GType vala_iterable_get_type (void) G_GNUC_CONST;
GType vala_collection_get_type (void) G_GNUC_CONST;
GType vala_list_get_type (void) G_GNUC_CONST;
GType vala_array_list_get_type (void) G_GNUC_CONST;
ValaArrayList* vala_array_list_new (GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GEqualFunc equal_func);
ValaArrayList* vala_array_list_construct (GType object_type, GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GEqualFunc equal_func);
void vala_array_list_set_equal_func (ValaArrayList* self, GEqualFunc value);
gboolean vala_collection_contains (ValaCollection* self, gconstpointer item);
gboolean vala_collection_add (ValaCollection* self, gconstpointer item);
gboolean vala_collection_remove (ValaCollection* self, gconstpointer item);
void vala_collection_clear (ValaCollection* self);
gint vala_collection_get_size (ValaCollection* self);
ValaCollectionObject* vala_collection_object_new (void);
ValaCollectionObject* vala_collection_object_construct (GType object_type);
GType vala_set_get_type (void) G_GNUC_CONST;
GType vala_map_get_type (void) G_GNUC_CONST;
GType vala_hash_map_get_type (void) G_GNUC_CONST;
ValaHashMap* vala_hash_map_new (GType k_type, GBoxedCopyFunc k_dup_func, GDestroyNotify k_destroy_func, GType v_type, GBoxedCopyFunc v_dup_func, GDestroyNotify v_destroy_func, GHashFunc key_hash_func, GEqualFunc key_equal_func, GEqualFunc value_equal_func);
ValaHashMap* vala_hash_map_construct (GType object_type, GType k_type, GBoxedCopyFunc k_dup_func, GDestroyNotify k_destroy_func, GType v_type, GBoxedCopyFunc v_dup_func, GDestroyNotify v_destroy_func, GHashFunc key_hash_func, GEqualFunc key_equal_func, GEqualFunc value_equal_func);
void vala_hash_map_set_key_hash_func (ValaHashMap* self, GHashFunc value);
void vala_hash_map_set_key_equal_func (ValaHashMap* self, GEqualFunc value);
void vala_hash_map_set_value_equal_func (ValaHashMap* self, GEqualFunc value);
GType vala_hash_set_get_type (void) G_GNUC_CONST;
ValaHashSet* vala_hash_set_new (GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GHashFunc hash_func, GEqualFunc equal_func);
ValaHashSet* vala_hash_set_construct (GType object_type, GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GHashFunc hash_func, GEqualFunc equal_func);
void vala_hash_set_set_hash_func (ValaHashSet* self, GHashFunc value);
void vala_hash_set_set_equal_func (ValaHashSet* self, GEqualFunc value);
GType vala_iterable_get_element_type (ValaIterable* self);
ValaIterator* vala_iterable_iterator (ValaIterable* self);
gboolean vala_iterator_next (ValaIterator* self);
gpointer vala_iterator_get (ValaIterator* self);
gpointer vala_list_get (ValaList* self, gint index);
void vala_list_set (ValaList* self, gint index, gconstpointer item);
gint vala_list_index_of (ValaList* self, gconstpointer item);
void vala_list_insert (ValaList* self, gint index, gconstpointer item);
void vala_list_remove_at (ValaList* self, gint index);
ValaSet* vala_map_get_keys (ValaMap* self);
ValaCollection* vala_map_get_values (ValaMap* self);
gboolean vala_map_contains (ValaMap* self, gconstpointer key);
gpointer vala_map_get (ValaMap* self, gconstpointer key);
void vala_map_set (ValaMap* self, gconstpointer key, gconstpointer value);
gboolean vala_map_remove (ValaMap* self, gconstpointer key);
void vala_map_clear (ValaMap* self);
gint vala_map_get_size (ValaMap* self);


G_END_DECLS

#endif