# Generated automatically from Makefile.in by configure.

CGNSDIR = ..
include $(CGNSDIR)/make.system
include $(CGNSDIR)/make.$(SYSTEM)

CGNSLIB = $(CGNSDIR)/$(LIBCGNS)

COPTS  = $(CFLAGS) -I$(CGNSDIR) -I$(CGNSDIR)/$(ADFDIR)
LDLIBS = $(CGNSLIB) $(HDF5LIB) $(SZIPLIB) $(ZLIBLIB)

#----------

ALL =	adflist$(EXE) \
	dbtest$(EXE) \
	open_cgns$(EXE) \
	test_exts$(EXE) \
	test_partial$(EXE) \
	test_goto$(EXE) \
	write_array$(EXE) \
	write_bcdata$(EXE) \
	write_test$(EXE) \
	write_zones$(EXE) \
	write_rind$(EXE)

all : $(ALL)

FALL =  cgwrite$(EXE) \
	cgread$(EXE)

fortran : $(FALL)

#----------

adflist$(EXE) : adflist.$(O) getargs.$(O) $(CGNSLIB)
	$(CC) $(COPTS) $(CEOUT)$@ adflist.$(O) getargs.$(O) $(LDLIBS) $(CLIBS)
	$(STRIP) $@
adflist.$(O) : adflist.c getargs.h
	$(CC) $(COPTS) -c adflist.c

#----------

dbtest$(EXE) : dbtest.$(O) utils.$(O) $(CGNSLIB)
	$(CC) $(COPTS) $(CEOUT)$@ dbtest.$(O) utils.$(O) $(LDLIBS) $(CLIBS)
	$(STRIP) $@
dbtest.$(O) : dbtest.c utils.h
	$(CC) $(COPTS) -c dbtest.c

#----------

open_cgns$(EXE) : open_cgns.$(O) utils.$(O) $(CGNSLIB)
	$(CC) $(CFLAGS) $(CEOUT)$@ open_cgns.$(O) utils.$(O) $(LDLIBS) $(CLIBS)
	$(STRIP) $@
open_cgns.$(O) : open_cgns.c utils.h
	$(CC) $(COPTS) -c open_cgns.c

#----------

test_exts$(EXE) : test_exts.c $(CGNSLIB)
	$(CC) $(COPTS) $(CEOUT)$@ test_exts.c $(LDLIBS) $(CLIBS)
	$(STRIP) $@

#----------

test_partial$(EXE) : test_partial.c $(CGNSLIB)
	$(CC) $(COPTS) $(CEOUT)$@ test_partial.c $(LDLIBS) $(CLIBS)
	$(STRIP) $@

#----------

test_goto$(EXE) : test_goto.c $(CGNSLIB)
	$(CC) $(COPTS) $(CEOUT)$@ test_goto.c $(LDLIBS) $(CLIBS)
	$(STRIP) $@

#----------

write_array$(EXE) : write_array.$(O) utils.$(O) $(CGNSLIB)
	$(CC) $(CFLAGS) $(CEOUT)$@ write_array.$(O) utils.$(O) $(LDLIBS) $(CLIBS)
	$(STRIP) $@
write_array.$(O) : write_array.c utils.h
	$(CC) $(COPTS) -c write_array.c

#----------

write_bcdata$(EXE) : write_bcdata.$(O) utils.$(O) $(CGNSLIB)
	$(CC) $(CFLAGS) $(CEOUT)$@ write_bcdata.$(O) utils.$(O) $(LDLIBS) $(CLIBS)
	$(STRIP) $@
write_bcdata.$(O) : write_bcdata.c utils.h
	$(CC) $(COPTS) -c write_bcdata.c

#----------

write_test$(EXE) : write_test.c $(CGNSLIB)
	$(CC) $(COPTS) $(CEOUT)$@ write_test.c $(LDLIBS) $(CLIBS) -lm
	$(STRIP) $@

#----------

write_zones$(EXE) : write_zones.$(O) utils.$(O) $(CGNSLIB)
	$(CC) $(CFLAGS) $(CEOUT)$@ write_zones.$(O) utils.$(O) $(LDLIBS) $(CLIBS)
	$(STRIP) $@
write_zones.$(O) : write_zones.c utils.h
	$(CC) $(COPTS) -c write_zones.c

#----------

write_rind$(EXE) : write_rind.c $(CGNSLIB)
	$(CC) $(COPTS) $(CEOUT)$@ write_rind.c $(LDLIBS) $(CLIBS)
	$(STRIP) $@

#----------

cgwrite$(EXE) : cgwrite.F $(CGNSLIB)
	$(F77) $(FOPTS) $(FEOUT)$@ cgwrite.F $(LDLIBS) $(FLIBS)
	$(STRIP) $@

#----------

cgread$(EXE) : cgread.F $(CGNSLIB)
	$(F77) $(FOPTS) $(FEOUT)$@ cgread.F $(LDLIBS) $(FLIBS)
	$(STRIP) $@

#----------

utils.$(O) : utils.c utils.h
	$(CC) $(COPTS) -c utils.c

getargs.$(O) : getargs.c getargs.h
	$(CC) $(COPTS) -c getargs.c

clean :
	-$(RM) *.$(O)

allclean : clean
	-$(RM) $(ALL) $(FALL)
	-$(RM) *.cgns

