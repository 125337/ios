#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 关键词提醒 Hook：挂 CMessageMgr 消息入口（与 RedEnvelopHook 同一组入口），
/// 命中关键词后走 KeywordAlertPresenter 展示，并写入历史记录。
@interface KeywordAlertHook : NSObject
+ (void)install;
@end

NS_ASSUME_NONNULL_END
