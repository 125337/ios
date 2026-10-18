//
//  MsgMergeDebugHud.h
//  MioPlugin
//
//  骑行钻入量调试悬浮窗（mmRideDebug 开启时显示）
//  单行小条：[R/S 侧切换] [−] [值] [+]，±0.5 步进实时改 mmRideDiveRecv/Send，
//  改值后触发聊天页 tableView 重排立即生效；可拖动，落盘走 ConfigManager saveAll
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MsgMergeDebugHud : NSObject

/// 按 mmRideDebug 开关显示/隐藏悬浮窗（聊天页 layout 钩子里轮询调用，开销可忽略）
+ (void)syncVisible;

@end

NS_ASSUME_NONNULL_END
