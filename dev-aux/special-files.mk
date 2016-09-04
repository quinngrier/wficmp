all:

## begin_variables

GATBPS = 'gatbps'

GATBPSFLAGS =

GENERATE = $(GATBPS) $(GATBPSFLAGS) '--'

## end_variables

## begin_rules

.PHONY: all

all:
	$(GENERATE) 'CC0-1.0.txt'
	$(GENERATE) 'build-aux/CC0-1.0-AC-COPYRIGHT.ac'
	$(GENERATE) 'build-aux/CC0-1.0-AM-COPYRIGHT.am'
	$(GENERATE) 'build-aux/DATE.sh'
	$(GENERATE) 'build-aux/GATBPS_CONFIG_FILE_RULES.am'
	$(GENERATE) 'build-aux/VERSION.sh'
	$(GENERATE) 'build-aux/texinfo.css'
	$(GENERATE) 'dev-aux/CC0-1.0-commit.txt'
	$(GENERATE) 'dev-aux/CC0-1.0-file.txt'
	$(GENERATE) 'dev-aux/Makefile.am.vim'
	$(GENERATE) 'dev-aux/configure.ac.vim'
	$(GENERATE) 'm4/GATBPS_CONFIG_FILE.m4'
	$(GENERATE) 'm4/GATBPS_CONFIG_FILE_SUBST.m4'
	$(GENERATE) 'm4/GATBPS_DEFINE_DATE.m4'

## end_rules

#
# The authors of this file have waived all copyright and
# related or neighboring rights to the extent permitted by
# law as described by the CC0 1.0 Universal Public Domain
# Dedication. You should have received a copy of the full
# dedication along with this file, typically as a file
# named <CC0-1.0.txt>. If not, it may be available at
# <https://creativecommons.org/publicdomain/zero/1.0/>.
#
