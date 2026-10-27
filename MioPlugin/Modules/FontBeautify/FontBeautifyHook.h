#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// 字体美化 Hook（参考 WCR 2.1.8 全局字体思路的简化实现）
// hook UIFont 三个工厂方法，全局把系统字体偷换成用户导入的字体
@interface FontBeautifyHook : NSObject
+ (void)install;
@end

NS_ASSUME_NONNULL_END
