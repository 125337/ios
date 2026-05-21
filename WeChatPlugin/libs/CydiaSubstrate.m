/**
 * CydiaSubstrate — 独立 MSHookMessageEx 实现（不依赖 libsubstrate.dylib）
 *
 * 原理：
 *   imp_implementationWithBlock 使用系统 libobjc-trampolines.dylib 的可执行内存
 *   创建 trampoline，不需要自行分配可执行页。iOS 17 兼容。
 *
 * 每次 hook 创建独立 block（捕获 sel + orig），多插件多次 hook 自动形成链式调用。
 */

#include <objc/runtime.h>

void MSHookMessageEx(Class cls, SEL sel, IMP hook, IMP *old) {
    if (!cls || !sel || !hook) return;

    Method method = class_getInstanceMethod(cls, sel);
    if (!method) return;

    // 1. 保存当前 IMP 为 orig（链上的上一环，可能是微信原版或锤子钩子）
    IMP orig = method_getImplementation(method);
    if (old) *old = orig;

    // 2. 创建 block trampoline
    //    利用系统 libobjc-trampolines.dylib 的合法可执行内存（dyld 加载的 dylib）
    //    不需要 vm_allocate/vm_protect，iOS 17 兼容
    //    block 捕获 sel, orig, hook，调用时传递 self
    id (^trampBlock)(id) = ^id(id self) {
        return ((id (*)(id, SEL, IMP))hook)(self, sel, orig);
    };

    // 3. imp_implementationWithBlock 内部 Block_copy + 创建 trampoline IMP
    IMP trampoline = imp_implementationWithBlock(trampBlock);

    // 4. 替换 IMP
    method_setImplementation(method, trampoline);
}