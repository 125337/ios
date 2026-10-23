#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"

// 一次性探针：枚举全部类，找持有 GetMusicXmlFromMusic* / GetQQMusicGent 属性的类，
// dump 属性值（黄白服务器接口地址）+ 拦 setter 抓赋值时机。实证后整体删除。
// 命名空间全在 MusicShare 日志标签下，不影响其他模块。

static void dumpPropValues(Class cls, NSArray<NSString *> *props) {
    for (NSString *pn in props) {
        SEL sel = NSSelectorFromString(pn);
        @try {
            if ([cls respondsToSelector:sel]) {
                id v = ((id (*)(id, SEL))objc_msgSend)(cls, sel);
                WPLog(@"Music", @"[SVR] +[%@ %@] = %@", NSStringFromClass(cls), pn, v);
            }
        } @catch (NSException *e) {}
    }
    // 实例属性：尝试常见单例获取方式
    @try {
        if (![cls respondsToSelector:@selector(sharedInstance)]
            && ![cls respondsToSelector:@selector(shared)]
            && ![cls respondsToSelector:@selector(sharedInstanceConfig)]
            && ![cls respondsToSelector:@selector(sharedConfig)]) {
            return;
        }
        id inst = nil;
        for (NSString *sm in @[@"sharedInstance", @"shared", @"sharedInstanceConfig", @"sharedConfig"]) {
            SEL s = NSSelectorFromString(sm);
            if ([cls respondsToSelector:s]) {
                inst = ((id (*)(id, SEL))objc_msgSend)(cls, s);
                break;
            }
        }
        if (!inst) return;
        for (NSString *pn in props) {
            SEL sel = NSSelectorFromString(pn);
            @try {
                if ([inst respondsToSelector:sel]) {
                    id v = ((id (*)(id, SEL))objc_msgSend)(inst, sel);
                    WPLog(@"Music", @"[SVR] [%@ %@] = %@", NSStringFromClass(cls), pn, v);
                }
            } @catch (NSException *e) {}
        }
    } @catch (NSException *e) {}
}

// 拦所有 GetMusicXmlFromMusic* setter：抓赋值来源（服务器下发 or 本地默认）
static void hookSettersForClass(Class cls, NSArray<NSString *> *props) {
    for (NSString *pn in props) {
        SEL sel = NSSelectorFromString([NSString stringWithFormat:@"set%@:", pn]);
        Method m = class_getInstanceMethod(cls, sel);
        if (!m) continue;
        void *key = (void *)[NSString stringWithFormat:@"SVRSET_%@_%@", NSStringFromClass(cls), pn].UTF8String;
        IMP orig = method_getImplementation(m);
        objc_setAssociatedObject((__bridge id)cls, key, [NSValue valueWithPointer:orig], OBJC_ASSOCIATION_RETAIN);
        void (^logBlock)(id, id) = ^(id self, id val) {
            WPLog(@"Music", @"[SVR-SET] [%@ set%@:] = %@\n%@", NSStringFromClass([self class]), pn, val, [NSThread callStackSymbols]);
        };
        IMP newImp = imp_implementationWithBlock(logBlock);
        method_setImplementation(m, newImp);
        WPLog(@"Music", @"[SVR] setter hooked: [%@ set%@:]", NSStringFromClass(cls), pn);
    }
}

__attribute__((constructor))
static void MusicShareServerProbeInit(void) {
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(6 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        WPLog(@"Music", @"[SVR] ===== probe start =====");
        NSArray<NSString *> *props = @[
            @"GetMusicXmlFromMusicName", @"GetMusicXmlFromMusicID", @"GetMusicXmlFromMusicSinger",
            @"GetMusicXmlFromMusicCover", @"GetMusicXmlFromMusicUrl", @"GetMusicXmlFromMusicUrl2",
            @"GetQQMusicGent", @"GetNewSrcMusicGent",
        ];
        unsigned int count = 0;
        Class *classes = objc_copyClassList(&count);
        NSMutableArray<Class> *hits = [NSMutableArray array];
        for (unsigned int i = 0; i < count; i++) {
            Class c = classes[i];
            // 只做方法表存在性检查，不 alloc init（避免任意类初始化副作用）
            SEL sel = NSSelectorFromString(@"GetMusicXmlFromMusicName");
            if (class_getInstanceMethod(c, sel) || class_getClassMethod(c, sel)) {
                [hits addObject:c];
            }
        }
        free(classes);
        WPLog(@"Music", @"[SVR] classes hit: %lu", (unsigned long)hits.count);
        for (Class c in hits) {
            WPLog(@"Music", @"[SVR] === %@ ===", NSStringFromClass(c));
            dumpPropValues(c, props);
        }
        // setter 钩挂到命中的类上（实例级），下一次黄白配置刷新/点歌时抓赋值来源
        for (Class c in hits) {
            hookSettersForClass(c, props);
        }
        WPLog(@"Music", @"[SVR] ===== probe end =====");
    });
}
