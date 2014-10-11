#--------------------------------------------------------------------------------
#
# Filename    : Makefile
# Written By  : Reiot
#
#--------------------------------------------------------------------------------

#--------------------------------------------------------------------------------
# Directories
#--------------------------------------------------------------------------------
VSHOME  = ../../../..
STLDIR = /usr/include/c++/4.8.2
BINDIR  = $(VSHOME)/bin
LIBDIR  = $(VSHOME)/lib
SRCDIR  = $(VSHOME)/src
COREDIR = $(VSHOME)/src/Core
SERVDIR = $(VSHOME)/src/server
DBDIR   = $(SERVDIR)/database
GSDIR   = $(SERVDIR)/gameserver
LSDIR   = $(SERVDIR)/loginserver
SSDIR   = $(SERVDIR)/sharedserver
SKILLDIR= $(GSDIR)/skill
ITEMDIR = $(GSDIR)/item
BILLINGDIR = $(GSDIR)/billing


#--------------------------------------------------------------------------------
# General Rules
#--------------------------------------------------------------------------------
.SUFFIXES : .cpp .o

CC       = g++
DEFS     = -D__LINUX__ -D_REENTRANT -D__DEBUG__ -D__LOGIN_SERVER__ 
INCLUDES = -I$(STLDIR) -I$(COREDIR) -I$(SERVDIR) -I$(DBDIR) -I$(LSDIR) -I$(GSDIR) -I$(SKILLDIR) -I$(ITEMDIR) -I$(BILLINGDIR)
DEPS     = -I/usr/include/c++/4.8.2/ext -I/usr/include/c++/4.8.2/bits -I/usr/include/c++/4.8.2/backward -I/usr/include/c++/4.8.2
CCFLAGS  = -c -Wno-deprecated
#CCFLAGS  = -Wno-deprecated -c

TARGET_GS  = $(LIBDIR)/libGameServerPackets.a
TARGET_LS  = $(LIBDIR)/libLoginServerPackets.a
TARGET_SS  = $(LIBDIR)/libSharedServerPackets.a

TARGET = $(TARGET_LS)

include ./OBJS

.cpp.o : 
	$(CC) $(CCFLAGS) $(DEFS) $(INCLUDES) $<


#--------------------------------------------------------------------------------
# Actions
#--------------------------------------------------------------------------------

all : $(TARGET)

$(TARGET) : $(OBJS)
	ar r $@ $(OBJS)

clean :
	rm -rf *.o

cleanall :
	rm -rf *.o

depall :
	gccmakedep	$(SRCS) $(INCLUDES) $(DEFS) $(DEPS)

dep :
	gccmakedep	$(SRCS) $(INCLUDES) $(DEFS) $(DEPS)

# DO NOT DELETE
CLAgreement.o: CLAgreement.cpp CLAgreement.h \
  ../../../../src/Core/Packet.h ../../../../src/Core/Types.h \
  ../../../../src/Core/types/SystemTypes.h /usr/include/sys/types.h \
  /usr/include/sys/appleapiopts.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h
CLReconnectLogin.o: CLReconnectLogin.cpp CLReconnectLogin.h \
  ../../../../src/Core/Packet.h ../../../../src/Core/Types.h \
  ../../../../src/Core/types/SystemTypes.h /usr/include/sys/types.h \
  /usr/include/sys/appleapiopts.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h
CLCreatePC.o: CLCreatePC.cpp CLCreatePC.h ../../../../src/Core/Packet.h \
  ../../../../src/Core/Types.h ../../../../src/Core/types/SystemTypes.h \
  /usr/include/sys/types.h /usr/include/sys/appleapiopts.h \
  /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h
CLDeletePC.o: CLDeletePC.cpp CLDeletePC.h ../../../../src/Core/Packet.h \
  ../../../../src/Core/Types.h ../../../../src/Core/types/SystemTypes.h \
  /usr/include/sys/types.h /usr/include/sys/appleapiopts.h \
  /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h
CLGetPCList.o: CLGetPCList.cpp CLGetPCList.h \
  ../../../../src/Core/Packet.h ../../../../src/Core/Types.h \
  ../../../../src/Core/types/SystemTypes.h /usr/include/sys/types.h \
  /usr/include/sys/appleapiopts.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h
CLLogin.o: CLLogin.cpp CLLogin.h ../../../../src/Core/Packet.h \
  ../../../../src/Core/Types.h ../../../../src/Core/types/SystemTypes.h \
  /usr/include/sys/types.h /usr/include/sys/appleapiopts.h \
  /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h ../../../../src/Core/Properties.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/map \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tree
CLLogout.o: CLLogout.cpp CLLogout.h ../../../../src/Core/Packet.h \
  ../../../../src/Core/Types.h ../../../../src/Core/types/SystemTypes.h \
  /usr/include/sys/types.h /usr/include/sys/appleapiopts.h \
  /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h
CLLogoutHandler.o: CLLogoutHandler.cpp CLLogout.h \
  ../../../../src/Core/Packet.h ../../../../src/Core/Types.h \
  ../../../../src/Core/types/SystemTypes.h /usr/include/sys/types.h \
  /usr/include/sys/appleapiopts.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h ../../../../src/Core/Assert1.h
CLQueryPlayerID.o: CLQueryPlayerID.cpp CLQueryPlayerID.h \
  ../../../../src/Core/Packet.h ../../../../src/Core/Types.h \
  ../../../../src/Core/types/SystemTypes.h /usr/include/sys/types.h \
  /usr/include/sys/appleapiopts.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h
CLQueryCharacterName.o: CLQueryCharacterName.cpp CLQueryCharacterName.h \
  ../../../../src/Core/Packet.h ../../../../src/Core/Types.h \
  ../../../../src/Core/types/SystemTypes.h /usr/include/sys/types.h \
  /usr/include/sys/appleapiopts.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h
CLRegisterPlayer.o: CLRegisterPlayer.cpp CLRegisterPlayer.h \
  ../../../../src/Core/Packet.h ../../../../src/Core/Types.h \
  ../../../../src/Core/types/SystemTypes.h /usr/include/sys/types.h \
  /usr/include/sys/appleapiopts.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h
CLSelectPC.o: CLSelectPC.cpp CLSelectPC.h ../../../../src/Core/Packet.h \
  ../../../../src/Core/Types.h ../../../../src/Core/types/SystemTypes.h \
  /usr/include/sys/types.h /usr/include/sys/appleapiopts.h \
  /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h ../../../../src/Core/Player.h
CLGetServerList.o: CLGetServerList.cpp CLGetServerList.h \
  ../../../../src/Core/Packet.h ../../../../src/Core/Types.h \
  ../../../../src/Core/types/SystemTypes.h /usr/include/sys/types.h \
  /usr/include/sys/appleapiopts.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h
CLGetWorldList.o: CLGetWorldList.cpp CLGetWorldList.h \
  ../../../../src/Core/Packet.h ../../../../src/Core/Types.h \
  ../../../../src/Core/types/SystemTypes.h /usr/include/sys/types.h \
  /usr/include/sys/appleapiopts.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h
CLChangeServer.o: CLChangeServer.cpp CLChangeServer.h \
  ../../../../src/Core/Packet.h ../../../../src/Core/Types.h \
  ../../../../src/Core/types/SystemTypes.h /usr/include/sys/types.h \
  /usr/include/sys/appleapiopts.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h
CLSelectServer.o: CLSelectServer.cpp CLSelectServer.h \
  ../../../../src/Core/Packet.h ../../../../src/Core/Types.h \
  ../../../../src/Core/types/SystemTypes.h /usr/include/sys/types.h \
  /usr/include/sys/appleapiopts.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h
CLSelectWorld.o: CLSelectWorld.cpp CLSelectWorld.h \
  ../../../../src/Core/Packet.h ../../../../src/Core/Types.h \
  ../../../../src/Core/types/SystemTypes.h /usr/include/sys/types.h \
  /usr/include/sys/appleapiopts.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h
CLVersionCheck.o: CLVersionCheck.cpp CLVersionCheck.h \
  ../../../../src/Core/Packet.h ../../../../src/Core/Types.h \
  ../../../../src/Core/types/SystemTypes.h /usr/include/sys/types.h \
  /usr/include/sys/appleapiopts.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h \
  /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h \
  /usr/include/sys/_types/_intptr_t.h \
  /usr/include/sys/_types/_uintptr_t.h \
  /usr/include/sys/_types/___offsetof.h /usr/include/sys/_types.h \
  /usr/include/machine/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_blkcnt_t.h \
  /usr/include/sys/_types/_blksize_t.h /usr/include/sys/_types/_gid_t.h \
  /usr/include/sys/_types/_in_addr_t.h \
  /usr/include/sys/_types/_in_port_t.h /usr/include/sys/_types/_ino_t.h \
  /usr/include/sys/_types/_ino64_t.h /usr/include/sys/_types/_key_t.h \
  /usr/include/sys/_types/_mode_t.h /usr/include/sys/_types/_nlink_t.h \
  /usr/include/sys/_types/_id_t.h /usr/include/sys/_types/_pid_t.h \
  /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_uid_t.h \
  /usr/include/sys/_types/_clock_t.h /usr/include/sys/_types/_size_t.h \
  /usr/include/sys/_types/_ssize_t.h /usr/include/sys/_types/_time_t.h \
  /usr/include/sys/_types/_useconds_t.h \
  /usr/include/sys/_types/_suseconds_t.h \
  /usr/include/sys/_types/_rsize_t.h /usr/include/sys/_types/_errno_t.h \
  /usr/include/sys/_types/_fd_def.h \
  /usr/include/sys/_types/_fd_setsize.h \
  /usr/include/sys/_types/_fd_set.h /usr/include/sys/_types/_fd_clr.h \
  /usr/include/sys/_types/_fd_zero.h /usr/include/sys/_types/_fd_isset.h \
  /usr/include/sys/_types/_fd_copy.h \
  /usr/include/sys/_types/_pthread_attr_t.h \
  /usr/include/sys/_types/_pthread_cond_t.h \
  /usr/include/sys/_types/_pthread_condattr_t.h \
  /usr/include/sys/_types/_pthread_mutex_t.h \
  /usr/include/sys/_types/_pthread_mutexattr_t.h \
  /usr/include/sys/_types/_pthread_once_t.h \
  /usr/include/sys/_types/_pthread_rwlock_t.h \
  /usr/include/sys/_types/_pthread_rwlockattr_t.h \
  /usr/include/sys/_types/_pthread_t.h \
  /usr/include/sys/_types/_pthread_key_t.h \
  /usr/include/sys/_types/_fsblkcnt_t.h \
  /usr/include/sys/_types/_fsfilcnt_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/fstream \
  ../../../../src/Core/types/PlayerTypes.h \
  ../../../../src/Core/types/ObjectTypes.h \
  ../../../../src/Core/types/CreatureTypes.h \
  ../../../../src/Core/types/ItemTypes.h \
  ../../../../src/Core/types/ZoneTypes.h \
  ../../../../src/Core/types/QuestTypes.h \
  ../../../../src/Core/types/ShopTypes.h \
  ../../../../src/Core/types/GuildTypes.h \
  ../../../../src/Core/types/WarTypes.h \
  ../../../../src/Core/types/ServerType.h ../../../../src/Core/Utility.h \
  ../../../../src/Core/Exception.h ../../../../src/Core/StringStream.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/PacketFactory.h
