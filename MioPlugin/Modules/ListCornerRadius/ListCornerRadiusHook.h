#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ListCornerRadiusHook : NSObject

+ (void)initListCornerRadiusHook;
+ (void)install;
+ (void)installIfNeeded;   // 幂等：UIView 基类热路径 hook 按开关惰性安装（看门狗 CPU 优化）
+ (void)applyBorderToView:(UIView *)view radius:(NSInteger)radius position:(NSInteger)position isFTSHome:(BOOL)isFTSHome;

@end