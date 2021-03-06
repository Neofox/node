// Copyright 2017 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "test/cctest/setup-isolate-for-tests.h"

#include "src/interpreter/setup-interpreter.h"

namespace v8 {
namespace internal {

void SetupIsolateDelegateForTests::SetupBuiltins(Isolate* isolate,
                                                 bool create_heap_objects) {
  if (create_heap_objects) {
    SetupBuiltinsInternal(isolate);
  }
}

void SetupIsolateDelegateForTests::SetupInterpreter(
    interpreter::Interpreter* interpreter, bool create_heap_objects) {
  if (create_heap_objects) {
    interpreter::SetupInterpreter::InstallBytecodeHandlers(interpreter);
  }
}

}  // namespace internal
}  // namespace v8
