#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 首页侧边分组 · 侧边栏
/// 移植自 XOS XZYCLGSideRailView/XZYCLGSideRailButton（XOS反编译\groups\Misc_part2.c:13501-15395）：
/// - 竖排按钮列挂在 hostVC.view，宽 54（小屏 48），列表 frame 让位由 Hook 侧完成
/// - 按钮选中态换背景色（updateSelectionBackground Misc_part2.c:13993），字号可配
/// - 未读角标（XZYCLGBadgeLabel），数据来自 SessionGroupsHook 快照 tabUnread
@interface SideGroupsRailView : UIView

@property (nonatomic, copy) void (^onSelectIndex)(NSInteger index);
@property (nonatomic, copy) void (^onLongPressIndex)(NSInteger index);
@property (nonatomic, assign) NSInteger selectedIndex;

/// 宽/字号/颜色签名比对，变化才重建（防每轮布局风暴）
- (void)applyConfig;

/// 重建/更新按钮标题与未读角标（组数变化时重建）
- (void)reloadTitles:(NSArray<NSString *> *)titles badges:(nullable NSArray<NSNumber *> *)unread;

@end

NS_ASSUME_NONNULL_END
