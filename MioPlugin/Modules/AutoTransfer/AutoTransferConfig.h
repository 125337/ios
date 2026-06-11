#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface AutoTransferConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL autoConfirmTransfer;
@property (nonatomic, assign) BOOL autoConfirmTransferPersonal;
@property (nonatomic, assign) BOOL autoConfirmTransferGroup;
@property (nonatomic, assign) unsigned int autoConfirmTransferDelay;
@property (nonatomic, assign) long long autoConfirmTransferMaxAmount;
@property (nonatomic, assign) BOOL autoConfirmTransferAutoReply;
@property (nonatomic, copy) NSString *autoConfirmTransferAutoReplyStr;

+ (instancetype)shared;

@end