#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ProfileCardBgHook : NSObject

// 唯一入口方法（由 ListCornerRadiusHook 分发）
+ (void)handleButtonLayout:(UIView *)button;

// 资料卡圆角
+ (void)applyProfileCardCorner:(UIView *)cell isDark:(BOOL)isDark;

// QR 码隐藏
+ (void)hideQRButtonInCell:(UIView *)cell;
+ (void)hideQRButtonInSubviews:(NSArray<UIView *> *)subviews;

// 图片加载
+ (UIImage *)loadBackgroundImageSync;
+ (void)loadBackgroundImageForImageView:(UIImageView *)imageView;
+ (NSString *)cardBackgroundDirectory;

// 隐藏信息卡片
+ (BOOL)handleCardHiddenInButton:(UIView *)button
                       isHidden:(BOOL)isHidden
                    hasMaterial:(BOOL)hasMaterial;

// Hook 注册
+ (void)initCellHeightHook;

@end