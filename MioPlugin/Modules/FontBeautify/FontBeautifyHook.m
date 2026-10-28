#import "FontBeautifyHook.h"
#import "FontBeautifyConfig.h"
#import "FontBeautifyWebView.h"
#import "../../Core/LogManager.h"
#import <CoreText/CoreText.h>
#import <objc/runtime.h>
#import <substrate.h>

// 字体美化 Hook（锤子助手 2.6.9 反编译实锤的同款设计）
//
// 原理：
//   hook UIFont 的工厂方法，把请求重定向为 [UIFont fontWithName:自定义字体PS名 size:原字号]。
//   字重、粗细、缺字回退全部交给自定义字体自身——字体是什么样就显示什么样，
//   不再拼 UIFontDescriptor（那套每次调用都重建 descriptor + CoreText 现查，
//   微信后台回来缓存被清、瞬间上万次请求时会卡）。
//   fontWithName: 对已注册字体 UIKit 内部自带缓存，重复请求近乎零成本。
//
// 覆盖五个入口（都是 UIFont 的类方法，必须挂在元类上）：
//   systemFontOfSize:weight: / systemFontOfSize: / boldSystemFontOfSize: /
//   preferredFontForTextStyle: / fontWithName:size:（后者只拦系统字体名）
//
// 安全设计：
//   - 配置每次调用实时读取，开关即时生效，无需重启微信
//   - s_inFlight 防重入（fontWithDescriptor 内部可能再触发 UIFont 工厂调用）
//   - 异常/@try 兜底，hook 失败时一律返回原始字体
//   - 线程字典旁路标记 mio_font_factory_bypass：UI 层取真字体（预览）时设置，hook 放行
//   - 导入字体走 CTFontManagerRegisterFontsForURL（进程级注册），
//     冷启动后按落盘路径静默重注册，注册失败仅影响字体不生效，不崩

static IMP g_orig_systemFontWeight = NULL;
static IMP g_orig_systemFont       = NULL; // 不带 weight 的版本，老代码最常用
static IMP g_orig_boldSystemFont   = NULL;
static IMP g_orig_preferredFont    = NULL;
static IMP g_orig_fontWithName     = NULL;
static BOOL s_inFlight = NO;
// WCR 同款线程字典旁路：调用方（UI 层取真字体做预览）在当前线程字典设此标记，
// hook 入口检测到即直接放行原字体，工厂调用返回后清标记
static NSString * const kMioFontBypassFlag = @"mio_font_factory_bypass";
// 字体目录注册完成后才允许重建：注册前若让带自定义 family 的 descriptor 进 UIKit，
// fontWithDescriptor 会解析为回退字体并被 UIKit 按 descriptor 死缓存，之后永远不生效
static BOOL s_fontReady = NO;
static NSInteger s_rebuildLogBudget = 5; // 限量诊断日志

#pragma mark - 共享导入核心（选择页导入 / 聊天长按导入共用）

// 魔数校验：不看扩展名看文件头 4 字节，改名的假字体挡在这里。
// 返回错误文案，nil = 通过
static NSString *MioFontMagicError(NSData *head) {
    if (head.length < 4) return @"文件太小，不是字体文件";
    const unsigned char *b = head.bytes;
    BOOL sfnt  = (b[0] == 0x00 && b[1] == 0x01 && b[2] == 0x00 && b[3] == 0x00); // TTF
    BOOL apple = memcmp(b, "true", 4) == 0;                                     // TTF(Apple)
    BOOL ttc   = memcmp(b, "ttcf", 4) == 0;                                     // 字体集合
    BOOL otf   = memcmp(b, "OTTO", 4) == 0;                                     // OTF(CFF)
    BOOL woff  = memcmp(b, "wOFF", 4) == 0 || memcmp(b, "wOF2", 4) == 0;        // 网页字体
    if (sfnt || apple || ttc || otf) return nil;
    if (woff) return @"网页字体格式（WOFF）不支持导入，请先转换成 TTF/OTF";
    return @"文件内容不是有效的 TTF/OTF 字体（扩展名可能是假的）";
}

BOOL MioImportFontFromPath(NSString *srcPath,
                           NSString * _Nullable preferName,
                           NSString * _Nullable * _Nullable outFamily,
                           NSString * _Nullable * _Nullable outPS,
                           NSString * _Nullable * _Nullable errText) {
    if (outFamily) *outFamily = nil;
    if (outPS) *outPS = nil;
    if (errText) *errText = nil;
    NSString *fileName = srcPath.lastPathComponent;
    if (fileName.length == 0 ||
        ![[NSFileManager defaultManager] fileExistsAtPath:srcPath]) {
        if (errText) *errText = @"字体文件不存在（可能尚未下载）";
        return NO;
    }

    // 落盘名：preferName 带字体扩展名才采信（聊天附件源名是"消息本地ID.ttf"这种内部名）；
    // 不做扩展名白名单拒绝——改名过的真字体（选择页 public.data UTI）照样能导，真伪由魔数把关
    NSString *dstName = fileName;
    if (preferName.length > 0 &&
        [@[@"ttf", @"otf", @"ttc"] containsObject:preferName.pathExtension.lowercaseString]) {
        dstName = preferName.lastPathComponent;
    }

    // 1) 魔数校验（只读头 4 字节，不整读大文件）
    NSFileHandle *fh = [NSFileHandle fileHandleForReadingAtPath:srcPath];
    NSData *head = [fh readDataOfLength:4];
    [fh closeFile];
    NSString *magicErr = MioFontMagicError(head);
    if (magicErr) {
        if (errText) *errText = magicErr;
        return NO;
    }

    // 2) 拷入字体库（同名旧文件覆盖导入）
    NSString *dstPath = [[FontBeautifyConfig mioFontsDir]
                         stringByAppendingPathComponent:dstName];
    NSURL *dstURL = [NSURL fileURLWithPath:dstPath];
    [[NSFileManager defaultManager] removeItemAtPath:dstPath error:nil];
    NSError *fsErr = nil;
    if (![[NSFileManager defaultManager] copyItemAtPath:srcPath toPath:dstPath error:&fsErr]) {
        if (errText) *errText = [NSString stringWithFormat:@"拷贝失败: %@", fsErr.localizedDescription];
        return NO;
    }

    // 3) 进程级注册（错误码 105 = 已注册，忽略）
    CFErrorRef regErr = NULL;
    CTFontManagerRegisterFontsForURL((__bridge CFURLRef)dstURL, kCTFontManagerScopeProcess, &regErr);
    if (regErr) {
        CFIndex code = CFErrorGetCode(regErr);
        CFRelease(regErr);
        if (code != 105 /* kCTFontManagerErrorAlreadyRegistered */) {
            if (errText) *errText = [NSString stringWithFormat:@"注册失败: 错误码 %ld", (long)code];
            return NO;
        }
    }

    // 4) 读内部元数据（字族名 + PostScript 名）
    CFArrayRef descs = CTFontManagerCreateFontDescriptorsFromURL((__bridge CFURLRef)dstURL);
    if (!descs || CFArrayGetCount(descs) == 0) {
        if (descs) CFRelease(descs);
        if (errText) *errText = [NSString stringWithFormat:@"%@ 中未找到字体描述符", fileName];
        return NO;
    }
    CTFontDescriptorRef d0 = (CTFontDescriptorRef)CFArrayGetValueAtIndex(descs, 0);
    NSString *family = CFBridgingRelease(CTFontDescriptorCopyAttribute(d0, kCTFontFamilyNameAttribute));
    NSString *psName = CFBridgingRelease(CTFontDescriptorCopyAttribute(d0, kCTFontNameAttribute));
    CFRelease(descs);
    if (family.length == 0) {
        if (errText) *errText = [NSString stringWithFormat:@"%@ 未读取到字族名", fileName];
        return NO;
    }

    if (outFamily) *outFamily = family;
    if (outPS) *outPS = psName ?: @"";
    WPLog(@"FontBeautify", @"[IMPORT] %@ → family=%@ ps=%@", fileName, family, psName ?: @"");
    return YES;
}

// 按配置把原始字体替换为自定义字体（锤子式报菜名）；任一条件不满足即原样返回
static UIFont *MioRebuildFont(UIFont *orig, CGFloat size, CGFloat weight) {
    (void)weight; // 字重交给自定义字体自身，不透传微信的粗细请求
    // 线程旁路放行：调用方要求拿真字体（预览等场景），5 个 hook 入口都汇聚到这里
    if ([[[NSThread currentThread] threadDictionary] objectForKey:kMioFontBypassFlag]) return orig;
    if (s_inFlight || !s_fontReady) return orig;
    FontBeautifyConfig *cfg = [FontBeautifyConfig shared];
    if (!cfg.enableFontBeautify) return orig;
    if (![orig isKindOfClass:[UIFont class]]) return orig;
    NSString *psName = cfg.fontBeautifyPostScriptName.length
        ? cfg.fontBeautifyPostScriptName : cfg.fontBeautifyFamilyName;
    if (psName.length == 0) return orig;

    s_inFlight = YES;
    @try {
        // 直接报菜名：UIKit 对已注册字体自带缓存，重复请求近乎零成本。
        // 内部这次 fontWithName: 会再进 repl_fontWithName_size，但 PS 名不是系统字体名
        // 直接放行原实现，无死循环
        UIFont *f = [UIFont fontWithName:psName size:size];
        if (s_rebuildLogBudget > 0) {
            s_rebuildLogBudget--;
            WPLog(@"FontBeautify", @"[Hook] rebuild size=%.1f → %@", size, f ? f.fontName : @"nil");
        }
        return f ?: orig;
    } @catch (NSException *e) {
        WPLog(@"FontBeautify", @"[Hook] rebuild exception: %@", e);
        return orig;
    } @finally {
        s_inFlight = NO;
    }
}

static id repl_systemFontOfSize_weight(id self, SEL _cmd, CGFloat size, CGFloat weight) {
    UIFont *orig = ((id (*)(id, SEL, CGFloat, CGFloat))g_orig_systemFontWeight)(self, _cmd, size, weight);
    return MioRebuildFont(orig, size, weight);
}

static id repl_boldSystemFontOfSize(id self, SEL _cmd, CGFloat size) {
    UIFont *orig = ((id (*)(id, SEL, CGFloat))g_orig_boldSystemFont)(self, _cmd, size);
    return MioRebuildFont(orig, size, UIFontWeightBold);
}

static id repl_preferredFontForTextStyle(id self, SEL _cmd, id textStyle) {
    UIFont *orig = ((id (*)(id, SEL, id))g_orig_preferredFont)(self, _cmd, textStyle);
    return MioRebuildFont(orig, orig.pointSize, 0);
}

static id repl_systemFontOfSize(id self, SEL _cmd, CGFloat size) {
    UIFont *orig = ((id (*)(id, SEL, CGFloat))g_orig_systemFont)(self, _cmd, size);
    return MioRebuildFont(orig, size, 0);
}

// fontWithName 护栏：只替换系统字体名（微信用 fontWithName 建苹方/系统字体渲染正文），
// 图标/内置字体（WeChatSans 等）原样放行
static BOOL MioIsSystemFontName(NSString *name) {
    if (name.length == 0) return NO;
    if ([name hasPrefix:@"."]) return YES;        // .SFUI / .AppleSystemUIFont
    if ([name hasPrefix:@"PingFang"]) return YES; // 中文正文
    if ([name hasPrefix:@"Helvetica"]) return YES;
    if ([name isEqualToString:@"System"]) return YES;
    return NO;
}

static id repl_fontWithName_size(id self, SEL _cmd, id name, CGFloat size) {
    UIFont *orig = ((id (*)(id, SEL, id, CGFloat))g_orig_fontWithName)(self, _cmd, name, size);
    if (!MioIsSystemFontName(name)) return orig;
    return MioRebuildFont(orig, size, 0);
}

// 注册 Preferences/Mio/fonts 目录下全部字体（进程级；目录由 FontBeautifyConfig mioFontsDir 按当前容器解析，
// 配置只存文件名，容器迁移不失效。导入后新增文件靠 3 秒兜底重扫）
// 必须在 hook 生效后尽快执行，s_fontReady 立起前重建函数不工作（防 UIKit 死缓存）
static void MioRegisterAllImportedFonts(void) {
    NSString *dir = [FontBeautifyConfig mioFontsDir];
    NSArray *files = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:dir error:nil];
    NSInteger n = 0;
    for (NSString *name in files) {
        NSString *ext = name.pathExtension.lowercaseString;
        if (![ext isEqualToString:@"ttf"] && ![ext isEqualToString:@"otf"]) continue;
        NSURL *url = [NSURL fileURLWithPath:[dir stringByAppendingPathComponent:name]];
        CFErrorRef err = NULL;
        CTFontManagerRegisterFontsForURL((__bridge CFURLRef)url, kCTFontManagerScopeProcess, &err);
        if (err) CFRelease(err); // 105=已注册，静默
        n++;
    }
    s_fontReady = YES;
    WPLog(@"FontBeautify", @"[Hook] 字体库注册完成 %ld 个，ready=YES", (long)n);
}

#pragma mark - 线程旁路取真字体（供 UI 层预览用）

// 预览字体缓存：字体对象随进程字体注册常驻内存，可安全缓存（key = "PS名|字号"）
static NSCache *g_previewFontCache = nil;

UIFont *MioFontForPreview(NSString *postScriptName, CGFloat size) {
    if (postScriptName.length == 0) return nil;
    if (!g_previewFontCache) g_previewFontCache = [NSCache new];
    NSString *key = [NSString stringWithFormat:@"%@|%.1f", postScriptName, size];
    UIFont *cached = [g_previewFontCache objectForKey:key];
    if (cached) return cached;

    NSMutableDictionary *td = [[NSThread currentThread] threadDictionary];
    td[kMioFontBypassFlag] = @YES;
    UIFont *f = [UIFont fontWithName:postScriptName size:size];
    [td removeObjectForKey:kMioFontBypassFlag];
    if (f) [g_previewFontCache setObject:f forKey:key];
    return f;
}

UIFont *MioTrueSystemFont(CGFloat size, CGFloat weight) {
    NSMutableDictionary *td = [[NSThread currentThread] threadDictionary];
    td[kMioFontBypassFlag] = @YES;
    UIFont *f = (weight == UIFontWeightRegular)
        ? [UIFont systemFontOfSize:size]
        : [UIFont systemFontOfSize:size weight:weight];
    [td removeObjectForKey:kMioFontBypassFlag];
    return f;
}

@implementation FontBeautifyHook

+ (void)install {
    // UIFont 的三个工厂方法都是类方法 → 挂在元类上（MioSubstrate 内部走 class_getInstanceMethod，
    // 对元类查实例方法即查类方法）
    Class uiFontMeta = objc_getMetaClass("UIFont");
    if (!uiFontMeta) {
        WPLog(@"FontBeautify", @"[Hook] UIFont 元类不存在，未安装");
        return;
    }

    struct SelImp { SEL sel; IMP *orig; IMP repl; const char *tag; };
    struct SelImp list[] = {
        { NSSelectorFromString(@"systemFontOfSize:weight:"),  &g_orig_systemFontWeight, (IMP)repl_systemFontOfSize_weight,   "systemFontOfSize:weight:"  },
        { NSSelectorFromString(@"systemFontOfSize:"),         &g_orig_systemFont,       (IMP)repl_systemFontOfSize,          "systemFontOfSize:"         },
        { NSSelectorFromString(@"boldSystemFontOfSize:"),     &g_orig_boldSystemFont,   (IMP)repl_boldSystemFontOfSize,      "boldSystemFontOfSize:"     },
        { NSSelectorFromString(@"preferredFontForTextStyle:"),&g_orig_preferredFont,    (IMP)repl_preferredFontForTextStyle, "preferredFontForTextStyle:"},
        { NSSelectorFromString(@"fontWithName:size:"),        &g_orig_fontWithName,     (IMP)repl_fontWithName_size,         "fontWithName:size:"        },
    };
    for (NSUInteger i = 0; i < sizeof(list) / sizeof(list[0]); i++) {
        Method m = class_getInstanceMethod(uiFontMeta, list[i].sel);
        if (!m) {
            // 注意：tag 是 C 字符串，必须用 %s（用 %@ 会把 char* 当 ObjC 对象指针解引用 → 闪退）
            WPLog(@"FontBeautify", @"[Hook] UIFont %s 不存在，跳过", list[i].tag);
            continue;
        }
        MSHookMessageEx(uiFontMeta, list[i].sel, list[i].repl, list[i].orig);
        WPLog(@"FontBeautify", @"[Hook] ✓ UIFont::%s", list[i].tag);
    }

    // 立即同步注册字体库（晚一毫秒都可能让死缓存成形）；3 秒后再兜底重扫一次。
    // 字体存 Library/Preferences/Mio/fonts，"部分还原"式安装会整体还原该目录，无需备份恢复
    WPLog(@"FontBeautify", @"[Hook] 容器路径 %@", NSHomeDirectory());
    MioRegisterAllImportedFonts();
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)),
                   dispatch_get_global_queue(QOS_CLASS_UTILITY, 0), ^{
        MioRegisterAllImportedFonts();
    });

    // WebView 层：公众号文章/搜一搜等 H5 页面的字体注入
    [FontBeautifyWebView install];
}

@end
