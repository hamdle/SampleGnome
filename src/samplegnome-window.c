/* samplegnome-window.c
 *
 * Copyright 2018 Eric Marty
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "samplegnome-config.h"
#include "samplegnome-window.h"

struct _SamplegnomeWindow
{
  GtkApplicationWindow  parent_instance;

  /* Template widgets */
  GtkHeaderBar        *header_bar;
  GtkLabel            *label;
};

G_DEFINE_TYPE (SamplegnomeWindow, samplegnome_window, GTK_TYPE_APPLICATION_WINDOW)

static void
samplegnome_window_class_init (SamplegnomeWindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/org/gnome/Samplegnome/samplegnome-window.ui");
  gtk_widget_class_bind_template_child (widget_class, SamplegnomeWindow, header_bar);
  gtk_widget_class_bind_template_child (widget_class, SamplegnomeWindow, label);
}

static void
samplegnome_window_init (SamplegnomeWindow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
