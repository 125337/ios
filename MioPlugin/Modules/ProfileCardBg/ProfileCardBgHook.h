#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ProfileCardBgHook : NSObject

// 入口方法（由 ListCornerRadiusHook 的薄分发层调用）
+ (void)handleCellLayout:(UITableViewCell *)cell;
+ (void)handleButtonLayout:(UIView *)button;

// 资料卡识别
+ (BOOL)isProfileCard:(UIView *)cell;
+ (BOOL)findMMHeadImageViewInSubviews:(NSArray<UIView *> *)subviews;

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

@end
