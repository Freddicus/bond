
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
#include <scoped_allocator>


namespace tests
{
    
    namespace _bond_enumerators
    {
    namespace Enum
    {
        enum Enum
        {
            Value1
        };
        
        inline BOND_CONSTEXPR const char* GetTypeName(enum Enum)
        {
            return "Enum";
        }

        inline BOND_CONSTEXPR const char* GetTypeName(enum Enum, const ::bond::qualified_name_tag&)
        {
            return "tests.Enum";
        }


        template <typename Map = std::map<enum Enum, std::string> >
        inline const Map& GetValueToNameMap(enum Enum, ::bond::detail::mpl::identity<Map> = {})
        {
            static const Map s_valueToNameMap
                {
                    { Value1, "Value1" }
                };
            return s_valueToNameMap;
        }

        template <typename Map = std::map<std::string, enum Enum> >
        inline const Map& GetNameToValueMap(enum Enum, ::bond::detail::mpl::identity<Map> = {})
        {
            static const Map s_nameToValueMap
                {
                    { "Value1", Value1 }
                };
            return s_nameToValueMap;
        }
        const std::string& ToString(enum Enum value);

        void FromString(const std::string& name, enum Enum& value);

        bool ToEnum(enum Enum& value, const std::string& name);

        bool FromEnum(std::string& name, enum Enum value);

    } // namespace Enum
    } // namespace _bond_enumerators

    using namespace _bond_enumerators::Enum;
    

    
    struct Foo
    {
        using allocator_type = arena;

        std::basic_string<char, std::char_traits<char>, std::scoped_allocator_adaptor<typename std::allocator_traits<arena>::template rebind_alloc<char> > > f;
        
        template <int = 0> // Workaround to avoid compilation if not used
        Foo()
        {
        }

        
        // Compiler generated copy ctor OK
        Foo(const Foo&) = default;
        
        Foo(Foo&&) = default;
        
        explicit
        Foo(const arena& allocator)
          : f(allocator)
        {
        }
        
        
        // Compiler generated operator= OK
        Foo& operator=(const Foo&) = default;
        Foo& operator=(Foo&&) = default;

        bool operator==(const Foo& other) const
        {
            return true
                && (f == other.f);
        }

        bool operator!=(const Foo& other) const
        {
            return !(*this == other);
        }

        void swap(Foo& other)
        {
            using std::swap;
            swap(f, other.f);
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
