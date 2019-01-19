﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.000000.0
#ifndef WINRT_Component_Fast_0_H
#define WINRT_Component_Fast_0_H
namespace winrt::Component
{
    struct INotExclusive;
}
namespace winrt::Component::Fast
{
    struct IFastClass;
    struct IFastClass2;
    struct IFastClassStatics;
    struct ISlowClass;
    struct ISlowClass2;
    struct ISlowClassStatics;
    struct FastClass;
    struct SlowClass;
}
namespace winrt::impl
{
    template <> struct category<Component::Fast::IFastClass>
    {
        using type = interface_category;
    };
    template <> struct category<Component::Fast::IFastClass2>
    {
        using type = interface_category;
    };
    template <> struct category<Component::Fast::IFastClassStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Component::Fast::ISlowClass>
    {
        using type = interface_category;
    };
    template <> struct category<Component::Fast::ISlowClass2>
    {
        using type = interface_category;
    };
    template <> struct category<Component::Fast::ISlowClassStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Component::Fast::FastClass>
    {
        using type = class_category;
    };
    template <> struct category<Component::Fast::SlowClass>
    {
        using type = class_category;
    };
    template <> struct name<Component::Fast::IFastClass>
    {
        static constexpr auto & value{ L"Component.Fast.IFastClass" };
    };
    template <> struct name<Component::Fast::IFastClass2>
    {
        static constexpr auto & value{ L"Component.Fast.IFastClass2" };
    };
    template <> struct name<Component::Fast::IFastClassStatics>
    {
        static constexpr auto & value{ L"Component.Fast.IFastClassStatics" };
    };
    template <> struct name<Component::Fast::ISlowClass>
    {
        static constexpr auto & value{ L"Component.Fast.ISlowClass" };
    };
    template <> struct name<Component::Fast::ISlowClass2>
    {
        static constexpr auto & value{ L"Component.Fast.ISlowClass2" };
    };
    template <> struct name<Component::Fast::ISlowClassStatics>
    {
        static constexpr auto & value{ L"Component.Fast.ISlowClassStatics" };
    };
    template <> struct name<Component::Fast::FastClass>
    {
        static constexpr auto & value{ L"Component.Fast.FastClass" };
    };
    template <> struct name<Component::Fast::SlowClass>
    {
        static constexpr auto & value{ L"Component.Fast.SlowClass" };
    };
    template <> struct guid_storage<Component::Fast::IFastClass>
    {
        static constexpr guid value{ 0x8573AFB3,0xE808,0x5271,{ 0x8C,0x72,0x2A,0x69,0xE8,0x98,0x4C,0x99 } };
    };
    template <> struct guid_storage<Component::Fast::IFastClass2>
    {
        static constexpr guid value{ 0xD966B113,0x3548,0x591C,{ 0xB9,0x06,0x70,0x65,0x79,0xC9,0x40,0xF5 } };
    };
    template <> struct guid_storage<Component::Fast::IFastClassStatics>
    {
        static constexpr guid value{ 0x43F9837F,0x068F,0x519A,{ 0xAB,0xE3,0x1D,0x99,0x7C,0x58,0xD2,0xB5 } };
    };
    template <> struct guid_storage<Component::Fast::ISlowClass>
    {
        static constexpr guid value{ 0x28C3CF74,0xC30C,0x5957,{ 0x8C,0xD6,0xB8,0x78,0x9F,0x42,0x22,0xC2 } };
    };
    template <> struct guid_storage<Component::Fast::ISlowClass2>
    {
        static constexpr guid value{ 0x258FB196,0xDC8C,0x5282,{ 0xBB,0x44,0xAB,0x54,0xDB,0x83,0xF2,0xE1 } };
    };
    template <> struct guid_storage<Component::Fast::ISlowClassStatics>
    {
        static constexpr guid value{ 0x113D70EF,0x091B,0x558F,{ 0x9F,0x4C,0x9D,0x78,0x90,0xD7,0x45,0xB4 } };
    };
    template <> struct fast_version<Component::Fast::FastClass>
    {
        using type = Component::Fast::IFastClass2;
    };
    template <> struct default_interface<Component::Fast::FastClass>
    {
        using type = fast_interface<Component::Fast::FastClass>;
    };
    template <> struct default_interface<Component::Fast::SlowClass>
    {
        using type = Component::Fast::ISlowClass;
    };
    template <> struct abi<Component::Fast::IFastClass>
    {
        struct type : inspectable_abi
        {
            virtual int32_t WINRT_CALL First(void**) noexcept = 0;
            virtual int32_t WINRT_CALL Second(void**) noexcept = 0;
        };
    };
    template <> struct abi<Component::Fast::IFastClass2>
    {
        struct type : inspectable_abi
        {
            virtual int32_t WINRT_CALL Third(void**) noexcept = 0;
            virtual int32_t WINRT_CALL Fourth(void**) noexcept = 0;
        };
    };
    template <> struct abi<Component::Fast::IFastClassStatics>
    {
        struct type : inspectable_abi
        {
            virtual int32_t WINRT_CALL StaticMethod(void**) noexcept = 0;
        };
    };
    template <> struct abi<Component::Fast::ISlowClass>
    {
        struct type : inspectable_abi
        {
            virtual int32_t WINRT_CALL First(void**) noexcept = 0;
            virtual int32_t WINRT_CALL Second(void**) noexcept = 0;
        };
    };
    template <> struct abi<Component::Fast::ISlowClass2>
    {
        struct type : inspectable_abi
        {
            virtual int32_t WINRT_CALL Third(void**) noexcept = 0;
            virtual int32_t WINRT_CALL Fourth(void**) noexcept = 0;
        };
    };
    template <> struct abi<Component::Fast::ISlowClassStatics>
    {
        struct type : inspectable_abi
        {
            virtual int32_t WINRT_CALL StaticMethod(void**) noexcept = 0;
        };
    };
    template <> struct abi<fast_interface<Component::Fast::FastClass>>
    {
        struct type : inspectable_abi
        {
            virtual int32_t WINRT_CALL First(void**) noexcept = 0;
            virtual int32_t WINRT_CALL Second(void**) noexcept = 0;
            virtual int32_t WINRT_CALL Third(void**) noexcept = 0;
            virtual int32_t WINRT_CALL Fourth(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Component_Fast_IFastClass
    {
        hstring First() const;
        hstring Second() const;
    };
    template <> struct consume<Component::Fast::IFastClass>
    {
        template <typename D> using type = consume_Component_Fast_IFastClass<D>;
    };
    template <typename D>
    struct consume_Component_Fast_IFastClass2
    {
        hstring Third() const;
        hstring Fourth() const;
    };
    template <> struct consume<Component::Fast::IFastClass2>
    {
        template <typename D> using type = consume_Component_Fast_IFastClass2<D>;
    };
    template <typename D>
    struct consume_Component_Fast_IFastClassStatics
    {
        hstring StaticMethod() const;
    };
    template <> struct consume<Component::Fast::IFastClassStatics>
    {
        template <typename D> using type = consume_Component_Fast_IFastClassStatics<D>;
    };
    template <typename D>
    struct consume_Component_Fast_ISlowClass
    {
        hstring First() const;
        hstring Second() const;
    };
    template <> struct consume<Component::Fast::ISlowClass>
    {
        template <typename D> using type = consume_Component_Fast_ISlowClass<D>;
    };
    template <typename D>
    struct consume_Component_Fast_ISlowClass2
    {
        hstring Third() const;
        hstring Fourth() const;
    };
    template <> struct consume<Component::Fast::ISlowClass2>
    {
        template <typename D> using type = consume_Component_Fast_ISlowClass2<D>;
    };
    template <typename D>
    struct consume_Component_Fast_ISlowClassStatics
    {
        hstring StaticMethod() const;
    };
    template <> struct consume<Component::Fast::ISlowClassStatics>
    {
        template <typename D> using type = consume_Component_Fast_ISlowClassStatics<D>;
    };
}
#endif
