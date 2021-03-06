/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef IF_CAIF_H_
#define IF_CAIF_H_
#define _IF_CAIF_H_
#define _IF_CAIF_H
#define _UAPI_IF_CAIF_H_
#define _UAPI_IF_CAIF_H
#define _UAPIIF_CAIF_H_
#define _UAPIIF_CAIF_H
#define IF_CAIF_H
#include <museum/6.0.1/bionic/libc/linux/sockios.h>
#include <museum/6.0.1/bionic/libc/linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <museum/6.0.1/bionic/libc/linux/socket.h>
enum ifla_caif {
  __IFLA_CAIF_UNSPEC,
  IFLA_CAIF_IPV4_CONNID,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IFLA_CAIF_IPV6_CONNID,
  IFLA_CAIF_LOOPBACK,
  __IFLA_CAIF_MAX
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IFLA_CAIF_MAX (__IFLA_CAIF_MAX - 1)
#endif
