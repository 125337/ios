#import <Foundation/Foundation.h>
#import "MioFriendDetectResult.h"

typedef void(^MioFDProgressBlock)(NSString *wxID, NSString *nickname, NSInteger current, NSInteger total);
typedef void(^MioFDCompletionBlock)(MioFriendDetectSummary * _Nullable summary, NSError * _Nullable error);

@interface MioFriendDetector : NSObject

@property (nonatomic, readonly) BOOL isDetecting;
@property (nonatomic, readonly) BOOL isStopped;

/// 开始全新检测（清除旧结果）
- (void)startNewDetection:(MioFDProgressBlock)progress completion:(MioFDCompletionBlock)completion;

/// 继续上次未完成的检测
- (void)resumeDetection:(MioFDProgressBlock)progress completion:(MioFDCompletionBlock)completion;

/// 重新检测指定好友（用于详情页"全部删除"后的复核）
- (void)retestFriends:(NSArray<NSString *> *)wxIDs
             progress:(MioFDProgressBlock)progress
           completion:(MioFDCompletionBlock)completion;

/// 停止当前检测
- (void)stopDetection;

/// 读取上次保存的检测结果
+ (nullable MioFriendDetectSummary *)loadSavedSummary;

/// 清除保存的检测结果
+ (void)clearSavedSummary;

/// 获取真实好友人数（排除群聊和公众号）
+ (NSInteger)friendsCount;

@end