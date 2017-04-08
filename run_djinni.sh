#! /usr/bin/env bash

base_dir=$(cd "`dirname "0"`" && pwd)
#cpp_out="$base_dir/generated-src/cpp"
jni_out="$base_dir/generated-src/jni"
#objc_out="$base_dir/generated-src/objc"
java_out="$base_dir/generated-src/java/com/iswiftandroid/generated"
java_package="com.iswiftandroid.generated"
namespace="generated"
#objc_prefix="CLIO"
djinni_file="djinni/hello_world.djinni"

#    --cpp-out $cpp_out \
#    --cpp-namespace $namespace \
#    --cpp-optional-template std::experimental::optional \
#    --cpp-optional-header "<experimental/optional>" \
#    \
#    --objc-out $objc_out \
#    --objc-type-prefix $objc_prefix \
#    \
#    --objcpp-out $objc_out \
#    \

deps/djinni/src/run \
    --java-out $java_out \
    --java-package $java_package \
    --java-nullable-annotation "org.jetbrains.annotations.Nullable" \
    --java-nonnull-annotation "org.jetbrains.annotations.NotNull" \
    --ident-java-field fooBar \
    \
    --jni-out $jni_out \
    --ident-jni-class NativeFooBar \
    --ident-jni-file NativeFooBar \
    \
    --idl $djinni_file \
    \
    --list-in-files .djinni_in_list.txt \
    --list-out-files .djinni_out_list.txt
