#import <Foundation/Foundation.h>
#import "WeChatRedEnvelopParam.h"

@interface WeChatRedEnvelopOperation : NSOperation

@property (nonatomic, strong, readonly) WeChatRedEnvelopParam *param;
@property (nonatomic, assign, readonly) int delaySeconds;

- (instancetype)initWithParam:(WeChatRedEnvelopParam *)param delay:(int)delay;

@end
