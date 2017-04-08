// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from hello_world.djinni

#pragma once

#include "djinni_support.hpp"
#include "hello_world.hpp"

namespace djinni_generated {

class NativeHelloWorld final : ::djinni::JniInterface<::HelloWorld, NativeHelloWorld> {
public:
    using CppType = std::shared_ptr<::HelloWorld>;
    using CppOptType = std::shared_ptr<::HelloWorld>;
    using JniType = jobject;

    using Boxed = NativeHelloWorld;

    ~NativeHelloWorld();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeHelloWorld>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeHelloWorld>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeHelloWorld();
    friend ::djinni::JniClass<NativeHelloWorld>;
    friend ::djinni::JniInterface<::HelloWorld, NativeHelloWorld>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::HelloWorld
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        std::string get_hello_world(const std::string & value) override;

    private:
        friend ::djinni::JniInterface<::HelloWorld, ::djinni_generated::NativeHelloWorld>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/iswiftandroid/generated/HelloWorld") };
    const jmethodID method_getHelloWorld { ::djinni::jniGetMethodID(clazz.get(), "getHelloWorld", "(Ljava/lang/String;)Ljava/lang/String;") };
};

}  // namespace djinni_generated
