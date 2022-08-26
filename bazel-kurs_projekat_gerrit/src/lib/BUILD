load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "Matematika",
    srcs = ["matematika.cc"],
    hdrs = ["matematika.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "Algoritmi",
    srcs = ["algoritmi.c"],
    hdrs = ["algoritmi.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "Nizovi",
    srcs = ["nizovi.c"],
    hdrs = ["nizovi.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "Vision",
    srcs = ["vision.cc"],
    hdrs = ["vision.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "Engine",
    srcs = ["engine.cc"],
    hdrs = ["engine.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "MockEngine",
    hdrs = ["mock_engine.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "Car",
    hdrs = ["car.h"],
    deps = ["//src/lib:Vision"],
    visibility = ["//visibility:public"],
)


cc_library(
    name = "MockVision",
    hdrs = ["mock_vision.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "MockObrada",
    hdrs = ["mock_obrada.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "Podaci",
    hdrs = ["podaci.h"],
    deps = ["//src/lib:Obrada"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "Obrada",
    srcs = ["obrada.cc"],
    hdrs = ["obrada.h"],
    visibility = ["//visibility:public"],
)








