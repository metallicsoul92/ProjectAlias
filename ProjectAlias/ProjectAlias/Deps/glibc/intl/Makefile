# Copyright (C) 1995-2015 Free Software Foundation, Inc.
# This file is part of the GNU C Library.

# The GNU C Library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.

# The GNU C Library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.

# You should have received a copy of the GNU Lesser General Public
# License along with the GNU C Library; if not, see
# <http://www.gnu.org/licenses/>.

# Makefile for intl subdirectory: message handling code from GNU gettext.

subdir = intl

include ../Makeconfig

headers = libintl.h
routines = bindtextdom dcgettext dgettext gettext	\
	   dcigettext dcngettext dngettext ngettext \
	   finddomain loadmsgcat localealias textdomain
aux =	   l10nflist explodename plural plural-exp hash-string

multithread-test-srcs := tst-gettext4 tst-gettext5 tst-gettext6
test-srcs := tst-gettext tst-translit tst-gettext2 tst-codeset tst-gettext3
ifeq ($(have-thread-library),yes)
test-srcs += $(multithread-test-srcs)
endif
tests = tst-ngettext

before-compile += $(objpfx)msgs.h

install-others = $(inst_msgcatdir)/locale.alias

generated += msgs.h mtrace-tst-gettext.out tst-gettext.mtrace
generated-dirs += domaindir localedir

ifneq (no,$(BISON))
plural.c: plural.y
	$(BISON) $(BISONFLAGS) $@ $^
endif
$(objpfx)plural.o: plural.c

ifeq ($(run-built-tests),yes)
ifeq (yes,$(build-shared))
ifneq ($(strip $(MSGFMT)),:)
tests-special += $(objpfx)tst-translit.out $(objpfx)tst-gettext.out \
		 $(objpfx)tst-gettext2.out $(objpfx)tst-codeset.out \
		 $(objpfx)tst-gettext3.out
ifeq ($(have-thread-library),yes)
tests-special += $(objpfx)tst-gettext4.out $(objpfx)tst-gettext5.out \
		 $(objpfx)tst-gettext6.out
endif
ifneq (no,$(PERL))
tests-special += $(objpfx)mtrace-tst-gettext.out
endif
endif
endif
endif

include ../Rules

ifeq ($(run-built-tests),yes)
ifeq (yes,$(build-shared))
# Multiple tests use this data.  Create it once to avoid racing and
# spurious test failures.
codeset_mo = $(objpfx)domaindir/de_DE/LC_MESSAGES/codeset.mo

$(codeset_mo): tstcodeset.po
	$(make-target-directory)
	msgfmt -o $@T $<
	mv -f $@T $@

$(objpfx)mtrace-tst-gettext.out: $(objpfx)tst-gettext.out
	$(common-objpfx)malloc/mtrace $(objpfx)tst-gettext.mtrace > $@; \
	$(evaluate-test)
$(objpfx)tst-gettext.out: tst-gettext.sh $(objpfx)tst-gettext
	$(SHELL) $< $(common-objpfx) '$(test-program-prefix-before-env)' \
	  '$(run-program-env)' '$(test-program-prefix-after-env)' \
	  $(common-objpfx)intl/ $(objpfx)tst-gettext.mtrace; \
	$(evaluate-test)
$(objpfx)tst-translit.out: tst-translit.sh $(objpfx)tst-translit
	$(SHELL) $< $(common-objpfx) '$(test-program-prefix)' \
	  $(common-objpfx)intl/; \
	$(evaluate-test)
$(objpfx)tst-gettext2.out: tst-gettext2.sh $(objpfx)tst-gettext2
	$(SHELL) $< $(common-objpfx) '$(test-program-prefix-before-env)' \
	  '$(run-program-env)' '$(test-program-prefix-after-env)' \
	  $(common-objpfx)intl/; \
	$(evaluate-test)
$(objpfx)tst-gettext4.out: tst-gettext4.sh $(objpfx)tst-gettext4
	$(SHELL) $< $(common-objpfx) '$(test-program-prefix)' $(common-objpfx)intl/; \
	$(evaluate-test)
$(objpfx)tst-gettext6.out: tst-gettext6.sh $(objpfx)tst-gettext6
	$(SHELL) $< $(common-objpfx) '$(test-program-prefix)' $(common-objpfx)intl/; \
	$(evaluate-test)

$(objpfx)tst-codeset.out: $(codeset_mo)
$(objpfx)tst-gettext3.out: $(codeset_mo)
$(objpfx)tst-gettext5.out: $(codeset_mo)
endif
endif

$(objpfx)msgs.h: po2test.awk ../po/de.po
	$(make-target-directory)
	LC_ALL=C $(AWK) -f $^ > $@

CFLAGS-tst-gettext.c = -DTESTSTRS_H=\"$(objpfx)msgs.h\"
CFLAGS-tst-translit.c = -DOBJPFX=\"$(objpfx)\"
CFLAGS-tst-gettext2.c = -DOBJPFX=\"$(objpfx)\"
CFLAGS-tst-codeset.c = -DOBJPFX=\"$(objpfx)\"
CFLAGS-tst-gettext3.c = -DOBJPFX=\"$(objpfx)\"
CFLAGS-tst-gettext4.c = -DOBJPFX=\"$(objpfx)\"
CFLAGS-tst-gettext5.c = -DOBJPFX=\"$(objpfx)\"
CFLAGS-tst-gettext6.c = -DOBJPFX=\"$(objpfx)\"

ifeq ($(have-thread-library),yes)
ifeq (yes,$(build-shared))
$(addprefix $(objpfx),$(multithread-test-srcs)): $(shared-thread-library)
else
$(addprefix $(objpfx),$(multithread-test-srcs)): $(static-thread-library)
endif
endif

$(objpfx)tst-translit.out: $(objpfx)tst-gettext.out
$(objpfx)tst-gettext2.out: $(objpfx)tst-gettext.out
$(objpfx)tst-codeset.out: $(objpfx)tst-gettext.out
$(objpfx)tst-gettext3.out: $(objpfx)tst-gettext.out
$(objpfx)tst-gettext4.out: $(objpfx)tst-gettext.out
$(objpfx)tst-gettext5.out: $(objpfx)tst-gettext.out
$(objpfx)tst-gettext6.out: $(objpfx)tst-gettext.out

CPPFLAGS += -D'LOCALEDIR="$(msgcatdir)"' \
	    -D'LOCALE_ALIAS_PATH="$(msgcatdir)"'
BISONFLAGS = --yacc --name-prefix=__gettext --output

$(inst_msgcatdir)/locale.alias: locale.alias $(+force)
	$(do-install)
