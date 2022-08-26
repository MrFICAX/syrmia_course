load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "matematika_test",
    srcs = ["matematika_test.cc"],
    deps = [
        "//src/lib:Matematika",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "algoritmi_test",
    srcs = ["algoritmi_test.cc"],
    deps = [
        "//src/lib:Algoritmi",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "nizovi_test",
    srcs = ["nizovi_test.cc"],
    deps = [
        "//src/lib:Nizovi",
        "@com_google_googletest//:gtest_main",
    ],
)


cc_test(
    name = "mock_car_test",
    srcs = ["mock_car_test.cc"],
    deps = [
        "//src/lib:Vision",
        "//src/lib:Engine",
        "//src/lib:MockVision",
        "//src/lib:MockEngine",
        "//src/lib:Car",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "mock_podaci_test",
    srcs = ["mock_podaci_test.cc"],
    deps = [
        "//src/lib:Obrada",
        "//src/lib:Podaci",
        "//src/lib:MockObrada",
        "@com_google_googletest//:gtest_main",
    ],
)


cc_test(
    name = "mock_turtle_test",
    srcs = ["mock_turtle_test.cc"],
    deps = [
        "//src/lib:Turtle",
        "//src/lib:MockTurtle",
        "//src/lib:Painter",
        "@com_google_googletest//:gtest_main",
    ],
)


cc_test(
    name = "cpplib_test",
    srcs = ["cpplib_test.cc"],
    deps = [
        "//src/lib:CPPLib",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "sort_test",
    srcs = ["sort_test.cc"],
    deps = [
        "//src/lib/sort:SortLib",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "search_test",
    srcs = ["search_test.cc"],
    deps = [
        "//src/lib/search:SearchLib",
        "@com_google_googletest//:gtest_main",
    ],
)
