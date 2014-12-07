#ifndef ATL_INSTINFO_H
   #define ATL_INSTINFO_H

#define ATL_ARCH "ARMv7VFPNEON32NEON"
#define ATL_INSTFLAGS "-1 0 -a 0"
#define ATL_F2CDEFS "-DAdd_ -DF77_INTEGER=int -DStringSunStyle"
#define ATL_ARCHDEFS "-DATL_OS_Linux -DATL_ARCH_ARMv7VFPNEON -DATL_NEON -DATL_GAS_ARM"
#define ATL_DKCFLAGS "-march=armv7-a -mfpu=vfpv3 -O1 -fno-schedule-insns2 -fPIC"
#define ATL_DKC "gcc"
#define ATL_SKCFLAGS "-march=armv7-a -mfpu=neon -ffast-math -O3 -fschedule-insns -fschedule-insns2 -fprefetch-loop-arrays -fPIC"
#define ATL_SKC "gcc"
#define ATL_DMCFLAGS "-march=armv7-a -mfpu=vfpv3 -O1 -fno-schedule-insns2 -fPIC"
#define ATL_DMC "gcc"
#define ATL_SMCFLAGS "-march=armv7-a -mfpu=neon -ffast-math -O3 -fschedule-insns -fschedule-insns2 -fprefetch-loop-arrays -fPIC"
#define ATL_SMC "gcc"
#define ATL_ICCFLAGS "-DL2SIZE=4194304 -I/home/admin/atlas384/ATLAS-3.8.4-arm/build/include -I/home/admin/atlas384/ATLAS-3.8.4-arm/build/..//include -I/home/admin/atlas384/ATLAS-3.8.4-arm/build/..//include/contrib -DAdd_ -DF77_INTEGER=int -DStringSunStyle -DATL_OS_Linux -DATL_ARCH_ARMv7VFPNEON -DATL_NEON -DATL_GAS_ARM -DWALL -DATL_NCPU=2 -march=armv7-a -O1 -fPIC"
#define ATL_ICC "gcc"
#define ATL_F77FLAGS "-march=armv7-a -O1 -fPIC"
#define ATL_F77 "gfortran"
#define ATL_DKCVERS "gcc (GCC) 4.5.3 20110311 (prerelease)"
#define ATL_SKCVERS "gcc (GCC) 4.5.3 20110311 (prerelease)"
#define ATL_DMCVERS "gcc (GCC) 4.5.3 20110311 (prerelease)"
#define ATL_SMCVERS "gcc (GCC) 4.5.3 20110311 (prerelease)"
#define ATL_ICCVERS "gcc (GCC) 4.5.3 20110311 (prerelease)"
#define ATL_F77VERS "GNU Fortran (GCC) 4.5.3 20110311 (prerelease)"
#define ATL_SYSINFO "Linux NI-roboRIO-030498BA 3.2.35-rt52-2.0.0b4 #1 SMP PREEMPT RT Sat Apr 19 18:12:21 CDT 2014 armv7l GNU/Linux"
#define ATL_DATE    "Sun May 18 20:13:56 UTC 2014"
#define ATL_UNAM    "admin"
#define ATL_VERS    "3.8.4"

#endif
