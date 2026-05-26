// ============================================================
// PlaceholderTextHook.m — 文本占位 Hook 模块
// 100% 对齐微信优化实现 (FUN_0002c284 + FUN_0002c830)
// MRC 编译
// ============================================================

#import "PlaceholderTextHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <UIKit/UIKit.h>

// ============================================================
// MARK: - 配置 Key (与 WPUIPlaceholderTextVC.m 对齐)
// ============================================================

static NSString *const kEnabled    = @"PlaceholderTextEnabled";
static NSString *const kText       = @"PlaceholderText_Text";
static NSString *const kBold       = @"PlaceholderText_Bold";
static NSString *const kFontSize   = @"PlaceholderText_FontSize";
static NSString *const kColorHex   = @"PlaceholderText_ColorHex";
static NSString *const kAlpha      = @"PlaceholderText_Alpha";

// ============================================================
// MARK: - 默认值 (对齐 FUN_0002c284)
// ============================================================

static const CGFloat kDefaultFontSize  = 15.0;
static const CGFloat kDefaultAlpha     = 0.6;
static NSString * const kDefaultColorHex = @"#808080";

// ============================================================
// MARK: - 原始 IMP 指针
// ============================================================

static IMP _orig_MMGrowTextView_layoutSubviews = NULL;

// ============================================================
// MARK: - 辅助函数: 获取父 ViewController
//         对齐 FUN_0002c284 中的 responder chain 遍历 (L26697-L26716)
// ============================================================

static UIViewController *_Nullable findParentViewController(UIView *view) {
    UIResponder *responder = view;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

// ============================================================
// MARK: - 辅助函数: 验证是否为聊天界面
//         对齐 FUN_0002cbfc (L27008-L27020)
//         检查传入的 VC 是否为 BaseMsgContentViewController 子类
// ============================================================

static BOOL isBaseMsgContentVC(UIViewController *vc) {
    if (!vc) return NO;
    Class baseMsgClass = objc_getClass("BaseMsgContentViewController");
    if (!baseMsgClass) return NO;
    return [vc isKindOfClass:baseMsgClass];
}

// ============================================================
// MARK: - 辅助函数: 安全解析 float (UI 层存储为 NSString)
// ============================================================

static CGFloat safeFloat(NSString *str, CGFloat fallback) {
    if (!str || str.length == 0) return fallback;
    return [str floatValue];
}

// ============================================================
// MARK: - Hook: MMGrowTextView.layoutSubviews
//         对齐 FUN_0002c284 (L26655-L26864)
// ============================================================

static void hook_MMGrowTextView_layoutSubviews(id self, SEL _cmd) {
    // ① 调用原始 layoutSubviews (L26692)
    if (_orig_MMGrowTextView_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMGrowTextView_layoutSubviews)(self, _cmd);
    }

    // ② 宽度安全检查 (L26693-L26696)
    //    反编译显示: if (50.0 < width) return;
    //    按分析文档解读: width <= 50 时跳过(跳过无效小视图)
    CGRect frame = [(UIView *)self frame];
    if (frame.size.width <= 50.0) return;

    // ③ 向上查找 UIViewController (L26697-L26716)
    UIViewController *parentVC = findParentViewController((UIView *)self);
    if (!parentVC) return;

    // ④ 验证调用来源: 必须来自 BaseMsgContentViewController (L26718)
    //    FUN_0002cbfc: 检查 parentVC 是否为 BaseMsgContentViewController
    if (!isBaseMsgContentVC(parentVC)) return;

    // ⑤ 读取配置 (L26720-L26723)
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    if (![d boolForKey:kEnabled]) return;

    // ⑥ 占位文本内容 (L26726-L26733)
    NSString *content = [d stringForKey:kText];
    if (content.length > 0) {
        [self setPlaceHolder:content];
    }

    // ⑦ 占位文本颜色 (L26734-L26783)
    NSString *hexColor = [d stringForKey:kColorHex];
    CGFloat alpha = safeFloat([d stringForKey:kAlpha], kDefaultAlpha);

    UIColor *color = nil;
    if (hexColor.length > 0) {
        color = [[PluginConfig shared] colorFromHex:hexColor];
    }
    if (!color) {
        // 没有设置颜色时使用默认灰色 + alpha
        color = [UIColor colorWithWhite:0.0 alpha:alpha];
    } else {
        // 有颜色时叠加 alpha
        color = [color colorWithAlphaComponent:alpha];
    }
    [self setPlaceHolderColor:color];

    // ⑧ 字体大小 + 粗体 (L26785-L26800)
    CGFloat fontSize = safeFloat([d stringForKey:kFontSize], kDefaultFontSize);
    if (fontSize <= 0) fontSize = kDefaultFontSize;

    if ([self respondsToSelector:@selector(setPlaceholderFont:)]) {
        BOOL bold = [d boolForKey:kBold];
        UIFont *font = bold
            ? [UIFont boldSystemFontOfSize:fontSize]
            : [UIFont systemFontOfSize:fontSize];
        [self setPlaceholderFont:font];
    }

    // ⑨ 多行占位支持 (L26801)
    [self setPlaceHolderMultiLine:YES];
}

// ============================================================
// MARK: - Install (对齐 FUN_0002c284 的注册点 L26615-L26616)
// ============================================================

@implementation PlaceholderTextHook

+ (void)install {
    WPLog(@"PlaceholderText", @"PlaceholderTextHook install");

    // Hook MMGrowTextView.layoutSubviews
    // 对齐原版: _objc_getClass("MMGrowTextView") + _MSHookMessageEx
    Class growTextViewClass = objc_getClass("MMGrowTextView");
    if (growTextViewClass) {
        MSHookMessageEx(
            growTextViewClass,
            @selector(layoutSubviews),
            (IMP)hook_MMGrowTextView_layoutSubviews,
            (IMP *)&_orig_MMGrowTextView_layoutSubviews
        );
        WPLog(@"PlaceholderText", @"[Hook] ✓ MMGrowTextView.layoutSubviews");
    } else {
        WPLog(@"PlaceholderText", @"[Hook] ✗ MMGrowTextView class not found");
    }

    WPLog(@"PlaceholderText", @"PlaceholderTextHook install complete");
}

@end