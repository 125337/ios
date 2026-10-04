#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 首页侧边分组 · 列表内目录行 cell
/// XOS 组头 cell 语义移植（XZYCLG3DGroupCell / identifier XZYCLGDividerCell，
/// FUN__part4.c:16649-16673）：目录以 cell 形式注入列表（hook cellForRowAtIndexPath
/// 按行替换），不再用覆盖视图。行高 32（XOS 实测细条组头：普通 cell + label + 箭头 + badge）。
/// folded 态由快照计划行构建时落定（XOS entry 存 folded 同款），SF Symbol 箭头
/// chevron.down 展开 / chevron.right 收起（XOS 实测同款，tint tertiaryLabelColor 11×10）
@interface SideGroupsDirCell : UITableViewCell

- (void)configureTitle:(NSString *)title count:(NSUInteger)count unread:(NSUInteger)unread expanded:(BOOL)expanded;

/// 长按一行 → 分组长按动作（SGDispatchLongPress），由 hook 在出队/创建时挂
@property (nonatomic, copy, nullable) void (^onLongPress)(void);

@end

NS_ASSUME_NONNULL_END
