//
//  AutoFollowService.h
//  MioPlugin
//
//  自动关注公众号核心服务。
//  时序（照抄微信自身 WAJSEventHandler_private_quicklyAddBrandContact 的等 sync 模式）：
//    前台激活 → 延迟 15s → 轮询判定（最多 3 次 × 10s，等联系人 sync 落库）
//    → 仍未关注才发起关注 → 30s 后确认落地 → 硬性一次性标记
//  走微信自有 BrandDirectlyOperateContactLogic tryAddBrandContact:context:，
//  协议层面与视频号/生活插件内部关注同通路，无自造包。
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AutoFollowService : NSObject

/// 安装前台激活监听（由 AutoFollowHook 调用，幂等）
+ (void)startObserving;

/// 立即执行一轮判定（设置页"立即执行"按钮用）：跳过 15s 初始延迟，仍保留轮询
+ (void)runNow;

@end

NS_ASSUME_NONNULL_END
