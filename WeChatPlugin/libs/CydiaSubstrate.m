/**
 * CydiaSubstrate — 独立ARM64蹦床实现（不依赖系统libsubstrate.dylib）
 *
 * 原理：
 *   1. vm_allocate 分配虚拟内存 → 写入ARM64蹦床代码 → vm_protect设为可执行
 *   2. 每次hook创建独立蹦床：保存当前IMP为orig，蹦床调用 hook(self, _cmd, orig)
 *   3. 多插件多次hook自动形成链式调用（每个蹦床指向上一个IMP）
 *
 * 修复 iOS 17 兼容性：使用 vm_allocate/vm_protect 代替 mmap/mprotect
 */

#include <mach/mach.h>
#include <mach/vm_map.h>
#include <string.h>
#include <objc/runtime.h>

// ARM64蹦床模板（36字节代码 + 4字节填充 + 16字节数据 = 56字节）
// hook函数签名：id hook(id self, SEL _cmd, IMP orig)
static const uint32_t kJokerTrampolineTemplate[9] = {
    0xa9bf7bfd,  // 00: stp x29, x30, [sp, #-16]!
    0x910003fd,  // 04: mov x29, sp
    0x10000050,  // 08: adr x16, +32  → 指向orig数据(PC+32→8+32=40)
    0xf9400202,  // 0c: ldr x2, [x16]  → x2 = orig IMP
    0x10000050,  // 10: adr x16, +32  → 指向hook数据(PC+32→16+32=48)
    0xf9400203,  // 14: ldr x3, [x16]  → x3 = hook函数指针
    0xd63f0060,  // 18: blr x3          → hook(self=x0, _cmd=x1, orig=x2)
    0xa8c17bfd,  // 1c: ldp x29, x30, [sp], #16
    0xd65f03c0,  // 20: ret              → 返回hook的返回值(x0)
};
// 蹦床总大小: 36(code) + 4(pad) + 8(orig_ptr) + 8(hook_ptr) = 56

void MSHookMessageEx(Class cls, SEL sel, IMP hook, IMP *old) {
    if (!cls || !sel || !hook) return;

    Method method = class_getInstanceMethod(cls, sel);
    if (!method) return;

    // 1. 保存当前IMP
    IMP orig = method_getImplementation(method);
    if (old) *old = orig;

    // 2. 分配虚拟内存（vm_allocate比mmap更底层，绕过iOS 17的mmap限制）
    vm_size_t pageSize = vm_page_size;
    vm_address_t page = 0;
    kern_return_t kr = vm_allocate(mach_task_self_, &page, pageSize, VM_FLAGS_ANYWHERE);
    if (kr != KERN_SUCCESS) {
        method_setImplementation(method, hook);
        return;
    }

    // 3. 写入蹦床代码
    vm_protect(mach_task_self_, page, pageSize, 0, VM_PROT_READ | VM_PROT_WRITE);

    memcpy((void *)page, kJokerTrampolineTemplate, sizeof(kJokerTrampolineTemplate));
    memset((void *)(page + 36), 0, 4);                    // 4字节填充
    memcpy((void *)(page + 40), &orig, sizeof(IMP));      // orig指针
    memcpy((void *)(page + 48), &hook, sizeof(IMP));      // hook指针

    // 4. 设为可执行（只读+执行，去掉写权限）
    kr = vm_protect(mach_task_self_, page, pageSize, 0, VM_PROT_READ | VM_PROT_EXECUTE);
    if (kr != KERN_SUCCESS) {
        vm_deallocate(mach_task_self_, page, pageSize);
        method_setImplementation(method, hook);
        return;
    }

    // 5. 替换IMP为蹦床地址
    method_setImplementation(method, (IMP)page);
}