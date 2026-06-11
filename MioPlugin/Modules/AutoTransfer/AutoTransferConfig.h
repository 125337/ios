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

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
