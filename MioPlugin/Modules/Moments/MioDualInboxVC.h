#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// 铃铛消息页（WCMoments WCMInboxController 原生复刻）：
// UISegmentedControl 三段分类 + UITableView（subtitleCell 样式）+ UIRefreshControl
// 数据由面板 pushInboxNow 同款解析（[facade getAllMessages] KVC 字段表）传入
@interface MioDualInboxVC : UIViewController
- (instancetype)initWithItems:(NSArray<NSDictionary *> *)items;
- (void)updateItems:(NSArray<NSDictionary *> *)items;   // 下拉刷新回填（面板重取后调用）
@property (nonatomic, copy, nullable) void (^userOnDismiss)(void);   // 用户离开页面（清理观察者）
@end

NS_ASSUME_NONNULL_END
