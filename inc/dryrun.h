#include <complex.h>
#include <math.h>
#include <stdbool.h>

bool assertTrue(const int condition);
bool assertFalse(const int condition);
bool assertCharEquals(const char actual, const char expected);
bool assertIntEquals(const int actual, const int expected);
bool assertLongEquals(const long actual, const long expected);
bool assertFloatEquals(const float actual, const float expected);
bool assertFloatEqualsEpsilon(const float actual, const float expected,
                              const float epislon);
bool assertDoubleEquals(const int actual, const int expected);
bool assertDoubleEqualsEpsilon(const double actual, const double expected,
                               const double epsilon);
bool assertFloatComplexEquals(const float complex actual,
                              const float complex expected);
bool assertDoubleComplexEquals(const double complex actual,
                               const double complex expected);
bool assertIntArrayEquals(const int *actual, const int *expected,
                          const int length);
bool assertLongArrayEquals(const long *actual, const long *expected,
                           const int length);
bool assertFloatArrayEquals(const float *actual, const float *expected,
                            const int length);
bool assertDoubleArrayEquals(const double *actual, const float *expected,
                             const int length);

