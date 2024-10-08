#pragma once

#include "Metal/MTLDevice.hpp"
#include "Metal/MTLRenderPipeline.hpp"

#include "Core/Logging/Log.h"

namespace CGL::Graphics
{
    CGL_DECLARE_LOG_CATEGORY(METALPipelineHandler);

    class METALPipelineHandler
    {
    public:
        METALPipelineHandler();

        inline MTL::RenderPipelineDescriptor* GetRenderPipelineDescriptor() const { return m_rpDescriptor; }
        inline MTL::RenderPipelineState* GetRenderPipelineState() const { return m_rpState; }

        void CreateRenderPipelineState(MTL::Device* gpu_device);

    private:
        MTL::RenderPipelineDescriptor* m_rpDescriptor;
        MTL::RenderPipelineState* m_rpState;
    };
}
