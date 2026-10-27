#import "FontBeautifyHook.h"
#import "FontBeautifyConfig.h"
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
// 覆盖三个入口：
//   systemFontOfSize:weight: / boldSystemFontOfSize: / preferredFontForTextStyle:
//
// 安全设计：
//   - 配置每次调用实时读取，开关即时生效，无需重启微信
//   - s_inFlight 防重入（fontWithDescriptor 内部可能再触发 UIFont 工厂调用）
//   - 异常/@try 兜底，hook 失败时一律返回原始字体
//   - 导入字体走 CTFontManagerRegisterFontsForURL（进程级注册），
//     冷启动后按落盘路径静默重注册，注册失败仅影响字体不生效，不崩

static IMP g_orig_systemFontWeight = NULL;
static IMP g_orig_boldSystemFont   = NULL;
static IMP g_orig_preferredFont    = NULL;
static BOOL s_inFlight = NO;

// 按配置把原始字体重建为自定义字体；任一条件不满足即原样返回
static UIFont *MioRebuildFont(UIFont *orig, CGFloat size, CGFloat weight) {
    if (s_inFlight) return orig;
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
            desc = [desc descriptorByAddingAttributes:
                @{ UIFontDescriptorTraitsAttribute : @{ UIFontWeightTrait : @(weight) } }];
        }
        UIFont *f = [UIFont fontWithDescriptor:desc size:size];
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

// 冷启动重注册：配置里的字体文件按路径注册回进程字体表（进程级注册不跨启动）
static void MioReRegisterSavedFont(void) {
    FontBeautifyConfig *cfg = [FontBeautifyConfig shared];
    if (cfg.fontBeautifyFilePath.length == 0) return;
    if (![[NSFileManager defaultManager] fileExistsAtPath:cfg.fontBeautifyFilePath]) return;
    NSURL *url = [NSURL fileURLWithPath:cfg.fontBeautifyFilePath];
    CFErrorRef err = NULL;
    CTFontManagerRegisterFontsForURL((__bridge CFURLRef)url, kCTFontManagerScopeProcess, &err);
    if (err) {
        WPLog(@"FontBeautify", @"[Hook] re-register: %@（已注册/失败均不影响使用）", cfg.fontBeautifyFamilyName);
        CFRelease(err);
    } else {
        WPLog(@"FontBeautify", @"[Hook] ✓ re-registered font: %@", cfg.fontBeautifyFamilyName);
    }
}

@implementation FontBeautifyHook

+ (void)install {
    Class uiFont = [UIFont class];

    struct SelImp { SEL sel; IMP *orig; IMP repl; const char *tag; };
    struct SelImp list[] = {
        { NSSelectorFromString(@"systemFontOfSize:weight:"),  &g_orig_systemFontWeight, (IMP)repl_systemFontOfSize_weight,   "systemFontOfSize:weight:"  },
        { NSSelectorFromString(@"boldSystemFontOfSize:"),     &g_orig_boldSystemFont,   (IMP)repl_boldSystemFontOfSize,      "boldSystemFontOfSize:"     },
        { NSSelectorFromString(@"preferredFontForTextStyle:"),&g_orig_preferredFont,    (IMP)repl_preferredFontForTextStyle, "preferredFontForTextStyle:"},
    };
    for (NSUInteger i = 0; i < sizeof(list) / sizeof(list[0]); i++) {
        Method m = class_getInstanceMethod(uiFont, list[i].sel);
        if (!m) {
            WPLog(@"FontBeautify", @"[Hook] UIFont %@ 不存在，跳过", list[i].tag);
            continue;
        }
        MSHookMessageEx(uiFont, list[i].sel, list[i].repl, list[i].orig);
        WPLog(@"FontBeautify", @"[Hook] ✓ UIFont::%s", list[i].tag);
    }

    // 字体注册是进程级属性，冷启动后延迟补注册（等沙盒就绪）
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)),
                   dispatch_get_global_queue(QOS_CLASS_UTILITY, 0), ^{
        MioReRegisterSavedFont();
    });
}

@end
