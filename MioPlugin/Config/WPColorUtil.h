#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// HSVA 颜色结构体
typedef struct {
    CGFloat hue;        // 色相     0.0 ~ 1.0
    CGFloat saturation; // 饱和度   0.0 ~ 1.0
    CGFloat brightness; // 明度     0.0 ~ 1.0
    CGFloat alpha;      // 透明度   0.0 ~ 1.0
} WPHsvColor;

/// 明暗取色策略：决定"按明暗标志在浅色值/深色值之间怎么选、选不到怎么办"
typedef NS_ENUM(NSUInteger, WPColorResolveStrategy) {
    /// 严格按模式取值：当前侧未设置或非法 → 兜底色
    WPColorResolveStrict,
    /// 深色未设置回落浅色值（浅色模式只取浅色侧；深色侧已设置但非法仍走兜底，不回落）
    WPColorResolveDarkFallsBackToLight,
    /// 双向互为回落：当前侧未设置取另一侧；已设置但非法仍走兜底
    WPColorResolveMutualFallback,
    /// 深色未设置时由浅色自动提亮派生（RGB 各通道 +0.15、封顶 1.0、保留 alpha）
    WPColorResolveBrightenDerive,
};

@interface WPColorUtil : NSObject

/// #RRGGBB / #RRGGBBAA → UIColor
/// 空/nil/非法输入 → nil（调用方据此区分"未设置"与"真黑色"，各自兜底）
/// @param hex 可含 # 前缀与首尾空白，如 "#FF0000" / " FF0000AA "
+ (nullable UIColor *)colorFromHexString:(nullable NSString *)hex;

/// 明暗取色统一解析器（hex 级）：一次调用完成"按策略选侧 → 解析 → 失败兜底"
/// 硬约束：明暗标志由调用方传入，方法内部不做任何 UIKit 检测、不读任何配置（零依赖纯函数）
/// @param lightHex 浅色侧配置值（可 nil/空）
/// @param darkHex  深色侧配置值（可 nil/空）
/// @param isDark   调用方判定的明暗标志
/// @param fallback 兜底色，可为 nil（配合调用处判空表达"兜底依赖明暗"或"不覆盖原生样式"）
+ (nullable UIColor *)resolveColorFromLightHex:(nullable NSString *)lightHex
                                       darkHex:(nullable NSString *)darkHex
                                        isDark:(BOOL)isDark
                                  withStrategy:(WPColorResolveStrategy)strategy
                                      fallback:(nullable UIColor *)fallback;

/// 明暗动态色（hex 级）：两侧各自"hex 解析，未设置/非法 → 对应侧兜底"，包装为
/// colorWithDynamicProvider 动态 UIColor——明暗切换由 UIKit 按 trait 自动重取色，
/// 调用方无需判暗、无需在切换时重设
/// 两侧输入与兜底均为空 → 返回 nil（调用方保留原生背景）；iOS 13 以下回退浅色侧结果
+ (nullable UIColor *)dynamicColorFromLightHex:(nullable NSString *)lightHex
                                        darkHex:(nullable NSString *)darkHex
                                  lightFallback:(nullable UIColor *)lightFallback
                                   darkFallback:(nullable UIColor *)darkFallback;

/// 明暗取色统一解析器（颜色级）：输入已是 UIColor 时使用，提亮策略的实现基础
/// 颜色级"未设置"即 nil，无解析失败概念；hex 级的提亮策略内部委托本方法
+ (nullable UIColor *)resolveColorWithLight:(nullable UIColor *)light
                                       dark:(nullable UIColor *)dark
                                     isDark:(BOOL)isDark
                               withStrategy:(WPColorResolveStrategy)strategy;

/// UIColor → #RRGGBB（小写）
+ (NSString *)hexStringFromColor:(UIColor *)color;

/// 验证 Hex 是否合法（6 或 8 位十六进制，可选 # 前缀，容忍首尾空白）
+ (BOOL)isValidHexString:(nullable NSString *)hex;

/// HSVA → UIColor
+ (UIColor *)colorWithHue:(CGFloat)hue
               saturation:(CGFloat)saturation
               brightness:(CGFloat)brightness
                    alpha:(CGFloat)alpha;

/// UIColor → HSVA
+ (WPHsvColor)hsvFromColor:(UIColor *)color;

/// RGB(0~255) + Alpha(0~1) → WPHsvColor
+ (WPHsvColor)hsvFromRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;

/// WPHsvColor → RGB(0~255)
+ (void)getRed:(CGFloat *)red green:(CGFloat *)green blue:(CGFloat *)blue fromHsv:(WPHsvColor)hsv;

/// 判断两个颜色是否相似（用于历史颜色去重，欧几里得距离 < 0.05）
+ (BOOL)isColor:(UIColor *)c1 similarToColor:(UIColor *)c2;

@end

NS_ASSUME_NONNULL_END