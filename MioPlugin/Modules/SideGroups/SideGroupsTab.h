#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 侧边分组 Tab 数据模型 + 持久化存取（独立于电报分组 SessionGroupsTab）
/// 模型结构与 WCR WCRefineTelegramTab 同构（沿用 SessionGroupsTab 的字段语义），
/// 但数据完全独立：config 键 sdTabs（SideGroups_ 前缀模块），与电报的 sgTabs 互不影响。
/// 首次读取时若 sdTabs 从未写入且电报分组有数据 → 复制一份作为初始数据（一次性迁移）。
/// kind：0=全部(all) 1=scope 位组 3=最近 N 天
/// 长按动作语义为侧栏独立一套（不复用电报候选）：
///   0=跟随默认（弹侧栏固定动作菜单，见 SideGroupsActions） 2=打开分组管理
///   5=切换置顶过滤  4=无操作
@interface SideGroupsTab : NSObject

@property (nonatomic, copy) NSString *tabId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, assign) NSInteger kind;        // 0=全部 1=scope 组 3=最近 N 天
@property (nonatomic, assign) NSUInteger scopeMask;  // bit0单聊 bit1群聊 bit2公众号 0x18特殊账号；0x20置顶 0x40未读 0x80@我
@property (nonatomic, assign) NSInteger recentDays;  // kind3 时间窗天数；0=跟随全局 sdRecentDays
@property (nonatomic, assign) BOOL removable;        // 可删除（all 恒不可删）
@property (nonatomic, assign) BOOL disabled;         // 停用（停用后不进侧栏，管理页列表仍显示）
@property (nonatomic, assign) NSInteger longPressAction; // 长按动作（side 语义，见类注释）
@property (nonatomic, assign) BOOL hidePinned;       // 本组隐藏置顶会话（长按动作 5 的落点）

+ (NSArray<SideGroupsTab *> *)defaultTabs;
/// 内置可添加目录（与电报 catalogTabs 同款裁剪）
+ (NSArray<SideGroupsTab *> *)catalogTabs;

#pragma mark - Store

/// config sdTabs → 模型数组（带 raw 串缓存；空/非法 → 首次迁移电报分组或 defaultTabs）
+ (NSArray<SideGroupsTab *> *)storedTabs;
/// 首页实际显示的分组 = storedTabs 过滤 disabled；全停用则回落 defaultTabs
+ (NSArray<SideGroupsTab *> *)visibleTabs;
+ (void)saveTabs:(NSArray<SideGroupsTab *> *)tabs;

+ (void)addTab:(SideGroupsTab *)tab;                        // 空 id/重 id/重复语义 → 静默忽略
+ (void)removeTabId:(NSString *)tabId;                      // 不可删/已停用/可见<2 → 静默忽略
+ (void)renameTabId:(NSString *)tabId title:(NSString *)title;
+ (void)setTabId:(NSString *)tabId disabled:(BOOL)disabled; // 停用致可见<2 → 拒绝
+ (void)resetToDefaults;

/// 重复判定：存在同 kind 即重复；kind1 还需 scopeMask 相同
+ (BOOL)isDuplicateOfTab:(SideGroupsTab *)tab inTabs:(NSArray<SideGroupsTab *> *)tabs;

#pragma mark - 长按动作（side 独立语义）

/// 候选（管理页设置项）：0=跟随默认 2=打开分组管理 5=切换置顶过滤 4=无操作
+ (NSArray<NSNumber *> *)pickerLongPressActionsForTab:(SideGroupsTab *)tab;
+ (NSString *)titleForLongPressAction:(NSInteger)action tab:(SideGroupsTab *)tab;
+ (void)setLongPressAction:(NSInteger)action forTabId:(NSString *)tabId;
+ (void)setHidePinned:(BOOL)hidePinned forTabId:(NSString *)tabId;
+ (void)shiftVisibleTabId:(NSString *)tabId by:(NSInteger)delta; // 可见序列内移动

#pragma mark - 当前选中组（仅会话内有效，不跨启动记忆；与电报选中态独立）

+ (nullable NSString *)currentSelectedTabId;
+ (void)setCurrentSelectedTabId:(nullable NSString *)tabId;

/// 列表右值说明文案（同电报 detailText 语义）
- (NSString *)detailTextWithRecentFallback:(NSInteger)recentFallback;

@end

NS_ASSUME_NONNULL_END
