/* This file was created automatically by glade2 and fixed by bootstrap */

#include <vlc/vlc.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "pda_callbacks.h"
#include "pda_interface.h"
#include "pda_support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_pda (void)
{
  GtkWidget *pda;
  GdkPixbuf *pda_icon_pixbuf;
  GtkWidget *vbox;
  GtkWidget *toolbar;
  GtkWidget *tmp_toolbar_icon;
  GtkWidget *tbRewind;
  GtkWidget *tbPause;
  GtkWidget *tbPlay;
  GtkWidget *tbStop;
  GtkWidget *tbForward;
  GtkWidget *tbAbout;
  GtkWidget *timeLabel;
  GtkWidget *timeSlider;
  GtkWidget *notebook;
  GtkWidget *scrolledwindow6;
  GtkWidget *viewport3;
  GtkWidget *vbox8;
  GtkWidget *scrolledwindow7;
  GtkWidget *tvFileList;
  GtkWidget *hbox;
  GtkWidget *AddFileToPlaylist;
  GtkWidget *File;
  GtkWidget *vbox5;
  GtkWidget *hbox12;
  GtkWidget *labelNetworkMRL;
  GtkWidget *comboMRL;
  GList *comboMRL_items = NULL;
  GtkWidget *entryMRL;
  GtkWidget *hseparator15;
  GtkWidget *table2;
  GtkWidget *labelNetworkPort;
  GtkWidget *labelNetworkAddress;
  GtkObject *entryNetworkPort_adj;
  GtkWidget *entryNetworkPort;
  GtkWidget *comboNetworkAddress;
  GtkWidget *entryNetworkAddress;
  GtkWidget *comboNetworkType;
  GList *comboNetworkType_items = NULL;
  GtkWidget *entryNetworkType;
  GtkWidget *labelNetworkType;
  GtkWidget *comboNetworkProtocolType;
  GList *comboNetworkProtocolType_items = NULL;
  GtkWidget *entryNetworkProtocolType;
  GtkWidget *labelNetworkProtocol;
  GtkWidget *hbox13;
  GtkWidget *AddNetworkPlaylist;
  GtkWidget *Network;
  GtkWidget *vbox7;
  GtkWidget *scrolledV4Lwindow;
  GtkWidget *viewportV4L;
  GtkWidget *tableV4L;
  GtkWidget *labelV4lVideDevice;
  GtkWidget *labelV4LAudioDevice;
  GtkWidget *labelV4LChannel;
  GtkWidget *labelV4LNorm;
  GtkWidget *labelV4LSize;
  GtkWidget *labelV4LFrequency;
  GtkWidget *labelV4LSampleRate;
  GtkWidget *labelV4LQuality;
  GtkWidget *labelV4LTuner;
  GtkWidget *labelV4LSoundDirection;
  GtkWidget *labelV4LMJPEG;
  GtkWidget *labelV4LDecimation;
  GtkWidget *comboV4lVideoDevice;
  GList *comboV4lVideoDevice_items = NULL;
  GtkWidget *entryV4LVideoDevice;
  GtkWidget *comboV4lAudioDevice;
  GList *comboV4lAudioDevice_items = NULL;
  GtkWidget *entryV4LAudioDevice;
  GtkObject *entryV4LChannel_adj;
  GtkWidget *entryV4LChannel;
  GtkWidget *comboV4LNorm;
  GList *comboV4LNorm_items = NULL;
  GtkWidget *entryV4LNorm;
  GtkWidget *comboV4LSize;
  GList *comboV4LSize_items = NULL;
  GtkWidget *entryV4LSize;
  GtkObject *entryV4LFrequency_adj;
  GtkWidget *entryV4LFrequency;
  GtkObject *entryV4LSampleRate_adj;
  GtkWidget *entryV4LSampleRate;
  GtkObject *entryV4LQuality_adj;
  GtkWidget *entryV4LQuality;
  GtkWidget *comboV4LSoundDirection;
  GList *comboV4LSoundDirection_items = NULL;
  GtkWidget *entryV4LSoundDirection;
  GtkObject *entryV4LTuner_adj;
  GtkWidget *entryV4LTuner;
  GtkWidget *checkV4LMJPEG;
  GtkObject *entryV4LDecimation_adj;
  GtkWidget *entryV4LDecimation;
  GtkWidget *hbox16;
  GtkWidget *AddCameraToPlaylist;
  GtkWidget *Camera;
  GtkWidget *vbox1;
  GtkWidget *scrolledwindowTranscode;
  GtkWidget *viewport5;
  GtkWidget *tableTranscode;
  GtkWidget *labelVideoCodec;
  GtkWidget *comboVideoCodec;
  GList *comboVideoCodec_items = NULL;
  GtkWidget *entryVideoCodec;
  GtkWidget *labelVideoBitrate;
  GtkWidget *labelVideoBitrateTolerance;
  GtkWidget *labelVideoKeyInterval;
  GtkWidget *labelAudioCodec;
  GtkWidget *labelVideoDeinterlace;
  GtkWidget *labelStdAccess;
  GtkWidget *labelStdMuxer;
  GtkWidget *labelStdUrl;
  GtkWidget *labelStdTimeToLive;
  GtkObject *entryStdTTL_adj;
  GtkWidget *entryStdTTL;
  GtkWidget *comboStdURL;
  GList *comboStdURL_items = NULL;
  GtkWidget *entryStdURL;
  GtkWidget *comboStdMuxer;
  GList *comboStdMuxer_items = NULL;
  GtkWidget *entryStdMuxer;
  GtkObject *entryAudioBitrate_adj;
  GtkWidget *entryAudioBitrate;
  GtkWidget *comboAudioCodec;
  GList *comboAudioCodec_items = NULL;
  GtkWidget *entryAudioCodec;
  GtkWidget *checkVideoDeinterlace;
  GtkObject *entryVideoKeyFrameInterval_adj;
  GtkWidget *entryVideoKeyFrameInterval;
  GtkObject *entryVideoBitrateTolerance_adj;
  GtkWidget *entryVideoBitrateTolerance;
  GtkObject *entryVideoBitrate_adj;
  GtkWidget *entryVideoBitrate;
  GtkWidget *labelAudioBitrate;
  GtkWidget *comboStdAccess;
  GList *comboStdAccess_items = NULL;
  GtkWidget *entryStdAccess;
  GtkWidget *labelSAP;
  GtkWidget *checkSAP;
  GtkWidget *checkSLP;
  GtkWidget *labelSLP_;
  GtkWidget *labelAnounceChannel;
  GtkWidget *comboAnnounceChannel;
  GtkWidget *entryAnnounceChannel;
  GtkWidget *hbox14;
  GtkWidget *AddTranscodeToPlaylist;
  GtkWidget *Transcode;
  GtkWidget *vbox4;
  GtkWidget *scrolledwindow5;
  GtkWidget *tvPlaylist;
  GtkWidget *hbox11;
  GtkWidget *UpdatePlaylist;
  GtkWidget *DeletePlaylist;
  GtkWidget *ClearPlaylist;
  GtkWidget *playlist;
  GtkWidget *vbox2;
  GtkWidget *scrolledwindowPreference;
  GtkWidget *tvPreferences;
  GtkWidget *hbox2;
  GtkWidget *PreferenceSave;
  GtkWidget *PreferenceApply;
  GtkWidget *PreferenceCancel;
  GtkWidget *preferences;
  GtkWidget *scrolledwindow3;
  GtkWidget *viewport1;
  GtkWidget *fixed2;
  GtkWidget *aboutImage;
  GtkWidget *labelDescription;
  GtkWidget *labelAuthors;
  GtkWidget *labelCopyright;
  GtkWidget *labelProgramName;
  GtkWidget *about;
  GtkTooltips *tooltips;

  tooltips = gtk_tooltips_new ();

  pda = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_name (pda, "pda");
  gtk_widget_set_size_request (pda, 240, 320);
  gtk_window_set_title (GTK_WINDOW (pda), _("VLC media player"));
  pda_icon_pixbuf = create_pixbuf ("vlc16x16.png");
  if (pda_icon_pixbuf)
    {
      gtk_window_set_icon (GTK_WINDOW (pda), pda_icon_pixbuf);
      gdk_pixbuf_unref (pda_icon_pixbuf);
    }

  vbox = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox, "vbox");
  gtk_widget_show (vbox);
  gtk_container_add (GTK_CONTAINER (pda), vbox);

  toolbar = gtk_toolbar_new ();
  gtk_widget_set_name (toolbar, "toolbar");
  gtk_widget_show (toolbar);
  gtk_box_pack_start (GTK_BOX (vbox), toolbar, FALSE, FALSE, 5);
  gtk_widget_set_size_request (toolbar, 240, 22);
  gtk_toolbar_set_style (GTK_TOOLBAR (toolbar), GTK_TOOLBAR_ICONS);

  gtk_toolbar_append_space (GTK_TOOLBAR (toolbar));

  tmp_toolbar_icon = create_pixmap (pda, "pda-rewindb16x16.xpm");
  tbRewind = gtk_toolbar_append_element (GTK_TOOLBAR (toolbar),
                                GTK_TOOLBAR_CHILD_BUTTON,
                                NULL,
                                _("Rewind"),
                                _("Rewind"), NULL,
                                tmp_toolbar_icon, NULL, NULL);
  gtk_label_set_use_underline (GTK_LABEL (((GtkToolbarChild*) (g_list_last (GTK_TOOLBAR (toolbar)->children)->data))->label), TRUE);
  gtk_widget_set_name (tbRewind, "tbRewind");
  gtk_widget_show (tbRewind);
  gtk_widget_set_size_request (tbRewind, 22, 22);

  tmp_toolbar_icon = create_pixmap (pda, "pda-pauseb16x16.xpm");
  tbPause = gtk_toolbar_append_element (GTK_TOOLBAR (toolbar),
                                GTK_TOOLBAR_CHILD_BUTTON,
                                NULL,
                                _("Pause"),
                                _("Pause"), NULL,
                                tmp_toolbar_icon, NULL, NULL);
  gtk_label_set_use_underline (GTK_LABEL (((GtkToolbarChild*) (g_list_last (GTK_TOOLBAR (toolbar)->children)->data))->label), TRUE);
  gtk_widget_set_name (tbPause, "tbPause");
  gtk_widget_show (tbPause);
  gtk_widget_set_size_request (tbPause, 22, 22);

  tmp_toolbar_icon = create_pixmap (pda, "pda-playb16x16.xpm");
  tbPlay = gtk_toolbar_append_element (GTK_TOOLBAR (toolbar),
                                GTK_TOOLBAR_CHILD_BUTTON,
                                NULL,
                                _("Play"),
                                _("Play"), NULL,
                                tmp_toolbar_icon, NULL, NULL);
  gtk_label_set_use_underline (GTK_LABEL (((GtkToolbarChild*) (g_list_last (GTK_TOOLBAR (toolbar)->children)->data))->label), TRUE);
  gtk_widget_set_name (tbPlay, "tbPlay");
  gtk_widget_show (tbPlay);
  gtk_widget_set_size_request (tbPlay, 22, 22);

  tmp_toolbar_icon = create_pixmap (pda, "pda-stopb16x16.xpm");
  tbStop = gtk_toolbar_append_element (GTK_TOOLBAR (toolbar),
                                GTK_TOOLBAR_CHILD_BUTTON,
                                NULL,
                                _("Stop"),
                                _("Stop"), NULL,
                                tmp_toolbar_icon, NULL, NULL);
  gtk_label_set_use_underline (GTK_LABEL (((GtkToolbarChild*) (g_list_last (GTK_TOOLBAR (toolbar)->children)->data))->label), TRUE);
  gtk_widget_set_name (tbStop, "tbStop");
  gtk_widget_show (tbStop);
  gtk_widget_set_size_request (tbStop, 22, 22);

  tmp_toolbar_icon = create_pixmap (pda, "pda-forwardb16x16.xpm");
  tbForward = gtk_toolbar_append_element (GTK_TOOLBAR (toolbar),
                                GTK_TOOLBAR_CHILD_BUTTON,
                                NULL,
                                _("Forward"),
                                _("Forward"), NULL,
                                tmp_toolbar_icon, NULL, NULL);
  gtk_label_set_use_underline (GTK_LABEL (((GtkToolbarChild*) (g_list_last (GTK_TOOLBAR (toolbar)->children)->data))->label), TRUE);
  gtk_widget_set_name (tbForward, "tbForward");
  gtk_widget_show (tbForward);
  gtk_widget_set_size_request (tbForward, 22, 22);

  gtk_toolbar_append_space (GTK_TOOLBAR (toolbar));

  tmp_toolbar_icon = create_pixmap (pda, "vlc16x16.png");
  tbAbout = gtk_toolbar_append_element (GTK_TOOLBAR (toolbar),
                                GTK_TOOLBAR_CHILD_BUTTON,
                                NULL,
                                _("About"),
                                _("About"), NULL,
                                tmp_toolbar_icon, NULL, NULL);
  gtk_label_set_use_underline (GTK_LABEL (((GtkToolbarChild*) (g_list_last (GTK_TOOLBAR (toolbar)->children)->data))->label), TRUE);
  gtk_widget_set_name (tbAbout, "tbAbout");
  gtk_widget_show (tbAbout);
  gtk_widget_set_size_request (tbAbout, 22, 22);

  timeLabel = gtk_label_new (_("00:00:00"));
  gtk_widget_set_name (timeLabel, "timeLabel");
  gtk_widget_show (timeLabel);
  gtk_toolbar_append_space (GTK_TOOLBAR (toolbar));

  gtk_toolbar_append_widget (GTK_TOOLBAR (toolbar), timeLabel, NULL, NULL);
  gtk_label_set_justify (GTK_LABEL (timeLabel), GTK_JUSTIFY_CENTER);

  timeSlider = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 100, 1, 6.25, 0)));
  gtk_widget_set_name (timeSlider, "timeSlider");
  gtk_widget_show (timeSlider);
  gtk_box_pack_start (GTK_BOX (vbox), timeSlider, FALSE, TRUE, 4);
  gtk_scale_set_draw_value (GTK_SCALE (timeSlider), FALSE);
  gtk_scale_set_value_pos (GTK_SCALE (timeSlider), GTK_POS_RIGHT);
  gtk_scale_set_digits (GTK_SCALE (timeSlider), 3);
  gtk_range_set_update_policy (GTK_RANGE (timeSlider), GTK_UPDATE_DISCONTINUOUS);

  notebook = gtk_notebook_new ();
  gtk_widget_set_name (notebook, "notebook");
  gtk_widget_show (notebook);
  gtk_box_pack_end (GTK_BOX (vbox), notebook, TRUE, TRUE, 0);
  gtk_notebook_set_scrollable (GTK_NOTEBOOK (notebook), TRUE);

  scrolledwindow6 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledwindow6, "scrolledwindow6");
  gtk_widget_show (scrolledwindow6);
  gtk_container_add (GTK_CONTAINER (notebook), scrolledwindow6);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow6), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);

  viewport3 = gtk_viewport_new (NULL, NULL);
  gtk_widget_set_name (viewport3, "viewport3");
  gtk_widget_show (viewport3);
  gtk_container_add (GTK_CONTAINER (scrolledwindow6), viewport3);

  vbox8 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox8, "vbox8");
  gtk_widget_show (vbox8);
  gtk_container_add (GTK_CONTAINER (viewport3), vbox8);

  scrolledwindow7 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledwindow7, "scrolledwindow7");
  gtk_widget_show (scrolledwindow7);
  gtk_box_pack_start (GTK_BOX (vbox8), scrolledwindow7, TRUE, TRUE, 0);

  tvFileList = gtk_tree_view_new ();
  gtk_widget_set_name (tvFileList, "tvFileList");
  gtk_widget_show (tvFileList);
  gtk_container_add (GTK_CONTAINER (scrolledwindow7), tvFileList);

  hbox = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (hbox, "hbox");
  gtk_widget_show (hbox);
  gtk_box_pack_start (GTK_BOX (vbox8), hbox, FALSE, FALSE, 0);

  AddFileToPlaylist = gtk_button_new_with_mnemonic (_("Add to Playlist"));
  gtk_widget_set_name (AddFileToPlaylist, "AddFileToPlaylist");
  gtk_widget_show (AddFileToPlaylist);
  gtk_box_pack_start (GTK_BOX (hbox), AddFileToPlaylist, FALSE, FALSE, 0);

  File = gtk_label_new (_("File"));
  gtk_widget_set_name (File, "File");
  gtk_widget_show (File);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook), 0), File);
  gtk_label_set_justify (GTK_LABEL (File), GTK_JUSTIFY_CENTER);

  vbox5 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox5, "vbox5");
  gtk_widget_show (vbox5);
  gtk_container_add (GTK_CONTAINER (notebook), vbox5);
  gtk_notebook_set_tab_label_packing (GTK_NOTEBOOK (notebook), vbox5,
                                      TRUE, TRUE, GTK_PACK_START);

  hbox12 = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (hbox12, "hbox12");
  gtk_widget_show (hbox12);
  gtk_box_pack_start (GTK_BOX (vbox5), hbox12, FALSE, FALSE, 0);
  gtk_widget_set_size_request (hbox12, 247, 26);

  labelNetworkMRL = gtk_label_new (_("MRL :"));
  gtk_widget_set_name (labelNetworkMRL, "labelNetworkMRL");
  gtk_widget_show (labelNetworkMRL);
  gtk_box_pack_start (GTK_BOX (hbox12), labelNetworkMRL, FALSE, FALSE, 0);
  gtk_widget_set_size_request (labelNetworkMRL, 35, 16);
  gtk_label_set_justify (GTK_LABEL (labelNetworkMRL), GTK_JUSTIFY_CENTER);

  comboMRL = gtk_combo_new ();
  g_object_set_data (G_OBJECT (GTK_COMBO (comboMRL)->popwin),
                     "GladeParentKey", comboMRL);
  gtk_widget_set_name (comboMRL, "comboMRL");
  gtk_widget_show (comboMRL);
  gtk_box_pack_start (GTK_BOX (hbox12), comboMRL, TRUE, TRUE, 0);
  comboMRL_items = g_list_append (comboMRL_items, (gpointer) "udp://@:1234");
  comboMRL_items = g_list_append (comboMRL_items, (gpointer) "udp6://@:1234");
  comboMRL_items = g_list_append (comboMRL_items, (gpointer) "rtp://");
  comboMRL_items = g_list_append (comboMRL_items, (gpointer) "rtp6://");
  comboMRL_items = g_list_append (comboMRL_items, (gpointer) "ftp://");
  comboMRL_items = g_list_append (comboMRL_items, (gpointer) "http://");
  comboMRL_items = g_list_append (comboMRL_items, (gpointer) "mms://");
  gtk_combo_set_popdown_strings (GTK_COMBO (comboMRL), comboMRL_items);
  g_list_free (comboMRL_items);

  entryMRL = GTK_COMBO (comboMRL)->entry;
  gtk_widget_set_name (entryMRL, "entryMRL");
  gtk_widget_show (entryMRL);
  gtk_widget_set_size_request (entryMRL, 158, 24);
  gtk_entry_set_activates_default (GTK_ENTRY (entryMRL), TRUE);

  hseparator15 = gtk_hseparator_new ();
  gtk_widget_set_name (hseparator15, "hseparator15");
  gtk_widget_show (hseparator15);
  gtk_box_pack_start (GTK_BOX (vbox5), hseparator15, FALSE, FALSE, 0);
  gtk_widget_set_size_request (hseparator15, -1, 10);

  table2 = gtk_table_new (6, 2, FALSE);
  gtk_widget_set_name (table2, "table2");
  gtk_widget_show (table2);
  gtk_box_pack_start (GTK_BOX (vbox5), table2, TRUE, TRUE, 0);

  labelNetworkPort = gtk_label_new (_("Port:"));
  gtk_widget_set_name (labelNetworkPort, "labelNetworkPort");
  gtk_widget_show (labelNetworkPort);
  gtk_table_attach (GTK_TABLE (table2), labelNetworkPort, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelNetworkPort), 0, 0.5);

  labelNetworkAddress = gtk_label_new (_("Address:"));
  gtk_widget_set_name (labelNetworkAddress, "labelNetworkAddress");
  gtk_widget_show (labelNetworkAddress);
  gtk_table_attach (GTK_TABLE (table2), labelNetworkAddress, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelNetworkAddress), 0, 0.5);

  entryNetworkPort_adj = gtk_adjustment_new (1234, 0, 65535, 1, 10, 10);
  entryNetworkPort = gtk_spin_button_new (GTK_ADJUSTMENT (entryNetworkPort_adj), 1, 0);
  gtk_widget_set_name (entryNetworkPort, "entryNetworkPort");
  gtk_widget_show (entryNetworkPort);
  gtk_table_attach (GTK_TABLE (table2), entryNetworkPort, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_spin_button_set_numeric (GTK_SPIN_BUTTON (entryNetworkPort), TRUE);

  comboNetworkAddress = gtk_combo_new ();
  g_object_set_data (G_OBJECT (GTK_COMBO (comboNetworkAddress)->popwin),
                     "GladeParentKey", comboNetworkAddress);
  gtk_widget_set_name (comboNetworkAddress, "comboNetworkAddress");
  gtk_widget_show (comboNetworkAddress);
  gtk_table_attach (GTK_TABLE (table2), comboNetworkAddress, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  entryNetworkAddress = GTK_COMBO (comboNetworkAddress)->entry;
  gtk_widget_set_name (entryNetworkAddress, "entryNetworkAddress");
  gtk_widget_show (entryNetworkAddress);

  comboNetworkType = gtk_combo_new ();
  g_object_set_data (G_OBJECT (GTK_COMBO (comboNetworkType)->popwin),
                     "GladeParentKey", comboNetworkType);
  gtk_widget_set_name (comboNetworkType, "comboNetworkType");
  gtk_widget_show (comboNetworkType);
  gtk_table_attach (GTK_TABLE (table2), comboNetworkType, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  comboNetworkType_items = g_list_append (comboNetworkType_items, (gpointer) _("unicast"));
  comboNetworkType_items = g_list_append (comboNetworkType_items, (gpointer) _("multicast"));
  gtk_combo_set_popdown_strings (GTK_COMBO (comboNetworkType), comboNetworkType_items);
  g_list_free (comboNetworkType_items);

  entryNetworkType = GTK_COMBO (comboNetworkType)->entry;
  gtk_widget_set_name (entryNetworkType, "entryNetworkType");
  gtk_widget_show (entryNetworkType);
  gtk_entry_set_activates_default (GTK_ENTRY (entryNetworkType), TRUE);

  labelNetworkType = gtk_label_new (_("Network: "));
  gtk_widget_set_name (labelNetworkType, "labelNetworkType");
  gtk_widget_show (labelNetworkType);
  gtk_table_attach (GTK_TABLE (table2), labelNetworkType, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelNetworkType), 0, 0.5);

  comboNetworkProtocolType = gtk_combo_new ();
  g_object_set_data (G_OBJECT (GTK_COMBO (comboNetworkProtocolType)->popwin),
                     "GladeParentKey", comboNetworkProtocolType);
  gtk_widget_set_name (comboNetworkProtocolType, "comboNetworkProtocolType");
  gtk_widget_show (comboNetworkProtocolType);
  gtk_table_attach (GTK_TABLE (table2), comboNetworkProtocolType, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  comboNetworkProtocolType_items = g_list_append (comboNetworkProtocolType_items, (gpointer) _("udp"));
  comboNetworkProtocolType_items = g_list_append (comboNetworkProtocolType_items, (gpointer) _("udp6"));
  comboNetworkProtocolType_items = g_list_append (comboNetworkProtocolType_items, (gpointer) _("rtp"));
  comboNetworkProtocolType_items = g_list_append (comboNetworkProtocolType_items, (gpointer) _("rtp4"));
  comboNetworkProtocolType_items = g_list_append (comboNetworkProtocolType_items, (gpointer) _("ftp"));
  comboNetworkProtocolType_items = g_list_append (comboNetworkProtocolType_items, (gpointer) _("http"));
  comboNetworkProtocolType_items = g_list_append (comboNetworkProtocolType_items, (gpointer) _("sout"));
  comboNetworkProtocolType_items = g_list_append (comboNetworkProtocolType_items, (gpointer) _("mms"));
  gtk_combo_set_popdown_strings (GTK_COMBO (comboNetworkProtocolType), comboNetworkProtocolType_items);
  g_list_free (comboNetworkProtocolType_items);

  entryNetworkProtocolType = GTK_COMBO (comboNetworkProtocolType)->entry;
  gtk_widget_set_name (entryNetworkProtocolType, "entryNetworkProtocolType");
  gtk_widget_show (entryNetworkProtocolType);

  labelNetworkProtocol = gtk_label_new (_("Protocol:"));
  gtk_widget_set_name (labelNetworkProtocol, "labelNetworkProtocol");
  gtk_widget_show (labelNetworkProtocol);
  gtk_table_attach (GTK_TABLE (table2), labelNetworkProtocol, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelNetworkProtocol), 0, 0.5);

  hbox13 = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (hbox13, "hbox13");
  gtk_widget_show (hbox13);
  gtk_box_pack_start (GTK_BOX (vbox5), hbox13, FALSE, FALSE, 0);

  AddNetworkPlaylist = gtk_button_new_with_mnemonic (_("Add to Playlist"));
  gtk_widget_set_name (AddNetworkPlaylist, "AddNetworkPlaylist");
  gtk_widget_show (AddNetworkPlaylist);
  gtk_box_pack_start (GTK_BOX (hbox13), AddNetworkPlaylist, FALSE, FALSE, 0);

  Network = gtk_label_new (_("Network"));
  gtk_widget_set_name (Network, "Network");
  gtk_widget_show (Network);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook), 1), Network);
  gtk_label_set_justify (GTK_LABEL (Network), GTK_JUSTIFY_CENTER);

  vbox7 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox7, "vbox7");
  gtk_widget_show (vbox7);
  gtk_container_add (GTK_CONTAINER (notebook), vbox7);

  scrolledV4Lwindow = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledV4Lwindow, "scrolledV4Lwindow");
  gtk_widget_show (scrolledV4Lwindow);
  gtk_box_pack_start (GTK_BOX (vbox7), scrolledV4Lwindow, TRUE, TRUE, 0);
  gtk_scrolled_window_set_shadow_type (GTK_SCROLLED_WINDOW (scrolledV4Lwindow), GTK_SHADOW_ETCHED_OUT);

  viewportV4L = gtk_viewport_new (NULL, NULL);
  gtk_widget_set_name (viewportV4L, "viewportV4L");
  gtk_widget_show (viewportV4L);
  gtk_container_add (GTK_CONTAINER (scrolledV4Lwindow), viewportV4L);
  gtk_viewport_set_shadow_type (GTK_VIEWPORT (viewportV4L), GTK_SHADOW_OUT);

  tableV4L = gtk_table_new (12, 2, FALSE);
  gtk_widget_set_name (tableV4L, "tableV4L");
  gtk_widget_show (tableV4L);
  gtk_container_add (GTK_CONTAINER (viewportV4L), tableV4L);

  labelV4lVideDevice = gtk_label_new (_("Video:"));
  gtk_widget_set_name (labelV4lVideDevice, "labelV4lVideDevice");
  gtk_widget_show (labelV4lVideDevice);
  gtk_table_attach (GTK_TABLE (tableV4L), labelV4lVideDevice, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelV4lVideDevice), 0, 0.5);

  labelV4LAudioDevice = gtk_label_new (_("Audio:"));
  gtk_widget_set_name (labelV4LAudioDevice, "labelV4LAudioDevice");
  gtk_widget_show (labelV4LAudioDevice);
  gtk_table_attach (GTK_TABLE (tableV4L), labelV4LAudioDevice, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelV4LAudioDevice), 0, 0.5);

  labelV4LChannel = gtk_label_new (_("Channel:"));
  gtk_widget_set_name (labelV4LChannel, "labelV4LChannel");
  gtk_widget_show (labelV4LChannel);
  gtk_table_attach (GTK_TABLE (tableV4L), labelV4LChannel, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelV4LChannel), 0, 0.5);

  labelV4LNorm = gtk_label_new (_("Norm:"));
  gtk_widget_set_name (labelV4LNorm, "labelV4LNorm");
  gtk_widget_show (labelV4LNorm);
  gtk_table_attach (GTK_TABLE (tableV4L), labelV4LNorm, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelV4LNorm), 0, 0.5);

  labelV4LSize = gtk_label_new (_("Size:"));
  gtk_widget_set_name (labelV4LSize, "labelV4LSize");
  gtk_widget_show (labelV4LSize);
  gtk_table_attach (GTK_TABLE (tableV4L), labelV4LSize, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelV4LSize), 0, 0.5);

  labelV4LFrequency = gtk_label_new (_("Frequency:"));
  gtk_widget_set_name (labelV4LFrequency, "labelV4LFrequency");
  gtk_widget_show (labelV4LFrequency);
  gtk_table_attach (GTK_TABLE (tableV4L), labelV4LFrequency, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelV4LFrequency), 0, 0.5);

  labelV4LSampleRate = gtk_label_new (_("Samplerate:"));
  gtk_widget_set_name (labelV4LSampleRate, "labelV4LSampleRate");
  gtk_widget_show (labelV4LSampleRate);
  gtk_table_attach (GTK_TABLE (tableV4L), labelV4LSampleRate, 0, 1, 6, 7,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelV4LSampleRate), 0, 0.5);

  labelV4LQuality = gtk_label_new (_("Quality:"));
  gtk_widget_set_name (labelV4LQuality, "labelV4LQuality");
  gtk_widget_show (labelV4LQuality);
  gtk_table_attach (GTK_TABLE (tableV4L), labelV4LQuality, 0, 1, 7, 8,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelV4LQuality), 0, 0.5);

  labelV4LTuner = gtk_label_new (_("Tuner:"));
  gtk_widget_set_name (labelV4LTuner, "labelV4LTuner");
  gtk_widget_show (labelV4LTuner);
  gtk_table_attach (GTK_TABLE (tableV4L), labelV4LTuner, 0, 1, 9, 10,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelV4LTuner), 0, 0.5);

  labelV4LSoundDirection = gtk_label_new (_("Sound:"));
  gtk_widget_set_name (labelV4LSoundDirection, "labelV4LSoundDirection");
  gtk_widget_show (labelV4LSoundDirection);
  gtk_table_attach (GTK_TABLE (tableV4L), labelV4LSoundDirection, 0, 1, 8, 9,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelV4LSoundDirection), 0, 0.5);

  labelV4LMJPEG = gtk_label_new (_("MJPEG:"));
  gtk_widget_set_name (labelV4LMJPEG, "labelV4LMJPEG");
  gtk_widget_show (labelV4LMJPEG);
  gtk_table_attach (GTK_TABLE (tableV4L), labelV4LMJPEG, 0, 1, 10, 11,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelV4LMJPEG), 0, 0.5);

  labelV4LDecimation = gtk_label_new (_("Decimation:"));
  gtk_widget_set_name (labelV4LDecimation, "labelV4LDecimation");
  gtk_widget_show (labelV4LDecimation);
  gtk_table_attach (GTK_TABLE (tableV4L), labelV4LDecimation, 0, 1, 11, 12,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelV4LDecimation), 0, 0.5);

  comboV4lVideoDevice = gtk_combo_new ();
  g_object_set_data (G_OBJECT (GTK_COMBO (comboV4lVideoDevice)->popwin),
                     "GladeParentKey", comboV4lVideoDevice);
  gtk_widget_set_name (comboV4lVideoDevice, "comboV4lVideoDevice");
  gtk_widget_show (comboV4lVideoDevice);
  gtk_table_attach (GTK_TABLE (tableV4L), comboV4lVideoDevice, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_combo_set_value_in_list (GTK_COMBO (comboV4lVideoDevice), TRUE, TRUE);
  comboV4lVideoDevice_items = g_list_append (comboV4lVideoDevice_items, (gpointer) "/dev/video");
  comboV4lVideoDevice_items = g_list_append (comboV4lVideoDevice_items, (gpointer) "/dev/video0");
  comboV4lVideoDevice_items = g_list_append (comboV4lVideoDevice_items, (gpointer) "/dev/video1");
  gtk_combo_set_popdown_strings (GTK_COMBO (comboV4lVideoDevice), comboV4lVideoDevice_items);
  g_list_free (comboV4lVideoDevice_items);

  entryV4LVideoDevice = GTK_COMBO (comboV4lVideoDevice)->entry;
  gtk_widget_set_name (entryV4LVideoDevice, "entryV4LVideoDevice");
  gtk_widget_show (entryV4LVideoDevice);
  gtk_entry_set_activates_default (GTK_ENTRY (entryV4LVideoDevice), TRUE);

  comboV4lAudioDevice = gtk_combo_new ();
  g_object_set_data (G_OBJECT (GTK_COMBO (comboV4lAudioDevice)->popwin),
                     "GladeParentKey", comboV4lAudioDevice);
  gtk_widget_set_name (comboV4lAudioDevice, "comboV4lAudioDevice");
  gtk_widget_show (comboV4lAudioDevice);
  gtk_table_attach (GTK_TABLE (tableV4L), comboV4lAudioDevice, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  comboV4lAudioDevice_items = g_list_append (comboV4lAudioDevice_items, (gpointer) "/dev/dsp");
  comboV4lAudioDevice_items = g_list_append (comboV4lAudioDevice_items, (gpointer) "/dev/audio");
  comboV4lAudioDevice_items = g_list_append (comboV4lAudioDevice_items, (gpointer) "/dev/audio0");
  comboV4lAudioDevice_items = g_list_append (comboV4lAudioDevice_items, (gpointer) "/dev/audio1");
  gtk_combo_set_popdown_strings (GTK_COMBO (comboV4lAudioDevice), comboV4lAudioDevice_items);
  g_list_free (comboV4lAudioDevice_items);

  entryV4LAudioDevice = GTK_COMBO (comboV4lAudioDevice)->entry;
  gtk_widget_set_name (entryV4LAudioDevice, "entryV4LAudioDevice");
  gtk_widget_show (entryV4LAudioDevice);
  gtk_entry_set_activates_default (GTK_ENTRY (entryV4LAudioDevice), TRUE);

  entryV4LChannel_adj = gtk_adjustment_new (0, 0, 100, 1, 10, 10);
  entryV4LChannel = gtk_spin_button_new (GTK_ADJUSTMENT (entryV4LChannel_adj), 1, 0);
  gtk_widget_set_name (entryV4LChannel, "entryV4LChannel");
  gtk_widget_show (entryV4LChannel);
  gtk_table_attach (GTK_TABLE (tableV4L), entryV4LChannel, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_spin_button_set_numeric (GTK_SPIN_BUTTON (entryV4LChannel), TRUE);

  comboV4LNorm = gtk_combo_new ();
  g_object_set_data (G_OBJECT (GTK_COMBO (comboV4LNorm)->popwin),
                     "GladeParentKey", comboV4LNorm);
  gtk_widget_set_name (comboV4LNorm, "comboV4LNorm");
  gtk_widget_show (comboV4LNorm);
  gtk_table_attach (GTK_TABLE (tableV4L), comboV4LNorm, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  comboV4LNorm_items = g_list_append (comboV4LNorm_items, (gpointer) _("pal"));
  comboV4LNorm_items = g_list_append (comboV4LNorm_items, (gpointer) _("ntsc"));
  comboV4LNorm_items = g_list_append (comboV4LNorm_items, (gpointer) _("secam"));
  comboV4LNorm_items = g_list_append (comboV4LNorm_items, (gpointer) _("auto"));
  gtk_combo_set_popdown_strings (GTK_COMBO (comboV4LNorm), comboV4LNorm_items);
  g_list_free (comboV4LNorm_items);

  entryV4LNorm = GTK_COMBO (comboV4LNorm)->entry;
  gtk_widget_set_name (entryV4LNorm, "entryV4LNorm");
  gtk_widget_show (entryV4LNorm);
  gtk_entry_set_activates_default (GTK_ENTRY (entryV4LNorm), TRUE);

  comboV4LSize = gtk_combo_new ();
  g_object_set_data (G_OBJECT (GTK_COMBO (comboV4LSize)->popwin),
                     "GladeParentKey", comboV4LSize);
  gtk_widget_set_name (comboV4LSize, "comboV4LSize");
  gtk_widget_show (comboV4LSize);
  gtk_table_attach (GTK_TABLE (tableV4L), comboV4LSize, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  comboV4LSize_items = g_list_append (comboV4LSize_items, (gpointer) _("240x192"));
  comboV4LSize_items = g_list_append (comboV4LSize_items, (gpointer) _("320x240"));
  comboV4LSize_items = g_list_append (comboV4LSize_items, (gpointer) _("qsif"));
  comboV4LSize_items = g_list_append (comboV4LSize_items, (gpointer) _("qcif"));
  comboV4LSize_items = g_list_append (comboV4LSize_items, (gpointer) _("sif"));
  comboV4LSize_items = g_list_append (comboV4LSize_items, (gpointer) _("cif"));
  comboV4LSize_items = g_list_append (comboV4LSize_items, (gpointer) _("vga"));
  gtk_combo_set_popdown_strings (GTK_COMBO (comboV4LSize), comboV4LSize_items);
  g_list_free (comboV4LSize_items);

  entryV4LSize = GTK_COMBO (comboV4LSize)->entry;
  gtk_widget_set_name (entryV4LSize, "entryV4LSize");
  gtk_widget_show (entryV4LSize);
  gtk_entry_set_activates_default (GTK_ENTRY (entryV4LSize), TRUE);

  entryV4LFrequency_adj = gtk_adjustment_new (8692, 0, 65535, 1, 10, 10);
  entryV4LFrequency = gtk_spin_button_new (GTK_ADJUSTMENT (entryV4LFrequency_adj), 1, 0);
  gtk_widget_set_name (entryV4LFrequency, "entryV4LFrequency");
  gtk_widget_show (entryV4LFrequency);
  gtk_table_attach (GTK_TABLE (tableV4L), entryV4LFrequency, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_tooltips_set_tip (tooltips, entryV4LFrequency, _("kHz"), NULL);
  gtk_spin_button_set_numeric (GTK_SPIN_BUTTON (entryV4LFrequency), TRUE);

  entryV4LSampleRate_adj = gtk_adjustment_new (44100, 0, 65535, 1, 10, 10);
  entryV4LSampleRate = gtk_spin_button_new (GTK_ADJUSTMENT (entryV4LSampleRate_adj), 1, 0);
  gtk_widget_set_name (entryV4LSampleRate, "entryV4LSampleRate");
  gtk_widget_show (entryV4LSampleRate);
  gtk_table_attach (GTK_TABLE (tableV4L), entryV4LSampleRate, 1, 2, 6, 7,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_tooltips_set_tip (tooltips, entryV4LSampleRate, _("Hz/s"), NULL);
  gtk_spin_button_set_numeric (GTK_SPIN_BUTTON (entryV4LSampleRate), TRUE);

  entryV4LQuality_adj = gtk_adjustment_new (100, 0, 65535, 1, 10, 10);
  entryV4LQuality = gtk_spin_button_new (GTK_ADJUSTMENT (entryV4LQuality_adj), 1, 0);
  gtk_widget_set_name (entryV4LQuality, "entryV4LQuality");
  gtk_widget_show (entryV4LQuality);
  gtk_table_attach (GTK_TABLE (tableV4L), entryV4LQuality, 1, 2, 7, 8,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_spin_button_set_numeric (GTK_SPIN_BUTTON (entryV4LQuality), TRUE);

  comboV4LSoundDirection = gtk_combo_new ();
  g_object_set_data (G_OBJECT (GTK_COMBO (comboV4LSoundDirection)->popwin),
                     "GladeParentKey", comboV4LSoundDirection);
  gtk_widget_set_name (comboV4LSoundDirection, "comboV4LSoundDirection");
  gtk_widget_show (comboV4LSoundDirection);
  gtk_table_attach (GTK_TABLE (tableV4L), comboV4LSoundDirection, 1, 2, 8, 9,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_combo_set_value_in_list (GTK_COMBO (comboV4LSoundDirection), TRUE, TRUE);
  gtk_combo_set_use_arrows_always (GTK_COMBO (comboV4LSoundDirection), TRUE);
  comboV4LSoundDirection_items = g_list_append (comboV4LSoundDirection_items, (gpointer) _("mono"));
  comboV4LSoundDirection_items = g_list_append (comboV4LSoundDirection_items, (gpointer) _("stereo"));
  gtk_combo_set_popdown_strings (GTK_COMBO (comboV4LSoundDirection), comboV4LSoundDirection_items);
  g_list_free (comboV4LSoundDirection_items);

  entryV4LSoundDirection = GTK_COMBO (comboV4LSoundDirection)->entry;
  gtk_widget_set_name (entryV4LSoundDirection, "entryV4LSoundDirection");
  gtk_widget_show (entryV4LSoundDirection);
  gtk_entry_set_activates_default (GTK_ENTRY (entryV4LSoundDirection), TRUE);

  entryV4LTuner_adj = gtk_adjustment_new (0, -1, 100, 1, 10, 10);
  entryV4LTuner = gtk_spin_button_new (GTK_ADJUSTMENT (entryV4LTuner_adj), 1, 0);
  gtk_widget_set_name (entryV4LTuner, "entryV4LTuner");
  gtk_widget_show (entryV4LTuner);
  gtk_table_attach (GTK_TABLE (tableV4L), entryV4LTuner, 1, 2, 9, 10,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_spin_button_set_numeric (GTK_SPIN_BUTTON (entryV4LTuner), TRUE);

  checkV4LMJPEG = gtk_check_button_new_with_mnemonic (_("enable"));
  gtk_widget_set_name (checkV4LMJPEG, "checkV4LMJPEG");
  gtk_widget_show (checkV4LMJPEG);
  gtk_table_attach (GTK_TABLE (tableV4L), checkV4LMJPEG, 1, 2, 10, 11,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  entryV4LDecimation_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  entryV4LDecimation = gtk_spin_button_new (GTK_ADJUSTMENT (entryV4LDecimation_adj), 1, 0);
  gtk_widget_set_name (entryV4LDecimation, "entryV4LDecimation");
  gtk_widget_show (entryV4LDecimation);
  gtk_table_attach (GTK_TABLE (tableV4L), entryV4LDecimation, 1, 2, 11, 12,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  hbox16 = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (hbox16, "hbox16");
  gtk_widget_show (hbox16);
  gtk_box_pack_start (GTK_BOX (vbox7), hbox16, FALSE, FALSE, 0);

  AddCameraToPlaylist = gtk_button_new_with_mnemonic (_("Add to Playlist"));
  gtk_widget_set_name (AddCameraToPlaylist, "AddCameraToPlaylist");
  gtk_widget_show (AddCameraToPlaylist);
  gtk_box_pack_start (GTK_BOX (hbox16), AddCameraToPlaylist, FALSE, FALSE, 0);

  Camera = gtk_label_new (_("Camera"));
  gtk_widget_set_name (Camera, "Camera");
  gtk_widget_show (Camera);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook), 2), Camera);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox1, "vbox1");
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (notebook), vbox1);

  scrolledwindowTranscode = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledwindowTranscode, "scrolledwindowTranscode");
  gtk_widget_show (scrolledwindowTranscode);
  gtk_box_pack_start (GTK_BOX (vbox1), scrolledwindowTranscode, TRUE, TRUE, 0);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindowTranscode), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);

  viewport5 = gtk_viewport_new (NULL, NULL);
  gtk_widget_set_name (viewport5, "viewport5");
  gtk_widget_show (viewport5);
  gtk_container_add (GTK_CONTAINER (scrolledwindowTranscode), viewport5);

  tableTranscode = gtk_table_new (14, 2, FALSE);
  gtk_widget_set_name (tableTranscode, "tableTranscode");
  gtk_widget_show (tableTranscode);
  gtk_container_add (GTK_CONTAINER (viewport5), tableTranscode);

  labelVideoCodec = gtk_label_new (_("Video Codec:"));
  gtk_widget_set_name (labelVideoCodec, "labelVideoCodec");
  gtk_widget_show (labelVideoCodec);
  gtk_table_attach (GTK_TABLE (tableTranscode), labelVideoCodec, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelVideoCodec), 0, 0.5);

  comboVideoCodec = gtk_combo_new ();
  g_object_set_data (G_OBJECT (GTK_COMBO (comboVideoCodec)->popwin),
                     "GladeParentKey", comboVideoCodec);
  gtk_widget_set_name (comboVideoCodec, "comboVideoCodec");
  gtk_widget_show (comboVideoCodec);
  gtk_table_attach (GTK_TABLE (tableTranscode), comboVideoCodec, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  comboVideoCodec_items = g_list_append (comboVideoCodec_items, (gpointer) _("huffyuv"));
  comboVideoCodec_items = g_list_append (comboVideoCodec_items, (gpointer) _("mp1v"));
  comboVideoCodec_items = g_list_append (comboVideoCodec_items, (gpointer) _("mp2v"));
  comboVideoCodec_items = g_list_append (comboVideoCodec_items, (gpointer) _("mp4v"));
  comboVideoCodec_items = g_list_append (comboVideoCodec_items, (gpointer) _("H263"));
  comboVideoCodec_items = g_list_append (comboVideoCodec_items, (gpointer) _("I263"));
  comboVideoCodec_items = g_list_append (comboVideoCodec_items, (gpointer) _("WMV1"));
  comboVideoCodec_items = g_list_append (comboVideoCodec_items, (gpointer) _("WMV2"));
  gtk_combo_set_popdown_strings (GTK_COMBO (comboVideoCodec), comboVideoCodec_items);
  g_list_free (comboVideoCodec_items);

  entryVideoCodec = GTK_COMBO (comboVideoCodec)->entry;
  gtk_widget_set_name (entryVideoCodec, "entryVideoCodec");
  gtk_widget_show (entryVideoCodec);
  gtk_entry_set_activates_default (GTK_ENTRY (entryVideoCodec), TRUE);

  labelVideoBitrate = gtk_label_new (_("Video Bitrate:"));
  gtk_widget_set_name (labelVideoBitrate, "labelVideoBitrate");
  gtk_widget_show (labelVideoBitrate);
  gtk_table_attach (GTK_TABLE (tableTranscode), labelVideoBitrate, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelVideoBitrate), 0, 0.5);

  labelVideoBitrateTolerance = gtk_label_new (_("Bitrate Tolerance:"));
  gtk_widget_set_name (labelVideoBitrateTolerance, "labelVideoBitrateTolerance");
  gtk_widget_show (labelVideoBitrateTolerance);
  gtk_table_attach (GTK_TABLE (tableTranscode), labelVideoBitrateTolerance, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelVideoBitrateTolerance), 0, 0.5);

  labelVideoKeyInterval = gtk_label_new (_("Keyframe Interval:"));
  gtk_widget_set_name (labelVideoKeyInterval, "labelVideoKeyInterval");
  gtk_widget_show (labelVideoKeyInterval);
  gtk_table_attach (GTK_TABLE (tableTranscode), labelVideoKeyInterval, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelVideoKeyInterval), 0, 0.5);

  labelAudioCodec = gtk_label_new (_("Audio Codec:"));
  gtk_widget_set_name (labelAudioCodec, "labelAudioCodec");
  gtk_widget_show (labelAudioCodec);
  gtk_table_attach (GTK_TABLE (tableTranscode), labelAudioCodec, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelAudioCodec), 0, 0.5);

  labelVideoDeinterlace = gtk_label_new (_("Deinterlace:"));
  gtk_widget_set_name (labelVideoDeinterlace, "labelVideoDeinterlace");
  gtk_widget_show (labelVideoDeinterlace);
  gtk_table_attach (GTK_TABLE (tableTranscode), labelVideoDeinterlace, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelVideoDeinterlace), 0, 0.5);

  labelStdAccess = gtk_label_new (_("Access:"));
  gtk_widget_set_name (labelStdAccess, "labelStdAccess");
  gtk_widget_show (labelStdAccess);
  gtk_table_attach (GTK_TABLE (tableTranscode), labelStdAccess, 0, 1, 7, 8,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelStdAccess), 0, 0.5);

  labelStdMuxer = gtk_label_new (_("Muxer:"));
  gtk_widget_set_name (labelStdMuxer, "labelStdMuxer");
  gtk_widget_show (labelStdMuxer);
  gtk_table_attach (GTK_TABLE (tableTranscode), labelStdMuxer, 0, 1, 8, 9,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelStdMuxer), 0, 0.5);

  labelStdUrl = gtk_label_new (_("URL:"));
  gtk_widget_set_name (labelStdUrl, "labelStdUrl");
  gtk_widget_show (labelStdUrl);
  gtk_table_attach (GTK_TABLE (tableTranscode), labelStdUrl, 0, 1, 9, 10,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelStdUrl), 0, 0.5);

  labelStdTimeToLive = gtk_label_new (_("Time To Live (TTL):"));
  gtk_widget_set_name (labelStdTimeToLive, "labelStdTimeToLive");
  gtk_widget_show (labelStdTimeToLive);
  gtk_table_attach (GTK_TABLE (tableTranscode), labelStdTimeToLive, 0, 1, 10, 11,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelStdTimeToLive), 0, 0.5);

  entryStdTTL_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  entryStdTTL = gtk_spin_button_new (GTK_ADJUSTMENT (entryStdTTL_adj), 1, 0);
  gtk_widget_set_name (entryStdTTL, "entryStdTTL");
  gtk_widget_show (entryStdTTL);
  gtk_table_attach (GTK_TABLE (tableTranscode), entryStdTTL, 1, 2, 10, 11,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  comboStdURL = gtk_combo_new ();
  g_object_set_data (G_OBJECT (GTK_COMBO (comboStdURL)->popwin),
                     "GladeParentKey", comboStdURL);
  gtk_widget_set_name (comboStdURL, "comboStdURL");
  gtk_widget_show (comboStdURL);
  gtk_table_attach (GTK_TABLE (tableTranscode), comboStdURL, 1, 2, 9, 10,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  comboStdURL_items = g_list_append (comboStdURL_items, (gpointer) _("127.0.0.1"));
  comboStdURL_items = g_list_append (comboStdURL_items, (gpointer) _("localhost"));
  comboStdURL_items = g_list_append (comboStdURL_items, (gpointer) _("localhost.localdomain"));
  comboStdURL_items = g_list_append (comboStdURL_items, (gpointer) _("239.0.0.42"));
  gtk_combo_set_popdown_strings (GTK_COMBO (comboStdURL), comboStdURL_items);
  g_list_free (comboStdURL_items);

  entryStdURL = GTK_COMBO (comboStdURL)->entry;
  gtk_widget_set_name (entryStdURL, "entryStdURL");
  gtk_widget_show (entryStdURL);
  gtk_entry_set_activates_default (GTK_ENTRY (entryStdURL), TRUE);

  comboStdMuxer = gtk_combo_new ();
  g_object_set_data (G_OBJECT (GTK_COMBO (comboStdMuxer)->popwin),
                     "GladeParentKey", comboStdMuxer);
  gtk_widget_set_name (comboStdMuxer, "comboStdMuxer");
  gtk_widget_show (comboStdMuxer);
  gtk_table_attach (GTK_TABLE (tableTranscode), comboStdMuxer, 1, 2, 8, 9,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  comboStdMuxer_items = g_list_append (comboStdMuxer_items, (gpointer) _("ps"));
  comboStdMuxer_items = g_list_append (comboStdMuxer_items, (gpointer) _("ts"));
  comboStdMuxer_items = g_list_append (comboStdMuxer_items, (gpointer) _("mpeg1"));
  comboStdMuxer_items = g_list_append (comboStdMuxer_items, (gpointer) _("avi"));
  comboStdMuxer_items = g_list_append (comboStdMuxer_items, (gpointer) _("ogg"));
  comboStdMuxer_items = g_list_append (comboStdMuxer_items, (gpointer) _("mp4"));
  comboStdMuxer_items = g_list_append (comboStdMuxer_items, (gpointer) _("mov"));
  comboStdMuxer_items = g_list_append (comboStdMuxer_items, (gpointer) _("asf"));
  gtk_combo_set_popdown_strings (GTK_COMBO (comboStdMuxer), comboStdMuxer_items);
  g_list_free (comboStdMuxer_items);

  entryStdMuxer = GTK_COMBO (comboStdMuxer)->entry;
  gtk_widget_set_name (entryStdMuxer, "entryStdMuxer");
  gtk_widget_show (entryStdMuxer);
  gtk_entry_set_activates_default (GTK_ENTRY (entryStdMuxer), TRUE);

  entryAudioBitrate_adj = gtk_adjustment_new (256, 0, 65535, 1, 10, 10);
  entryAudioBitrate = gtk_spin_button_new (GTK_ADJUSTMENT (entryAudioBitrate_adj), 1, 0);
  gtk_widget_set_name (entryAudioBitrate, "entryAudioBitrate");
  gtk_widget_show (entryAudioBitrate);
  gtk_table_attach (GTK_TABLE (tableTranscode), entryAudioBitrate, 1, 2, 6, 7,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_tooltips_set_tip (tooltips, entryAudioBitrate, _("kbits/s"), NULL);
  gtk_spin_button_set_numeric (GTK_SPIN_BUTTON (entryAudioBitrate), TRUE);

  comboAudioCodec = gtk_combo_new ();
  g_object_set_data (G_OBJECT (GTK_COMBO (comboAudioCodec)->popwin),
                     "GladeParentKey", comboAudioCodec);
  gtk_widget_set_name (comboAudioCodec, "comboAudioCodec");
  gtk_widget_show (comboAudioCodec);
  gtk_table_attach (GTK_TABLE (tableTranscode), comboAudioCodec, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  comboAudioCodec_items = g_list_append (comboAudioCodec_items, (gpointer) _("alaw"));
  comboAudioCodec_items = g_list_append (comboAudioCodec_items, (gpointer) _("ulaw"));
  comboAudioCodec_items = g_list_append (comboAudioCodec_items, (gpointer) _("mpga"));
  comboAudioCodec_items = g_list_append (comboAudioCodec_items, (gpointer) _("mp3"));
  comboAudioCodec_items = g_list_append (comboAudioCodec_items, (gpointer) _("a52"));
  comboAudioCodec_items = g_list_append (comboAudioCodec_items, (gpointer) _("vorb"));
  gtk_combo_set_popdown_strings (GTK_COMBO (comboAudioCodec), comboAudioCodec_items);
  g_list_free (comboAudioCodec_items);

  entryAudioCodec = GTK_COMBO (comboAudioCodec)->entry;
  gtk_widget_set_name (entryAudioCodec, "entryAudioCodec");
  gtk_widget_show (entryAudioCodec);
  gtk_entry_set_activates_default (GTK_ENTRY (entryAudioCodec), TRUE);

  checkVideoDeinterlace = gtk_check_button_new_with_mnemonic (_("enable"));
  gtk_widget_set_name (checkVideoDeinterlace, "checkVideoDeinterlace");
  gtk_widget_show (checkVideoDeinterlace);
  gtk_table_attach (GTK_TABLE (tableTranscode), checkVideoDeinterlace, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  entryVideoKeyFrameInterval_adj = gtk_adjustment_new (80, 0, 65535, 1, 10, 10);
  entryVideoKeyFrameInterval = gtk_spin_button_new (GTK_ADJUSTMENT (entryVideoKeyFrameInterval_adj), 1, 0);
  gtk_widget_set_name (entryVideoKeyFrameInterval, "entryVideoKeyFrameInterval");
  gtk_widget_show (entryVideoKeyFrameInterval);
  gtk_table_attach (GTK_TABLE (tableTranscode), entryVideoKeyFrameInterval, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_spin_button_set_numeric (GTK_SPIN_BUTTON (entryVideoKeyFrameInterval), TRUE);

  entryVideoBitrateTolerance_adj = gtk_adjustment_new (800000, 0, 1e+06, 1, 10, 10);
  entryVideoBitrateTolerance = gtk_spin_button_new (GTK_ADJUSTMENT (entryVideoBitrateTolerance_adj), 1, 0);
  gtk_widget_set_name (entryVideoBitrateTolerance, "entryVideoBitrateTolerance");
  gtk_widget_show (entryVideoBitrateTolerance);
  gtk_table_attach (GTK_TABLE (tableTranscode), entryVideoBitrateTolerance, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_tooltips_set_tip (tooltips, entryVideoBitrateTolerance, _("bits/s"), NULL);
  gtk_spin_button_set_numeric (GTK_SPIN_BUTTON (entryVideoBitrateTolerance), TRUE);

  entryVideoBitrate_adj = gtk_adjustment_new (3000, 0, 65535, 1, 10, 10);
  entryVideoBitrate = gtk_spin_button_new (GTK_ADJUSTMENT (entryVideoBitrate_adj), 1, 0);
  gtk_widget_set_name (entryVideoBitrate, "entryVideoBitrate");
  gtk_widget_show (entryVideoBitrate);
  gtk_table_attach (GTK_TABLE (tableTranscode), entryVideoBitrate, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_tooltips_set_tip (tooltips, entryVideoBitrate, _("kbits/s"), NULL);
  gtk_spin_button_set_numeric (GTK_SPIN_BUTTON (entryVideoBitrate), TRUE);

  labelAudioBitrate = gtk_label_new (_("Audio Bitrate :"));
  gtk_widget_set_name (labelAudioBitrate, "labelAudioBitrate");
  gtk_widget_show (labelAudioBitrate);
  gtk_table_attach (GTK_TABLE (tableTranscode), labelAudioBitrate, 0, 1, 6, 7,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelAudioBitrate), 0, 0.5);

  comboStdAccess = gtk_combo_new ();
  g_object_set_data (G_OBJECT (GTK_COMBO (comboStdAccess)->popwin),
                     "GladeParentKey", comboStdAccess);
  gtk_widget_set_name (comboStdAccess, "comboStdAccess");
  gtk_widget_show (comboStdAccess);
  gtk_table_attach (GTK_TABLE (tableTranscode), comboStdAccess, 1, 2, 7, 8,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  comboStdAccess_items = g_list_append (comboStdAccess_items, (gpointer) _("udp"));
  comboStdAccess_items = g_list_append (comboStdAccess_items, (gpointer) _("display"));
  comboStdAccess_items = g_list_append (comboStdAccess_items, (gpointer) _("file"));
  comboStdAccess_items = g_list_append (comboStdAccess_items, (gpointer) _("http"));
  comboStdAccess_items = g_list_append (comboStdAccess_items, (gpointer) _("mmsh"));
  comboStdAccess_items = g_list_append (comboStdAccess_items, (gpointer) _("rtp"));
  comboStdAccess_items = g_list_append (comboStdAccess_items, (gpointer) _("http"));
  comboStdAccess_items = g_list_append (comboStdAccess_items, (gpointer) _("ftp"));
  gtk_combo_set_popdown_strings (GTK_COMBO (comboStdAccess), comboStdAccess_items);
  g_list_free (comboStdAccess_items);

  entryStdAccess = GTK_COMBO (comboStdAccess)->entry;
  gtk_widget_set_name (entryStdAccess, "entryStdAccess");
  gtk_widget_show (entryStdAccess);
  gtk_entry_set_activates_default (GTK_ENTRY (entryStdAccess), TRUE);

  labelSAP = gtk_label_new (_("SAP Announce:"));
  gtk_widget_set_name (labelSAP, "labelSAP");
  gtk_widget_show (labelSAP);
  gtk_table_attach (GTK_TABLE (tableTranscode), labelSAP, 0, 1, 11, 12,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelSAP), 0, 0.5);

  checkSAP = gtk_check_button_new_with_mnemonic (_("enable"));
  gtk_widget_set_name (checkSAP, "checkSAP");
  gtk_widget_show (checkSAP);
  gtk_table_attach (GTK_TABLE (tableTranscode), checkSAP, 1, 2, 11, 12,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  checkSLP = gtk_check_button_new_with_mnemonic (_("enable"));
  gtk_widget_set_name (checkSLP, "checkSLP");
  gtk_widget_show (checkSLP);
  gtk_table_attach (GTK_TABLE (tableTranscode), checkSLP, 1, 2, 12, 13,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  labelSLP_ = gtk_label_new (_("SLP Announce:"));
  gtk_widget_set_name (labelSLP_, "labelSLP_");
  gtk_widget_show (labelSLP_);
  gtk_table_attach (GTK_TABLE (tableTranscode), labelSLP_, 0, 1, 12, 13,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelSLP_), 0, 0.5);

  labelAnounceChannel = gtk_label_new (_("Announce Channel:"));
  gtk_widget_set_name (labelAnounceChannel, "labelAnounceChannel");
  gtk_widget_show (labelAnounceChannel);
  gtk_table_attach (GTK_TABLE (tableTranscode), labelAnounceChannel, 0, 1, 13, 14,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelAnounceChannel), 0, 0.5);

  comboAnnounceChannel = gtk_combo_new ();
  g_object_set_data (G_OBJECT (GTK_COMBO (comboAnnounceChannel)->popwin),
                     "GladeParentKey", comboAnnounceChannel);
  gtk_widget_set_name (comboAnnounceChannel, "comboAnnounceChannel");
  gtk_widget_show (comboAnnounceChannel);
  gtk_table_attach (GTK_TABLE (tableTranscode), comboAnnounceChannel, 1, 2, 13, 14,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  entryAnnounceChannel = GTK_COMBO (comboAnnounceChannel)->entry;
  gtk_widget_set_name (entryAnnounceChannel, "entryAnnounceChannel");
  gtk_widget_show (entryAnnounceChannel);

  hbox14 = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (hbox14, "hbox14");
  gtk_widget_show (hbox14);
  gtk_box_pack_start (GTK_BOX (vbox1), hbox14, FALSE, FALSE, 0);

  AddTranscodeToPlaylist = gtk_button_new_with_mnemonic (_("Add to Playlist"));
  gtk_widget_set_name (AddTranscodeToPlaylist, "AddTranscodeToPlaylist");
  gtk_widget_show (AddTranscodeToPlaylist);
  gtk_box_pack_start (GTK_BOX (hbox14), AddTranscodeToPlaylist, FALSE, FALSE, 0);

  Transcode = gtk_label_new (_("Transcode"));
  gtk_widget_set_name (Transcode, "Transcode");
  gtk_widget_show (Transcode);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook), 3), Transcode);
  gtk_label_set_justify (GTK_LABEL (Transcode), GTK_JUSTIFY_CENTER);

  vbox4 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox4, "vbox4");
  gtk_widget_show (vbox4);
  gtk_container_add (GTK_CONTAINER (notebook), vbox4);

  scrolledwindow5 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledwindow5, "scrolledwindow5");
  gtk_widget_show (scrolledwindow5);
  gtk_box_pack_start (GTK_BOX (vbox4), scrolledwindow5, TRUE, TRUE, 0);
  GTK_WIDGET_UNSET_FLAGS (scrolledwindow5, GTK_CAN_FOCUS);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow5), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);
  gtk_scrolled_window_set_shadow_type (GTK_SCROLLED_WINDOW (scrolledwindow5), GTK_SHADOW_IN);

  tvPlaylist = gtk_tree_view_new ();
  gtk_widget_set_name (tvPlaylist, "tvPlaylist");
  gtk_widget_show (tvPlaylist);
  gtk_container_add (GTK_CONTAINER (scrolledwindow5), tvPlaylist);

  hbox11 = gtk_hbox_new (TRUE, 0);
  gtk_widget_set_name (hbox11, "hbox11");
  gtk_widget_show (hbox11);
  gtk_box_pack_start (GTK_BOX (vbox4), hbox11, FALSE, FALSE, 2);

  UpdatePlaylist = gtk_button_new_with_mnemonic (_("Update"));
  gtk_widget_set_name (UpdatePlaylist, "UpdatePlaylist");
  gtk_widget_show (UpdatePlaylist);
  gtk_box_pack_start (GTK_BOX (hbox11), UpdatePlaylist, FALSE, FALSE, 0);

  DeletePlaylist = gtk_button_new_with_mnemonic (_("Delete"));
  gtk_widget_set_name (DeletePlaylist, "DeletePlaylist");
  gtk_widget_show (DeletePlaylist);
  gtk_box_pack_start (GTK_BOX (hbox11), DeletePlaylist, FALSE, FALSE, 5);

  ClearPlaylist = gtk_button_new_with_mnemonic (_(" Clear "));
  gtk_widget_set_name (ClearPlaylist, "ClearPlaylist");
  gtk_widget_show (ClearPlaylist);
  gtk_box_pack_start (GTK_BOX (hbox11), ClearPlaylist, FALSE, FALSE, 5);

  playlist = gtk_label_new (_("Playlist"));
  gtk_widget_set_name (playlist, "playlist");
  gtk_widget_show (playlist);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook), 4), playlist);
  gtk_label_set_justify (GTK_LABEL (playlist), GTK_JUSTIFY_CENTER);

  vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox2, "vbox2");
  gtk_widget_show (vbox2);
  gtk_container_add (GTK_CONTAINER (notebook), vbox2);

  scrolledwindowPreference = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledwindowPreference, "scrolledwindowPreference");
  gtk_widget_show (scrolledwindowPreference);
  gtk_box_pack_start (GTK_BOX (vbox2), scrolledwindowPreference, TRUE, TRUE, 0);

  tvPreferences = gtk_tree_view_new ();
  gtk_widget_set_name (tvPreferences, "tvPreferences");
  gtk_widget_show (tvPreferences);
  gtk_container_add (GTK_CONTAINER (scrolledwindowPreference), tvPreferences);
  gtk_tree_view_set_headers_visible (GTK_TREE_VIEW (tvPreferences), FALSE);

  hbox2 = gtk_hbox_new (TRUE, 0);
  gtk_widget_set_name (hbox2, "hbox2");
  gtk_widget_show (hbox2);
  gtk_box_pack_end (GTK_BOX (vbox2), hbox2, FALSE, FALSE, 2);

  PreferenceSave = gtk_button_new_with_mnemonic (_(" Save "));
  gtk_widget_set_name (PreferenceSave, "PreferenceSave");
  gtk_widget_show (PreferenceSave);
  gtk_box_pack_start (GTK_BOX (hbox2), PreferenceSave, FALSE, FALSE, 0);

  PreferenceApply = gtk_button_new_with_mnemonic (_(" Apply "));
  gtk_widget_set_name (PreferenceApply, "PreferenceApply");
  gtk_widget_show (PreferenceApply);
  gtk_box_pack_start (GTK_BOX (hbox2), PreferenceApply, FALSE, FALSE, 0);

  PreferenceCancel = gtk_button_new_with_mnemonic (_(" Cancel "));
  gtk_widget_set_name (PreferenceCancel, "PreferenceCancel");
  gtk_widget_show (PreferenceCancel);
  gtk_box_pack_end (GTK_BOX (hbox2), PreferenceCancel, FALSE, FALSE, 0);

  preferences = gtk_label_new (_("Preference"));
  gtk_widget_set_name (preferences, "preferences");
  gtk_widget_show (preferences);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook), 5), preferences);
  gtk_label_set_justify (GTK_LABEL (preferences), GTK_JUSTIFY_CENTER);

  scrolledwindow3 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledwindow3, "scrolledwindow3");
  gtk_widget_show (scrolledwindow3);
  gtk_container_add (GTK_CONTAINER (notebook), scrolledwindow3);
  GTK_WIDGET_UNSET_FLAGS (scrolledwindow3, GTK_CAN_FOCUS);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow3), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);

  viewport1 = gtk_viewport_new (NULL, NULL);
  gtk_widget_set_name (viewport1, "viewport1");
  gtk_widget_show (viewport1);
  gtk_container_add (GTK_CONTAINER (scrolledwindow3), viewport1);

  fixed2 = gtk_fixed_new ();
  gtk_widget_set_name (fixed2, "fixed2");
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (viewport1), fixed2);

  aboutImage = create_pixmap (pda, "vlc48x48.png");
  gtk_widget_set_name (aboutImage, "aboutImage");
  gtk_widget_show (aboutImage);
  gtk_fixed_put (GTK_FIXED (fixed2), aboutImage, 0, 0);
  gtk_widget_set_size_request (aboutImage, 48, 48);

  labelDescription = gtk_label_new (_("VLC Media Player is an MPEG, MPEG 2, MP3 and DivX player that accepts input from local or network sources and is licensed under the GPL (http://www.gnu.org/copyleft/gpl.html)."));
  gtk_widget_set_name (labelDescription, "labelDescription");
  gtk_widget_show (labelDescription);
  gtk_fixed_put (GTK_FIXED (fixed2), labelDescription, 16, 112);
  gtk_widget_set_size_request (labelDescription, 200, 112);
  gtk_label_set_line_wrap (GTK_LABEL (labelDescription), TRUE);

  labelAuthors = gtk_label_new (_("Authors: the VideoLAN Team, http://www.videolan.org/team/"));
  gtk_widget_set_name (labelAuthors, "labelAuthors");
  gtk_widget_show (labelAuthors);
  gtk_fixed_put (GTK_FIXED (fixed2), labelAuthors, 16, 72);
  gtk_widget_set_size_request (labelAuthors, 208, 32);
  gtk_label_set_line_wrap (GTK_LABEL (labelAuthors), TRUE);

  labelCopyright = gtk_label_new (_("(c) 1996-2003 the VideoLAN team"));
  gtk_widget_set_name (labelCopyright, "labelCopyright");
  gtk_widget_show (labelCopyright);
  gtk_fixed_put (GTK_FIXED (fixed2), labelCopyright, 16, 48);
  gtk_widget_set_size_request (labelCopyright, 208, 16);
  gtk_label_set_justify (GTK_LABEL (labelCopyright), GTK_JUSTIFY_CENTER);

  labelProgramName = gtk_label_new (_("VLC media player"));
  gtk_widget_set_name (labelProgramName, "labelProgramName");
  gtk_widget_show (labelProgramName);
  gtk_fixed_put (GTK_FIXED (fixed2), labelProgramName, 48, 16);
  gtk_widget_set_size_request (labelProgramName, 152, 16);
  gtk_label_set_justify (GTK_LABEL (labelProgramName), GTK_JUSTIFY_CENTER);
  gtk_label_set_line_wrap (GTK_LABEL (labelProgramName), TRUE);

  about = gtk_label_new (_("About"));
  gtk_widget_set_name (about, "about");
  gtk_widget_show (about);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook), 6), about);
  gtk_label_set_justify (GTK_LABEL (about), GTK_JUSTIFY_CENTER);

  g_signal_connect ((gpointer) pda, "delete_event",
                    G_CALLBACK (onPDADeleteEvent),
                    NULL);
  g_signal_connect ((gpointer) tbRewind, "clicked",
                    G_CALLBACK (onRewind),
                    NULL);
  g_signal_connect ((gpointer) tbPause, "clicked",
                    G_CALLBACK (onPause),
                    NULL);
  g_signal_connect ((gpointer) tbPlay, "clicked",
                    G_CALLBACK (onPlay),
                    NULL);
  g_signal_connect ((gpointer) tbStop, "clicked",
                    G_CALLBACK (onStop),
                    NULL);
  g_signal_connect ((gpointer) tbForward, "clicked",
                    G_CALLBACK (onForward),
                    NULL);
  g_signal_connect ((gpointer) tbAbout, "clicked",
                    G_CALLBACK (onAbout),
                    NULL);
  g_signal_connect ((gpointer) timeSlider, "button_release_event",
                    G_CALLBACK (SliderRelease),
                    NULL);
  g_signal_connect ((gpointer) timeSlider, "button_press_event",
                    G_CALLBACK (SliderPress),
                    NULL);
  g_signal_connect ((gpointer) timeSlider, "move_slider",
                    G_CALLBACK (SliderMove),
                    NULL);
  g_signal_connect ((gpointer) tvFileList, "row_activated",
                    G_CALLBACK (onFileListRow),
                    NULL);
  g_signal_connect ((gpointer) AddFileToPlaylist, "pressed",
                    G_CALLBACK (onAddFileToPlaylist),
                    NULL);
  g_signal_connect ((gpointer) entryNetworkPort, "changed",
                    G_CALLBACK (NetworkBuildMRL),
                    NULL);
  g_signal_connect ((gpointer) entryNetworkAddress, "changed",
                    G_CALLBACK (NetworkBuildMRL),
                    NULL);
  g_signal_connect ((gpointer) entryNetworkType, "changed",
                    G_CALLBACK (NetworkBuildMRL),
                    NULL);
  g_signal_connect ((gpointer) entryNetworkProtocolType, "changed",
                    G_CALLBACK (NetworkBuildMRL),
                    NULL);
  g_signal_connect ((gpointer) AddNetworkPlaylist, "pressed",
                    G_CALLBACK (onAddNetworkPlaylist),
                    NULL);
  g_signal_connect ((gpointer) AddCameraToPlaylist, "pressed",
                    G_CALLBACK (onAddCameraToPlaylist),
                    NULL);
  g_signal_connect ((gpointer) entryStdAccess, "changed",
                    G_CALLBACK (onEntryStdAccessChanged),
                    NULL);
  g_signal_connect ((gpointer) AddTranscodeToPlaylist, "pressed",
                    G_CALLBACK (onAddTranscodeToPlaylist),
                    NULL);
  g_signal_connect ((gpointer) tvPlaylist, "event",
                    G_CALLBACK (PlaylistEvent),
                    NULL);
  g_signal_connect ((gpointer) tvPlaylist, "columns_changed",
                    G_CALLBACK (onPlaylistColumnsChanged),
                    NULL);
  g_signal_connect ((gpointer) tvPlaylist, "select_cursor_row",
                    G_CALLBACK (onPlaylistRowSelected),
                    NULL);
  g_signal_connect ((gpointer) tvPlaylist, "row_activated",
                    G_CALLBACK (onPlaylistRow),
                    NULL);
  g_signal_connect ((gpointer) UpdatePlaylist, "pressed",
                    G_CALLBACK (onUpdatePlaylist),
                    NULL);
  g_signal_connect ((gpointer) DeletePlaylist, "pressed",
                    G_CALLBACK (onDeletePlaylist),
                    NULL);
  g_signal_connect ((gpointer) ClearPlaylist, "pressed",
                    G_CALLBACK (onClearPlaylist),
                    NULL);
  g_signal_connect ((gpointer) PreferenceSave, "pressed",
                    G_CALLBACK (onPreferenceSave),
                    NULL);
  g_signal_connect ((gpointer) PreferenceApply, "pressed",
                    G_CALLBACK (onPreferenceApply),
                    NULL);
  g_signal_connect ((gpointer) PreferenceCancel, "pressed",
                    G_CALLBACK (onPreferenceCancel),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (pda, pda, "pda");
  GLADE_HOOKUP_OBJECT (pda, vbox, "vbox");
  GLADE_HOOKUP_OBJECT (pda, toolbar, "toolbar");
  GLADE_HOOKUP_OBJECT (pda, tbRewind, "tbRewind");
  GLADE_HOOKUP_OBJECT (pda, tbPause, "tbPause");
  GLADE_HOOKUP_OBJECT (pda, tbPlay, "tbPlay");
  GLADE_HOOKUP_OBJECT (pda, tbStop, "tbStop");
  GLADE_HOOKUP_OBJECT (pda, tbForward, "tbForward");
  GLADE_HOOKUP_OBJECT (pda, tbAbout, "tbAbout");
  GLADE_HOOKUP_OBJECT (pda, timeLabel, "timeLabel");
  GLADE_HOOKUP_OBJECT (pda, timeSlider, "timeSlider");
  GLADE_HOOKUP_OBJECT (pda, notebook, "notebook");
  GLADE_HOOKUP_OBJECT (pda, scrolledwindow6, "scrolledwindow6");
  GLADE_HOOKUP_OBJECT (pda, viewport3, "viewport3");
  GLADE_HOOKUP_OBJECT (pda, vbox8, "vbox8");
  GLADE_HOOKUP_OBJECT (pda, scrolledwindow7, "scrolledwindow7");
  GLADE_HOOKUP_OBJECT (pda, tvFileList, "tvFileList");
  GLADE_HOOKUP_OBJECT (pda, hbox, "hbox");
  GLADE_HOOKUP_OBJECT (pda, AddFileToPlaylist, "AddFileToPlaylist");
  GLADE_HOOKUP_OBJECT (pda, File, "File");
  GLADE_HOOKUP_OBJECT (pda, vbox5, "vbox5");
  GLADE_HOOKUP_OBJECT (pda, hbox12, "hbox12");
  GLADE_HOOKUP_OBJECT (pda, labelNetworkMRL, "labelNetworkMRL");
  GLADE_HOOKUP_OBJECT (pda, comboMRL, "comboMRL");
  GLADE_HOOKUP_OBJECT (pda, entryMRL, "entryMRL");
  GLADE_HOOKUP_OBJECT (pda, hseparator15, "hseparator15");
  GLADE_HOOKUP_OBJECT (pda, table2, "table2");
  GLADE_HOOKUP_OBJECT (pda, labelNetworkPort, "labelNetworkPort");
  GLADE_HOOKUP_OBJECT (pda, labelNetworkAddress, "labelNetworkAddress");
  GLADE_HOOKUP_OBJECT (pda, entryNetworkPort, "entryNetworkPort");
  GLADE_HOOKUP_OBJECT (pda, comboNetworkAddress, "comboNetworkAddress");
  GLADE_HOOKUP_OBJECT (pda, entryNetworkAddress, "entryNetworkAddress");
  GLADE_HOOKUP_OBJECT (pda, comboNetworkType, "comboNetworkType");
  GLADE_HOOKUP_OBJECT (pda, entryNetworkType, "entryNetworkType");
  GLADE_HOOKUP_OBJECT (pda, labelNetworkType, "labelNetworkType");
  GLADE_HOOKUP_OBJECT (pda, comboNetworkProtocolType, "comboNetworkProtocolType");
  GLADE_HOOKUP_OBJECT (pda, entryNetworkProtocolType, "entryNetworkProtocolType");
  GLADE_HOOKUP_OBJECT (pda, labelNetworkProtocol, "labelNetworkProtocol");
  GLADE_HOOKUP_OBJECT (pda, hbox13, "hbox13");
  GLADE_HOOKUP_OBJECT (pda, AddNetworkPlaylist, "AddNetworkPlaylist");
  GLADE_HOOKUP_OBJECT (pda, Network, "Network");
  GLADE_HOOKUP_OBJECT (pda, vbox7, "vbox7");
  GLADE_HOOKUP_OBJECT (pda, scrolledV4Lwindow, "scrolledV4Lwindow");
  GLADE_HOOKUP_OBJECT (pda, viewportV4L, "viewportV4L");
  GLADE_HOOKUP_OBJECT (pda, tableV4L, "tableV4L");
  GLADE_HOOKUP_OBJECT (pda, labelV4lVideDevice, "labelV4lVideDevice");
  GLADE_HOOKUP_OBJECT (pda, labelV4LAudioDevice, "labelV4LAudioDevice");
  GLADE_HOOKUP_OBJECT (pda, labelV4LChannel, "labelV4LChannel");
  GLADE_HOOKUP_OBJECT (pda, labelV4LNorm, "labelV4LNorm");
  GLADE_HOOKUP_OBJECT (pda, labelV4LSize, "labelV4LSize");
  GLADE_HOOKUP_OBJECT (pda, labelV4LFrequency, "labelV4LFrequency");
  GLADE_HOOKUP_OBJECT (pda, labelV4LSampleRate, "labelV4LSampleRate");
  GLADE_HOOKUP_OBJECT (pda, labelV4LQuality, "labelV4LQuality");
  GLADE_HOOKUP_OBJECT (pda, labelV4LTuner, "labelV4LTuner");
  GLADE_HOOKUP_OBJECT (pda, labelV4LSoundDirection, "labelV4LSoundDirection");
  GLADE_HOOKUP_OBJECT (pda, labelV4LMJPEG, "labelV4LMJPEG");
  GLADE_HOOKUP_OBJECT (pda, labelV4LDecimation, "labelV4LDecimation");
  GLADE_HOOKUP_OBJECT (pda, comboV4lVideoDevice, "comboV4lVideoDevice");
  GLADE_HOOKUP_OBJECT (pda, entryV4LVideoDevice, "entryV4LVideoDevice");
  GLADE_HOOKUP_OBJECT (pda, comboV4lAudioDevice, "comboV4lAudioDevice");
  GLADE_HOOKUP_OBJECT (pda, entryV4LAudioDevice, "entryV4LAudioDevice");
  GLADE_HOOKUP_OBJECT (pda, entryV4LChannel, "entryV4LChannel");
  GLADE_HOOKUP_OBJECT (pda, comboV4LNorm, "comboV4LNorm");
  GLADE_HOOKUP_OBJECT (pda, entryV4LNorm, "entryV4LNorm");
  GLADE_HOOKUP_OBJECT (pda, comboV4LSize, "comboV4LSize");
  GLADE_HOOKUP_OBJECT (pda, entryV4LSize, "entryV4LSize");
  GLADE_HOOKUP_OBJECT (pda, entryV4LFrequency, "entryV4LFrequency");
  GLADE_HOOKUP_OBJECT (pda, entryV4LSampleRate, "entryV4LSampleRate");
  GLADE_HOOKUP_OBJECT (pda, entryV4LQuality, "entryV4LQuality");
  GLADE_HOOKUP_OBJECT (pda, comboV4LSoundDirection, "comboV4LSoundDirection");
  GLADE_HOOKUP_OBJECT (pda, entryV4LSoundDirection, "entryV4LSoundDirection");
  GLADE_HOOKUP_OBJECT (pda, entryV4LTuner, "entryV4LTuner");
  GLADE_HOOKUP_OBJECT (pda, checkV4LMJPEG, "checkV4LMJPEG");
  GLADE_HOOKUP_OBJECT (pda, entryV4LDecimation, "entryV4LDecimation");
  GLADE_HOOKUP_OBJECT (pda, hbox16, "hbox16");
  GLADE_HOOKUP_OBJECT (pda, AddCameraToPlaylist, "AddCameraToPlaylist");
  GLADE_HOOKUP_OBJECT (pda, Camera, "Camera");
  GLADE_HOOKUP_OBJECT (pda, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (pda, scrolledwindowTranscode, "scrolledwindowTranscode");
  GLADE_HOOKUP_OBJECT (pda, viewport5, "viewport5");
  GLADE_HOOKUP_OBJECT (pda, tableTranscode, "tableTranscode");
  GLADE_HOOKUP_OBJECT (pda, labelVideoCodec, "labelVideoCodec");
  GLADE_HOOKUP_OBJECT (pda, comboVideoCodec, "comboVideoCodec");
  GLADE_HOOKUP_OBJECT (pda, entryVideoCodec, "entryVideoCodec");
  GLADE_HOOKUP_OBJECT (pda, labelVideoBitrate, "labelVideoBitrate");
  GLADE_HOOKUP_OBJECT (pda, labelVideoBitrateTolerance, "labelVideoBitrateTolerance");
  GLADE_HOOKUP_OBJECT (pda, labelVideoKeyInterval, "labelVideoKeyInterval");
  GLADE_HOOKUP_OBJECT (pda, labelAudioCodec, "labelAudioCodec");
  GLADE_HOOKUP_OBJECT (pda, labelVideoDeinterlace, "labelVideoDeinterlace");
  GLADE_HOOKUP_OBJECT (pda, labelStdAccess, "labelStdAccess");
  GLADE_HOOKUP_OBJECT (pda, labelStdMuxer, "labelStdMuxer");
  GLADE_HOOKUP_OBJECT (pda, labelStdUrl, "labelStdUrl");
  GLADE_HOOKUP_OBJECT (pda, labelStdTimeToLive, "labelStdTimeToLive");
  GLADE_HOOKUP_OBJECT (pda, entryStdTTL, "entryStdTTL");
  GLADE_HOOKUP_OBJECT (pda, comboStdURL, "comboStdURL");
  GLADE_HOOKUP_OBJECT (pda, entryStdURL, "entryStdURL");
  GLADE_HOOKUP_OBJECT (pda, comboStdMuxer, "comboStdMuxer");
  GLADE_HOOKUP_OBJECT (pda, entryStdMuxer, "entryStdMuxer");
  GLADE_HOOKUP_OBJECT (pda, entryAudioBitrate, "entryAudioBitrate");
  GLADE_HOOKUP_OBJECT (pda, comboAudioCodec, "comboAudioCodec");
  GLADE_HOOKUP_OBJECT (pda, entryAudioCodec, "entryAudioCodec");
  GLADE_HOOKUP_OBJECT (pda, checkVideoDeinterlace, "checkVideoDeinterlace");
  GLADE_HOOKUP_OBJECT (pda, entryVideoKeyFrameInterval, "entryVideoKeyFrameInterval");
  GLADE_HOOKUP_OBJECT (pda, entryVideoBitrateTolerance, "entryVideoBitrateTolerance");
  GLADE_HOOKUP_OBJECT (pda, entryVideoBitrate, "entryVideoBitrate");
  GLADE_HOOKUP_OBJECT (pda, labelAudioBitrate, "labelAudioBitrate");
  GLADE_HOOKUP_OBJECT (pda, comboStdAccess, "comboStdAccess");
  GLADE_HOOKUP_OBJECT (pda, entryStdAccess, "entryStdAccess");
  GLADE_HOOKUP_OBJECT (pda, labelSAP, "labelSAP");
  GLADE_HOOKUP_OBJECT (pda, checkSAP, "checkSAP");
  GLADE_HOOKUP_OBJECT (pda, checkSLP, "checkSLP");
  GLADE_HOOKUP_OBJECT (pda, labelSLP_, "labelSLP_");
  GLADE_HOOKUP_OBJECT (pda, labelAnounceChannel, "labelAnounceChannel");
  GLADE_HOOKUP_OBJECT (pda, comboAnnounceChannel, "comboAnnounceChannel");
  GLADE_HOOKUP_OBJECT (pda, entryAnnounceChannel, "entryAnnounceChannel");
  GLADE_HOOKUP_OBJECT (pda, hbox14, "hbox14");
  GLADE_HOOKUP_OBJECT (pda, AddTranscodeToPlaylist, "AddTranscodeToPlaylist");
  GLADE_HOOKUP_OBJECT (pda, Transcode, "Transcode");
  GLADE_HOOKUP_OBJECT (pda, vbox4, "vbox4");
  GLADE_HOOKUP_OBJECT (pda, scrolledwindow5, "scrolledwindow5");
  GLADE_HOOKUP_OBJECT (pda, tvPlaylist, "tvPlaylist");
  GLADE_HOOKUP_OBJECT (pda, hbox11, "hbox11");
  GLADE_HOOKUP_OBJECT (pda, UpdatePlaylist, "UpdatePlaylist");
  GLADE_HOOKUP_OBJECT (pda, DeletePlaylist, "DeletePlaylist");
  GLADE_HOOKUP_OBJECT (pda, ClearPlaylist, "ClearPlaylist");
  GLADE_HOOKUP_OBJECT (pda, playlist, "playlist");
  GLADE_HOOKUP_OBJECT (pda, vbox2, "vbox2");
  GLADE_HOOKUP_OBJECT (pda, scrolledwindowPreference, "scrolledwindowPreference");
  GLADE_HOOKUP_OBJECT (pda, tvPreferences, "tvPreferences");
  GLADE_HOOKUP_OBJECT (pda, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (pda, PreferenceSave, "PreferenceSave");
  GLADE_HOOKUP_OBJECT (pda, PreferenceApply, "PreferenceApply");
  GLADE_HOOKUP_OBJECT (pda, PreferenceCancel, "PreferenceCancel");
  GLADE_HOOKUP_OBJECT (pda, preferences, "preferences");
  GLADE_HOOKUP_OBJECT (pda, scrolledwindow3, "scrolledwindow3");
  GLADE_HOOKUP_OBJECT (pda, viewport1, "viewport1");
  GLADE_HOOKUP_OBJECT (pda, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (pda, aboutImage, "aboutImage");
  GLADE_HOOKUP_OBJECT (pda, labelDescription, "labelDescription");
  GLADE_HOOKUP_OBJECT (pda, labelAuthors, "labelAuthors");
  GLADE_HOOKUP_OBJECT (pda, labelCopyright, "labelCopyright");
  GLADE_HOOKUP_OBJECT (pda, labelProgramName, "labelProgramName");
  GLADE_HOOKUP_OBJECT (pda, about, "about");
  GLADE_HOOKUP_OBJECT_NO_REF (pda, tooltips, "tooltips");

  return pda;
}

