# NOTE: this is a GNU Makefile.  You must use "gmake" rather than "make".
#
# Makefile for the file system assignment
#    Defines set up assuming multiprogramming and virtual memory done first.
#    If not, use the "bare bones"  defines below. 
#
# Copyright (c) 1992 The Regents of the University of California.
# All rights reserved.  See copyright.h for copyright notice and limitation 
# of liability and disclaimer of warranty provisions.

DEFINES =-DUSER_PROGRAM -DFILESYS_NEEDED -DFILESYS -DVM -DUSE_TLB
INCPATH = -I../filesys -I../bin -I../vm -I../userprog -I../threads -I../machine -I../lib
HFILES = $(THREAD_H) $(USERPROG_H) $(VM_H) $(FILESYS_H)
CFILES = $(THREAD_C) $(USERPROG_C) $(VM_C) $(FILESYS_C)
C_OFILES = $(THREAD_O) $(USERPROG_O) $(VM_O) $(FILESYS_O)

# bare bones version
# DEFINES =-DFILESYS_NEEDED -DFILESYS
# INCPATH = -I../filesys -I../threads -I../machine
# HFILES = $(THREAD_H) $(FILESYS_H)
# CFILES = $(THREAD_C) $(FILESYS_C)
# C_OFILES = $(THREAD_O) $(FILESYS_O)

include ../Makefile.common
include ../Makefile.dep
#-----------------------------------------------------------------
# DO NOT DELETE THIS LINE -- make depend uses it
# DEPENDENCIES MUST END AT END OF FILE
bitmap.o: ../lib/bitmap.cc /usr/include/stdc-predef.h ../lib/copyright.h \
 ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../lib/bitmap.h
debug.o: ../lib/debug.cc /usr/include/stdc-predef.h ../lib/copyright.h \
 ../lib/utility.h ../lib/debug.h ../lib/sysdep.h \
 /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h
hash.o: ../lib/hash.cc /usr/include/stdc-predef.h ../lib/copyright.h
libtest.o: ../lib/libtest.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../lib/libtest.h ../lib/bitmap.h ../lib/utility.h \
 ../lib/list.h ../lib/debug.h ../lib/sysdep.h \
 /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../lib/list.cc ../lib/hash.h ../lib/hash.cc
list.o: ../lib/list.cc /usr/include/stdc-predef.h ../lib/copyright.h
sysdep.o: ../lib/sysdep.cc /usr/include/stdc-predef.h ../lib/copyright.h \
 ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/unistd.h /usr/include/i386-linux-gnu/bits/posix_opt.h \
 /usr/include/i386-linux-gnu/bits/environments.h \
 /usr/include/i386-linux-gnu/bits/confname.h /usr/include/getopt.h \
 /usr/include/i386-linux-gnu/sys/time.h \
 /usr/include/i386-linux-gnu/sys/file.h /usr/include/fcntl.h \
 /usr/include/i386-linux-gnu/bits/fcntl.h \
 /usr/include/i386-linux-gnu/bits/fcntl-linux.h \
 /usr/include/i386-linux-gnu/bits/uio.h \
 /usr/include/i386-linux-gnu/bits/stat.h \
 /usr/include/i386-linux-gnu/sys/socket.h \
 /usr/include/i386-linux-gnu/sys/uio.h \
 /usr/include/i386-linux-gnu/bits/socket.h \
 /usr/include/i386-linux-gnu/bits/socket_type.h \
 /usr/include/i386-linux-gnu/bits/sockaddr.h \
 /usr/include/i386-linux-gnu/asm/socket.h \
 /usr/include/asm-generic/socket.h \
 /usr/include/i386-linux-gnu/asm/sockios.h \
 /usr/include/asm-generic/sockios.h /usr/include/i386-linux-gnu/sys/un.h \
 /usr/include/signal.h /usr/include/i386-linux-gnu/bits/signum.h \
 /usr/include/i386-linux-gnu/bits/siginfo.h \
 /usr/include/i386-linux-gnu/bits/sigaction.h \
 /usr/include/i386-linux-gnu/bits/sigcontext.h \
 /usr/include/i386-linux-gnu/bits/sigstack.h \
 /usr/include/i386-linux-gnu/sys/ucontext.h \
 /usr/include/i386-linux-gnu/bits/sigthread.h
interrupt.o: ../machine/interrupt.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../machine/interrupt.h ../lib/list.h \
 ../lib/copyright.h ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../lib/list.cc ../machine/callback.h ../threads/main.h ../lib/debug.h \
 ../userprog/userkernel.h ../threads/kernel.h ../lib/utility.h \
 ../threads/thread.h ../lib/sysdep.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../threads/main.h
stats.o: ../machine/stats.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../lib/debug.h ../lib/copyright.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../machine/stats.h
timer.o: ../machine/timer.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../machine/timer.h ../lib/utility.h \
 ../lib/copyright.h ../machine/callback.h ../threads/main.h \
 ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
 ../lib/sysdep.h ../machine/machine.h ../machine/translate.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 ../machine/interrupt.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h
alarm.o: ../threads/alarm.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../threads/alarm.h ../lib/utility.h \
 ../lib/copyright.h ../machine/callback.h ../machine/timer.h \
 ../machine/callback.h ../threads/main.h ../lib/debug.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
 ../lib/sysdep.h ../machine/machine.h ../machine/translate.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 ../machine/interrupt.h ../machine/stats.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h
kernel.o: ../threads/kernel.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../lib/debug.h ../lib/copyright.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../threads/main.h ../userprog/userkernel.h ../threads/kernel.h \
 ../lib/utility.h ../threads/thread.h ../lib/sysdep.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 ../lib/list.h ../lib/debug.h ../lib/list.cc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/kernel.h \
 ../threads/synch.h ../threads/synchlist.h ../threads/synchlist.cc \
 ../lib/libtest.h ../machine/elevatortest.h
main.o: ../threads/main.cc /usr/include/stdc-predef.h ../lib/copyright.h \
 ../threads/main.h ../lib/debug.h ../lib/copyright.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../lib/utility.h \
 ../threads/thread.h ../lib/sysdep.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h
scheduler.o: ../threads/scheduler.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../lib/debug.h ../lib/copyright.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 ../threads/thread.h ../lib/utility.h ../lib/sysdep.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/main.h \
 ../userprog/userkernel.h ../threads/kernel.h ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h
synch.o: ../threads/synch.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../threads/synch.h ../threads/thread.h \
 ../lib/utility.h ../lib/copyright.h ../lib/sysdep.h \
 /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../lib/list.h ../lib/debug.h \
 ../lib/utility.h ../lib/sysdep.h ../lib/list.cc ../threads/main.h \
 ../lib/debug.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/scheduler.h ../machine/interrupt.h ../machine/callback.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h
synchlist.o: ../threads/synchlist.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../threads/synchlist.h ../lib/list.h \
 ../lib/copyright.h ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../lib/list.cc ../threads/synch.h ../threads/thread.h ../lib/utility.h \
 ../lib/sysdep.h ../machine/machine.h ../machine/translate.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/main.h ../lib/debug.h ../userprog/userkernel.h \
 ../threads/kernel.h ../threads/scheduler.h ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/synchlist.cc
thread.o: ../threads/thread.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../threads/thread.h ../lib/utility.h \
 ../lib/copyright.h ../lib/sysdep.h /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/switch.h \
 ../threads/synch.h ../lib/list.h ../lib/debug.h ../lib/utility.h \
 ../lib/sysdep.h ../lib/list.cc ../threads/main.h ../lib/debug.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/scheduler.h \
 ../machine/interrupt.h ../machine/callback.h ../machine/stats.h \
 ../threads/alarm.h ../machine/callback.h ../machine/timer.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h
elevatortest.o: ../machine/elevatortest.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../machine/elevatortest.h ../machine/elevator.h \
 ../lib/utility.h ../lib/copyright.h ../machine/callback.h ../lib/list.h \
 ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../lib/list.cc ../threads/synch.h ../threads/thread.h ../lib/sysdep.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/main.h \
 ../lib/debug.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/scheduler.h ../machine/interrupt.h ../machine/stats.h \
 ../threads/alarm.h ../machine/callback.h ../machine/timer.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/thread.h
elevator.o: ../machine/elevator.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../machine/elevator.h ../lib/utility.h \
 ../lib/copyright.h ../machine/callback.h ../lib/list.h ../lib/debug.h \
 ../lib/utility.h ../lib/sysdep.h /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../lib/list.cc ../threads/kernel.h ../lib/debug.h ../threads/thread.h \
 ../lib/sysdep.h ../machine/machine.h ../machine/translate.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../machine/interrupt.h ../machine/stats.h \
 ../threads/alarm.h ../machine/callback.h ../machine/timer.h \
 ../threads/main.h ../userprog/userkernel.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h
addrspace.o: ../userprog/addrspace.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../threads/main.h ../lib/debug.h ../lib/copyright.h \
 ../lib/utility.h ../lib/sysdep.h /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../lib/utility.h \
 ../threads/thread.h ../lib/sysdep.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h \
 ../userprog/addrspace.h ../bin/noff.h
exception.o: ../userprog/exception.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../threads/main.h ../lib/debug.h ../lib/copyright.h \
 ../lib/utility.h ../lib/sysdep.h /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../lib/utility.h \
 ../threads/thread.h ../lib/sysdep.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h \
 ../userprog/syscall.h
synchconsole.o: ../userprog/synchconsole.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../userprog/synchconsole.h ../lib/utility.h \
 ../lib/copyright.h ../machine/callback.h ../machine/console.h \
 ../machine/callback.h ../threads/synch.h ../threads/thread.h \
 ../lib/sysdep.h /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../lib/list.h ../lib/debug.h \
 ../lib/utility.h ../lib/sysdep.h ../lib/list.cc ../threads/main.h \
 ../lib/debug.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/scheduler.h ../machine/interrupt.h ../machine/stats.h \
 ../threads/alarm.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h
userkernel.o: ../userprog/userkernel.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../userprog/synchconsole.h ../lib/utility.h \
 ../lib/copyright.h ../machine/callback.h ../machine/console.h \
 ../machine/callback.h ../threads/synch.h ../threads/thread.h \
 ../lib/sysdep.h /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../lib/list.h ../lib/debug.h \
 ../lib/utility.h ../lib/sysdep.h ../lib/list.cc ../threads/main.h \
 ../lib/debug.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/scheduler.h ../machine/interrupt.h ../machine/stats.h \
 ../threads/alarm.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../userprog/userkernel.h
console.o: ../machine/console.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../machine/console.h ../lib/utility.h \
 ../lib/copyright.h ../machine/callback.h ../threads/main.h \
 ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
 ../lib/sysdep.h ../machine/machine.h ../machine/translate.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 ../machine/interrupt.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h
machine.o: ../machine/machine.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../machine/machine.h ../lib/utility.h \
 ../lib/copyright.h ../machine/translate.h ../threads/main.h \
 ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
 ../lib/sysdep.h ../machine/machine.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 ../lib/list.h ../lib/debug.h ../lib/list.cc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h
mipssim.o: ../machine/mipssim.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../lib/debug.h ../lib/copyright.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../machine/machine.h ../lib/utility.h ../machine/translate.h \
 ../machine/mipssim.h ../threads/main.h ../userprog/userkernel.h \
 ../threads/kernel.h ../threads/thread.h ../lib/sysdep.h \
 ../machine/machine.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h
translate.o: ../machine/translate.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../threads/main.h ../lib/debug.h ../lib/copyright.h \
 ../lib/utility.h ../lib/sysdep.h /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../lib/utility.h \
 ../threads/thread.h ../lib/sysdep.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h
synchdisk.o: ../filesys/synchdisk.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../filesys/synchdisk.h ../machine/disk.h \
 ../lib/utility.h ../lib/copyright.h ../machine/callback.h \
 ../threads/synch.h ../threads/thread.h ../lib/sysdep.h \
 /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../lib/list.h ../lib/debug.h \
 ../lib/utility.h ../lib/sysdep.h ../lib/list.cc ../threads/main.h \
 ../lib/debug.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/scheduler.h ../machine/interrupt.h ../machine/stats.h \
 ../threads/alarm.h ../machine/callback.h ../machine/timer.h \
 ../filesys/synchdisk.h
disk.o: ../machine/disk.cc /usr/include/stdc-predef.h ../lib/copyright.h \
 ../machine/disk.h ../lib/utility.h ../lib/copyright.h \
 ../machine/callback.h ../threads/main.h ../lib/debug.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
 ../lib/sysdep.h ../machine/machine.h ../machine/translate.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 ../machine/interrupt.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h
directory.o: ../filesys/directory.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../lib/utility.h ../lib/copyright.h \
 ../filesys/filehdr.h ../machine/disk.h ../machine/callback.h \
 ../lib/bitmap.h ../lib/utility.h ../filesys/directory.h \
 ../filesys/openfile.h /usr/include/stdio.h /usr/include/features.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h
filesys.o: ../filesys/filesys.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../machine/disk.h ../lib/utility.h ../lib/copyright.h \
 ../machine/callback.h ../lib/bitmap.h ../lib/utility.h \
 ../filesys/directory.h ../filesys/openfile.h ../filesys/filehdr.h \
 ../filesys/filesys.h ../lib/debug.h ../lib/sysdep.h \
 /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../filesys/pbitmap.h
openfile.o: ../filesys/openfile.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../filesys/filehdr.h ../machine/disk.h \
 ../lib/utility.h ../lib/copyright.h ../machine/callback.h \
 ../lib/bitmap.h ../lib/utility.h ../filesys/openfile.h ../lib/debug.h \
 ../lib/sysdep.h /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../threads/main.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/thread.h ../lib/sysdep.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 ../machine/interrupt.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../threads/synch.h ../threads/main.h
filehdr.o: ../filesys/filehdr.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../lib/debug.h ../lib/copyright.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../threads/main.h ../userprog/userkernel.h ../threads/kernel.h \
 ../lib/utility.h ../threads/thread.h ../lib/sysdep.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 ../lib/list.h ../lib/debug.h ../lib/list.cc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h \
 ../filesys/filehdr.h ../lib/bitmap.h
fstest.o: ../filesys/fstest.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../lib/debug.h ../lib/copyright.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/4.8/iostream \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/cpu_defines.h \
 /usr/include/c++/4.8/ostream /usr/include/c++/4.8/ios \
 /usr/include/c++/4.8/iosfwd /usr/include/c++/4.8/bits/stringfwd.h \
 /usr/include/c++/4.8/bits/memoryfwd.h \
 /usr/include/c++/4.8/bits/postypes.h /usr/include/c++/4.8/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.8/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/4.8/exception \
 /usr/include/c++/4.8/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8/bits/char_traits.h \
 /usr/include/c++/4.8/bits/stl_algobase.h \
 /usr/include/c++/4.8/bits/functexcept.h \
 /usr/include/c++/4.8/bits/exception_defines.h \
 /usr/include/c++/4.8/bits/cpp_type_traits.h \
 /usr/include/c++/4.8/ext/type_traits.h \
 /usr/include/c++/4.8/ext/numeric_traits.h \
 /usr/include/c++/4.8/bits/stl_pair.h /usr/include/c++/4.8/bits/move.h \
 /usr/include/c++/4.8/bits/concept_check.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8/debug/debug.h \
 /usr/include/c++/4.8/bits/stl_iterator.h \
 /usr/include/c++/4.8/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++locale.h \
 /usr/include/c++/4.8/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/4.8/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/4.8/bits/ios_base.h \
 /usr/include/c++/4.8/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/atomic_word.h \
 /usr/include/c++/4.8/bits/locale_classes.h /usr/include/c++/4.8/string \
 /usr/include/c++/4.8/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/c++allocator.h \
 /usr/include/c++/4.8/ext/new_allocator.h /usr/include/c++/4.8/new \
 /usr/include/c++/4.8/bits/ostream_insert.h \
 /usr/include/c++/4.8/bits/cxxabi_forced.h \
 /usr/include/c++/4.8/bits/stl_function.h \
 /usr/include/c++/4.8/backward/binders.h \
 /usr/include/c++/4.8/bits/range_access.h \
 /usr/include/c++/4.8/bits/basic_string.h \
 /usr/include/c++/4.8/bits/basic_string.tcc \
 /usr/include/c++/4.8/bits/locale_classes.tcc \
 /usr/include/c++/4.8/streambuf /usr/include/c++/4.8/bits/streambuf.tcc \
 /usr/include/c++/4.8/bits/basic_ios.h \
 /usr/include/c++/4.8/bits/locale_facets.h /usr/include/c++/4.8/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_base.h \
 /usr/include/c++/4.8/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/4.8/bits/ctype_inline.h \
 /usr/include/c++/4.8/bits/locale_facets.tcc \
 /usr/include/c++/4.8/bits/basic_ios.tcc \
 /usr/include/c++/4.8/bits/ostream.tcc /usr/include/c++/4.8/istream \
 /usr/include/c++/4.8/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 ../lib/utility.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/main.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/thread.h ../lib/sysdep.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 ../machine/interrupt.h ../machine/callback.h ../machine/stats.h \
 ../threads/alarm.h ../machine/callback.h ../machine/timer.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h \
 ../threads/main.h ../threads/thread.h
pbitmap.o: ../filesys/pbitmap.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../filesys/pbitmap.h ../lib/bitmap.h \
 ../lib/copyright.h ../lib/utility.h ../filesys/openfile.h \
 ../lib/utility.h
# DEPENDENCIES MUST END AT END OF FILE
# IF YOU PUT STUFF HERE IT WILL GO AWAY
# see make depend above
