#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ProfileCardBgHook : NSObject

// 唯一入口方法（由 ListCornerRadiusHook 分发）
+ (void)handleButtonLayout:(UIView *)button;

// ★ 通用辅助方法
+ (UIViewController *)findMoreViewController:(UIView *)view;
+ (BOOL)hasHeadImageViewInView:(UIView *)view;
+ (BOOL)isDarkModeForVc:(UIViewController *)vc;
+ (void)cleanNativeBgImageView:(UIView *)button;
+ (BOOL)isEssentialSubview:(UIView *)sub;
+ (BOOL)isWhiteOrDynamicBackground:(UIView *)sub;

// ★ 背景素材方法
+ (UIImageView *)findBackgroundImageViewInButton:(UIView *)button;
+ (CGFloat)calcImageAlignmentOffsetWithImageSize:(CGSize)imageSize
                                          inView:(UIView *)view;
+ (UIImageView *)createBackgroundImageViewInButton:(UIView *)button;
+ (void)loadImageAsyncForImageView:(UIImageView *)imageView
                            button:(UIView *)button
                            isDark:(BOOL)isDark;
+ (void)setupBackgroundMaterialInButton:(UIView *)button isDark:(BOOL)isDark;

// ★ 独立功能路径
+ (void)handleHiddenPath:(UIView *)button isDark:(BOOL)isDark;
+ (void)handleVisiblePath:(UIView *)button isDark:(BOOL)isDark;
+ (void)handleHeightAdjustment:(UIView *)button;
+ (void)handleCornerAndQR:(UIView *)button isDark:(BOOL)isDark;

// 资料卡圆角
+ (void)applyProfileCardCorner:(UIView *)cell isDark:(BOOL)isDark;

// QR 码隐藏
+ (void)hideQRButtonInCell:(UIView *)cell;
+ (void)hideQRButtonInSubviews:(NSArray<UIView *> *)subviews;

// 图片加载
+ (UIImage *)loadBackgroundImageSync;
+ (void)loadBackgroundImageForImageView:(UIImageView *)imageView;
+ (NSString *)cardBackgroundDirectory;

// Hook 注册
+ (void)initCellHeightHook;

@end