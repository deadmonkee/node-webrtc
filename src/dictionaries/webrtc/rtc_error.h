#pragma once

#include "src/converters.h"

namespace webrtc { class RTCError; }

namespace node_webrtc {

DECLARE_TO_JS(webrtc::RTCError*)
DECLARE_TO_JS(const webrtc::RTCError*)

}  // namespace node_webrtc