#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 分组 Tab 数据模型
/// 结构逐字段对齐 WCR WCRefineTelegramTab（微信头文件\WCRefine2.1-6.dylib\WCRefineTelegramTab.h）；
/// 默认四组对齐 WCR defaultTabs（WCR_2.1.8_export\groups\Misc_part6.c:3897-3917）：
///   all(kind=0,scope=0) / private(kind=1,scope=1) / chatroom(kind=1,scope=2) / other(kind=1,scope=0x18)，recentDays=3
@interface SessionGroupsTab : NSObject

@property (nonatomic, copy) NSString *tabId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, assign) NSInteger kind;        // 0=全部 1=内置 scope 组
@property (nonatomic, assign) NSUInteger scopeMask;  // bit0单聊 bit1群聊 bit2公众号 0x18特殊账号；0x20置顶 0x40未读 0x80@我

+ (NSArray<SessionGroupsTab *> *)defaultTabs;

@end

NS_ASSUME_NONNULL_END
