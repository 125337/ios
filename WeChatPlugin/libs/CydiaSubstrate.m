#include <objc/runtime.h>
#include <objc/message.h>

void MSHookMessageEx(Class cls, SEL sel, IMP replacement, IMP *original) {
    if (!cls || !sel || !replacement) return;

    Method m = class_getInstanceMethod(cls, sel);
    if (!m) return;

    if (original) *original = method_getImplementation(m);
    method_setImplementation(m, replacement);
}