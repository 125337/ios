#import "MusicShareOfficialProbe.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <mach-o/dyld.h>
#import "../../Core/LogManager.h"

// 定位 HBWechatHelper 加载基址（dylib vmaddr 基址为 0，基址即 slide）
static uintptr_t hb_slide(void) {
    for (uint32_t i = _dyld_image_count(); i > 0; i--) {
        const char *name = _dyld_get_image_name(i - 1);
        if (name && strstr(name, "HBWechatHelper")) {
            return (uintptr_t)_dyld_get_image_header(i - 1);
        }
    }
    return 0;
}

// 黄白 dylib 的关键字符串全是密文存储、init 阶段原地解密。
// 静态区 0x164b200~0x164b800：CFString 结构(isa bind=0, flags=0x7c8, data ptr, len)
// 与加密 blob 混排。运行时直接读内存即得明文（uri / 请求类名 / CGI 管理类名）。
static void dumpObfStrings(uintptr_t base, NSString *tag) {
    if (!base) {
        WPLog(@"Music", @"[OFP][%@] 无 HB 基址，跳过", tag);
        return;
    }
    // CFString 扫描：stride 8 对齐，[va+8]==0x7c8 即 CFString 结构入口
    for (uintptr_t va = base + 0x164b200; va + 0x20 <= base + 0x164b800; va += 8) {
        if (*(uint64_t *)(va + 8) != 0x7c8) continue;
        uint64_t ptr = *(uint64_t *)(va + 0x10);
        uint64_t len = *(uint64_t *)(va + 0x18);
        if (!ptr || len == 0 || len > 400) continue;
        NSString *s = [[NSString alloc] initWithBytes:(const void *)(base + ptr)
                                               length:(NSUInteger)len
                                             encoding:NSUTF8StringEncoding];
        WPLog(@"Music", @"[OFP][%@] CFString@%lx len=%llu: %@", tag, (unsigned long)(va - base),
              (unsigned long long)len, s);
    }
    // 加密 blob 区按 16 字节行打 hex + latin1（类名走 objc_getClass(串)，解密后应可读）
    for (uintptr_t off = 0x164b3c0; off < 0x164b520; off += 0x20) {
        const uint8_t *p = (const uint8_t *)(base + off);
        NSMutableString *hex = [NSMutableString stringWithCapacity:32];
        NSMutableString *asc = [NSMutableString stringWithCapacity:16];
        for (int i = 0; i < 32; i++) {
            [hex appendFormat:@"%02x", p[i]];
            [asc appendFormat:@"%c", (p[i] >= 0x20 && p[i] < 0x7f) ? p[i] : '.'];
        }
        WPLog(@"Music", @"[OFP][%@] blob@%lx: %@ | %@", tag, (unsigned long)off, hex, asc);
    }
}

static void dumpClassMethods(const char *tag, Class cls) {
    unsigned int count = 0;
    Method *list = class_copyMethodList(cls, &count);
    WPLog(@"Music", @"[OFP][%@] %@ 方法 %u 个:", tag, NSStringFromClass(cls), count);
    for (unsigned int i = 0; i < count; i++) {
        WPLog(@"Music", @"[OFP][%@]   %s", tag, sel_getName(method_getName(list[i])));
    }
    free(list);
}

// dump 对象全部 ivar 值（MusicLiveSearchMusicRespInfo 的实际响应数据）
static void dumpObjectIvars(id obj, const char *tag) {
    if (!obj) return;
    unsigned int n = 0;
    Ivar *iv = class_copyIvarList([obj class], &n);
    for (unsigned int i = 0; i < n; i++) {
        @try {
            id v = object_getIvar(obj, iv[i]);
            WPLog(@"Music", @"[OFP][%@] ivar %s = %@", tag, ivar_getName(iv[i]), v);
        } @catch (NSException *e) {
            WPLog(@"Music", @"[OFP][%@] ivar %s (非对象)", tag, ivar_getName(iv[i]));
        }
    }
    free(iv);
}

static id (*orig_searchOfficial)(id, SEL, id, id);

static void patched_searchOfficial(id self, SEL _cmd, id keyword, id completion) {
    uintptr_t base = hb_slide();
    WPLog(@"Music", @"[OFP] ===== hb_searchOfficialMusic:completion: 被调用 =====");
    WPLog(@"Music", @"[OFP] self=%@ keyword=%@ completion=%@", self, keyword, completion);

    // 请求前 dump：若类名 blob 是惰性解密，此刻应已明文
    dumpObfStrings(base, @"PRE");

    // 包一层 completion 抓响应
    id userBlock = completion;
    void (^wrapper)(id) = ^void(id resp) {
        WPLog(@"Music", @"[OFP] completion 响应对象: %@ desc=%@", [resp class], resp);
        dumpClassMethods("RESP", [resp class]);
        dumpObjectIvars(resp, "RESP");
        if (userBlock) ((void (*)(id, id))userBlock)(resp);
    };
    orig_searchOfficial(self, _cmd, keyword, wrapper);

    // 请求后 dump 兜底
    dumpObfStrings(base, @"POST");
}

// 收集宿主 MusicLiveSearch 相关类清单（上次被扫描异常中断，逐类 @try 修复）
static void collectLiveClasses(void) {
    unsigned int count = 0;
    Class *classes = objc_copyClassList(&count);
    NSMutableArray *live = [NSMutableArray array];
    for (unsigned int i = 0; i < count; i++) {
        @try {
            const char *name = class_getName(classes[i]);
            if (strstr(name, "MusicLiveSearch") || strstr(name, "LiveSearch")) {
                [live addObject:@(name)];
            }
        } @catch (NSException *e) {
        }
    }
    free(classes);
    WPLog(@"Music", @"[OFP] MusicLiveSearch 相关类 %lu 个: %@", (unsigned long)live.count, live);
    for (NSString *name in live) {
        Class cls = objc_getClass(name.UTF8String);
        if (cls) dumpClassMethods("LIVE", cls);
    }
}

@implementation MusicShareOfficialProbe
+ (void)install {
    WPLog(@"Music", @"[OFP] 官方搜索探针 v2 安装（延迟 5s）");
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        // 1) 启动即 dump 明文区（init 解密应已完成）
        dumpObfStrings(hb_slide(), @"INIT");

        // 2) hook HBHelperUtil 类方法（188.log 实证：偏移 0x24bf9c，挂 metaclass）
        Class hb = objc_getClass("HBHelperUtil");
        SEL target = sel_registerName("hb_searchOfficialMusic:completion:");
        if (hb) {
            Method cm = class_getClassMethod(hb, target);
            if (cm) {
                orig_searchOfficial = (id (*)(id, SEL, id, id))method_getImplementation(cm);
                MSHookMessageEx(object_getClass(hb), target, (IMP)patched_searchOfficial,
                                (IMP *)&orig_searchOfficial);
                WPLog(@"Music", @"[OFP] ✓ 已 hook HBHelperUtil 类方法");
            } else {
                WPLog(@"Music", @"[OFP] ✗ HBHelperUtil 无该类方法");
            }
        } else {
            WPLog(@"Music", @"[OFP] ✗ HBHelperUtil 未注册（黄白未装？）");
        }

        // 3) 宿主 MusicLiveSearch 类清单
        @try {
            collectLiveClasses();
        } @catch (NSException *e) {
            WPLog(@"Music", @"[OFP] 清单收集异常: %@", e);
        }
    });
}
@end
