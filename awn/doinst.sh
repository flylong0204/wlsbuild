schema_install() {
  SCHEMA="$1"
  GCONF_CONFIG_SOURCE="xml::etc/gconf/gconf.xml.defaults" \
  chroot . gconftool-2 --makefile-install-rule \
    /etc/gconf/schemas/$SCHEMA \
    1>/dev/null
}

schema_install avant-window-navigator.schemas
schema_install awn-applet-taskmanager.schemas

if [ -x usr/bin/update-desktop-database ]; then
  usr/bin/update-desktop-database -q usr/share/applications >/dev/null 2>&1
fi

if [ -x usr/bin/update-mime-database ]; then
  usr/bin/update-mime-database usr/share/mime >/dev/null 2>&1
fi

if [ -e usr/share/icons/hicolor/icon-theme.cache ]; then
  if [ -x usr/bin/gtk-update-icon-cache ]; then
    usr/bin/gtk-update-icon-cache usr/share/icons/hicolor >/dev/null 2>&1
  fi
fi

# run gsettings schemas conversion
if [ -x usr/bin/glib-compile-schemas -a -d usr/share/glib-2.0/schemas ]; then
  usr/bin/glib-compile-schemas usr/share/glib-2.0/schemas
fi