#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// 铃铛消息页（WCMoments WCMInboxController 原生复刻）：
// UISegmentedControl 三段分类（全部/赞过我/评论过我）+ UITableView（subtitle 样式）
// + UIRefreshControl。数据自取：[facade getAllMessages] → comment(WCUserComment) 取展示字段。
// 「查看原帖」经 MioDualInboxOpenPost 通知由面板关闭切回原生朋友圈。
@interface MioDualInboxVC : UIViewController
@property (nonatomic, copy, nullable) void (^userOnDismiss)(void);   // 用户离开页面（清理观察者）
@end

NS_ASSUME_NONNULL_END
