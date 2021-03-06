/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __XFDESKTOP_TRASH_PROXY_H__
#define __XFDESKTOP_TRASH_PROXY_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.xfce.Trash */

#define XFDESKTOP_TYPE_TRASH (xfdesktop_trash_get_type ())
#define XFDESKTOP_TRASH(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), XFDESKTOP_TYPE_TRASH, XfdesktopTrash))
#define XFDESKTOP_IS_TRASH(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), XFDESKTOP_TYPE_TRASH))
#define XFDESKTOP_TRASH_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), XFDESKTOP_TYPE_TRASH, XfdesktopTrashIface))

struct _XfdesktopTrash;
typedef struct _XfdesktopTrash XfdesktopTrash;
typedef struct _XfdesktopTrashIface XfdesktopTrashIface;

struct _XfdesktopTrashIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_display_trash) (
    XfdesktopTrash *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_display,
    const gchar *arg_startup_id);

  gboolean (*handle_empty_trash) (
    XfdesktopTrash *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_display,
    const gchar *arg_startup_id);

  gboolean (*handle_move_to_trash) (
    XfdesktopTrash *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *arg_filenames,
    const gchar *arg_display,
    const gchar *arg_startup_id);

  gboolean (*handle_query_trash) (
    XfdesktopTrash *object,
    GDBusMethodInvocation *invocation);

  void (*trash_changed) (
    XfdesktopTrash *object);

};

GType xfdesktop_trash_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *xfdesktop_trash_interface_info (void);
guint xfdesktop_trash_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void xfdesktop_trash_complete_display_trash (
    XfdesktopTrash *object,
    GDBusMethodInvocation *invocation);

void xfdesktop_trash_complete_empty_trash (
    XfdesktopTrash *object,
    GDBusMethodInvocation *invocation);

void xfdesktop_trash_complete_move_to_trash (
    XfdesktopTrash *object,
    GDBusMethodInvocation *invocation);

void xfdesktop_trash_complete_query_trash (
    XfdesktopTrash *object,
    GDBusMethodInvocation *invocation,
    gboolean full);



/* D-Bus signal emissions functions: */
void xfdesktop_trash_emit_trash_changed (
    XfdesktopTrash *object);



/* D-Bus method calls: */
void xfdesktop_trash_call_display_trash (
    XfdesktopTrash *proxy,
    const gchar *arg_display,
    const gchar *arg_startup_id,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfdesktop_trash_call_display_trash_finish (
    XfdesktopTrash *proxy,
    GAsyncResult *res,
    GError **error);

gboolean xfdesktop_trash_call_display_trash_sync (
    XfdesktopTrash *proxy,
    const gchar *arg_display,
    const gchar *arg_startup_id,
    GCancellable *cancellable,
    GError **error);

void xfdesktop_trash_call_empty_trash (
    XfdesktopTrash *proxy,
    const gchar *arg_display,
    const gchar *arg_startup_id,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfdesktop_trash_call_empty_trash_finish (
    XfdesktopTrash *proxy,
    GAsyncResult *res,
    GError **error);

gboolean xfdesktop_trash_call_empty_trash_sync (
    XfdesktopTrash *proxy,
    const gchar *arg_display,
    const gchar *arg_startup_id,
    GCancellable *cancellable,
    GError **error);

void xfdesktop_trash_call_move_to_trash (
    XfdesktopTrash *proxy,
    const gchar *const *arg_filenames,
    const gchar *arg_display,
    const gchar *arg_startup_id,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfdesktop_trash_call_move_to_trash_finish (
    XfdesktopTrash *proxy,
    GAsyncResult *res,
    GError **error);

gboolean xfdesktop_trash_call_move_to_trash_sync (
    XfdesktopTrash *proxy,
    const gchar *const *arg_filenames,
    const gchar *arg_display,
    const gchar *arg_startup_id,
    GCancellable *cancellable,
    GError **error);

void xfdesktop_trash_call_query_trash (
    XfdesktopTrash *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfdesktop_trash_call_query_trash_finish (
    XfdesktopTrash *proxy,
    gboolean *out_full,
    GAsyncResult *res,
    GError **error);

gboolean xfdesktop_trash_call_query_trash_sync (
    XfdesktopTrash *proxy,
    gboolean *out_full,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define XFDESKTOP_TYPE_TRASH_PROXY (xfdesktop_trash_proxy_get_type ())
#define XFDESKTOP_TRASH_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), XFDESKTOP_TYPE_TRASH_PROXY, XfdesktopTrashProxy))
#define XFDESKTOP_TRASH_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), XFDESKTOP_TYPE_TRASH_PROXY, XfdesktopTrashProxyClass))
#define XFDESKTOP_TRASH_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), XFDESKTOP_TYPE_TRASH_PROXY, XfdesktopTrashProxyClass))
#define XFDESKTOP_IS_TRASH_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), XFDESKTOP_TYPE_TRASH_PROXY))
#define XFDESKTOP_IS_TRASH_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), XFDESKTOP_TYPE_TRASH_PROXY))

typedef struct _XfdesktopTrashProxy XfdesktopTrashProxy;
typedef struct _XfdesktopTrashProxyClass XfdesktopTrashProxyClass;
typedef struct _XfdesktopTrashProxyPrivate XfdesktopTrashProxyPrivate;

struct _XfdesktopTrashProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  XfdesktopTrashProxyPrivate *priv;
};

struct _XfdesktopTrashProxyClass
{
  GDBusProxyClass parent_class;
};

GType xfdesktop_trash_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (XfdesktopTrashProxy, g_object_unref)
#endif

void xfdesktop_trash_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
XfdesktopTrash *xfdesktop_trash_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
XfdesktopTrash *xfdesktop_trash_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void xfdesktop_trash_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
XfdesktopTrash *xfdesktop_trash_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
XfdesktopTrash *xfdesktop_trash_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define XFDESKTOP_TYPE_TRASH_SKELETON (xfdesktop_trash_skeleton_get_type ())
#define XFDESKTOP_TRASH_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), XFDESKTOP_TYPE_TRASH_SKELETON, XfdesktopTrashSkeleton))
#define XFDESKTOP_TRASH_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), XFDESKTOP_TYPE_TRASH_SKELETON, XfdesktopTrashSkeletonClass))
#define XFDESKTOP_TRASH_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), XFDESKTOP_TYPE_TRASH_SKELETON, XfdesktopTrashSkeletonClass))
#define XFDESKTOP_IS_TRASH_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), XFDESKTOP_TYPE_TRASH_SKELETON))
#define XFDESKTOP_IS_TRASH_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), XFDESKTOP_TYPE_TRASH_SKELETON))

typedef struct _XfdesktopTrashSkeleton XfdesktopTrashSkeleton;
typedef struct _XfdesktopTrashSkeletonClass XfdesktopTrashSkeletonClass;
typedef struct _XfdesktopTrashSkeletonPrivate XfdesktopTrashSkeletonPrivate;

struct _XfdesktopTrashSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  XfdesktopTrashSkeletonPrivate *priv;
};

struct _XfdesktopTrashSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType xfdesktop_trash_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (XfdesktopTrashSkeleton, g_object_unref)
#endif

XfdesktopTrash *xfdesktop_trash_skeleton_new (void);


G_END_DECLS

#endif /* __XFDESKTOP_TRASH_PROXY_H__ */
