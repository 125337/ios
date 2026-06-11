#import "HookEngine.h"
#import "LogManager.h"
#import <objc/runtime.h>
#import <substrate.h>

@implementation HookEngine

#pragma mark - Hook Table

+ (int)installHookTable:(NSString *)moduleName items:(HookTableItem *)items count:(int)count {
    if (!moduleName || !items || count <= 0) {
        [_WPLogManager appendLineWithTag:(moduleName ?: @"HookEngine") content:[NSString stringWithFormat:@"installHookTable: 参数无效 (count=%d)", count]];
        return 0;
    }

    [_WPLogManager appendLineWithTag:moduleName content:@"========================================"];
    [_WPLogManager appendLineWithTag:moduleName content:[NSString stringWithFormat:@"%@ install: 安装 %d 个 Hook", moduleName, count]];
    [_WPLogManager appendLineWithTag:moduleName content:@"========================================"];

    int hookedCount = 0;

    for (int i = 0; i < count; i++) {
        HookTableItem *item = &items[i];

        // 1. 检查参数
        if (!item->className || !item->selName || !item->replacement) {
            [_WPLogManager appendLineWithTag:moduleName content:[NSString stringWithFormat:@"[%d/%d] 参数无效，跳过", i + 1, count]];
            continue;
        }

        // 2. 获取类
        Class cls = objc_getClass([item->className UTF8String]);
        if (!cls) {
            [_WPLogManager appendLineWithTag:moduleName content:[NSString stringWithFormat:@"[%d/%d] 类不存在: %@，跳过", i + 1, count, item->className]];
            continue;
        }

        // 3. 检查方法是否存在
        SEL sel = sel_registerName([item->selName UTF8String]);
        Method method = class_getInstanceMethod(cls, sel);
        if (!method) {
            [_WPLogManager appendLineWithTag:moduleName content:[NSString stringWithFormat:@"[%d/%d] 方法不存在: %@ - %@，跳过", i + 1, count, item->className, item->selName]];
            continue;
        }

        // 4. 执行 Hook
        MSHookMessageEx(cls, sel, item->replacement, item->original);

        [_WPLogManager appendLineWithTag:moduleName content:[NSString stringWithFormat:@"[%d/%d] ✓ Hooked %@ - %@", i + 1, count, item->className, item->selName]];
        hookedCount++;
    }

    [_WPLogManager appendLineWithTag:moduleName content:@"========================================"];
    [_WPLogManager appendLineWithTag:moduleName content:[NSString stringWithFormat:@"%@ install 完成: %d/%d 个 Hook 成功", moduleName, hookedCount, count]];
    [_WPLogManager appendLineWithTag:moduleName content:@"========================================"];

    return hookedCount;
}

+ (BOOL)installHookForClass:(NSString *)className
                     method:(NSString *)methodName
                replacement:(IMP)replacement
                   original:(IMP *)originalPtr
                 moduleName:(NSString *)moduleName {

    if (!className || !methodName || !replacement) {
        [_WPLogManager appendLineWithTag:(moduleName ?: @"HookEngine") content:@"installHook: 参数无效"];
        return NO;
    }

    Class cls = objc_getClass([className UTF8String]);
    if (!cls) {
        [_WPLogManager appendLineWithTag:moduleName content:[NSString stringWithFormat:@"installHook: 类不存在 %@", className]];
        return NO;
    }

    SEL sel = sel_registerName([methodName UTF8String]);
    Method method = class_getInstanceMethod(cls, sel);
    if (!method) {
        [_WPLogManager appendLineWithTag:moduleName content:[NSString stringWithFormat:@"installHook: 方法不存在 %@ - %@", className, methodName]];
        return NO;
    }

    MSHookMessageEx(cls, sel, replacement, originalPtr);
    [_WPLogManager appendLineWithTag:moduleName content:[NSString stringWithFormat:@"✓ Hooked %@ - %@", className, methodName]];
    return YES;
}

#pragma mark - Original Methods

+ (IMP)swizzleMethod:(SEL)sel inClass:(Class)cls withIMP:(IMP)newIMP {
    if (!cls) return NULL;
    Method m = class_getInstanceMethod(cls, sel);
    if (!m) return NULL;

    IMP origIMP = method_getImplementation(m);
    const char *typeEncoding = method_getTypeEncoding(m);

    BOOL added = class_addMethod(cls, sel, newIMP, typeEncoding);
    if (added) {
        return origIMP;
    }

    method_setImplementation(m, newIMP);
    return origIMP;
}

+ (void)swizzleMethod:(SEL)sel inClass:(Class)cls withBlock:(id)block {
    if (!cls) return;
    Method m = class_getInstanceMethod(cls, sel);
    if (!m) return;

    IMP newIMP = imp_implementationWithBlock(block);
    const char *typeEncoding = method_getTypeEncoding(m);

    BOOL added = class_addMethod(cls, sel, newIMP, typeEncoding);
    if (added) return;

    method_setImplementation(m, newIMP);
}

+ (BOOL)addOrSwizzleMethod:(SEL)sel
                   inClass:(Class)cls
                   withIMP:(IMP)newIMP
              typeEncoding:(const char *)typeEncoding
               originalIMP:(IMP *)outOrigIMP {
    if (!cls || !sel || !newIMP || !typeEncoding) return NO;

    BOOL added = class_addMethod(cls, sel, newIMP, typeEncoding);
    if (added) {
        if (outOrigIMP) *outOrigIMP = NULL;
        return YES;
    }

    Method m = class_getInstanceMethod(cls, sel);
    if (!m) return NO;

    IMP oldIMP = method_getImplementation(m);
    method_setImplementation(m, newIMP);
    if (outOrigIMP) *outOrigIMP = oldIMP;
    return YES;
}

@end