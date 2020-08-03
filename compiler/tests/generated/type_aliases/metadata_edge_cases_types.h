
#pragma once

#include <bond/core/bond_version.h>

#if BOND_VERSION < 0x0902
#error This file was generated by a newer version of the Bond compiler and is incompatible with your version of the Bond library.
#endif

#if BOND_MIN_CODEGEN_VERSION > 0x0c10
#error This file was generated by an older version of the Bond compiler and is incompatible with your version of the Bond library.
#endif

#include <bond/core/config.h>
#include <bond/core/containers.h>



namespace tests
{
    
    struct Foo
    {
        using allocator_type = arena;

        int32_t id;
        int32_t metadata;
        int32_t id_type;
        int32_t x;
        int32_t x_type;
        
        Foo()
          : id(),
            metadata(),
            id_type(),
            x(),
            x_type()
        {
        }

        
        // Compiler generated copy ctor OK
        Foo(const Foo&) = default;
        
        Foo(Foo&&) = default;
        
        explicit
        Foo(const arena&)
          : id(),
            metadata(),
            id_type(),
            x(),
            x_type()
        {
        }
        
        
        // Compiler generated operator= OK
        Foo& operator=(const Foo&) = default;
        Foo& operator=(Foo&&) = default;

        bool operator==(const Foo& other) const
        {
            return true
                && (id == other.id)
                && (metadata == other.metadata)
                && (id_type == other.id_type)
                && (x == other.x)
                && (x_type == other.x_type);
        }

        bool operator!=(const Foo& other) const
        {
            return !(*this == other);
        }

        void swap(Foo& other)
        {
            using std::swap;
            swap(id, other.id);
            swap(metadata, other.metadata);
            swap(id_type, other.id_type);
            swap(x, other.x);
            swap(x_type, other.x_type);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(::tests::Foo& left, ::tests::Foo& right)
    {
        left.swap(right);
    }
} // namespace tests
