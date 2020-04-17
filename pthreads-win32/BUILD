package(default_visibility = ["//visibility:public"])

cc_library(
    name = "pthreads-win32",
    hdrs = glob(["**/*.h"]),
    deps = [":lib"],
    strip_include_prefix = "/pthreads-win32"
)

cc_import(
    name = "lib",
    hdrs = glob(["**/*.h"]),
    shared_library = "pthreadVC2.dll",
    interface_library = "pthreadVC2.lib",

)

cc_binary(
    name = "test",
    srcs = ["test.cpp"],
    deps = [":pthreads-win32"],
    linkstatic = 0
)
