// SPDX-FileCopyrightText: 2019-2022 Connor McLaughlin <stenzek@gmail.com>
// SPDX-FileCopyrightText: 2023 Graham Markall <hello@big-grey.co.uk>
// SPDX-License-Identifier: (GPL-3.0 OR CC-BY-NC-ND-4.0)
#include "common/align.h"
#include "common/assert.h"
#include "common/log.h"
#include "cpu_core.h"
#include "cpu_core_private.h"
#include "cpu_recompiler_code_generator.h"
#include "cpu_recompiler_thunks.h"
#include "settings.h"
#include "timing_event.h"
Log_SetChannel(CPU::Recompiler);

namespace CPU::Recompiler {

CodeGenerator::CodeGenerator(JitCodeBuffer* code_buffer) 
  : m_register_cache(*this) {
  abort();
}


CodeGenerator::~CodeGenerator() {
  abort();
}


const char* CodeGenerator::GetHostRegName(HostReg reg, RegSize size) {
  abort();
}


void CodeGenerator::AlignCodeBuffer(JitCodeBuffer* code_buffer) {
  abort();
}


bool CodeGenerator::BackpatchLoadStore(const LoadStoreBackpatchInfo& lbi) {
  abort();
}

void CodeGenerator::BackpatchBranch(void* pc, u32 pc_size, void* target) {
  abort();
}

void CodeGenerator::BackpatchReturn(void* pc, u32 pc_size) {
  abort();
}

CodeCache::DispatcherFunction CodeGenerator::CompileDispatcher() {
  abort();
}

CodeCache::SingleBlockDispatcherFunction CodeGenerator::CompileSingleBlockDispatcher() {
  abort();
}


//////////////////////////////////////////////////////////////////////////
// Code Generation
//////////////////////////////////////////////////////////////////////////
void CodeGenerator::EmitBeginBlock(bool allocate_registers) {
  abort();
}

void CodeGenerator::EmitEndBlock(bool free_registers, bool emit_return) {
  abort();
}

void CodeGenerator::EmitExceptionExit() {
  abort();
}

void CodeGenerator::EmitExceptionExitOnBool(const Value& value) {
  abort();
}

void CodeGenerator::FinalizeBlock(CodeBlock::HostCodePointer* out_host_code, u32* out_host_code_size) {
  abort();
}


void CodeGenerator::EmitSignExtend(HostReg to_reg, RegSize to_size, HostReg from_reg, RegSize from_size) {
  abort();
}

void CodeGenerator::EmitZeroExtend(HostReg to_reg, RegSize to_size, HostReg from_reg, RegSize from_size) {
  abort();
}

void CodeGenerator::EmitCopyValue(HostReg to_reg, const Value& value) {
  abort();
}

void CodeGenerator::EmitAdd(HostReg to_reg, HostReg from_reg, const Value& value, bool set_flags) {
  abort();
}

void CodeGenerator::EmitSub(HostReg to_reg, HostReg from_reg, const Value& value, bool set_flags) {
  abort();
}

void CodeGenerator::EmitCmp(HostReg to_reg, const Value& value) {
  abort();
}

void CodeGenerator::EmitMul(HostReg to_reg_hi, HostReg to_reg_lo, const Value& lhs, const Value& rhs, bool signed_multiply) {
  abort();
}

void CodeGenerator::EmitDiv(HostReg to_reg_quotient, HostReg to_reg_remainder, HostReg num, HostReg denom, RegSize size,
                            bool signed_divide) {
  abort();
}

void CodeGenerator::EmitInc(HostReg to_reg, RegSize size) {
  abort();
}

void CodeGenerator::EmitDec(HostReg to_reg, RegSize size) {
  abort();
}

void CodeGenerator::EmitShl(HostReg to_reg, HostReg from_reg, RegSize size, const Value& amount_value,
                            bool assume_amount_masked) {
  abort();
}

void CodeGenerator::EmitShr(HostReg to_reg, HostReg from_reg, RegSize size, const Value& amount_value,
                            bool assume_amount_masked) {
  abort();
}

void CodeGenerator::EmitSar(HostReg to_reg, HostReg from_reg, RegSize size, const Value& amount_value,
                            bool assume_amount_masked) {
  abort();
}

void CodeGenerator::EmitAnd(HostReg to_reg, HostReg from_reg, const Value& value) {
  abort();
}

void CodeGenerator::EmitOr(HostReg to_reg, HostReg from_reg, const Value& value) {
  abort();
}

void CodeGenerator::EmitXor(HostReg to_reg, HostReg from_reg, const Value& value) {
  abort();
}

void CodeGenerator::EmitTest(HostReg to_reg, const Value& value) {
  abort();
}

void CodeGenerator::EmitNot(HostReg to_reg, RegSize size) {
  abort();
}

void CodeGenerator::EmitSetConditionResult(HostReg to_reg, RegSize to_size, Condition condition) {
  abort();
}

void CodeGenerator::EmitFlushInterpreterLoadDelay() {
  abort();
}

void CodeGenerator::EmitMoveNextInterpreterLoadDelay() {
  abort();
}

void CodeGenerator::EmitCancelInterpreterLoadDelayForReg(Reg reg) {
  abort();
}

void CodeGenerator::EmitICacheCheckAndUpdate() {
  abort();
}

void CodeGenerator::EmitStallUntilGTEComplete() {
  abort();
}

void CodeGenerator::EmitLoadCPUStructField(HostReg host_reg, RegSize size, u32 offset) {
  abort();
}

void CodeGenerator::EmitStoreCPUStructField(u32 offset, const Value& value) {
  abort();
}

void CodeGenerator::EmitAddCPUStructField(u32 offset, const Value& value) {
  abort();
}

void CodeGenerator::EmitLoadGlobal(HostReg host_reg, RegSize size, const void* ptr) {
  abort();
}

void CodeGenerator::EmitStoreGlobal(void* ptr, const Value& value) {
  abort();
}

void CodeGenerator::EmitLoadGlobalAddress(HostReg host_reg, const void* ptr) {
  abort();
}


// Automatically generates an exception handler.
Value CodeGenerator::GetFastmemLoadBase() {
  abort();
}

Value CodeGenerator::GetFastmemStoreBase() {
  abort();
}

void CodeGenerator::EmitLoadGuestRAMFastmem(const Value& address, RegSize size, Value& result) {
  abort();
}

void CodeGenerator::EmitLoadGuestMemoryFastmem(const CodeBlockInstruction& cbi, const Value& address, RegSize size, Value& result) {
  abort();
}

void CodeGenerator::EmitLoadGuestMemorySlowmem(const CodeBlockInstruction& cbi, const Value& address, RegSize size, Value& result,
                                               bool in_far_code) {
  abort();
}

void CodeGenerator::EmitStoreGuestMemoryFastmem(const CodeBlockInstruction& cbi, const Value& address, RegSize size,
                                                const Value& value) {
  abort();
}

void CodeGenerator::EmitStoreGuestMemorySlowmem(const CodeBlockInstruction& cbi, const Value& address, RegSize size,
                                                const Value& value, bool in_far_code) {
  abort();
}

void CodeGenerator::EmitUpdateFastmemBase() {
  abort();
}


// Unconditional branch to pointer. May allocate a scratch register.
void CodeGenerator::EmitBranch(const void* address, bool allow_scratch) {
  abort();
}

void CodeGenerator::EmitBranch(LabelType* label) {
  abort();
}


// Branching, generates two paths.
void CodeGenerator::EmitConditionalBranch(Condition condition, bool invert, HostReg value, RegSize size, LabelType* label) {
  abort();
}

void CodeGenerator::EmitConditionalBranch(Condition condition, bool invert, HostReg lhs, const Value& rhs, LabelType* label) {
  abort();
}

void CodeGenerator::EmitConditionalBranch(Condition condition, bool invert, LabelType* label) {
  abort();
}

void CodeGenerator::EmitBranchIfBitClear(HostReg reg, RegSize size, u8 bit, LabelType* label) {
  abort();
}

void CodeGenerator::EmitBranchIfBitSet(HostReg reg, RegSize size, u8 bit, LabelType* label) {
  abort();
}

void CodeGenerator::EmitBindLabel(LabelType* label) {
  abort();
}


u32 CodeGenerator::PrepareStackForCall() {
  abort();
}

void CodeGenerator::RestoreStackAfterCall(u32 adjust_size) {
  abort();
}


void CodeGenerator::EmitCall(const void* ptr) {
  abort();
}

void CodeGenerator::EmitFunctionCallPtr(Value* return_value, const void* ptr) {
  abort();
}

void CodeGenerator::EmitFunctionCallPtr(Value* return_value, const void* ptr, const Value& arg1) {
  abort();
}

void CodeGenerator::EmitFunctionCallPtr(Value* return_value, const void* ptr, const Value& arg1, const Value& arg2) {
  abort();
}

void CodeGenerator::EmitFunctionCallPtr(Value* return_value, const void* ptr, const Value& arg1, const Value& arg2,
                                        const Value& arg3) {
  abort();
}

void CodeGenerator::EmitFunctionCallPtr(Value* return_value, const void* ptr, const Value& arg1, const Value& arg2,
                                        const Value& arg3, const Value& arg4) {
  abort();
}


// Host register saving.
void CodeGenerator::EmitPushHostReg(HostReg reg, u32 position) {
  abort();
}

void CodeGenerator::EmitPushHostRegPair(HostReg reg, HostReg reg2, u32 position) {
  abort();
}

void CodeGenerator::EmitPopHostReg(HostReg reg, u32 position) {
  abort();
}

void CodeGenerator::EmitPopHostRegPair(HostReg reg, HostReg reg2, u32 position) {
  abort();
}

// Host register setup
void CodeGenerator::InitHostRegs() {
  abort();
}

Value CodeGenerator::GetValueInHostRegister(const Value& value, bool allow_zero_register) {
  abort();
}

Value CodeGenerator::GetValueInHostOrScratchRegister(const Value& value, bool allow_zero_register) {
  abort();
}


void CodeGenerator::SwitchToFarCode() {
  abort();
}

void CodeGenerator::SwitchToNearCode() {
  abort();
}

void* CodeGenerator::GetCurrentNearCodePointer() const {
  abort();
}

void* CodeGenerator::GetCurrentFarCodePointer() const {
  abort();
}

} // namespace CPU::Recompiler

