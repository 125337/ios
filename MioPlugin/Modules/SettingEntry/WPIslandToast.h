#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// 灵动岛胶囊 toast：顶部居中先以小药丸出现→弹簧展开为「彩色圆图标 + 文案」胶囊，
// 高光扫过，停留后收缩消失。全插件提示统一走 WPShowToast（内部路由到这里）。
typedef NS_ENUM(NSInteger, WPIslandToastType) {
    WPIslandToastTypeInfo    = 0, // 蓝 i
    WPIslandToastTypeSuccess = 1, // 绿 ✓
    WPIslandToastTypeWarning = 2, // 橙 !
    WPIslandToastTypeError   = 3, // 红 ✕
};

@interface WPIslandToast : NSObject

/// 顶部弹出胶囊提示（线程安全：非主线程自动转主线程；重复调用先收旧再弹新）
+ (void)showWithType:(WPIslandToastType)type message:(NSString *)message;

/// 立即收起当前胶囊（如有）
+ (void)hide;

@end

NS_ASSUME_NONNULL_END
