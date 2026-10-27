#import "FontBeautifyHook.h"
#import "FontBeautifyConfig.h"
#import "FontBeautifyWebView.h"
#import "../../Core/LogManager.h"
#import <CoreText/CoreText.h>
#import <objc/runtime.h>
#import <substrate.h>

// 字体美化 Hook（参考开源 WCR 2.1.8 全局字体的思路，简化实现）
//
// 原理（WCR 反编译确认的核心手法）：
//   不遍历微信的界面控件，而是 hook UIFont 的工厂方法——微信每次要系统字体时，
//   用「导入字体 family + CascadeList 苹方回退」的 UIFontDescriptor 重建返回值。
//   微信代码一行不改，所有 [UIFont systemFontOfSize:...] 调用点自动换装。
//
// 覆盖三个入口（都是 UIFont 的类方法，必须挂在元类上）：
//   systemFontOfSize:weight: / boldSystemFontOfSize: / preferredFontForTextStyle:
//
// 安全设计：
//   - 配置每次调用实时读取，开关即时生效，无需重启微信
//   - s_inFlight 防重入（fontWithDescriptor 内部可能再触发 UIFont 工厂调用）
//   - 异常/@try 兜底，hook 失败时一律返回原始字体
//   - 导入字体走 CTFontManagerRegisterFontsForURL（进程级注册），
//     冷启动后按落盘路径静默重注册，注册失败仅影响字体不生效，不崩

static IMP g_orig_systemFontWeight = NULL;
static IMP g_orig_systemFont       = NULL; // 不带 weight 的版本，老代码最常用
static IMP g_orig_boldSystemFont   = NULL;
static IMP g_orig_preferredFont    = NULL;
static IMP g_orig_fontWithName     = NULL;
static BOOL s_inFlight = NO;
// 字体目录注册完成后才允许重建：注册前若让带自定义 family 的 descriptor 进 UIKit，
// fontWithDescriptor 会解析为回退字体并被 UIKit 按 descriptor 死缓存，之后永远不生效
static BOOL s_fontReady = NO;
static NSInteger s_rebuildLogBudget = 5; // 限量诊断日志

// 按配置把原始字体重建为自定义字体；任一条件不满足即原样返回
static UIFont *MioRebuildFont(UIFont *orig, CGFloat size, CGFloat weight) {
    if (s_inFlight || !s_fontReady) return orig;
    FontBeautifyConfig *cfg = [FontBeautifyConfig shared];
    if (!cfg.enableFontBeautify || cfg.fontBeautifyFamilyName.length == 0) return orig;
    if (![orig isKindOfClass:[UIFont class]]) return orig;

    s_inFlight = YES;
    @try {
        // 自定义 family + PingFangSC 回退链（特殊字符不缺字，同 WCR 的 CascadeList 思路）
        UIFontDescriptor *pingFang = [UIFontDescriptor fontDescriptorWithFontAttributes:
            @{ UIFontDescriptorFamilyAttribute : @"PingFangSC" }];
        UIFontDescriptor *desc = [UIFontDescriptor fontDescriptorWithFontAttributes:
            @{ UIFontDescriptorFamilyAttribute : cfg.fontBeautifyFamilyName,
               UIFontDescriptorCascadeListAttribute : @[pingFang] }];
        if (weight > 0) {
            desc = [desc fontDescriptorByAddingAttributes:
                @{ UIFontDescriptorTraitsAttribute : @{ UIFontWeightTrait : @(weight) } }];
        }
        UIFont *f = [UIFont fontWithDescriptor:desc size:size];
        if (s_rebuildLogBudget > 0) {
            s_rebuildLogBudget--;
            WPLog(@"FontBeautify", @"[Hook] rebuild size=%.1f → %@ (%@)",
                  size, f ? f.fontName : @"nil", f ? f.familyName : @"-");
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

// 注册 MioFonts 目录下全部字体（进程级；导入后新增文件靠 3 秒兜底重扫）
// 必须在 hook 生效后尽快执行，s_fontReady 立起前重建函数不工作（防 UIKit 死缓存）
static void MioRegisterAllImportedFonts(void) {
    NSString *dir = [NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES)
                     firstObject];
    dir = [dir stringByAppendingPathComponent:@"MioFonts"];
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

    // 立即同步注册字体库（晚一毫秒都可能让死缓存成形）；3 秒后再兜底重扫一次
    MioRegisterAllImportedFonts();
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)),
                   dispatch_get_global_queue(QOS_CLASS_UTILITY, 0), ^{
        MioRegisterAllImportedFonts();
    });

    // WebView 层：公众号文章/搜一搜等 H5 页面的字体注入
    [FontBeautifyWebView install];
}

@end
