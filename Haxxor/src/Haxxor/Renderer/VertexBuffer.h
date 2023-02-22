#pragma once

#include "Haxxor/Core/Common.h"

namespace Haxxor {
    class HXAPI VertexBuffer {
    public:
        virtual ~VertexBuffer() {}

        virtual void Enable() = 0;
        virtual void Disable() = 0;
        virtual uint32_t GetRendererID() = 0;
        virtual void SetData(uint32_t count, float* data);

    public:
        static Ref<VertexBuffer> Create(uint32_t count, float* data);
    };
}