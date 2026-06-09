//
//  MioSubstrate.m
//  MioPlugin
//
//  使用纯 ObjC Runtime 实现 MSHookMessageEx，消除对 CydiaSubstrate/libsubstrate.dylib 的依赖。
//  将此文件加入编译列表后，所有现有 MSHookMessageEx 调用无需任何修改即可正常工作。
//

#import <objc/runtime.h>
#import <objc/message.h>

#ifdef __cplusplus
extern "C" {
#endif

void MSHookMessageEx(Class _class, SEL _sel, IMP _imp, IMP *_result) {
    // ── 参数保护 ──
    if (!_class || !_sel || !_imp) return;

    // ── 获取原始 Method（沿继承链查找，可能在父类上）──
    Method m = class_getInstanceMethod(_class, _sel);
    if (!m) return;

    IMP origIMP = method_getImplementation(m);

    // ── 关键安全处理 ──
    // 如果方法不在 _class 本身上（在父类上），直接用 method_setImplementation
    // 会修改父类的方法实现，影响所有子类。
    // CydiaSubstrate 的做法是：先用 class_addMethod 把原始 IMP 复制到 _class，
    // 再替换 _class 上的实现。
    // class_addMethod 返回 NO = 方法已存在于 _class，返回 YES = 刚从父类复制过来
    if (!class_addMethod(_class, _sel, origIMP, method_getTypeEncoding(m))) {
        // 方法已经在 _class 本身上 → 直接替换
        method_setImplementation(m, _imp);
    } else {
        // 方法原来在父类上 → class_addMethod 刚把原 IMP 复制到 _class
        // 现在替换 _class 上的实现
        class_replaceMethod(_class, _sel, _imp, method_getTypeEncoding(m));
    }

    // ── 返回原始 IMP（对应 MSHookMessageEx 的第四个参数 &orig_xxx）──
    if (_result) {
        *_result = origIMP;
    }
}

#ifdef __cplusplus
}
#endif
