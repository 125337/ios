/**
 * CydiaSubstrate — 轻量 method_setImplementation 包装
 *
 * 不使用 trampoline、不分配可执行内存。仅：
 *   1. 保存当前 IMP 到 *old
 *   2. method_setImplementation 替换为 hook
 *
 * 函数签名保持与 Substrate 兼容，方便现有代码迁移。
 * 静态 C 函数编译在 dylib __TEXT 段，本身就是可执行的，无需 trampoline。
 */

#include <objc/runtime.h>

void MSHookMessageEx(Class cls, SEL sel, IMP hook, IMP *old) {
    if (!cls || !sel || !hook) return;
    Method method = class_getInstanceMethod(cls, sel);
    if (!method) return;
    IMP orig = method_getImplementation(method);
    if (old) *old = orig;
    method_setImplementation(method, hook);
}