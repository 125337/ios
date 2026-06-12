#import "FontLayoutHook.h"
#import "FontLayoutConfig.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <UIKit/UIKit.h>

#pragma mark - 原始 IMP 指针

static IMP orig_MMUILabel_setFont = NULL;
static IMP orig_MMTableViewCell_layoutSubviews = NULL;

#pragma mark - 辅助方法

static BOOL isInChatListView(id cell) {
    id delegate = [cell valueForKey:@"m_delegate"];
    if (delegate) {
        NSString *cls = NSStringFromClass([delegate class]);
        if ([cls hasPrefix:@"BaseMsgContent"] ||
            [cls hasPrefix:@"Chat"] ||
            [cls containsString:@"MsgContent"]) {
            return YES;
        }
    }
    UIView *sv = [cell superview];
    while (sv) {
        NSString *cls = NSStringFromClass([sv class]);
        if ([cls hasPrefix:@"BaseMsgContent"] ||
            [cls hasPrefix:@"Chat"] ||
            [cls containsString:@"MsgContent"] ||
            [cls hasPrefix:@"MMTableView"]) {
            return YES;
        }
        sv = [sv superview];
    }
    return NO;
}

static void collectLabelsInView(UIView *view, NSMutableArray<UILabel *> *labels) {
    for (UIView *sub in view.subviews) {
        if ([sub isKindOfClass:[UILabel class]]) {
            [labels addObject:(UILabel *)sub];
        }
        if (sub.subviews.count > 0) {
            collectLabelsInView(sub, labels);
        }
    }
}

#pragma mark - 全局字号 Hook

static void hook_MMUILabel_setFont(id self, SEL _cmd, UIFont *font) {
    FontLayoutConfig *config = [FontLayoutConfig shared];
    if (config.globalLayoutEnabled) {
        CGFloat target = config.globalFontSize;
        if (fabs(target - 16.0) > 0.01) {
            CGFloat scale = target / 16.0;
            CGFloat newSize = font.pointSize * scale;
            if (newSize < 6) newSize = 6;
            if (newSize > 48) newSize = 48;
            UIFont *newFont = [font fontWithSize:newSize];
            if (newFont) {
                ((void (*)(id, SEL, UIFont *))orig_MMUILabel_setFont)(self, _cmd, newFont);
                return;
            }
        }
    }
    ((void (*)(id, SEL, UIFont *))orig_MMUILabel_setFont)(self, _cmd, font);
}

#pragma mark - 对话字号 Hook

static void hook_MMTableViewCell_layoutSubviews(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_MMTableViewCell_layoutSubviews)(self, _cmd);
    if (!isInChatListView(self)) return;
    FontLayoutConfig *config = [FontLayoutConfig shared];
    if (!config.chatLayoutEnabled) return;
    CGFloat chatSize = config.chatFontSize;
    if (fabs(chatSize - 16.0) <= 0.01) return;
    NSMutableArray *labels = [NSMutableArray array];
    collectLabelsInView([self valueForKey:@"contentView"], labels);
    for (UILabel *label in labels) {
        UIFont *newFont = [UIFont fontWithDescriptor:label.font.fontDescriptor size:chatSize];
        if (newFont) {
            label.font = newFont;
            [label sizeToFit];
        }
    }
}

#pragma mark - 安装

@implementation FontLayoutHook

+ (void)install {
    Class mmuiLabelClass = objc_getClass("MMUILabel");
    if (mmuiLabelClass) {
        MSHookMessageEx(mmuiLabelClass, @selector(setFont:),
                        (IMP)hook_MMUILabel_setFont,
                        (IMP *)&orig_MMUILabel_setFont);
        WPLog(@"FontLayout", @"[+] MMUILabel.setFont: hooked");
    } else {
        WPLog(@"FontLayout", @"[-] MMUILabel class not found");
    }

    Class mmtvCellClass = objc_getClass("MMTableViewCell");
    if (mmtvCellClass) {
        MSHookMessageEx(mmtvCellClass, @selector(layoutSubviews),
                        (IMP)hook_MMTableViewCell_layoutSubviews,
                        (IMP *)&orig_MMTableViewCell_layoutSubviews);
        WPLog(@"FontLayout", @"[+] MMTableViewCell.layoutSubviews hooked");
    } else {
        WPLog(@"FontLayout", @"[-] MMTableViewCell class not found");
    }

    WPLog(@"FontLayout", @"✓ FontLayoutHook install complete");
}

@end
