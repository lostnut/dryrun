#include <complex.h>
#include <math.h>
#include <stdbool.h>

static bool assertTrue(const int condition);
static bool assertFalse(const int condition);
static bool assertCharEquals(const char actual, const char expected);
static bool assertIntEquals(const int actual, const int expected);
static bool assertLongEquals(const long actual, const long expected);
static bool assertFloatEquals(const float actual, const float expected);
static bool assertFloatEqualsEpsilon(const float actual, const float expected,
                                     const float epislon);
static bool assertDoubleEquals(const int actual, const int expected);
static bool assertDoubleEqualsEpsilon(const double actual,
                                      const double expected,
                                      const double epsilon);
static bool assertFloatComplexEquals(const float complex actual,
                                     const float complex expected);
static bool assertDoubleComplexEquals(const double complex actual,
                                      const double complex expected);
static bool assertIntArrayEquals(const int *actual, const int *expected,
                                 const int length);
static bool assertLongArrayEquals(const long *actual, const long *expected,
                                  const int length);
static bool assertFloatArrayEquals(const float *actual, const float *expected,
                                   const int length);
static bool assertDoubleArrayEquals(const double *actual, const float *expected,
                                    const int length);

