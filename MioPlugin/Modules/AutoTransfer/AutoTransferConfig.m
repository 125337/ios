#import "AutoTransferConfig.h"

@implementation AutoTransferConfig

+ (instancetype)shared {
    static AutoTransferConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[AutoTransferConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"AutoTransfer_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"autoConfirmTransfer" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"autoConfirmTransferPersonal" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"autoConfirmTransferGroup" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"autoConfirmTransferDelay" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"autoConfirmTransferMaxAmount" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"autoConfirmTransferAutoReply" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"autoConfirmTransferAutoReplyStr" type:ConfigValueTypeString default:@"已收到款项，谢谢！"],
    ];
}

@end