# Instead of using -mfpu=vfp[2] we can use -mfpu=neon to make use of gcc intrinsics[1] and vectorize loops with -ftree-vectorize[3]
# [1] http://gcc.gnu.org/onlinedocs/gcc/ARM-NEON-Intrinsics.html
# [2] http://gcc.gnu.org/onlinedocs/gcc/ARM-Options.html 
# [3] https://support.codesourcery.com/GNUToolchain/kbentry29

TARGET_CC_ARCH = "-march=armv7-a -mtune=cortex-a9 -mfpu=neon -mfloat-abi=softfp"
FEED_ARCH = "armv7a"
PACKAGE_EXTRA_ARCHS += "armv4 armv4t armv5te armv6 armv7 armv7a"
BASE_PACKAGE_ARCH = "armv7a"
