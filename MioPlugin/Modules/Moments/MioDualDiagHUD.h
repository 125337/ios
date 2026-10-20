#import <UIKit/UIKit.h>

// 数据源诊断悬浮窗（native overlay，不进插件 WebView UI）：面板 Open 挂上、Close 摘除。
// 显示数据供给链各层深度与 tail 循环状态，1s 自续链刷新，pan 手势拖动。
@interface MioDualDiagHUD : NSObject
+ (void)attachToView:(UIView *)container;   // 面板 Open 后挂（host.view 顶层）
+ (void)detach;                             // 面板 Close 摘
@end
