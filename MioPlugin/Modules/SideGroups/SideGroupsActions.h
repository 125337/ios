#import <Foundation/Foundation.h>
#import "SideGroupsTab.h"

NS_ASSUME_NONNULL_BEGIN

/// 侧边分组 · 长按动作器（完全独立于电报分组的长按分发 SGDispatchLongPress：
/// 数据走 SideGroupsTab（sdTabs，独立于电报 sgTabs）；动作按分组自身的 longPressAction
/// 配置分发（0=跟随默认弹固定菜单 2=打开分组管理 5=切换置顶过滤 4=无操作））
@interface SideGroupsActions : NSObject

/// 长按侧栏按钮 / 目录组头 → 按分组配置分发动作（0 → 固定动作菜单）
+ (void)showActionsForTab:(SideGroupsTab *)tab;

/// 打开分组管理弹窗
+ (void)openGroupManager;

@end

NS_ASSUME_NONNULL_END
