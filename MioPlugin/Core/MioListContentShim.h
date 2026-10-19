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

// UIImageConfiguration 更早（Xcode 11/iOS 13 SDK）就有：老头文件已带时不重复声明，防重定义
#if !__has_include(<UIKit/UIImageConfiguration.h>)
@interface UIImageConfiguration : NSObject
@property (nonatomic, assign) CGSize maximumSize;
@property (nonatomic, assign) CGFloat cornerRadius;
@end
#endif

@interface UITableViewCell ()
@property (nonatomic, copy, nullable) UIListContentConfiguration *contentConfiguration;
@end

#endif
