#import <UIKit/UIKit.h>
#import "../Common/SettingCategoryController.h"

// 朋友圈小尾巴设置页：卡片1 总开关（开启后才显示卡片2/3）、卡片2 默认尾巴、卡片3 预设列表
// postSessionMode=YES 时复用为发帖页单次选择页（选择只影响本次发帖，不落盘）
@interface SettingMomentTailController : SettingCategoryController
@property (nonatomic, assign) BOOL postSessionMode;             // 单次选择模式（发帖页入口）
@property (nonatomic, weak) UIViewController *mioCommitTarget;  // 单次模式：dismiss 后调其 reloadData 刷新
@end
