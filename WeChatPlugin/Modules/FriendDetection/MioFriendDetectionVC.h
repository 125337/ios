#import <UIKit/UIKit.h>
#import "MioFriendDetectResult.h"

/// 好友检测控制器
/// - detailType == nil → 主页面（检测结果统计 + 操作按钮）
/// - detailType != nil → 详情页（好友列表 + 右上角按钮）
/// 复刻微信优化 CSFriendDetectionViewController 的同VC复用模式
@interface MioFriendDetectionVC : UIViewController

/// 详情模式类型 (@"invalid" / @"deleted")，nil = 主页面
@property (nonatomic, copy, nullable) NSString *detailType;

/// 工厂方法：创建详情页（异常/已删除好友列表）
+ (instancetype)vcWithType:(nonnull NSString *)type friends:(nonnull NSArray<MioFriendDetectResult *> *)friends;

@end