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

__attribute__((unused))
static UIColor *WPSeparatorColorDark(void) {
    if ([UIPurifyConfig shared].hideSeparatorLine) {
        return [UIColor clearColor];
    }
    return [UIColor colorWithWhite:1.0 alpha:0.08];
}

#pragma mark - Background Colors

__attribute__((unused))
static UIColor *WPBackgroundColor(void) {
    if (@available(iOS 13.0, *)) return [UIColor systemGroupedBackgroundColor];
    return [UIColor colorWithRed:0.949 green:0.949 blue:0.969 alpha:1.0];
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

__attribute__((unused))
static UIColor *WPSwitchOnColor(void) {
    return [UIColor colorWithRed:0.341 green:0.780 blue:0.302 alpha:1.0];
}

#pragma mark - Card Border

__attribute__((unused))
static UIColor *WPCardBorderColor(void) {
    return WPSeparatorColor();
}
