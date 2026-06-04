#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ProfileCardBgHook : NSObject

// 唯一入口方法（由 ListCornerRadiusHook 分发）
+ (void)handleButtonLayout:(UIView *)button;

// 资料卡圆角
+ (void)applyProfileCardCorner:(UIView *)cell
                    cornerRadius:(NSInteger)radius
                         isDark:(BOOL)isDark;

// QR 码隐藏
+ (void)hideQRButtonInCell:(UIView *)cell;
+ (void)hideQRButtonInSubviews:(NSArray<UIView *> *)subviews;

// 图片加载
+ (UIImage *)loadBackgroundImageSync:(BOOL)isDark;
+ (void)loadBackgroundImageForImageView:(UIImageView *)imageView isDark:(BOOL)isDark;
+ (NSString *)cardBackgroundDirectory;

// Hook 注册
+ (void)initCellHeightHook;

@end