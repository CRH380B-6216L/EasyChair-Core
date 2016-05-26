//
// Created by Ivan Shynkarenka on 26.05.2016.
//

#include "cppbenchmark.h"

#include "template/function.h"

const uint64_t iterations = 10000000;

BENCHMARK("Template function")
{
    uint64_t crc = 0;

    for (uint64_t i = 0; i < iterations; ++i)
        crc += CppTemplate::function(1000);

    // Update benchmark metrics
    context.metrics().AddIterations(iterations - 1);
    context.metrics().SetCustom("CRC", crc);
}

BENCHMARK_MAIN()
