#import <UIKit/UIKit.h>
#import "../Common/SettingCategoryController.h"
#import "../../Modules/Moments/MomentsScheduler.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

// 朋友圈定时任务列表页（WCR 同款紧凑布局）：每任务两行——导航行（预览/状态，点击弹
// 微信原生 WCActionSheet：启停/改期/循环/删除）+ 信息行（发表时间/循环模式）
@interface MioMomentsSchedListController : SettingCategoryController
@end
