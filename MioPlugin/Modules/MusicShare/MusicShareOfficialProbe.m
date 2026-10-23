#import "MusicShareOfficialProbe.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <mach-o/dyld.h>
#import "../../Core/LogManager.h"

// 定位 HBWechatHelper 加载基址，把 IMP 换算成文件偏移（回静态反编译用）
static uintptr_t hb_slide(void) {
    for (uint32_t i = _dyld_image_count(); i > 0; i--) {
        const char *name = _dyld_get_image_name(i - 1);
        if (name && strstr(name, "HBWechatHelper")) {
            return (uintptr_t)_dyld_get_image_header(i - 1);
        }
    }
    return 0;
}

static void dumpClassMethods(const char *tag, Class cls) {
    unsigned int count = 0;
    Method *list = class_copyMethodList(cls, &count);
    WPLog(@"Music", @"[OFP][%@] %@ 方法 %u 个:", tag, NSStringFromClass(cls), count);
    for (unsigned int i = 0; i < count; i++) {
        Method m = list[i];
        WPLog(@"Music", @"[OFP][%@]   %s (imp %p)", tag, sel_getName(method_getName(m)), method_getImplementation(m));
    }
    free(list);
}

static id orig_hook = nil;
static id (*orig_searchOfficial)(id, SEL, id, id);

static void patched_searchOfficial(id self, SEL _cmd, id keyword, id completion) {
    WPLog(@"Music", @"[OFP] ===== hb_searchOfficialMusic:completion: 被调用 =====");
    WPLog(@"Music", @"[OFP] self=%@ (类 %@)", self, NSStringFromClass([self class]));
    WPLog(@"Music", @"[OFP] keyword=%@", keyword);
    if ([keyword isKindOfClass:[NSString class]] == NO && keyword) {
        WPLog(@"Music", @"[OFP] keyword 非字符串, 类型: %@, 描述: %@", NSStringFromClass([keyword class]), keyword);
    }
    WPLog(@"Music", @"[OFP] completion=%@", completion);
    orig_searchOfficial(self, _cmd, keyword, completion);
}

// 遍历注册类找目标 selector 的实现者；顺带收集 MusicLiveSearch 相关类
static void scanAndHook(void) {
    unsigned int count = 0;
    Class *classes = objc_copyClassList(&count);
    WPLog(@"Music", @"[OFP] 注册类总数: %u", count);

    SEL target = sel_registerName("hb_searchOfficialMusic:completion:");
    NSMutableArray *liveClasses = [NSMutableArray array];

    for (unsigned int i = 0; i < count; i++) {
        Class cls = classes[i];
        const char *name = class_getName(cls);
        NSString *nsName = @(name);
        if ([nsName containsString:@"MusicLiveSearch"] || [nsName containsString:@"LiveSearch"]) {
            [liveClasses addObject:nsName];
        }

        Method m = class_getInstanceMethod(cls, target);
        if (m) {
            uintptr_t slide = hb_slide();
            IMP imp = method_getImplementation(m);
            WPLog(@"Music", @"[OFP] ★ 命中(实例): 类=%@ imp=%p 偏移=0x%lx", nsName, imp,
                  slide ? (unsigned long)(imp - slide) : 0);
            if ([nsName hasPrefix:@"HB"] || [nsName containsString:@"HuangBai"] || [nsName containsString:@"huangbai"]) {
                // 黄白自有类，直接 hook
                orig_searchOfficial = (id (*)(id, SEL, id, id))method_getImplementation(m);
                MSHookMessageEx(cls, target, (IMP)patched_searchOfficial, (IMP *)&orig_searchOfficial);
                WPLog(@"Music", @"[OFP] 已 hook 实例方法 on %@", nsName);
            }
        }
        Method cm = class_getClassMethod(cls, target);
        if (cm) {
            uintptr_t slide = hb_slide();
            IMP imp = method_getImplementation(cm);
            WPLog(@"Music", @"[OFP] ★ 命中(类方法): 类=%@ imp=%p 偏移=0x%lx", nsName, imp,
                  slide ? (unsigned long)(imp - slide) : 0);
        }
    }
    free(classes);

    WPLog(@"Music", @"[OFP] MusicLiveSearch 相关类 %lu 个: %@", (unsigned long)liveClasses.count, liveClasses);
    for (NSString *name in liveClasses) {
        Class cls = objc_getClass(name.UTF8String);
        if (cls) dumpClassMethods("LIVE", cls);
    }
}

@implementation MusicShareOfficialProbe
+ (void)install {
    WPLog(@"Music", @"[OFP] 官方搜索探针安装（延迟 5s 等黄白完成注册）");
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        @try {
            scanAndHook();
        } @catch (NSException *e) {
            WPLog(@"Music", @"[OFP] 扫描异常: %@", e);
        }
    });
}
@end
