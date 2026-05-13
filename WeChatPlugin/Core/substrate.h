#ifndef SUBSTRATE_H_
#define SUBSTRATE_H_

#include <objc/runtime.h>
#include <objc/message.h>
#include <TargetConditionals.h>

#if defined(__cplusplus)
extern "C" {
#endif

#define MSHookMessageEx _MSHookMessageEx
void _MSHookMessageEx(Class _class, SEL sel, IMP replacement, IMP *result);

#if defined(__cplusplus)
}
#endif

#endif