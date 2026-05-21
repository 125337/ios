/**
 * 真正的 ARM64 MSHookMessageEx 实现 — 蹦床(Trampoline) 版
 * 
 * 原理：每次hook分配一页可执行内存，写入ARM64蹦床代码+两个指针：
 *   [0x00-0x23]: 蹦床汇编代码（保存栈帧→加载orig→加载hook→调用hook→返回）
 *   [0x28-0x2f]: orig IMP 指针（上一个IMP，链中的下一环）
 *   [0x30-0x37]: hook 函数指针
 * 
 * 蹦床调用的 hook 函数签名：id hook(id self, SEL _cmd, IMP orig)
 * hook 内部调用 orig(self, _cmd) 获取原链结果，再添加自己的按钮。
 * 
 * 多次调用 MSHookMessageEx → 多次创建蹦床 → 自动形成链式调用。
 * 与锤子助手的 MSHookMessageEx 完全兼容，谁先谁后都互不覆盖。
 */

#include <sys/mman.h>
#include <unistd.h>
#include <string.h>
#include <objc/runtime.h>
#include <objc/message.h>

// ARM64蹦床模板（9条指令 × 4字节 = 36字节）
// 布局：代码36 + padding4 + orig_ptr(8) + hook_ptr(8) = 56字节
static const uint32_t kJokerTrampolineTemplate[9] = {
    0xa9bf7bfd,  // 00: stp x29, x30, [sp, #-16]!  保存帧指针和返回地址
    0x910003fd,  // 04: mov x29, sp                  设置帧指针
    0x10000050,  // 08: adr x16, #32                 加载orig指针地址(PC+32→8+32=40)
    0xf9400202,  // 0c: ldr x2, [x16]               x2 = orig IMP
    0x10000050,  // 10: adr x16, #32                 加载hook指针地址(PC+32→16+32=48)
    0xf9400203,  // 14: ldr x3, [x16]               x3 = hook函数指针
    0xd63f0060,  // 18: blr x3                      调用 hook(self=x0, _cmd=x1, orig=x2)
    0xa8c17bfd,  // 1c: ldp x29, x30, [sp], #16    恢复帧指针
    0xd65f03c0,  // 20: ret                          返回(hook的返回值在x0)
};

void MSHookMessageEx(Class cls, SEL sel, IMP hook, IMP *old) {
    if (!cls || !sel || !hook) return;
    
    Method method = class_getInstanceMethod(cls, sel);
    if (!method) return;
    
    // 1. 保存当前IMP（链中的下一环）
    IMP orig = method_getImplementation(method);
    if (old) *old = orig;
    
    // 2. 分配可执行内存页
    size_t pageSize = getpagesize();
    void *page = mmap(NULL, pageSize,
                      PROT_READ | PROT_WRITE,
                      MAP_PRIVATE | MAP_ANONYMOUS,
                      -1, 0);
    if (page == MAP_FAILED) {
        // 兜底：普通method_setImplementation
        method_setImplementation(method, hook);
        return;
    }
    
    // 3. 写入蹦床代码（前36字节）+ 指针数据（后16字节）
    // [0:36]   = 蹦床代码
    // [36:40]  = nop 填充
    // [40:48]  = orig IMP 指针
    // [48:56]  = hook 函数指针
    memcpy(page, kJokerTrampolineTemplate, sizeof(kJokerTrampolineTemplate));
    // 填充4个字节NOP（确保8字节对齐）
    memset((char *)page + 36, 0x1f, 4);  // nop = 0xd503201f, but 0x1f2003d5 = nop
    // 简化：写4个0xd5字节（nop变体）
    memset((char *)page + 36, 0, 4);     // 清零即可，不会被执行到（蹦床32字节ret就返回了）
    memcpy((char *)page + 40, &orig, sizeof(IMP));
    memcpy((char *)page + 48, &hook, sizeof(IMP));
    
    // 4. 设置内存为可执行
    if (mprotect(page, pageSize, PROT_READ | PROT_EXEC) != 0) {
        munmap(page, pageSize);
        method_setImplementation(method, hook);
        return;
    }
    
    // 5. 替换IMP为蹦床地址
    method_setImplementation(method, (IMP)page);
}