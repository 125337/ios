// MioListContentShim.h —— UIListContentConfiguration 现代内容配置管线（iOS14+ 运行时必有）
// 老编译 SDK 缺头文件时补声明；__has_include 守卫：换到带该头文件的 SDK 后本文件自动失效。
#import <UIKit/UIKit.h>

@class UITextContentConfiguration;
@class UIImageConfiguration;

// Xcode 12（iOS 14 SDK）起才有 UIListContentConfiguration
#if !__has_include(<UIKit/UIListContentConfiguration.h>)

@interface UIListContentConfiguration : NSObject
@property (nonatomic, copy, nullable) NSString *text;
@property (nonatomic, copy, nullable) NSAttributedString *attributedText;
@property (nonatomic, copy, nullable) NSString *secondaryText;
@property (nonatomic, copy, nullable) NSAttributedString *secondaryAttributedText;
@property (nonatomic, strong, nullable) UIImage *image;
@property (nonatomic, readonly) UITextContentConfiguration *textProperties;
@property (nonatomic, readonly) UITextContentConfiguration *secondaryTextProperties;
@property (nonatomic, readonly) UIImageConfiguration *imageProperties;
@property (nonatomic, assign) CGFloat imageToTextPadding;
@property (nonatomic, assign) CGFloat textToSecondaryTextVerticalPadding;
@end

@interface UITextContentConfiguration : NSObject
@property (nonatomic, strong, null_resettable) UIFont *font;
@property (nonatomic, strong, null_resettable) UIColor *textColor;
@property (nonatomic, assign) NSInteger numberOfLines;
@end

// ⚠️ UIImageConfiguration 是只读值对象：运行时没有 setMaximumSize:/setCornerRadius:，
// 在此补可写声明编译能过但一调用即 unrecognized selector（首版 shim 点进铃铛页必崩实证）。
// 圆头像只能走 circleAvatar: 预渲染位图，不要在此补这两个声明。

@interface UITableViewCell ()
@property (nonatomic, copy, nullable) UIListContentConfiguration *contentConfiguration;
@end

#endif
