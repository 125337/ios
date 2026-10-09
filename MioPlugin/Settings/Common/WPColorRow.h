#import <UIKit/UIKit.h>

/// 颜色行预览单元：一个颜色行的全部行为收进它自己
/// 持有浅/深色块与双侧配置 key，自管点击取色、写配置、刷新
///
/// 空值映射只在此定义一处（未设置与已清除观感一致）：
///   浅色侧配置值为空 → 浅色块显示白色
///   深色侧配置值为空 → 深色块显示黑色
///   单色行（无深色 key）值为空 → 显示白色
/// 初始化、picker 确认后、清除后，全部走同一个映射，映射之外无任何单独写色
@interface WPColorRow : UIView

/// @param lightKey 浅色配置 key
/// @param darkKey  深色配置 key，nil = 单色行（只有浅色块）
/// @param hostVC   取色器的宿主页面（弱引用）
- (instancetype)initWithLightKey:(NSString *)lightKey
                          darkKey:(nullable NSString *)darkKey
                       allowClear:(BOOL)allowClear
                           hostVC:(nullable UIViewController *)hostVC;

/// 从配置读值并按空值映射渲染色块
- (void)refresh;

/// 打开取色器（NavCell 兜底路径用：无色块可刷，refreshTarget 传 nil）
/// 写配置与刷新逻辑只在这一处定义，色块点击与兜底路径共用
+ (void)presentPickerForLightKey:(NSString *)lightKey
                          darkKey:(nullable NSString *)darkKey
                       allowClear:(BOOL)allowClear
                           hostVC:(UIViewController *)hostVC
                    refreshTarget:(nullable WPColorRow *)refreshTarget;

@end
