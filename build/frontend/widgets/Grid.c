/* Grid.c generated by valac 0.16.1, the Vala compiler
 * generated from Grid.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define SLINGSHOT_FRONTEND_TYPE_GRID (slingshot_frontend_grid_get_type ())
#define SLINGSHOT_FRONTEND_GRID(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SLINGSHOT_FRONTEND_TYPE_GRID, SlingshotFrontendGrid))
#define SLINGSHOT_FRONTEND_GRID_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SLINGSHOT_FRONTEND_TYPE_GRID, SlingshotFrontendGridClass))
#define SLINGSHOT_FRONTEND_IS_GRID(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SLINGSHOT_FRONTEND_TYPE_GRID))
#define SLINGSHOT_FRONTEND_IS_GRID_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SLINGSHOT_FRONTEND_TYPE_GRID))
#define SLINGSHOT_FRONTEND_GRID_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SLINGSHOT_FRONTEND_TYPE_GRID, SlingshotFrontendGridClass))

typedef struct _SlingshotFrontendGrid SlingshotFrontendGrid;
typedef struct _SlingshotFrontendGridClass SlingshotFrontendGridClass;
typedef struct _SlingshotFrontendGridPrivate SlingshotFrontendGridPrivate;

struct _SlingshotFrontendGrid {
	GtkTable parent_instance;
	SlingshotFrontendGridPrivate * priv;
};

struct _SlingshotFrontendGridClass {
	GtkTableClass parent_class;
};


static gpointer slingshot_frontend_grid_parent_class = NULL;

GType slingshot_frontend_grid_get_type (void) G_GNUC_CONST;
enum  {
	SLINGSHOT_FRONTEND_GRID_DUMMY_PROPERTY
};
SlingshotFrontendGrid* slingshot_frontend_grid_new (gint rows, gint columns);
SlingshotFrontendGrid* slingshot_frontend_grid_construct (GType object_type, gint rows, gint columns);


SlingshotFrontendGrid* slingshot_frontend_grid_construct (GType object_type, gint rows, gint columns) {
	SlingshotFrontendGrid * self = NULL;
	gint _tmp0_;
	gint _tmp1_;
	self = (SlingshotFrontendGrid*) g_object_new (object_type, NULL);
	_tmp0_ = columns;
	g_object_set ((GtkTable*) self, "n-columns", (guint) _tmp0_, NULL);
	_tmp1_ = rows;
	g_object_set ((GtkTable*) self, "n-rows", (guint) _tmp1_, NULL);
	gtk_table_set_homogeneous ((GtkTable*) self, TRUE);
	return self;
}


SlingshotFrontendGrid* slingshot_frontend_grid_new (gint rows, gint columns) {
	return slingshot_frontend_grid_construct (SLINGSHOT_FRONTEND_TYPE_GRID, rows, columns);
}


static void slingshot_frontend_grid_class_init (SlingshotFrontendGridClass * klass) {
	slingshot_frontend_grid_parent_class = g_type_class_peek_parent (klass);
}


static void slingshot_frontend_grid_instance_init (SlingshotFrontendGrid * self) {
}


GType slingshot_frontend_grid_get_type (void) {
	static volatile gsize slingshot_frontend_grid_type_id__volatile = 0;
	if (g_once_init_enter (&slingshot_frontend_grid_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SlingshotFrontendGridClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) slingshot_frontend_grid_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SlingshotFrontendGrid), 0, (GInstanceInitFunc) slingshot_frontend_grid_instance_init, NULL };
		GType slingshot_frontend_grid_type_id;
		slingshot_frontend_grid_type_id = g_type_register_static (GTK_TYPE_TABLE, "SlingshotFrontendGrid", &g_define_type_info, 0);
		g_once_init_leave (&slingshot_frontend_grid_type_id__volatile, slingshot_frontend_grid_type_id);
	}
	return slingshot_frontend_grid_type_id__volatile;
}



