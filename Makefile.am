## begin_variables

AM_MAKEINFOFLAGS =
AM_MAKEINFOFLAGS += '-I' 'doc/texi' '-I' $(srcdir)'/doc/texi'

AM_MAKEINFOHTMLFLAGS =
AM_MAKEINFOHTMLFLAGS += $(AM_MAKEINFOFLAGS)
AM_MAKEINFOHTMLFLAGS += '--css-include=build-aux/texinfo.css'
AM_MAKEINFOHTMLFLAGS += '--no-headers'
AM_MAKEINFOHTMLFLAGS += '--no-split'

AM_TEXI2DVIFLAGS =
AM_TEXI2DVIFLAGS += $(AM_MAKEINFOFLAGS)

EXTRA_DIST =
EXTRA_DIST += CC0-1.0.txt
EXTRA_DIST += DATE
EXTRA_DIST += VERSION
EXTRA_DIST += build-aux/DATE.sh
EXTRA_DIST += build-aux/VERSION.sh

SUFFIXES =

TEXI2DVI =
TEXI2DVI += 'texi2dvi' $(AM_TEXI2DVIFLAGS) $(TEXI2DVIFLAGS)

doxygen_dep =
include $(srcdir)/build-src/doxygen_dep.am

doxygen_dfv =
include $(srcdir)/build-src/doxygen_dfv.am

doxygen_dst =
doxygen_dst += doc/wficmp-doxygen

doxygen_src =
doxygen_src += build-src/Doxyfile-wficmp

include_HEADERS =
include $(srcdir)/build-src/include_HEADERS.am

## end_variables

## begin_includes

include $(srcdir)/build-aux/GATBPS_CONFIG_FILE_RULES.am
include $(srcdir)/build-aux/GATBPS_RECIPE_MARKER.am
include $(srcdir)/build-aux/GATBPS_VPATH_SEARCH.am
include $(srcdir)/build-aux/GATBPS_V_PAD.am
include $(srcdir)/build-aux/doxygen.am

## end_includes

include $(srcdir)/build-aux/CC0-1.0-AM-COPYRIGHT.am

##
## The authors of this file have waived all copyright and
## related or neighboring rights to the extent permitted by
## law as described by the CC0 1.0 Universal Public Domain
## Dedication. You should have received a copy of the full
## dedication along with this file, typically as a file
## named <CC0-1.0.txt>. If not, it may be available at
## <https://creativecommons.org/publicdomain/zero/1.0/>.
##
