require gdb.inc
LICENSE = "GPLv3"

PR = "${INC_PR}.2"

SRC_URI += "\
            file://gdb-6.8-fix-compile-karmic.patch"

# Work-around problems while creating libbfd.a
EXTRA_OECONF += "--enable-static"

SRC_URI[md5sum] = "67b4144db385620d7b93f7b0c26800f7"
SRC_URI[sha256sum] = "ccff6cab0e847c486d30b70bdddac4e6646bafcecaa3b63134d6e3d4d5a4b91d"
