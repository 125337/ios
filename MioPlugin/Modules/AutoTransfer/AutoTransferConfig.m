#import "AutoTransferConfig.h"

@implementation AutoTransferConfig

static AutoTransferConfig *_sharedInstance = nil;

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[AutoTransferConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"AutoTransfer_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor boolItem:@"autoConfirmTransfer" default:@(NO)],
        [ConfigDescriptor boolItem:@"autoConfirmTransferPersonal" default:@(NO)],
        [ConfigDescriptor boolItem:@"autoConfirmTransferGroup" default:@(NO)],
        [ConfigDescriptor integerItem:@"autoConfirmTransferDelay" default:@(0)],
        [ConfigDescriptor integerItem:@"autoConfirmTransferMaxAmount" default:@(0)],
        [ConfigDescriptor boolItem:@"autoConfirmTransferAutoReply" default:@(NO)],
        [ConfigDescriptor stringItem:@"autoConfirmTransferAutoReplyStr" default:@"已收到款项，谢谢！"],
    ];
}

@end