/*	$NetBSD: trap_ultrix.h,v 1.1.1.1 2008/09/19 20:07:19 christos Exp $	*/

/* $srcdir/conf/trap/trap_ultrix.h */
/* arg 3 to mount(2) is rwflag */
#define	MOUNT_TRAP(type, mnt, flags, mnt_data) 	mount(mnt->mnt_fsname, mnt->mnt_dir, flags & MNT2_GEN_OPT_RONLY, type, mnt_data)
