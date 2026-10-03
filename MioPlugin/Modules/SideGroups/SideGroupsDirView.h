#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 首页侧边分组 · 列表内目录页
/// 移植自 XOS XZYCLG「+列表内」形态（XZYCLG3DGroupCell/HorizontalListSwipeHandler 族）：
/// 选中「全部」分组时列表区域显示分组目录——每行 分组名 · 会话数 + 未读角标 + 箭头，
/// 点击行切入该分组（过滤会话列表），再点「全部」回到目录。
@interface SideGroupsDirView : UIView

@property (nonatomic, copy) void (^onSelectIndex)(NSInteger index);
@property (nonatomic, copy) void (^onLongPressIndex)(NSInteger index);

/// 组数变化时重建行，其余原地刷新（标题/会话数/未读角标）
- (void)reloadGroups:(NSArray<NSString *> *)titles
              counts:(nullable NSArray<NSNumber *> *)counts
              unread:(nullable NSArray<NSNumber *> *)unread;

@end

NS_ASSUME_NONNULL_END
