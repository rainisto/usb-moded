/*
  Copyright (C) 2010 Nokia Corporation. All rights reserved.

  Author: Philippe De Swert <philippe.de-swert@nokia.com>

  This program is free software; you can redistribute it and/or
  modify it under the terms of the Lesser GNU General Public License 
  version 2 as published by the Free Software Foundation. 

  This program is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  General Public License for more details.
 
  You should have received a copy of the Lesser GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
  02110-1301 USA
*/

/* possible values for the mode, however only the first three can be set through the method call
   the others being internal only.
 */
#define MODE_MASS_STORAGE       "mass_storage"
#define MODE_OVI_SUITE          "ovi_suite"
#define MODE_CHARGING           "charging_only"
#define MODE_UNDEFINED		"undefined"
#define MODE_ASK		"ask"
#define MODE_DEVELOPER		"developer_mode"
#define MODE_MTP		"mtp_mode"
#define MODE_CHARGER		"dedicated_charger"

/* due to the use of the modelist these functions are defined in usb_moded.c */
gchar *get_mode_list(void);
int valid_mode(const char *mode);
