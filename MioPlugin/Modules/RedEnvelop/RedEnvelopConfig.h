#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface RedEnvelopConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL autoRedEnvelop;
@property (nonatomic, assign) BOOL redEnvelopCatchMe;
@property (nonatomic, assign) BOOL personalRedEnvelopEnable;
@property (nonatomic, assign) unsigned int redEnvelopDelay;
@property (nonatomic, assign) BOOL redEnvelopeDetail;
@property (nonatomic, assign) BOOL redEnvelopTextFilterEnabled;
@property (nonatomic, copy, nullable) NSString *redEnvelopTextFilter;
@property (nonatomic, assign) BOOL redEnvelopGroupFilterEnabled;
@property (nonatomic, copy, nullable) NSArray *redEnvelopGroupFilterList;
@property (nonatomic, assign) BOOL redEnvelopAutoReply;
@property (nonatomic, assign) BOOL redEnvelopAutoReplyInGroup;
@property (nonatomic, copy, nullable) NSString *redEnvelopAutoReplyStr;

/// 红包信息同步到窗口：0=不同步 1=个人窗口(发给自己) 2=文件助手 3=当前窗口(红包来源会话) 4=自定义窗口
@property (nonatomic, assign) NSInteger redEnvelopSyncMode;
/// 自定义同步目标 wxid（redEnvelopSyncMode=4 时生效）
@property (nonatomic, copy, nullable) NSString *redEnvelopSyncCustomTarget;

// redEnvelopBlackList 已删除 — 与 redEnvelopGroupFilterList 合并

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
