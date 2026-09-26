#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface AutoTransferConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL autoConfirmTransfer;
@property (nonatomic, assign) BOOL autoConfirmTransferPersonal;
@property (nonatomic, assign) BOOL autoConfirmTransferGroup;
@property (nonatomic, assign) unsigned int autoConfirmTransferDelay;
@property (nonatomic, assign) long long autoConfirmTransferMaxAmount;
@property (nonatomic, assign) BOOL autoConfirmTransferAutoReply;
@property (nonatomic, copy, nullable) NSString *autoConfirmTransferAutoReplyStr;

// 定额自动拉群（WCR 同款 FixedInvite）：单笔转账金额等于档位金额 → 把转账人拉进指定群
// 规则结构: @[@{@"amount": @(金额元), @"inviteChatRoom": @"xxx@chatroom"}]
@property (nonatomic, assign) BOOL autoTransferFixedInviteEnabled;
@property (nonatomic, copy, nullable) NSArray<NSDictionary<NSString *, id> *> *autoTransferFixedInviteRules;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
