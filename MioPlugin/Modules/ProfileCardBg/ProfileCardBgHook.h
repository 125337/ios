#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ProfileCardBgHook : NSObject

// 唯一入口方法（由 ListCornerRadiusHook 分发）
+ (void)handleButtonLayout:(UIView *)button;

// ★ 通用辅助方法
+ (UIViewController *)findMoreViewController:(UIView *)view;
+ (BOOL)hasHeadImageViewInView:(UIView *)view;
+ (void)cleanNativeBgImageView:(UIView *)button;
+ (BOOL)isEssentialSubview:(UIView *)sub;
+ (BOOL)isWhiteOrDynamicBackground:(UIView *)sub;

// ★ 背景素材方法
+ (UIImageView *)findBackgroundImageViewInButton:(UIView *)button;
+ (CGFloat)calcImageAlignmentOffsetWithImageSize:(CGSize)imageSize
                                          inView:(UIView *)view;
+ (UIImageView *)createBackgroundImageViewInButton:(UIView *)button;
+ (void)configureBackgroundImageView:(UIImageView *)imageView
                            inButton:(UIView *)button;
+ (void)loadImageAsyncForImageView:(UIImageView *)imageView
                            button:(UIView *)button
                            isDark:(BOOL)isDark;
+ (void)setupBackgroundMaterialInButton:(UIView *)button isDark:(BOOL)isDark;

// ★ 独立功能路径
+ (void)handleHiddenPath:(UIView *)button isDark:(BOOL)isDark;
+ (void)handleVisiblePath:(UIView *)button isDark:(BOOL)isDark;
+ (void)handleCornerAndQR:(UIView *)button isDark:(BOOL)isDark;

// 箭码/二维码识别隐藏
+ (void)hideArrowQRInCell:(UIView *)cell shouldHide:(BOOL)shouldHide;

// ★ 状态识别
+ (BOOL)isStateEntryButton:(UIView *)view;
+ (BOOL)isStateTopicButton:(UIView *)view;

// ★ 状态隐藏
+ (void)hideStateElementsInCell:(UIView *)cell shouldHide:(BOOL)shouldHide;

// 资料卡圆角
+ (void)applyProfileCardCorner:(UIView *)cell isDark:(BOOL)isDark;

// 图片加载
+ (UIImage *)loadBackgroundImageSync;
+ (void)loadBackgroundImageForImageView:(UIImageView *)imageView;
+ (NSString *)cardBackgroundDirectory;

// Hook 注册
+ (void)initCellHeightHook;
+ (void)initProfileCardHook;

@end