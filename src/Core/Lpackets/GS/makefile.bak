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
DEFS     = -D__LINUX__ -D_REENTRANT -D__DEBUG__ -D__GAME_SERVER__ 
INCLUDES = -I$(STLDIR) -I$(COREDIR) -I$(SERVDIR) -I$(DBDIR) -I$(GSDIR) -I$(SKILLDIR) -I$(ITEMDIR) -I$(BILLINGDIR)
DEPS     = -I/usr/include/c++/4.8.2/ext -I/usr/include/c++/4.8.2/bits -I/usr/include/c++/4.8.2/backward -I/usr/include/c++/4.8.2
CCFLAGS  = -c -g -Wno-deprecated
#CCFLAGS  = -Wno-deprecated -c

TARGET_GS  = $(LIBDIR)/libGameServerPackets.a
TARGET_LS  = $(LIBDIR)/libLoginServerPackets.a
TARGET_SS  = $(LIBDIR)/libSharedServerPackets.a

TARGET = $(TARGET_GS)

OBJS = ../LGIncomingConnection.o    \
../LGIncomingConnectionError.o    \
../LGIncomingConnectionErrorHandler.o    \
../LGIncomingConnectionHandler.o    \
../LGIncomingConnectionOK.o    \
../LGIncomingConnectionOKHandler.o    \
../LGKickCharacter.o    \
../LGKickCharacterHandler.o

SRCS    = $(OBJS:.o=.cpp)


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
LGIncomingConnection.o: ../LGIncomingConnection.cpp \
  ../LGIncomingConnection.h ../../../../src/Core/DatagramPacket.h \
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
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/fstream \
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
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/Datagram.h /usr/include/arpa/inet.h \
  ../../../../src/Core/PacketFactory.h
LGIncomingConnectionError.o: ../LGIncomingConnectionError.cpp \
  ../LGIncomingConnectionError.h ../../../../src/Core/DatagramPacket.h \
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
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/fstream \
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
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/Datagram.h /usr/include/arpa/inet.h \
  ../../../../src/Core/PacketFactory.h
LGIncomingConnectionErrorHandler.o: \
  ../LGIncomingConnectionErrorHandler.cpp ../LGIncomingConnectionError.h \
  ../../../../src/Core/DatagramPacket.h ../../../../src/Core/Packet.h \
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
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/fstream \
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
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/Datagram.h /usr/include/arpa/inet.h \
  ../../../../src/Core/PacketFactory.h \
  ../../../../src/server/gameserver/GamePlayer.h \
  ../../../../src/Core/Player.h \
  ../../../../src/Core/SocketEncryptOutputStream.h \
  ../../../../src/Core/Encrypter.h ../../../../src/Core/EncryptUtility.h \
  ../../../../src/Core/SocketEncryptInputStream.h \
  ../../../../src/server/Mutex.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/deque \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__split_buffer \
  ../../../../src/server/Timeval.h /usr/include/sys/time.h \
  /usr/include/sys/_select.h /usr/include/unistd.h \
  /usr/include/sys/unistd.h /usr/include/sys/_types/_posix_vdisable.h \
  /usr/include/sys/_types/_seek_set.h /usr/include/sys/select.h \
  /usr/include/sys/_types/_uuid_t.h /usr/include/gethostuuid.h \
  ../../../../src/Core/PlayerStatus.h \
  ../../../../src/server/gameserver/EventManager.h \
  ../../../../src/server/gameserver/Event.h \
  ../../../../src/server/gameserver/skill/Skill.h \
  ../../../../src/server/PaySystem.h ../../../../src/Core/VSDateTime.h \
  ../../../../src/server/gameserver/billing/BillingPlayerInfo.h \
  ../../../../src/server/chinabilling/CBillingPlayerInfo.h \
  ../../../../src/server/chinabilling/CBillingInfo.h \
  ../../../../src/Core/Gpackets/GCReconnectLogin.h \
  ../../../../src/server/gameserver/IncomingPlayerManager.h \
  ../../../../src/server/PlayerManager.h \
  ../../../../src/Core/ServerSocket.h \
  ../../../../src/Core/DatagramSocket.h \
  ../../../../src/server/gameserver/ConnectionInfoManager.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/map \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__tree \
  ../../../../src/server/gameserver/ConnectionInfo.h \
  ../../../../src/Core/Assert1.h \
  ../../../../src/server/gameserver/LogDef.h \
  ../../../../src/server/gameserver/VariableManager.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/vector
LGIncomingConnectionHandler.o: ../LGIncomingConnectionHandler.cpp \
  ../LGIncomingConnection.h ../../../../src/Core/DatagramPacket.h \
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
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/fstream \
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
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/Datagram.h /usr/include/arpa/inet.h \
  ../../../../src/Core/PacketFactory.h ../../../../src/Core/Properties.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/map \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__tree \
  ../../../../src/server/gameserver/ConnectionInfo.h \
  ../../../../src/server/Timeval.h /usr/include/sys/time.h \
  /usr/include/sys/_select.h /usr/include/unistd.h \
  /usr/include/sys/unistd.h /usr/include/sys/_types/_posix_vdisable.h \
  /usr/include/sys/_types/_seek_set.h /usr/include/sys/select.h \
  /usr/include/sys/_types/_uuid_t.h /usr/include/gethostuuid.h \
  ../../../../src/server/gameserver/ConnectionInfoManager.h \
  ../../../../src/server/Mutex.h \
  ../../../../src/server/gameserver/LoginServerManager.h \
  ../../../../src/server/Thread.h ../../../../src/server/pthreadAPI.h \
  ../../../../src/Core/DatagramSocket.h \
  ../../../../src/server/gameserver/LogDef.h \
  ../../../../src/server/gameserver/VariableManager.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/vector \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__split_buffer \
  ../../../../src/Core/Gpackets/GLIncomingConnectionError.h \
  ../../../../src/Core/Gpackets/GLIncomingConnectionOK.h
LGIncomingConnectionOK.o: ../LGIncomingConnectionOK.cpp \
  ../LGIncomingConnectionOK.h ../../../../src/Core/DatagramPacket.h \
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
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/fstream \
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
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/Datagram.h /usr/include/arpa/inet.h \
  ../../../../src/Core/PacketFactory.h
LGKickCharacter.o: ../LGKickCharacter.cpp ../LGKickCharacter.h \
  ../../../../src/Core/DatagramPacket.h ../../../../src/Core/Packet.h \
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
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/fstream \
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
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/Datagram.h /usr/include/arpa/inet.h \
  ../../../../src/Core/PacketFactory.h
LGKickCharacterHandler.o: ../LGKickCharacterHandler.cpp \
  ../LGKickCharacter.h ../../../../src/Core/DatagramPacket.h \
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
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__config \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ios \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iosfwd \
  /usr/include/wchar.h /usr/include/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/_types/_null.h \
  /usr/include/sys/_types/_mbstate_t.h \
  /usr/include/sys/_types/_ct_rune_t.h /usr/include/sys/_types/_rune_t.h \
  /usr/include/sys/_types/_wchar_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stdarg.h \
  /usr/include/stdio.h /usr/include/sys/_types/_va_list.h \
  /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/sys/_types/_timespec.h \
  /usr/include/_wctype.h /usr/include/sys/_types/_wint_t.h \
  /usr/include/_types/_wctype_t.h /usr/include/ctype.h \
  /usr/include/runetype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/string \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstring \
  /usr/include/string.h /usr/include/strings.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cwchar \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cwctype \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cctype \
  /usr/include/wctype.h /usr/include/_types/_wctrans_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/algorithm \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/initializer_list \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstddef \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stddef.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/type_traits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/utility \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__tuple_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/memory \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/typeinfo \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/exception \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdint \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/stdint.h \
  /usr/include/stdint.h /usr/include/_types/_uint8_t.h \
  /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h \
  /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h \
  /usr/include/_types/_uintmax_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/new \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/limits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__undef_min_max \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/iterator \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_base_03 \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/tuple \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/stdexcept \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/mutex \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__mutex_base \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/chrono \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ctime \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ratio \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/climits \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/5.1/include/limits.h \
  /usr/include/limits.h /usr/include/machine/limits.h \
  /usr/include/i386/limits.h /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/system_error \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cerrno \
  /usr/include/errno.h /usr/include/sys/errno.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h \
  /usr/include/sys/_types/_mach_port_t.h \
  /usr/include/sys/_types/_sigset_t.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/functional \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__functional_03 \
  /usr/include/locale.h /usr/include/_locale.h /usr/include/xlocale.h \
  /usr/include/_xlocale.h /usr/include/xlocale/_ctype.h \
  /usr/include/xlocale/__wctype.h /usr/include/xlocale/_stdio.h \
  /usr/include/xlocale/_string.h /usr/include/xlocale/_time.h \
  /usr/include/xlocale/_wchar.h /usr/include/xlocale/_wctype.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/streambuf \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/istream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/ostream \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/locale \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/cstdlib \
  /usr/include/stdlib.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/machine/_mcontext.h \
  /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/_types/_sigaltstack.h \
  /usr/include/sys/_types/_ucontext.h /usr/include/sys/resource.h \
  /usr/include/sys/_types/_timeval.h /usr/include/alloca.h \
  /usr/include/xlocale/_stdlib.h /usr/include/nl_types.h \
  /usr/include/_types/_nl_item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/bitset \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__bit_reference \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/fstream \
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
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/list \
  ../../../../src/Core/SocketInputStream.h ../../../../src/Core/Socket.h \
  ../../../../src/Core/SocketImpl.h ../../../../src/Core/SocketAPI.h \
  /usr/include/netinet/in.h /usr/include/sys/socket.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/sys/_types/_sa_family_t.h \
  /usr/include/sys/_types/_socklen_t.h \
  /usr/include/sys/_types/_iovec_t.h /usr/include/netinet6/in6.h \
  ../../../../src/Core/SocketOutputStream.h \
  ../../../../src/Core/Datagram.h /usr/include/arpa/inet.h \
  ../../../../src/Core/PacketFactory.h \
  ../../../../src/server/gameserver/GamePlayer.h \
  ../../../../src/Core/Player.h \
  ../../../../src/Core/SocketEncryptOutputStream.h \
  ../../../../src/Core/Encrypter.h ../../../../src/Core/EncryptUtility.h \
  ../../../../src/Core/SocketEncryptInputStream.h \
  ../../../../src/server/Mutex.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/deque \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__split_buffer \
  ../../../../src/server/Timeval.h /usr/include/sys/time.h \
  /usr/include/sys/_select.h /usr/include/unistd.h \
  /usr/include/sys/unistd.h /usr/include/sys/_types/_posix_vdisable.h \
  /usr/include/sys/_types/_seek_set.h /usr/include/sys/select.h \
  /usr/include/sys/_types/_uuid_t.h /usr/include/gethostuuid.h \
  ../../../../src/Core/PlayerStatus.h \
  ../../../../src/server/gameserver/EventManager.h \
  ../../../../src/server/gameserver/Event.h \
  ../../../../src/server/gameserver/skill/Skill.h \
  ../../../../src/server/PaySystem.h ../../../../src/Core/VSDateTime.h \
  ../../../../src/server/gameserver/billing/BillingPlayerInfo.h \
  ../../../../src/server/chinabilling/CBillingPlayerInfo.h \
  ../../../../src/server/chinabilling/CBillingInfo.h \
  ../../../../src/Core/Gpackets/GCReconnectLogin.h \
  ../../../../src/server/gameserver/LoginServerManager.h \
  ../../../../src/server/Thread.h ../../../../src/server/pthreadAPI.h \
  ../../../../src/Core/DatagramSocket.h \
  ../../../../src/server/gameserver/Creature.h \
  ../../../../src/server/gameserver/Object.h \
  ../../../../src/Core/Assert1.h \
  ../../../../src/server/gameserver/EffectManager.h \
  ../../../../src/server/gameserver/Effect.h \
  ../../../../src/Core/EffectInfo.h \
  ../../../../src/server/gameserver/PCFinder.h \
  ../../../../src/server/gameserver/NPC.h \
  ../../../../src/server/gameserver/Zone.h \
  ../../../../src/server/gameserver/Tile.h \
  ../../../../src/server/gameserver/Item.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/vector \
  ../../../../src/server/gameserver/Obstacle.h \
  ../../../../src/server/gameserver/Portal.h \
  ../../../../src/server/gameserver/quest/TriggerManager.h \
  ../../../../src/server/gameserver/quest/Trigger.h \
  ../../../../src/server/gameserver/quest/Condition.h \
  ../../../../src/server/gameserver/quest/PropertyBuffer.h \
  ../../../../src/server/gameserver/Sector.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/map \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/__tree \
  ../../../../src/server/gameserver/ObjectRegistry.h \
  ../../../../src/server/gameserver/Party.h \
  ../../../../src/Core/ModifyInfo.h \
  ../../../../src/server/gameserver/PCManager.h \
  ../../../../src/server/gameserver/CreatureManager.h \
  /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/c++/v1/queue \
  ../../../../src/server/gameserver/Inventory.h \
  ../../../../src/server/gameserver/VolumeInfo.h \
  ../../../../src/server/gameserver/InventorySlot.h \
  ../../../../src/server/gameserver/couple/PartnerWaitingManager.h \
  ../../../../src/server/gameserver/PlayerCreature.h \
  ../../../../src/server/gameserver/Garbage.h \
  ../../../../src/server/gameserver/RankBonus.h \
  ../../../../src/server/gameserver/ExpFwd.h \
  ../../../../src/Core/Gpackets/GCMonsterKillQuestInfo.h \
  ../../../../src/Core/Gpackets/GCSelectQuestID.h \
  ../../../../src/server/gameserver/OptionInfo.h \
  ../../../../src/server/gameserver/LogDef.h \
  ../../../../src/server/gameserver/VariableManager.h \
  ../../../../src/Core/Gpackets/GLKickVerify.h
