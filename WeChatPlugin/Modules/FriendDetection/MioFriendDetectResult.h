#import <Foundation/Foundation.h>

/// 单次好友检测状态
typedef NS_ENUM(NSInteger, MioFriendStatus) {
    MioFriendStatusNormal = 0,   // 仍是好友
    MioFriendStatusDeleted = 1,  // 已被删除
    MioFriendStatusInvalid = 2,  // 异常（如对方被封号）
};

/// 单个好友的检测结果
@interface MioFriendDetectResult : NSObject <NSSecureCoding>

@property (nonatomic, copy) NSString *wxID;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, copy) NSString *remark;
@property (nonatomic, assign) MioFriendStatus status;
@property (nonatomic, assign) NSInteger retcode;
@property (nonatomic, copy) NSString *retmsg;

@end

/// 检测结果汇总（持久化用，支持断点续传）
@interface MioFriendDetectSummary : NSObject <NSSecureCoding>

@property (nonatomic, assign) NSTimeInterval timestamp;
@property (nonatomic, assign) NSInteger totalCount;
@property (nonatomic, strong) NSArray<MioFriendDetectResult *> *deletedFriends;
@property (nonatomic, strong) NSArray<MioFriendDetectResult *> *invalidFriends;
@property (nonatomic, strong) NSSet<NSString *> *checkedWxIDs;

@end