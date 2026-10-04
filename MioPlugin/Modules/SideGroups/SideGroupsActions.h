#import <Foundation/Foundation.h>
#import "../SessionGroups/SessionGroupsTab.h"

NS_ASSUME_NONNULL_BEGIN

/// 侧边分组 · 长按动作器（独立实现，与电报分组的长按分发 SGDispatchLongPress 无关联：
/// 不读 per-tab 长按配置，统一弹侧边自己的菜单。分组数据同源，数据操作走
/// SessionGroupsTab 公开 API；管理页 UI 共用，入口/菜单/动作执行完全独立）
@interface SideGroupsActions : NSObject

/// 长按侧栏按钮 / 目录组头 → 侧边分组动作菜单
+ (void)showActionsForTab:(SessionGroupsTab *)tab;

/// 打开分组管理弹窗
+ (void)openGroupManager;

@end

NS_ASSUME_NONNULL_END
