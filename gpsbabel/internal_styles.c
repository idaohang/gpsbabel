static char csv[] = 
"# gpsbabel XCSV style file\n"
"#\n"
"# Format: Delorme SA 9.0 CSV\n"
"# Author: Alex Mottram\n"
"#   Date: 12/09/2002\n"
"#\n"
"# \n"
"DESCRIPTION	Comma separated values\n"
"SHORTLEN	8\n"
"#\n"
"#\n"
"# FILE LAYOUT DEFINITIIONS:\n"
"#\n"
"FIELD_DELIMITER		COMMASPACE\n"
"RECORD_DELIMITER	NEWLINE\n"
"BADCHARS		COMMA\n"

"#\n"
"# INDIVIDUAL DATA FIELDS, IN ORDER OF APPEARANCE:\n"
"#\n"
"IFIELD	LAT_DECIMAL, \"\", \"%08.5f\"\n"
"IFIELD	LON_DECIMAL, \"\", \"%08.5f\"\n"
"IFIELD	DESCRIPTION, \"\", \"%s\"\n"
;
static char custom[] = 
"# gpsbabel XCSV style file\n"
"#\n"
"# Format: Custom \"Everything\" Style\n"
"# Author: Alex Mottram\n"
"#   Date: 11/24/2002\n"
"#\n"
"#\n"

"DESCRIPTION		Custom \"Everything\" Style\n"

"# FILE LAYOUT DEFINITIIONS:\n"
"#\n"
"FIELD_DELIMITER		COMMA\n"
"RECORD_DELIMITER	NEWLINE\n"
"BADCHARS		COMMA\n"

"#\n"
"# HEADER STUFF:\n"
"#\n"
"PROLOGUE	Prologue Line 1\n"
"PROLOGUE	Prologue Line 2\n"

"#\n"
"# INDIVIDUAL DATA FIELDS:\n"
"#\n"
"IFIELD	CONSTANT, \"\", \"CONSTANT\"\n"
"IFIELD	INDEX, \"\", \"%d\"\n"
"IFIELD	LAT_DECIMAL, \"\", \"%f\"\n"
"IFIELD	LAT_DIR, \"\", \"%c\"\n"
"IFIELD	LON_DECIMAL, \"\", \"%f\"\n"
"IFIELD	LON_DIR, \"\", \"%c\"\n"
"IFIELD	ICON_DESCR, \"\", \"%s\"\n"
"IFIELD	SHORTNAME, \"\", \"%s\"\n"
"IFIELD	DESCRIPTION, \"\", \"%s\"\n"
"IFIELD	NOTES, \"\", \"%s\"\n"
"IFIELD	URL, \"\", \"%s\" 		\n"
"IFIELD	URL_LINK_TEXT, \"\", \"%s\"\n"
"IFIELD	ALT_METERS, \"\", \"%fM\"\n"
"IFIELD	ALT_FEET, \"\", \"%fF\"\n"
"IFIELD	LAT_DECIMALDIR, \"\", \"%f/%c\"\n"
"IFIELD	LON_DECIMALDIR, \"\", \"%f/%c\"\n"
"IFIELD	LAT_DIRDECIMAL, \"\", \"%c/%f\"\n"
"IFIELD	LON_DIRDECIMAL, \"\", \"%c/%f\"\n"
"IFIELD	LAT_INT32DEG, \"\", \"%ld\"\n"
"IFIELD	LON_INT32DEG, \"\", \"%ld\"\n"
"IFIELD	TIMET_TIME, \"\", \"%ld\"\n"
"IFIELD	EXCEL_TIME, \"\", \"%f\"\n"

"# EPILOGUE: \n"
"EPILOGUE	Epilogue Line 1\n"
"EPILOGUE	Epilogue Line 2\n"
;
static char dna[] = 
"# gpsbabel XCSV style file\n"
"#\n"
"# Format: DNA Marker Format\n"
"# Author: Alex Mottram\n"
"#   Date: 12/09/2002\n"
"#\n"
"# \n"
"# As defined in dna.c\n"
"#\n"
"#\n"

"DESCRIPTION 		Navitrak DNA marker format\n"
"EXTENSION		dna\n"

"# FILE LAYOUT DEFINITIIONS:\n"
"#\n"
"FIELD_DELIMITER		COMMA\n"
"RECORD_DELIMITER	NEWLINE\n"
"BADCHARS		COMMA\n"

"#\n"
"# INDIVIDUAL DATA FIELDS, IN ORDER OF APPEARANCE:\n"
"#\n"
"IFIELD	INDEX, \"\", \"%d\"\n"
"IFIELD	LAT_DECIMAL, \"\", \"%08.5f\"\n"
"IFIELD	LON_DECIMAL, \"\", \"%08.5f\"\n"
"IFIELD	DESCRIPTION, \"\", \"%s\"\n"

;
static char gpsdrive[] = 
"# gpsbabel XCSV style file\n"
"#\n"
"# Format: GPSDrive\n"
"# Author: Alex Mottram\n"
"#   Date: 12/11/2002\n"
"#\n"
"# \n"
"#\n"

"DESCRIPTION		GpsDrive Format\n"

"# FILE LAYOUT DEFINITIIONS:\n"
"#\n"
"FIELD_DELIMITER		SPACE\n"
"RECORD_DELIMITER	NEWLINE\n"
"BADCHARS		,\"\n"

"#\n"
"# INDIVIDUAL DATA FIELDS, IN ORDER OF APPEARANCE:\n"

"IFIELD	SHORTNAME, \"\", \"%s\"\n"
"IFIELD	LAT_DECIMAL, \"\", \"%08.5f\"\n"
"IFIELD	LON_DECIMAL, \"\", \"%08.5f\"\n"

"OFIELD	ANYNAME, \"\", \"%s\"\n"
"OFIELD	LAT_DECIMAL, \"\", \"%08.5f\"\n"
"OFIELD	LON_DECIMAL, \"\", \"%08.5f\"\n"
;
static char gpsman[] = 
"# gpsbabel XCSV style file\n"
"#\n"
"# Format: GPSMAN Format\n"
"# Author: Alex Mottram\n"
"#   Date: 12/09/2002\n"
"#\n"
"# \n"
"# As defined in gpsman.c\n"
"#\n"
"#\n"

"DESCRIPTION		GPSman\n"
"SHORTLEN		8\n"
"SHORTWHITE		0\n"

"# FILE LAYOUT DEFINITIIONS:\n"
"#\n"
"FIELD_DELIMITER		TAB\n"
"RECORD_DELIMITER	NEWLINE\n"
"BADCHARS		TAB\n"

"PROLOGUE	!Format: DDD 1 WGS 84\n"
"PROLOGUE	!W:\n"

"#\n"
"# INDIVIDUAL DATA FIELDS, IN ORDER OF APPEARANCE:\n"
"#\n"
"IFIELD	SHORTNAME, \"\", \"%-8.8s\"\n"
"IFIELD	DESCRIPTION, \"\", \"%s\"\n"
"IFIELD	LAT_DIRDECIMAL, \"\", \"%c%f\"\n"
"IFIELD	LON_DIRDECIMAL, \"\", \"%c%f\"\n"
"IFIELD	IGNORE, \"\", \"%s\"\n"

"# gpsman.c likes mkshort len = 8, whitespace = 0.\n"
;
static char mxf[] = 
"# gpsbabel XCSV style file\n"
"#\n"
"# Format: Ozi Explorer\n"
"# Author: Alex Mottram\n"
"#   Date: 12/09/2002\n"
"#\n"
"# \n"
"# As used in mxf.c\n"
"#\n"
"#\n"

"DESCRIPTION		MapTech Exchange Format\n"
"EXTENSION		mxf\n"

"#\n"
"# FILE LAYOUT DEFINITIIONS:\n"
"#\n"
"FIELD_DELIMITER		COMMASPACE\n"
"RECORD_DELIMITER	NEWLINE\n"
"BADCHARS		COMMA\n"

"#\n"
"# INDIVIDUAL DATA FIELDS, IN ORDER OF APPEARANCE:\n"
"#\n"
"IFIELD	LAT_DECIMAL, \"\", \"%08.5f\"\n"
"IFIELD	LON_DECIMAL, \"\", \"%08.5f\"\n"
"IFIELD	DESCRIPTION, \"\", \"%s\"\n"
"IFIELD	SHORTNAME, \"\", \"%s\"\n"
"IFIELD	IGNORE, \"\", \"%s\"\n"
"IFIELD	CONSTANT, \"ff0000\", \"%s\"	# COLOR\n"
"IFIELD	CONSTANT, \"47\", \"%s\"		# ICON\n"

"OFIELD	LAT_DECIMAL, \"\", \"%08.5f\"\n"
"OFIELD	LON_DECIMAL, \"\", \"%08.5f\"\n"
"OFIELD	DESCRIPTION, \"\", \"\"%s\"\"\n"
"OFIELD	SHORTNAME, \"\", \"%s\"\n"
"OFIELD	DESCRIPTION, \"\", \"%s\"\n"
"OFIELD	CONSTANT, \"ff0000\", \"%s\"	# COLOR\n"
"OFIELD	CONSTANT, \"47\", \"%s\"		# ICON\n"
;
static char nima[] = 
"# gpsbabel XCSV style file\n"
"#\n"
"# Format: NIMA/GNIS Geographic Names File\n"
"# Author: Alex Mottram\n"
"#   Date: 11/24/2002\n"
"#\n"

"DESCRIPTION	 NIMA/GNIS Geographic Names File\n"

"#\n"
"# FILE LAYOUT DEFINITIIONS:\n"
"#\n"
"FIELD_DELIMITER		TAB\n"
"RECORD_DELIMITER	NEWLINE\n"
"BADCHARS		TAB\n"
"PROLOGUE	RC	UFI	UNI	DD_LAT	DD_LONG	DMS_LAT	DMS_LONG	UTM	JOG	FC	DSG	PC	CC1	ADM1	ADM2	DIM	CC2	NT	LC	SHORT_FORM	GENERIC	SORT_NAME	FULL_NAME	FULL_NAME_ND	MODIFY_DATE\n"

"#\n"
"# INDIVIDUAL DATA FIELDS, IN ORDER OF APPEARANCE:\n"
"#\n"
"IFIELD	IGNORE, \"\", \"%s\"		# RC\n"
"IFIELD	IGNORE, \"\", \"%s\"		# UFI\n"
"IFIELD	IGNORE, \"\", \"%s\"		# UNI\n"
"IFIELD	LAT_DECIMAL, \"\", \"%f\"		# DD_LAT\n"
"IFIELD	LON_DECIMAL, \"\", \"%f\"		# DD_LON\n"
"IFIELD	IGNORE, \"\", \"%s\"		# DMS_LAT\n"
"IFIELD	IGNORE, \"\", \"%s\"		# DMS_LON\n"
"IFIELD	IGNORE, \"\", \"%s\"		# UTM\n"
"IFIELD	IGNORE, \"\", \"%s\"		# JOG\n"
"IFIELD	IGNORE, \"\", \"%s\"		# FC\n"
"IFIELD	IGNORE, \"\", \"%s\"		# DSG\n"
"IFIELD	IGNORE, \"\", \"%s\"		# PC\n"
"IFIELD	IGNORE, \"\", \"%s\"		# CC1\n"
"IFIELD	IGNORE, \"\", \"%s\"		# ADM1\n"
"IFIELD	IGNORE, \"\", \"%s\"		# ADM2\n"
"IFIELD	IGNORE, \"\", \"%s\"		# DIM\n"
"IFIELD	IGNORE, \"\", \"%s\"		# CC2\n"
"IFIELD	IGNORE, \"\", \"%s\"		# NT\n"
"IFIELD	IGNORE, \"\", \"%s\"		# LC\n"
"IFIELD	IGNORE, \"\", \"%s\"		# SHORT_FORM\n"
"IFIELD	IGNORE, \"\", \"%s\"		# GENERIC\n"
"IFIELD	SHORTNAME, \"\", \"%s\"		# SORT_NAME \n"
"IFIELD	IGNORE, \"\", \"%s\"		# FULL_NAME (unicoded!)\n"
"IFIELD	DESCRIPTION, \"\", \"%s\"		# FULL_NAME_ND\n"
"IFIELD	IGNORE, \"\", \"%s\"		# MODIFY_DATE\n"
;
static char ozi[] = 
"# gpsbabel XCSV style file\n"
"#\n"
"# Format: Ozi Explorer\n"
"# Author: Alex Mottram\n"
"#   Date: 12/09/2002\n"
"#\n"
"# \n"
"# As used in ozi.c\n"
"#\n"

"DESCRIPTION		OziExplorer Waypoint\n"
"EXTENSION		ozi\n"
"SHORTLEN		14\n"

"#\n"
"# FILE LAYOUT DEFINITIIONS:\n"
"#\n"
"FIELD_DELIMITER		COMMA\n"
"RECORD_DELIMITER	NEWLINE\n"
"BADCHARS		COMMA\n"

"PROLOGUE	OziExplorer Waypoint File Version 1.1\n"
"PROLOGUE	WGS 84\n"
"PROLOGUE	Reserved 2\n"
"PROLOGUE	Reserved 3\n"

"#\n"
"# INDIVIDUAL DATA FIELDS, IN ORDER OF APPEARANCE:\n"
"#\n"
"IFIELD	INDEX, \"1\", \"%4d\"\n"
"IFIELD	SHORTNAME, \"\", \"%-14.14s\"\n"
"IFIELD	LAT_DECIMAL, \"\", \"%11.6f\"\n"
"IFIELD	LON_DECIMAL, \"\", \"%11.6f\"\n"
"IFIELD	EXCEL_TIME, \"\", \"%011.5f\"\n"
"IFIELD	CONSTANT, \"0\", \"%3s\"  		# icon \n"
"IFIELD	CONSTANT, \"1\", \"%2s\"  		# 1 \n"
"IFIELD	CONSTANT, \"3\", \"%2s\"  		# display format opts \n"
"IFIELD	CONSTANT, \"0\", \"%10s\"  		# foreground color \n"
"IFIELD	CONSTANT, \"65535\", \"%10s\"  	# background color \n"
"IFIELD	DESCRIPTION, \"\", \"%-40.40s\"\n"
"IFIELD	CONSTANT, \"0\", \"%2s\"  		# pointer direction \n"
"IFIELD	CONSTANT, \"0\", \"%2s\"  		# garmin display flags \n"
"IFIELD	CONSTANT, \"0\", \"%5s\"  		# proximity distance \n"
"IFIELD	ALT_FEET, \"\", \"%7.0f\"\n"
"IFIELD	CONSTANT, \"6\", \"%2s\"  		# waypt name text size \n"
"IFIELD	CONSTANT, \"0\", \"%2s\"  		# bold checkbox \n"
"IFIELD	CONSTANT, \"17\", \"%2s\"  		# symbol size \n"
;
static char s_and_t[] = 
"# gpsbabel XCSV style file\n"
"#\n"
"# Format: MS S&T 2002/2003\n"
"# Author: Alex Mottram\n"
"#   Date: 12/09/2002\n"
"#\n"
"# \n"
"# As requested by Noel Shrum on the gpsbabel-code mailing list.\n"
"# Name,Latitude,Longitude,Name 2,URL,Type\n"
"# GCCBF,44.479133,-85.56515,High Rollaway by rjlint,http://www.geocaching.com/seek/cache_details.aspx?ID=3263,Traditional Cache\n"
"# GC110D,44.6522,-85.492483,Brown Bridge Pond Peek-a-Boo Cache by Big Bird,http://www.geocaching.com/seek/cache_details.aspx?ID=4365,Traditional Cache\n"
"# GC171C,44.70605,-85.62265,The Michigan Frog by RealDcoy & LRB,http://www.geocaching.com/seek/cache_details.aspx?ID=5916,Traditional Cache\n"
"#\n"

"DESCRIPTION 		Microsoft Streets and Trips 2002/2003\n"

"#\n"
"# FILE LAYOUT DEFINITIIONS:\n"
"#\n"
"FIELD_DELIMITER		COMMA\n"
"RECORD_DELIMITER	NEWLINE\n"
"BADCHARS		COMMA\n"

"PROLOGUE	Name,Latitude,Longitude,Name 2,URL,Type\n"

"#\n"
"# INDIVIDUAL DATA FIELDS, IN ORDER OF APPEARANCE:\n"
"# NOTE: MS S&T ONLY IMPORTS DATA, IT DOESN'T EXPORT THIS ANYWHERE SO WE CAN\n"
"#       HAVE OUR WAY WITH THE FORMATTING. \n"
"#\n"
"IFIELD	SHORTNAME, \"\", \"%s\"		# Name\n"
"IFIELD	LAT_DECIMAL, \"\", \"%f\"		# Latitude\n"
"IFIELD	LON_DECIMAL, \"\", \"%f\"		# Longitude\n"
"IFIELD	DESCRIPTION, \"\", \"%s\"		# Name 2 (Big Description)\n"
"IFIELD	URL, \"\", \"%s\"			# URL\n"
"IFIELD	IGNORE, \"\", \"\"			# Holder for Geocache Type\n"
;
static char xmap[] = 
"# gpsbabel XCSV style file\n"
"#\n"
"# Format: Delorme Xmap Conduit\n"
"# Author: Alex Mottram\n"
"#   Date: 12/09/2002\n"
"#\n"
"# \n"
"# As defined in csv.c/xmap\n"
"#\n"

"DESCRIPTION		Delorme XMap HH Native .WPT\n"
"EXTENSION		wpt\n"

"#\n"
"# FILE LAYOUT DEFINITIIONS:\n"
"#\n"
"FIELD_DELIMITER		COMMASPACE\n"
"RECORD_DELIMITER	NEWLINE\n"
"BADCHARS		COMMA\n"

"PROLOGUE	BEGIN SYMBOL\n"
"EPILOGUE	END\n"
"#\n"
"# INDIVIDUAL DATA FIELDS, IN ORDER OF APPEARANCE:\n"
"#\n"
"IFIELD	LAT_DECIMAL, \"\", \"%08.5f\"\n"
"IFIELD	LON_DECIMAL, \"\", \"%08.5f\"\n"
"IFIELD	DESCRIPTION, \"\", \"%s\"\n"
;
static char xmapwpt[] = 
"# gpsbabel XCSV style file\n"
"#\n"
"# Format: Delorme Xmap HH Street Atlas USA .WPT (PocketPC)\n"
"# Author: Alex Mottram\n"
"#   Date: 12/09/2002\n"
"#\n"
"# \n"
"DESCRIPTION 		Delorme XMat HH Street Atlas USA .WPT (PPC)\n"
"SHORTLEN		32\n"
"SHORTWHITE		0\n"

"#\n"
"#\n"
"# FILE LAYOUT DEFINITIIONS:\n"
"#\n"
"FIELD_DELIMITER		COLON\n"
"RECORD_DELIMITER	NEWLINE\n"
"BADCHARS		COLON\n"

"#\n"
"# INDIVIDUAL DATA FIELDS, IN ORDER OF APPEARANCE:\n"
"#\n"
"IFIELD	CONSTANT, \"1296126539\", \"%s\"\n"
"IFIELD	CONSTANT, \"1481466224\", \"%s\"\n"
"IFIELD	LAT_INT32DEG, \"\", \"%d\"\n"
"IFIELD	LON_INT32DEG, \"\", \"%d\"\n"
"IFIELD	CONSTANT, \"3137157\", \"%s\"\n"
"IFIELD	SHORTNAME, \"\", \"%-.31s\"\n"
"IFIELD	IGNORE, \"\", \"%-.31s\"\n"
"IFIELD	DESCRIPTION, \"\", \"%-.78s\"\n"
;
#include "defs.h"
style_vecs_t style_list[] = {{ "xmapwpt", xmapwpt } , { "xmap", xmap } , { "s_and_t", s_and_t } , { "ozi", ozi } , { "nima", nima } , { "mxf", mxf } , { "gpsman", gpsman } , { "gpsdrive", gpsdrive } , { "dna", dna } , { "custom", custom } , { "csv", csv } ,  {0,0}};
