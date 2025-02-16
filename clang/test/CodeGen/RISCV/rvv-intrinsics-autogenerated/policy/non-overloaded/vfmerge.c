// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

// CHECK-RV64-LABEL: @test_vfmerge_vfm_f16mf4_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x half> @llvm.riscv.vfmerge.nxv1f16.f16.i64(<vscale x 1 x half> [[MASKEDOFF:%.*]], <vscale x 1 x half> [[OP1:%.*]], half [[OP2:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x half> [[TMP0]]
//
vfloat16mf4_t test_vfmerge_vfm_f16mf4_tu(vfloat16mf4_t maskedoff, vfloat16mf4_t op1, _Float16 op2, vbool64_t mask, size_t vl) {
  return vfmerge_vfm_f16mf4_tu(maskedoff, op1, op2, mask, vl);
}

// CHECK-RV64-LABEL: @test_vfmerge_vfm_f16mf2_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x half> @llvm.riscv.vfmerge.nxv2f16.f16.i64(<vscale x 2 x half> [[MASKEDOFF:%.*]], <vscale x 2 x half> [[OP1:%.*]], half [[OP2:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x half> [[TMP0]]
//
vfloat16mf2_t test_vfmerge_vfm_f16mf2_tu(vfloat16mf2_t maskedoff, vfloat16mf2_t op1, _Float16 op2, vbool32_t mask, size_t vl) {
  return vfmerge_vfm_f16mf2_tu(maskedoff, op1, op2, mask, vl);
}

// CHECK-RV64-LABEL: @test_vfmerge_vfm_f16m1_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x half> @llvm.riscv.vfmerge.nxv4f16.f16.i64(<vscale x 4 x half> [[MASKEDOFF:%.*]], <vscale x 4 x half> [[OP1:%.*]], half [[OP2:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x half> [[TMP0]]
//
vfloat16m1_t test_vfmerge_vfm_f16m1_tu(vfloat16m1_t maskedoff, vfloat16m1_t op1, _Float16 op2, vbool16_t mask, size_t vl) {
  return vfmerge_vfm_f16m1_tu(maskedoff, op1, op2, mask, vl);
}

// CHECK-RV64-LABEL: @test_vfmerge_vfm_f16m2_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x half> @llvm.riscv.vfmerge.nxv8f16.f16.i64(<vscale x 8 x half> [[MASKEDOFF:%.*]], <vscale x 8 x half> [[OP1:%.*]], half [[OP2:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x half> [[TMP0]]
//
vfloat16m2_t test_vfmerge_vfm_f16m2_tu(vfloat16m2_t maskedoff, vfloat16m2_t op1, _Float16 op2, vbool8_t mask, size_t vl) {
  return vfmerge_vfm_f16m2_tu(maskedoff, op1, op2, mask, vl);
}

// CHECK-RV64-LABEL: @test_vfmerge_vfm_f16m4_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x half> @llvm.riscv.vfmerge.nxv16f16.f16.i64(<vscale x 16 x half> [[MASKEDOFF:%.*]], <vscale x 16 x half> [[OP1:%.*]], half [[OP2:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x half> [[TMP0]]
//
vfloat16m4_t test_vfmerge_vfm_f16m4_tu(vfloat16m4_t maskedoff, vfloat16m4_t op1, _Float16 op2, vbool4_t mask, size_t vl) {
  return vfmerge_vfm_f16m4_tu(maskedoff, op1, op2, mask, vl);
}

// CHECK-RV64-LABEL: @test_vfmerge_vfm_f16m8_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x half> @llvm.riscv.vfmerge.nxv32f16.f16.i64(<vscale x 32 x half> [[MASKEDOFF:%.*]], <vscale x 32 x half> [[OP1:%.*]], half [[OP2:%.*]], <vscale x 32 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x half> [[TMP0]]
//
vfloat16m8_t test_vfmerge_vfm_f16m8_tu(vfloat16m8_t maskedoff, vfloat16m8_t op1, _Float16 op2, vbool2_t mask, size_t vl) {
  return vfmerge_vfm_f16m8_tu(maskedoff, op1, op2, mask, vl);
}

// CHECK-RV64-LABEL: @test_vfmerge_vfm_f32mf2_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x float> @llvm.riscv.vfmerge.nxv1f32.f32.i64(<vscale x 1 x float> [[MASKEDOFF:%.*]], <vscale x 1 x float> [[OP1:%.*]], float [[OP2:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x float> [[TMP0]]
//
vfloat32mf2_t test_vfmerge_vfm_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat32mf2_t op1, float op2, vbool64_t mask, size_t vl) {
  return vfmerge_vfm_f32mf2_tu(maskedoff, op1, op2, mask, vl);
}

// CHECK-RV64-LABEL: @test_vfmerge_vfm_f32m1_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x float> @llvm.riscv.vfmerge.nxv2f32.f32.i64(<vscale x 2 x float> [[MASKEDOFF:%.*]], <vscale x 2 x float> [[OP1:%.*]], float [[OP2:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x float> [[TMP0]]
//
vfloat32m1_t test_vfmerge_vfm_f32m1_tu(vfloat32m1_t maskedoff, vfloat32m1_t op1, float op2, vbool32_t mask, size_t vl) {
  return vfmerge_vfm_f32m1_tu(maskedoff, op1, op2, mask, vl);
}

// CHECK-RV64-LABEL: @test_vfmerge_vfm_f32m2_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.vfmerge.nxv4f32.f32.i64(<vscale x 4 x float> [[MASKEDOFF:%.*]], <vscale x 4 x float> [[OP1:%.*]], float [[OP2:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vfmerge_vfm_f32m2_tu(vfloat32m2_t maskedoff, vfloat32m2_t op1, float op2, vbool16_t mask, size_t vl) {
  return vfmerge_vfm_f32m2_tu(maskedoff, op1, op2, mask, vl);
}

// CHECK-RV64-LABEL: @test_vfmerge_vfm_f32m4_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.vfmerge.nxv8f32.f32.i64(<vscale x 8 x float> [[MASKEDOFF:%.*]], <vscale x 8 x float> [[OP1:%.*]], float [[OP2:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vfmerge_vfm_f32m4_tu(vfloat32m4_t maskedoff, vfloat32m4_t op1, float op2, vbool8_t mask, size_t vl) {
  return vfmerge_vfm_f32m4_tu(maskedoff, op1, op2, mask, vl);
}

// CHECK-RV64-LABEL: @test_vfmerge_vfm_f32m8_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.vfmerge.nxv16f32.f32.i64(<vscale x 16 x float> [[MASKEDOFF:%.*]], <vscale x 16 x float> [[OP1:%.*]], float [[OP2:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vfmerge_vfm_f32m8_tu(vfloat32m8_t maskedoff, vfloat32m8_t op1, float op2, vbool4_t mask, size_t vl) {
  return vfmerge_vfm_f32m8_tu(maskedoff, op1, op2, mask, vl);
}

// CHECK-RV64-LABEL: @test_vfmerge_vfm_f64m1_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfmerge.nxv1f64.f64.i64(<vscale x 1 x double> [[MASKEDOFF:%.*]], <vscale x 1 x double> [[OP1:%.*]], double [[OP2:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vfmerge_vfm_f64m1_tu(vfloat64m1_t maskedoff, vfloat64m1_t op1, double op2, vbool64_t mask, size_t vl) {
  return vfmerge_vfm_f64m1_tu(maskedoff, op1, op2, mask, vl);
}

// CHECK-RV64-LABEL: @test_vfmerge_vfm_f64m2_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x double> @llvm.riscv.vfmerge.nxv2f64.f64.i64(<vscale x 2 x double> [[MASKEDOFF:%.*]], <vscale x 2 x double> [[OP1:%.*]], double [[OP2:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
vfloat64m2_t test_vfmerge_vfm_f64m2_tu(vfloat64m2_t maskedoff, vfloat64m2_t op1, double op2, vbool32_t mask, size_t vl) {
  return vfmerge_vfm_f64m2_tu(maskedoff, op1, op2, mask, vl);
}

// CHECK-RV64-LABEL: @test_vfmerge_vfm_f64m4_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x double> @llvm.riscv.vfmerge.nxv4f64.f64.i64(<vscale x 4 x double> [[MASKEDOFF:%.*]], <vscale x 4 x double> [[OP1:%.*]], double [[OP2:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x double> [[TMP0]]
//
vfloat64m4_t test_vfmerge_vfm_f64m4_tu(vfloat64m4_t maskedoff, vfloat64m4_t op1, double op2, vbool16_t mask, size_t vl) {
  return vfmerge_vfm_f64m4_tu(maskedoff, op1, op2, mask, vl);
}

// CHECK-RV64-LABEL: @test_vfmerge_vfm_f64m8_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x double> @llvm.riscv.vfmerge.nxv8f64.f64.i64(<vscale x 8 x double> [[MASKEDOFF:%.*]], <vscale x 8 x double> [[OP1:%.*]], double [[OP2:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x double> [[TMP0]]
//
vfloat64m8_t test_vfmerge_vfm_f64m8_tu(vfloat64m8_t maskedoff, vfloat64m8_t op1, double op2, vbool8_t mask, size_t vl) {
  return vfmerge_vfm_f64m8_tu(maskedoff, op1, op2, mask, vl);
}

