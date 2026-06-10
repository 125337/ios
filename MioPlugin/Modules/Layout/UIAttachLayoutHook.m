//
//  UIAttachLayoutHook.m — 附件布局优化
//  精确对齐微信优化 123456.c:
//    FUN_00005a14 — Hook 安装
//    FUN_00005a9c — SelectAttachmentView.layoutSubviews
//    FUN_00005d88 — SelectAttachmentViewController.numberOfCols
//    FUN_00005e70 — SelectAttachmentViewController.numberOfRows
//

#import "UIAttachLayoutHook.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <substrate.h>
#import "AttachLayoutConfig.h"

// ═══════════════════════════════════════════════════════
// 读取配置（统一使用 PluginConfig，保证与设置页面一致）
// ═══════════════════════════════════════════════════════
static inline BOOL attachLayoutEnabled(void) {
    return [AttachLayoutConfig shared].attachLayoutEnabled;
}

static inline NSInteger attachLayoutColumns(void) {
    // 微信优化默认值 = 5 (123456.c:5153)
    NSString *val = [AttachLayoutConfig shared].attachLayoutColumns;
    if (!val || val.length == 0) return 5;
    return [val integerValue];
}

static inline NSInteger attachLayoutRows(void) {
    // 微信优化默认值 = 2 (123456.c:5186)
    NSString *val = [AttachLayoutConfig shared].attachLayoutRows;
    if (!val || val.length == 0) return 2;
    return [val integerValue];
}

// ═══════════════════════════════════════════════════════
// 原始 IMP 存储 (对齐 DAT_0013a8c0/c8/d0)
// ═══════════════════════════════════════════════════════
static IMP __orig_SelectAttachmentView_layoutSubviews = NULL;
static IMP __orig_SelectAttachmentViewController_numberOfCols = NULL;
static IMP __orig_SelectAttachmentViewController_numberOfRows = NULL;

// ═══════════════════════════════════════════════════════
// Hook ①: SelectAttachmentView.layoutSubviews
//   对齐 FUN_00005a9c (123456.c:5000-5124)
//   当 rows > 2 时动态调整 ScrollView 以支持垂直滚动
// ═══════════════════════════════════════════════════════
static void hook_SelectAttachmentView_layoutSubviews(id self, SEL _cmd) {
    // Step 0: 调用原始 layoutSubviews
    ((void (*)(id, SEL))__orig_SelectAttachmentView_layoutSubviews)(self, _cmd);

    // Step 1: 检查功能是否开启
    if (!attachLayoutEnabled()) return;

    // Step 2: 读取行数，仅当 > 2 时才需要滚动
    NSInteger rows = attachLayoutRows();
    if (rows <= 2) return;

    // Step 3: 通过 ivar 获取 _scrollView
    Ivar ivar = class_getInstanceVariable([self class], "_scrollView");
    if (!ivar) return;
    UIScrollView *scrollView = object_getIvar(self, ivar);
    if (!scrollView) return;

    // Step 4: 遍历 ScrollView 的所有子视图，找到 UIButton 的最大 maxY
    CGFloat maxY = 0.0;
    for (UIView *subview in scrollView.subviews) {
        if ([subview isKindOfClass:[UIButton class]]) {
            CGFloat buttonMaxY = CGRectGetMaxY(subview.frame);
            if (buttonMaxY > maxY) {
                maxY = buttonMaxY;
            }
        }
    }

    // Step 5: 如果内容超出当前视图高度，调整 ScrollView
    CGFloat scrollHeight = scrollView.frame.size.height;
    if (scrollHeight < maxY) {
        // contentSize.height = maxY + 25 (底部留白)
        CGFloat contentWidth = scrollView.bounds.size.width;
        scrollView.contentSize = CGSizeMake(contentWidth, maxY + 25.0);

        // 启用垂直滚动 (对齐微信优化: setScrollEnabled:YES)
        scrollView.scrollEnabled = YES;

        // 显示垂直滚动条 (对齐微信优化: setShowsVerticalScrollIndicator:YES)
        scrollView.showsVerticalScrollIndicator = YES;

        // 隐藏水平滚动条 (对齐微信优化: setShowsHorizontalScrollIndicator:NO)
        scrollView.showsHorizontalScrollIndicator = NO;

        // 启用弹性回弹 (对齐微信优化: setBounces:YES)
        scrollView.bounces = YES;
    }
}

// ═══════════════════════════════════════════════════════
// Hook ②: SelectAttachmentViewController.numberOfCols
//   对齐 FUN_00005d88 (123456.c:5128-5157)
//   默认返回 5 列 (微信优化默认)
// ═══════════════════════════════════════════════════════
static long hook_numberOfCols(id self, SEL _cmd) {
    if (!attachLayoutEnabled()) {
        return ((long (*)(id, SEL))__orig_SelectAttachmentViewController_numberOfCols)(self, _cmd);
    }
    return attachLayoutColumns();
}

// ═══════════════════════════════════════════════════════
// Hook ③: SelectAttachmentViewController.numberOfRows
//   对齐 FUN_00005e70 (123456.c:5161-5190)
//   默认返回 2 行 (微信优化默认)
// ═══════════════════════════════════════════════════════
static long hook_numberOfRows(id self, SEL _cmd) {
    if (!attachLayoutEnabled()) {
        return ((long (*)(id, SEL))__orig_SelectAttachmentViewController_numberOfRows)(self, _cmd);
    }
    return attachLayoutRows();
}

// ═══════════════════════════════════════════════════════
// +install — Hook 安装 (对齐 FUN_00005a14)
// ═══════════════════════════════════════════════════════
@implementation UIAttachLayoutHook

+ (void)install {
    Class cls;

    // ① SelectAttachmentView.layoutSubviews
    cls = objc_getClass("SelectAttachmentView");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("layoutSubviews"),
                        (IMP)hook_SelectAttachmentView_layoutSubviews,
                        (IMP *)&__orig_SelectAttachmentView_layoutSubviews);
    }

    // ② SelectAttachmentViewController.numberOfCols
    cls = objc_getClass("SelectAttachmentViewController");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("numberOfCols"),
                        (IMP)hook_numberOfCols,
                        (IMP *)&__orig_SelectAttachmentViewController_numberOfCols);
    }

    // ③ SelectAttachmentViewController.numberOfRows
    cls = objc_getClass("SelectAttachmentViewController");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("numberOfRows"),
                        (IMP)hook_numberOfRows,
                        (IMP *)&__orig_SelectAttachmentViewController_numberOfRows);
    }
}

@end