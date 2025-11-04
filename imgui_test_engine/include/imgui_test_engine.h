//
//  imgui_test_engine.h
//  Umbrella header to expose the Dear ImGui test engine to SwiftPM clients.
//
//  This simply forwards to the original upstream headers that live alongside
//  the C++ sources under the same target directory. Defining this umbrella
//  avoids having to copy the upstream layout while satisfying SwiftPM's
//  expectation that public headers reside in a dedicated include directory.
//

#pragma once

// Core engine types
#include "../imgui_te_engine.h"
#include "../imgui_te_context.h"
#include "../imgui_te_utils.h"

// Optional subsystems made available to callers that want the full feature set
#include "../imgui_te_perftool.h"
#include "../imgui_te_exporters.h"
#include "../imgui_te_coroutine.h"
#include "../imgui_te_ui.h"
#include "../imgui_capture_tool.h"

// Configuration overrides expected by the engine
#include "../imgui_te_imconfig.h"
