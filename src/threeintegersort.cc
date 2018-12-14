//
// Created by luis on 12/13/18.
//
#include <cstdint>

namespace {

    void swap(int32_t &i1, int32_t &i2) {
        int32_t hold = i1;
        i1 = i2;
        i2 = hold;
    }

}

namespace edu { namespace vcccd { namespace vc { namespace csv13 {

                void sort(int32_t &i1, int32_t &i2, int32_t &i3) {
                    if (i1 > i2) {
                        swap(i1, i2);
                    }
                    if (i1 > i3) {
                        swap(i1, i3);
                    }

                    if (i2 > i3) {
                        swap(i2, i3);
                    }
                }

            }}}}
