require qt4-embedded.inc

PR = "${INC_PR}.2"

QT_CONFIG_FLAGS_append_armv6 = " -no-neon "

require qt-${PV}.inc
