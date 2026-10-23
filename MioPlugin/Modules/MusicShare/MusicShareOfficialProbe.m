#import "MusicShareOfficialProbe.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <mach-o/dyld.h>
#import "../../Core/LogManager.h"

// ===== v3：只碰微信宿主，不碰黄白（189.log 证实 hook 黄白自身方法会触发闪退） =====
// 目标：官方点歌 CGI 配方 —— uri / funcId / 请求类与字节 / CGI 管理类 / 响应字段
// 原理：黄白最终走宿主通用 CGI 通道（makeWithFuncId → sendRequest:completion:），
//       从宿主侧旁听即可拿到全部明文参数。

static Class g_wrapperClass = nil;   // makeWithFuncId 的接收类（CGI 请求包装类）
static int g_makeCount = 0;
static NSMutableSet *g_hooked = nil;
// 同一 patch 挂多个类时 orig 必须按 类+方法+类型 区分，否则会调到第一个类的原实现
static NSMutableDictionary<NSString *, NSValue *> *g_origs = nil;

static IMP origImp(id self, NSString *label) {
    NSString *k = [NSString stringWithFormat:@"%@|%@%@", label, NSStringFromClass(self),
                   object_isClass(self) ? @"+" : @"-"];
    return (IMP)g_origs[k].pointerValue;
}

static NSString *hexOf(NSData *d, NSUInteger limit) {
    if (![d isKindOfClass:[NSData class]]) return @"(非NSData)";
    NSUInteger n = MIN(d.length, limit);
    const uint8_t *p = d.bytes;
    NSMutableString *s = [NSMutableString stringWithCapacity:n * 2];
    for (NSUInteger i = 0; i < n; i++) [s appendFormat:@"%02x", p[i]];
    if (d.length > n) [s appendString:@"..."];
    return s;
}

static void dumpClassMethods(const char *tag, Class cls) {
    unsigned int count = 0;
    Method *list = class_copyMethodList(cls, &count);
    WPLog(@"Music", @"[OFP3][%@] %@ 方法 %u 个:", tag, NSStringFromClass(cls), count);
    for (unsigned int i = 0; i < count; i++) {
        WPLog(@"Music", @"[OFP3][%@]   %s", tag, sel_getName(method_getName(list[i])));
    }
    free(list);
}

static void dumpObjectIvars(id obj, const char *tag) {
    if (!obj) return;
    unsigned int n = 0;
    Ivar *iv = class_copyIvarList([obj class], &n);
    for (unsigned int i = 0; i < n; i++) {
        @try {
            id v = object_getIvar(obj, iv[i]);
            WPLog(@"Music", @"[OFP3][%@] ivar %s = %@", tag, ivar_getName(iv[i]),
                  [v isKindOfClass:[NSData class]] ? hexOf(v, 96) : v);
        } @catch (NSException *e) {
        }
    }
    free(iv);
}

// ---- typedDataWithBytes:（类方法）→ 请求类名 + 请求字节 ----
static id patched_typedData(id self, SEL _cmd, id bytes) {
    NSString *cn = NSStringFromClass(self);
    if ([cn containsString:@"Music"]) {
        WPLog(@"Music", @"[OFP3] ★ typedDataWithBytes 类=%@ bytes=%@", cn, hexOf(bytes, 128));
    }
    return ((id (*)(id, SEL, id))origImp(self, @"typed"))(self, _cmd, bytes);
}

// ---- parseFromData:error:（类方法）→ 响应字段 ----
static id patched_parse(id self, SEL _cmd, id data, id err) {
    id r = ((id (*)(id, SEL, id, id))origImp(self, @"parse"))(self, _cmd, data, err);
    WPLog(@"Music", @"[OFP3] ★ parse 类=%@ data=%@", NSStringFromClass(self), hexOf(data, 128));
    dumpObjectIvars(r, "PARSE");
    return r;
}

// ---- makeWithFuncId:uri:data:longPolling:longPollingTimeout: → funcId / uri / data ----
static id patched_make(id self, SEL _cmd, long funcId, id uri, id data, BOOL lp, long lpto) {
    NSString *uriStr = [uri isKindOfClass:[NSString class]] ? uri : @"(非串)";
    if (g_makeCount < 200) {
        g_makeCount++;
        WPLog(@"Music", @"[OFP3] make #%d 类=%@ funcId=%#lx uri=%@", g_makeCount,
              NSStringFromClass(self), (unsigned long)funcId, uriStr);
    }
    if (([uriStr localizedCaseInsensitiveContainsString:@"music"]) || funcId == 0x1012) {
        WPLog(@"Music", @"[OFP3] ★★★ 命中 类=%@ funcId=%#lx uri=%@ data=%@ lp=%d lpto=%ld",
              NSStringFromClass(self), (unsigned long)funcId, uriStr, hexOf(data, 128), lp, (long)lpto);
        if (object_isClass(self)) g_wrapperClass = self;
    }
    return ((id (*)(id, SEL, long, id, id, BOOL, long))origImp(self, @"make"))(
        self, _cmd, funcId, uri, data, lp, lpto);
}

// ---- sendRequest:completion: → CGI 管理类名 ----
static id patched_send(id self, SEL _cmd, id req, id completion) {
    if (g_wrapperClass && req && [req isKindOfClass:g_wrapperClass]) {
        WPLog(@"Music", @"[OFP3] ★★★ sendRequest 管理类=%@ req=%@",
              NSStringFromClass([self class]), NSStringFromClass([req class]));
        dumpObjectIvars(req, "REQ");
    }
    return ((id (*)(id, SEL, id, id))origImp(self, @"send"))(self, _cmd, req, completion);
}

// 全类遍历，逐类 @try（防 188.log 那种单类异常毁全程）
static void scanAllClasses(void (^body)(Class, NSString *)) {
    unsigned int count = 0;
    Class *classes = objc_copyClassList(&count);
    WPLog(@"Music", @"[OFP3] 注册类总数: %u", count);
    for (unsigned int i = 0; i < count; i++) {
        @try {
            body(classes[i], @(class_getName(classes[i])));
        } @catch (NSException *e) {
        }
    }
    free(classes);
}

// hook 入口：label 用于 orig 字典分键，已挂过的不重复挂
static void hookMethod(Class cls, SEL sel, IMP patch, NSString *label, BOOL isClassMethod,
                       const char *tag) {
    NSString *key = [NSString stringWithFormat:@"%@|%@%@", label, NSStringFromClass(cls),
                     isClassMethod ? @"+" : @"-"];
    if ([g_hooked containsObject:key]) return;
    Method m = isClassMethod ? class_getClassMethod(cls, sel) : class_getInstanceMethod(cls, sel);
    if (!m) return;
    g_origs[key] = [NSValue valueWithPointer:method_getImplementation(m)];
    MSHookMessageEx(isClassMethod ? object_getClass(cls) : cls, sel, patch, NULL);
    [g_hooked addObject:key];
    WPLog(@"Music", @"[OFP3] hook %@%@ on %@ (%@)", isClassMethod ? @"+" : @"-",
          sel_getName(sel), NSStringFromClass(cls), label);
}

@implementation MusicShareOfficialProbe
+ (void)install {
    WPLog(@"Music", @"[OFP3] 官方搜索探针 v3 安装（只碰宿主，延迟 5s）");
    g_hooked = [NSMutableSet set];
    g_origs = [NSMutableDictionary dictionary];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        SEL makeSel = sel_registerName("makeWithFuncId:uri:data:longPolling:longPollingTimeout:");
        SEL sendSel = sel_registerName("sendRequest:completion:");
        SEL typedSel = sel_registerName("typedDataWithBytes:");
        SEL parseSel = sel_registerName("parseFromData:error:");

        // 1) 关键宿主类的方法清单（getter 命名直接指导后续取响应字段）
        for (NSString *n in @[@"MusicLiveSearchReq", @"MusicLiveSearchMusicRespInfo",
                              @"MusicLiveSearchRespInfo", @"MusicLiveSearchRespInfoDetail",
                              @"MusicLiveSearchSmartBoxReq", @"MusicLiveSearchSmartBoxResp",
                              @"WCFinderLiveSearchMusicCGI"]) {
            @try {
                Class c = objc_getClass(n.UTF8String);
                if (c) dumpClassMethods("LIVE", c);
            } @catch (NSException *e) {
            }
        }

        // 2) 全类扫描挂 hook
        scanAllClasses(^(Class c, NSString *ns) {
            // typedDataWithBytes: / parseFromData:error: 只挂 Music 相关类
            if ([ns containsString:@"Music"]) {
                hookMethod(c, typedSel, (IMP)patched_typedData, @"typed", YES, "typed");
                if ([ns containsString:@"MusicLiveSearch"]) {
                    hookMethod(c, parseSel, (IMP)patched_parse, @"parse", YES, "parse");
                }
            }
            // makeWithFuncId / sendRequest 全量挂
            hookMethod(c, makeSel, (IMP)patched_make, @"make", YES, "make");
            hookMethod(c, makeSel, (IMP)patched_make, @"make", NO, "make");
            hookMethod(c, sendSel, (IMP)patched_send, @"send", NO, "send");
        });

        WPLog(@"Music", @"[OFP3] 安装完成，hook 总数 %lu", (unsigned long)g_hooked.count);
    });
}
@end
