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

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
