#import <UIKit/UIKit.h>
#import "../Common/SettingCategoryController.h"
#import "../../Modules/Moments/MomentsScheduler.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

// 朋友圈定时发送任务列表页（设置页入口；微信引擎渲染）
// 每个任务一组：预览 + 时间/状态 + 循环模式 + 改期/启停/删除；单次任务可改期，循环任务可调档
@interface MioMomentsSchedListController : SettingCategoryController
@end
