/*
 * Copyright 2015 Rockchip Electronics Co. LTD
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

#ifndef __H264E_SEI_H__
#define __H264E_SEI_H__

#include "mpp_packet.h"

#ifdef __cplusplus
extern "C" {
#endif

MPP_RET h264e_sei_recovery_point_to_packet(MppPacket packet, RK_S32 *len, RK_U32 recovery_frame_cnt);
MPP_RET h264e_sei_to_packet(MppPacket packet, RK_S32 *len, RK_S32 type,
                            RK_U8 uuid[16], const void *data, RK_S32 size);

#ifdef __cplusplus
}
#endif

#endif /* __H264E_SEI_H__ */
