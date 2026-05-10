#import "WeChatRedEnvelopOperation.h"
#import <objc/runtime.h>
#import <objc/message.h>

static id getService(Class serviceClass) {
    Class MMServiceCenterClass = objc_getClass("MMServiceCenter");
    if (!MMServiceCenterClass) return nil;
    id center = ((id (*)(id, SEL, ...))objc_msgSend)(MMServiceCenterClass, NSSelectorFromString(@"defaultCenter"));
    if (!center) return nil;
    return ((id (*)(id, SEL, Class, ...))objc_msgSend)(center, NSSelectorFromString(@"getService:"), serviceClass);
}

@interface WeChatRedEnvelopOperation ()
@property (nonatomic, strong, readwrite) WeChatRedEnvelopParam *param;
@property (nonatomic, assign, readwrite) int delaySeconds;
@property (nonatomic, assign) BOOL executing;
@property (nonatomic, assign) BOOL finished;
@end

@implementation WeChatRedEnvelopOperation

@synthesize executing = _executing;
@synthesize finished = _finished;

- (instancetype)initWithParam:(WeChatRedEnvelopParam *)param delay:(int)delay {
    self = [super init];
    if (self) {
        _param = param;
        _delaySeconds = delay;
        _executing = NO;
        _finished = NO;
    }
    return self;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(NSString *)key {
    return YES;
}

- (BOOL)isAsynchronous {
    return YES;
}

- (BOOL)isExecuting {
    return _executing;
}

- (BOOL)isFinished {
    return _finished;
}

- (void)setExecuting:(BOOL)executing {
    [self willChangeValueForKey:@"isExecuting"];
    _executing = executing;
    [self didChangeValueForKey:@"isExecuting"];
}

- (void)setFinished:(BOOL)finished {
    [self willChangeValueForKey:@"isFinished"];
    _finished = finished;
    [self didChangeValueForKey:@"isFinished"];
}

- (void)start {
    if (self.isCancelled) {
        [self setFinished:YES];
        return;
    }

    [self setExecuting:YES];
    [self execute];
}

- (void)execute {
    int delay = self.delaySeconds;

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        if (self.isCancelled) {
            [self finish];
            return;
        }

        [self queryRedEnvelopes];
        [self finish];
    });
}

- (void)queryRedEnvelopes {
    id logicMgr = getService(objc_getClass("WCRedEnvelopesLogicMgr"));
    if (!logicMgr) return;

    WeChatRedEnvelopParam *p = self.param;
    if (!p) return;

    NSMutableDictionary *params = [@{} mutableCopy];
    params[@"agreeDuty"] = @"0";
    params[@"channelId"] = p.channelId ?: @"";
    params[@"inWay"] = @"0";
    params[@"msgType"] = p.msgType ?: @"";
    params[@"nativeUrl"] = p.nativeUrl;
    params[@"sendId"] = p.sendId ?: @"";
    params[@"sessionUserName"] = p.sessionUserName ?: @"";

    SEL querySel = NSSelectorFromString(@"ReceiverQueryRedEnvelopesRequest:");
    if ([logicMgr respondsToSelector:querySel]) {
        ((void (*)(id, SEL, NSDictionary *, ...))objc_msgSend)(logicMgr, querySel, params);
    }
}

- (void)finish {
    [self setExecuting:NO];
    [self setFinished:YES];
}

- (void)cancel {
    [super cancel];
    [self finish];
}

@end
