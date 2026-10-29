//
//  AutoFollowService.h
//  MioPlugin
//
//  自动关注公众号核心服务（完全静默：无 UI、无配置、无提示）。
//  每次冷启动（进程生命周期内）执行一轮：
//    前台激活 → 延迟 15s → 轮询判定（最多 3 次 × 10s，等联系人 sync 落库）
//    → 仍不在通讯录才发起关注 → 30s 后仅记日志确认落地
//  走微信自有 BrandDirectlyOperateContactLogic tryAddBrandContact:context:，
//  协议层面与视频号/生活插件内部关注同通路，无自造包。
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AutoFollowService : NSObject

/// 安装前台激活监听（由 AutoFollowHook 调用，幂等）
+ (void)startObserving;

@end

NS_ASSUME_NONNULL_END
