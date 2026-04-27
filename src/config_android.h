/* NOTE: THIS VERSION IS FOR ANDROID ONLY and manually adjusted */

#pragma once
#include <va/va_version.h>

#define VA_CAT_NX(A, B) __vaDriverInit_## A ## _ ## B
#define VA_CAT(A, B) VA_CAT_NX(A, B)

#define HAVE_HYBRID_CODEC 0
#define HAVE_LOG2F 1
#define INTEL_DRIVER_MAJOR_VERSION 2
#define INTEL_DRIVER_MICRO_VERSION 0
#define INTEL_DRIVER_MINOR_VERSION 4
#define INTEL_DRIVER_PRE_VERSION 1

#define VA_DRIVER_INIT_FUNC VA_CAT(VA_MAJOR_VERSION, VA_MINOR_VERSION)
#define VERSION 2.4.0.pre1
