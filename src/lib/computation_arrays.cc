#define activeBuffers = {};

#include "../_ReferenceHeadings/VALUE_CHECKSUMS.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

enum ObjectReference
{

};

/**
 * ---
 * ...
 */
namespace ArrayConstructor
{
    /// @brief
    /// ---
    /// @todo
    ///
    ///
    ///
    ///
    const double FallbackValue[1] = {};

    /**
     *
     */
    struct ArrayBufferConfiguration
    {
        inline void IterateArrayBuffer(int *object)
        {
            const bool isArrayObjectValid = object ? true : false;
            if ((int)isArrayObjectValid != isBoolean(isArrayObjectValid))
                return;
            if (!isArrayObjectValid)
                return;
        }
    };

    /**
     * ---
     * @return `Array`
     */
    const double *CreateArray(int InitalCreationSize)
    {
        const bool hasInputtedCreationSize = (!isnan(InitalCreationSize) ? true : false);

        if ((!(isnan(InitalCreationSize))) && isfinite(InitalCreationSize))
        {
            return FallbackValue;
        }
        else
        {
            std::cout << "Array Creation Size:\t" + char(InitalCreationSize) << std::endl;
        }

        for (long long CreationIndex = 0; CreationIndex < InitalCreationSize; CreationIndex++)
        {
        }

        return FallbackValue;
    }
}
