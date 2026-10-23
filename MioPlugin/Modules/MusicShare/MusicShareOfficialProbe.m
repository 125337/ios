#import "MusicShareOfficialProbe.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"

// SDK 的 libobjc.tbd 未导出 method_copyTypeEncoding（链接实测），改 dlsym 运行时解析
#import <dlfcn.h>

// ===== v4：零 hook（v2 崩在 hook 黄白、v3 崩在 hook 继承方法扇出，纯扫描实证安全） =====
// 纯读元数据：
//   1) MusicLiveSearch 相关 32 类的方法 + ivar 清单（请求字段/响应 getter/CGI 入口签名）
//   2) 全类扫描方法类型编码，揪出引用 MusicLiveSearchReq 的调用方/管理者类
// 下一轮按 dump 结果直接构造请求直调发送，全程不打 hook。

static void dumpClassInfo(const char *tag, Class cls) {
    @try {
        WPLog(@"Music", @"[OFP4][%@] ---- %@ ----", tag, NSStringFromClass(cls));

        unsigned int n = 0;
        Ivar *iv = class_copyIvarList(cls, &n);
        for (unsigned int i = 0; i < n; i++) {
            WPLog(@"Music", @"[OFP4][%@] ivar %s : %s", tag, ivar_getName(iv[i]),
                  ivar_getTypeEncoding(iv[i]) ?: "?");
        }
        free(iv);

        n = 0;
        Method *list = class_copyMethodList(cls, &n);
        for (unsigned int i = 0; i < n; i++) {
            WPLog(@"Music", @"[OFP4][%@] -%s", tag, sel_getName(method_getName(list[i])));
        }
        free(list);

        n = 0;
        list = class_copyMethodList(object_getClass(cls), &n);
        for (unsigned int i = 0; i < n; i++) {
            WPLog(@"Music", @"[OFP4][%@] +%s", tag, sel_getName(method_getName(list[i])));
        }
        free(list);
    } @catch (NSException *e) {
        WPLog(@"Music", @"[OFP4][%@] dump %@ 异常: %@", tag, NSStringFromClass(cls), e);
    }
}

// 全类扫描：方法类型编码里出现目标类名 → 说明该方法收/发该类对象（调用方实锤）
static char *(*_copyEnc)(Method);
static const char *encOf(Method m) {
    if (!_copyEnc) _copyEnc = (char *(*)(Method))dlsym(RTLD_DEFAULT, "method_copyTypeEncoding");
    if (!_copyEnc) return NULL;
    return _copyEnc(m);
}

static void scanCallers(void) {
    unsigned int count = 0;
    Class *classes = objc_copyClassList(&count);
    WPLog(@"Music", @"[OFP4] 注册类总数: %u", count);
    int hits = 0;
    for (unsigned int i = 0; i < count && hits < 300; i++) {
        @try {
            const char *cn = class_getName(classes[i]);
            for (int pass = 0; pass < 2; pass++) {
                Class target = pass == 0 ? classes[i] : object_getClass(classes[i]);
                unsigned int n = 0;
                Method *list = class_copyMethodList(target, &n);
                for (unsigned int j = 0; j < n; j++) {
                    char *enc = (char *)encOf(list[j]);
                    if (!enc) continue;
                    BOOL hit = strstr(enc, "MusicLiveSearchReq") ||
                               strstr(enc, "MusicLiveSearchSmartBoxReq") ||
                               strstr(enc, "FinderLiveSearchMusicListRequest");
                    if (hit) {
                        hits++;
                        WPLog(@"Music", @"[OFP4] ★ 调用方 %s %c%s enc=%s", cn,
                              pass == 0 ? '-' : '+', sel_getName(method_getName(list[j])), enc);
                    }
                    free(enc);
                    if (hits >= 300) break;
                }
                free(list);
                if (hits >= 300) break;
            }
        } @catch (NSException *e) {
        }
    }
    free(classes);
    WPLog(@"Music", @"[OFP4] 调用方扫描完成，命中 %d", hits);
}

@implementation MusicShareOfficialProbe
+ (void)install {
    WPLog(@"Music", @"[OFP4] 官方搜索探针 v4 安装（零 hook，延迟 5s）");
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        // 1) 核心类：请求/响应/CGI（带 ivar + 方法全量）
        NSArray *core = @[@"MusicLiveSearchReq", @"MusicLiveSearchResp",
                          @"MusicLiveSearchRespInfo", @"MusicLiveSearchRespInfoDetail",
                          @"MusicLiveSearchMusicRespInfo",
                          @"MusicLiveSearchSmartBoxReq", @"MusicLiveSearchSmartBoxResp",
                          @"MusicLiveSearchSmartBoxRespInfo",
                          @"FinderLiveSearchMusicListRequest",
                          @"FinderLiveSearchMusicListResponse",
                          @"WCFinderLiveSearchMusicCGI",
                          @"WCFinderMoreLiveSearchViewModel"];
        for (NSString *name in core) {
            Class c = objc_getClass(name.UTF8String);
            if (c) dumpClassInfo("CORE", c);
        }
        WPLog(@"Music", @"[OFP4] 核心类 dump 完成");

        // 2) 全类类型编码扫描，找调用方
        scanCallers();
        WPLog(@"Music", @"[OFP4] 全部完成");
    });
}
@end
