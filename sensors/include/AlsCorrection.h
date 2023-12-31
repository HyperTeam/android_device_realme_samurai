/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <aidl/vendor/oplus/hardware/syshelper/IALSHelper.h>
#include <android/hardware/sensors/2.1/types.h>

using aidl::vendor::oplus::hardware::syshelper::IALSHelper;

namespace android {
namespace hardware {
namespace sensors {
namespace V2_1 {
namespace implementation {

static constexpr int SENSOR_TYPE_WISE_LIGHT = 33171027;

class AlsCorrection {
  public:
    static void init();
    static void process(Event& event);
};

}  // namespace implementation
}  // namespace V2_1
}  // namespace sensors
}  // namespace hardware
}  // namespace android
