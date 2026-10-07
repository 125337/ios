#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 联系人保存完成通知（首页卡片配置页监听刷新行文案）
FOUNDATION_EXPORT NSString * const MioHomeContactSavedChangedNotification;

/// 管理联系人（首页卡片 → 联系人挂件）：宿主全量联系人多选，选择顺序 = 展示顺序
@interface HomeContactPickerVC : UIViewController

@end

NS_ASSUME_NONNULL_END
