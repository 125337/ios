#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface MomentsConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL convenientMomentsEnabled;   // 便捷朋友圈
@property (nonatomic, assign) BOOL hdMomentsEnabled;           // 高清朋友圈
@property (nonatomic, assign) BOOL fakeLikeEnabled;            // 朋友圈伪集赞
@property (nonatomic, assign) NSInteger fakeLikeCount;         // 伪集赞点赞数量
@property (nonatomic, assign) NSInteger fakeCommentCount;      // 伪集赞评论数量
@property (nonatomic, copy) NSArray<NSString *> *fakeCommentTexts;  // 伪集赞评论文本列表
@property (nonatomic, assign) BOOL autoLikeEnabled;            // 朋友圈自动点赞
@property (nonatomic, assign) NSInteger autoLikeInterval;      // 自动点赞操作间隔（秒）
@property (nonatomic, assign) NSInteger autoLikeRefreshInterval;   // 不在朋友圈页时的刷新间隔（秒）
@property (nonatomic, assign) NSInteger autoLikeMaxPerSession;     // 单轮点赞上限（赞满冷却60秒再续）
@property (nonatomic, copy) NSArray<NSString *> *autoLikeBlocklist;    // 自动点赞黑名单（wxid，命中不点赞）
@property (nonatomic, assign) BOOL autoCommentEnabled;             // 朋友圈自动评论总开关
@property (nonatomic, assign) NSInteger autoCommentInterval;       // 评论操作间隔（秒）
@property (nonatomic, assign) NSInteger autoCommentRefreshInterval; // 不在朋友圈页时的评论刷新间隔（秒）
@property (nonatomic, copy) NSArray<NSString *> *autoCommentTexts;     // 自动评论内容池（随机取用，空则不评论）
@property (nonatomic, copy) NSArray<NSString *> *autoCommentContacts;  // 自动评论生效范围（wxid 白名单，空=全部好友）
@property (nonatomic, assign) BOOL detailedTimeEnabled;            // 朋友圈详细时间（时间行显示绝对时间）
@property (nonatomic, copy) NSString *detailedTimeFormat;          // 详细时间格式串（NSDateFormatter，空回落默认）
@property (nonatomic, assign) BOOL tailEnabled;                    // 朋友圈小尾巴总开关
@property (nonatomic, copy) NSString *tailAppId;                   // 默认尾巴 Appid（空=无小尾巴）
@property (nonatomic, copy) NSArray<NSDictionary *> *tailPresets;  // 预设列表（元素 {name, appId}）

+ (instancetype)shared;
- (NSString *)tailDisplayName;   // 当前尾巴显示名（无/预设名/appid）
+ (NSArray<NSDictionary *> *)builtinTailPresets;   // 内置预设（按 appId 去重）
- (NSArray<NSDictionary *> *)effectiveTailPresets; // 生效预设（自定义优先，空回落内置）

@end

NS_ASSUME_NONNULL_END
