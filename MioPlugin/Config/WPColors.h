#import <UIKit/UIKit.h>
#import "../Modules/Layout/UIPurifyConfig.h"

#pragma mark - Separator Colors

__attribute__((unused))
static UIColor *WPSeparatorColor(void) {
    if ([UIPurifyConfig shared].hideSeparatorLine) {
        return [UIColor clearColor];
    }
    return [UIColor colorWithWhite:0.0 alpha:0.08];
}

#pragma mark - Background Colors

// 页面底色 = 微信主题色（WCR 同款取样法：读微信 WCTableViewManager 自建表的背景色，
// 实现在 WPCommonUI.m；深浅色由微信主题机制决定，不再用 iOS 系统语义色）
extern UIColor *WPWeChatPageColor(void);

__attribute__((unused))
static UIColor *WPBackgroundColor(void) {
    return WPWeChatPageColor();
}

__attribute__((unused))
static UIColor *WPCardBackgroundColor(void) {
    if (@available(iOS 13.0, *)) return [UIColor secondarySystemGroupedBackgroundColor];
    return [UIColor whiteColor];
}

#pragma mark - Text Colors

__attribute__((unused))
static UIColor *WPTextPrimaryColor(void) {
    if (@available(iOS 13.0, *)) return [UIColor labelColor];
    return [UIColor blackColor];
}

__attribute__((unused))
static UIColor *WPTextSecondaryColor(void) {
    if (@available(iOS 13.0, *)) return [UIColor secondaryLabelColor];
    return [UIColor colorWithRed:0.557 green:0.557 blue:0.576 alpha:1.0];
}

__attribute__((unused))
static UIColor *WPTextTertiaryColor(void) {
    if (@available(iOS 13.0, *)) return [UIColor tertiaryLabelColor];
    return [UIColor colorWithRed:0.722 green:0.722 blue:0.749 alpha:1.0];
}

#pragma mark - Accent Colors

__attribute__((unused))
static UIColor *WPAccentColor(void) {
    return [UIColor colorWithRed:0.200 green:0.780 blue:0.349 alpha:1.0];
}
