#include "dryrun.h"

bool assertTrue(const int condition)
{
        if (condition) {
                return true;
        } else {
                return false;
        }
}

bool assertFalse(const int condition)
{
        if (condition) {
                return false;
        } else {
                return true;
        }
}

bool assertCharEquals(const char actual, const char expected)
{
        if (actual == expected) {
                return true;
        } else {
                return false;
        }
}

bool assertIntEquals(const int actual, const int expected)
{
        if (actual == expected) {
                return true;
        } else {
                return false;
        }
}

bool assertLongEquals(const long actual, const long expected)
{
        if (actual == expected) {
                return true;
        } else {
                return false;
        }
}

bool assertFloatEquals(const float actual, const float expected)
{
        if (actual == expected) {
                return true;
        } else {
                return false;
        }
}

bool assertFloatEqualsEpsilon(const float actual, const float expected,
                              const float epsilon)
{
        if (fabsf(actual - expected) < epsilon) {
                return true;
        } else {
                return false;
        }
}

bool assertDoubleEquals(const int actual, const int expected)
{
        if (actual == expected) {
                return true;
        } else {
                return false;
        }
}

bool assertDoubleEqualsEpsilon(const double actual, const double expected,
                               const double epsilon)
{
        if (fabs(actual - expected) < epsilon) {
                return true;
        } else {
                return false;
        }
}

bool assertFloatComplexEquals(const float complex actual,
                              const float complex expected)
{
        if (creal(actual) != creal(expected)) {
                return false;
        }
        if (cimag(actual) != cimag(expected)) {
                return false;
        }
        return true;
}

bool assertDoubleComplexEquals(const double complex actual,
                               const double complex expected)
{
        if (creal(actual) != creal(expected)) {
                return false;
        }
        if (cimag(actual) != cimag(expected)) {
                return false;
        }
        return true;
}

bool assertIntArrayEquals(const int *actual, const int *expected,
                          const int length)
{
        for (int i = 0; i < length; i++) {
                if (!assertIntEquals(actual[i], expected[i])) {
                        return false;
                }
        }
        return true;
}

bool assertLongArrayEquals(const long *actual, const long *expected,
                           const int length)
{
        for (int i = 0; i < length; i++) {
                if (!assertLongEquals(actual[i], expected[i])) {
                        return false;
                }
        }
        return true;
}

bool assertFloatArrayEquals(const float *actual, const float *expected,
                            const int length)
{
        for (int i = 0; i < length; i++) {
                if (!assertFloatEquals(actual[i], expected[i])) {
                        return false;
                }
        }
        return true;
}

bool assertDoubleArrayEquals(const double *actual, const float *expected,
                             const int length)
{
        for (int i = 0; i < length; i++) {
                if (!assertDoubleEquals(actual[i], expected[i])) {
                        return false;
                }
        }
        return true;
}
