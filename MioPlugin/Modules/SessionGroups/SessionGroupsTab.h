#import <Foundation/Foundation.h>
#import "../../Core/SGTabProtocol.h"

NS_ASSUME_NONNULL_BEGIN

/// 分组 Tab 数据模型 + 持久化存取
/// 结构对齐 WCR WCRefineTelegramTab（微信头文件\WCRefine2.1-6.dylib\WCRefineTelegramTab.h）；
/// Store 语义对齐 WCRefineTelegramGroupingStore（WCR_2.1.8_export\groups\Misc_part6.c:3830-7700）：
/// config 键 sgTabs 存 JSON 字典数组（WCR homeTelegramGroupingTabs 同构，Misc_part6.c:4436/5124），
/// 空/非法回落 defaultTabs（ensureTabsLoaded，4325-4440）。
/// kind：0=全部(all) 1=scope 位组 3=最近 N 天（WCR 的 2/4/5 依赖其自定义分组生态，不做）
@interface SessionGroupsTab : NSObject <SGTabProtocol>

@property (nonatomic, copy) NSString *tabId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, assign) NSInteger kind;        // 0=全部 1=scope 组 3=最近 N 天
@property (nonatomic, assign) NSUInteger scopeMask;  // bit0单聊 bit1群聊 bit2公众号 0x18特殊账号；0x20置顶 0x40未读 0x80@我
@property (nonatomic, assign) NSInteger recentDays;  // kind3 时间窗天数；0=跟随全局 sgRecentDays（WCR tab 自身或 config 缺省）
@property (nonatomic, assign) BOOL removable;        // 可删除（all 恒不可删；WCR 缺省 = tabId!=all，Misc_part6.c:3159-3513）
@property (nonatomic, assign) BOOL disabled;         // 停用（停用后不进首页分组条，管理页列表仍显示）
@property (nonatomic, assign) NSInteger longPressAction; // 长按动作 0=跟随默认（WCR longPressAction，Misc_part6.c:6238+）
@property (nonatomic, assign) BOOL hidePinned;       // 本组隐藏置顶会话（长按动作 5 的落点，WCR tab.hidePinned）

+ (NSArray<SessionGroupsTab *> *)defaultTabs;
/// 内置可添加目录（WCR availableQuickAddTabs Misc_part6.c:7513-7660 的裁剪版：
/// 公众号/置顶/未读/@我/最近/特殊账号；朋友 kind5、联动 kind2、成员组 kind4 不做）
+ (NSArray<SessionGroupsTab *> *)catalogTabs;

#pragma mark - Store（增删改语义 Misc_part6.c:5557-5815 / 6764-6822 / 7484-7503）

/// config sgTabs → 模型数组（带 raw 串缓存；空/非法 → defaultTabs）
+ (NSArray<SessionGroupsTab *> *)storedTabs;
/// 首页实际显示的分组 = storedTabs 过滤 disabled；全停用则回落 defaultTabs
+ (NSArray<SessionGroupsTab *> *)visibleTabs;
+ (void)saveTabs:(NSArray<SessionGroupsTab *> *)tabs;

+ (void)addTab:(SessionGroupsTab *)tab;                     // 空 id/重 id/重复语义 → 静默忽略
+ (void)removeTabId:(NSString *)tabId;                      // 不可删/已停用/可见<2 → 静默忽略
+ (void)renameTabId:(NSString *)tabId title:(NSString *)title;
+ (void)setTabId:(NSString *)tabId disabled:(BOOL)disabled; // 停用致可见<2 → 拒绝
+ (void)resetToDefaults;

/// 重复判定（isDuplicateOfTab Misc_part6.c:4925-5040）：存在同 kind 即重复；kind1 还需 scopeMask 相同
+ (BOOL)isDuplicateOfTab:(SessionGroupsTab *)tab inTabs:(NSArray<SessionGroupsTab *> *)tabs;

#pragma mark - 长按动作（WCR longPressAction 生态 Misc_part6.c:6238-6660 + FUN_007f7044 执行器）

/// 动作语义（WCR 枚举裁剪：1=分组面板 / 3=编辑联动 依赖 WCR 自定义分组生态，不做）：
///   0=跟随默认  2=打开分组管理  5=切换置顶过滤  6=弹长按菜单  4=无操作
///   7=停用分组 8=左移 9=右移 仅出现在长按菜单，不持久化
+ (NSInteger)defaultLongPressActionForTab:(SessionGroupsTab *)tab;    // Mio 全 kind → 2
+ (NSInteger)resolvedLongPressActionForTab:(SessionGroupsTab *)tab;   // 0 → 默认（WCR 6279）
+ (NSString *)titleForLongPressAction:(NSInteger)action tab:(SessionGroupsTab *)tab;        // 设置项文案（0→「跟随（x）」6314）
+ (NSString *)runtimeTitleForLongPressAction:(NSInteger)action tab:(SessionGroupsTab *)tab; // 菜单文案（5 依 hidePinned，6407）
+ (NSArray<NSNumber *> *)pickerLongPressActionsForTab:(SessionGroupsTab *)tab;  // 设置候选（6448 裁剪 [0,2,5,6,4]）
+ (NSArray<NSNumber *> *)menuLongPressActionsForTab:(SessionGroupsTab *)tab;    // 长按菜单（6532 裁剪 [2,5,7,8,9]）
+ (void)setLongPressAction:(NSInteger)action forTabId:(NSString *)tabId;        // 范围 [0,6] 持久化（6623）
+ (void)setHidePinned:(BOOL)hidePinned forTabId:(NSString *)tabId;              // 长按动作 5 落点
+ (void)shiftVisibleTabId:(NSString *)tabId by:(NSInteger)delta;                // 长按动作 8/9：可见序列内移动

#pragma mark - 当前选中组（仅会话内有效，不跨启动记忆；启动回落第一组）

+ (nullable NSString *)currentSelectedTabId;
+ (void)setCurrentSelectedTabId:(nullable NSString *)tabId;

/// 列表右值说明文案（WCR detailText Misc_part6.c:3523-3642）
/// recentFallback：kind3 且 tab 未自带天数时的全局缺省（sgRecentDays）
- (NSString *)detailTextWithRecentFallback:(NSInteger)recentFallback;

@end

NS_ASSUME_NONNULL_END
