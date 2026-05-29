#import "MioRedEnvelopTaskManager.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>
#import "../../Core/LogManager.h"

@interface MioRedEnvelopTaskManager ()
@property (nonatomic, strong) NSOperationQueue *taskQueue;
@property (nonatomic, strong) NSMutableDictionary *pendingParams;
@property (nonatomic, strong) NSMutableDictionary *processedMsgIds;
@property (nonatomic, strong) id blankPlayer;
@property (nonatomic, assign) unsigned long bgTaskId;
@property (nonatomic, strong) NSTimer *bgTaskTimer;
@end

@implementation MioRedEnvelopTaskManager

+ (instancetype)shared {
    static MioRedEnvelopTaskManager *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[MioRedEnvelopTaskManager alloc] init];
    });
    return instance;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _pendingParams = [NSMutableDictionary dictionary];
        _processedMsgIds = [NSMutableDictionary dictionary];
        _bgTaskId = 0;

        _taskQueue = [NSOperationQueue new];
        _taskQueue.maxConcurrentOperationCount = 1;
    }
    return self;
}

- (void)addTaskWithParam:(MioRedEnvelopParam *)param delay:(int)delay {
    if (!param) return;

    NSBlockOperation *op = [NSBlockOperation blockOperationWithBlock:^{
        dispatch_semaphore_t sema = dispatch_semaphore_create(0);
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            id logicMgr = nil;
            Class MMServiceCenterClass = objc_getClass("MMServiceCenter");
            if (MMServiceCenterClass) {
                id center = ((id (*)(id, SEL, ...))objc_msgSend)(MMServiceCenterClass, NSSelectorFromString(@"defaultCenter"));
                if (center) logicMgr = ((id (*)(id, SEL, Class, ...))objc_msgSend)(center, NSSelectorFromString(@"getService:"), objc_getClass("WCRedEnvelopesLogicMgr"));
            }
            if (logicMgr) {
                NSMutableDictionary *params = [@{} mutableCopy];
                params[@"agreeDuty"] = @"0";
                params[@"channelId"] = param.channelId ?: @"";
                params[@"inWay"] = @"0";
                params[@"msgType"] = param.msgType ?: @"";
                params[@"nativeUrl"] = param.nativeUrl;
                params[@"sendId"] = param.sendId ?: @"";
                params[@"sessionUserName"] = param.sessionUserName ?: @"";
                SEL querySel = NSSelectorFromString(@"ReceiverQueryRedEnvelopesRequest:");
                if ([logicMgr respondsToSelector:querySel]) {
                    ((void (*)(id, SEL, NSDictionary *, ...))objc_msgSend)(logicMgr, querySel, params);
                }
            }
            dispatch_semaphore_signal(sema);
        });
        dispatch_semaphore_wait(sema, dispatch_time(DISPATCH_TIME_NOW, (int64_t)((delay + 15) * NSEC_PER_SEC)));
    }];
    [self.taskQueue addOperation:op];
    WPLog(@"RedEnv", @"[TASK] 红包任务入队: sendId=%@ delay=%d queueCount=%lu", param.sendId, delay, (unsigned long)self.taskQueue.operationCount);
}

- (void)cancelAllTasks {
    [self.taskQueue cancelAllOperations];
    WPLog(@"RedEnv", @"[TASK] 所有任务已取消");
}

- (NSUInteger)pendingTaskCount {
    return self.taskQueue.operationCount;
}

- (void)savePendingParam:(MioRedEnvelopParam *)param {
    @synchronized (self.pendingParams) {
        if (param.sendId.length > 0) {
            self.pendingParams[param.sendId] = param;
        }
    }
}

- (MioRedEnvelopParam *)popPendingParamBySendId:(NSString *)sendId {
    @synchronized (self.pendingParams) {
        MioRedEnvelopParam *p = self.pendingParams[sendId ?: @""];
        if (p) [self.pendingParams removeObjectForKey:sendId ?: @""];
        return p;
    }
}

- (MioRedEnvelopParam *)findPendingParamBySign:(NSString *)sign {
    if (!sign.length) return nil;
    @synchronized (self.pendingParams) {
        for (NSString *key in self.pendingParams) {
            MioRedEnvelopParam *p = self.pendingParams[key];
            if (p.sign.length > 0 && [p.sign isEqualToString:sign]) {
                [self.pendingParams removeObjectForKey:key];
                return p;
            }
        }
    }
    return nil;
}

- (void)markProcessed:(NSString *)msgId {
    if (!msgId.length) return;
    @synchronized (self.processedMsgIds) {
        self.processedMsgIds[msgId] = @YES;
    }
}

- (BOOL)isProcessed:(NSString *)msgId {
    if (!msgId.length) return NO;
    @synchronized (self.processedMsgIds) {
        return self.processedMsgIds[msgId] != nil;
    }
}

- (void)startBackgroundKeepAlive {
    @try {
        if (!self.blankPlayer) {
            NSURL *url = nil;
            NSString *path = [[NSBundle mainBundle] pathForResource:@"blank" ofType:@"wav"];
            if (path) {
                url = [NSURL fileURLWithPath:path];
            } else {
                NSData *silenceData = [NSData dataWithBytes:(unsigned char[]){0x52, 0x49, 0x46, 0x46, 0x24, 0x00, 0x00, 0x00, 0x57, 0x41, 0x56, 0x45, 0x66, 0x6D, 0x74, 0x20, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x44, 0xAC, 0x00, 0x00, 0x88, 0x58, 0x01, 0x00, 0x02, 0x00, 0x10, 0x00, 0x64, 0x61, 0x74, 0x61, 0x00, 0x00, 0x00, 0x00} length:44];
                NSString *tmpPath = [NSTemporaryDirectory() stringByAppendingPathComponent:@"blank.wav"];
                [silenceData writeToFile:tmpPath atomically:YES];
                url = [NSURL fileURLWithPath:tmpPath];
            }

            if (url) {
                Class AVAudioPlayerClass = objc_getClass("AVAudioPlayer");
                if (AVAudioPlayerClass) {
                    self.blankPlayer = ((id (*)(id, SEL, NSURL *, id, ...))objc_msgSend)(
                        ((id (*)(id, SEL, ...))objc_msgSend)(AVAudioPlayerClass, NSSelectorFromString(@"alloc")),
                        NSSelectorFromString(@"initWithContentsOfURL:error:"), url, nil);

                    if (self.blankPlayer) {
                        ((void (*)(id, SEL, NSInteger, ...))objc_msgSend)(self.blankPlayer, NSSelectorFromString(@"setNumberOfLoops:"), -1);
                        ((void (*)(id, SEL, float, ...))objc_msgSend)(self.blankPlayer, NSSelectorFromString(@"setVolume:"), 0.0f);
                    }
                }

                Class AVAudioSessionClass = objc_getClass("AVAudioSession");
                if (AVAudioSessionClass) {
                    id session = ((id (*)(id, SEL, ...))objc_msgSend)(AVAudioSessionClass, NSSelectorFromString(@"sharedInstance"));
                    if (session) {
                        SEL setCategorySel = NSSelectorFromString(@"setCategory:withOptions:error:");
                        if ([session respondsToSelector:setCategorySel]) {
                            ((void (*)(id, SEL, NSString *, NSUInteger, id, ...))objc_msgSend)(
                                session, setCategorySel,
                                @"AVAudioSessionCategoryPlayback", 0x1, nil);
                        }
                        SEL setActiveSel = NSSelectorFromString(@"setActive:error:");
                        if (![session respondsToSelector:setActiveSel]) {
                            setActiveSel = NSSelectorFromString(@"setActive:withError:");
                        }
                        if ([session respondsToSelector:setActiveSel]) {
                            ((void (*)(id, SEL, BOOL, id, ...))objc_msgSend)(
                                session, setActiveSel, YES, nil);
                        }
                    }
                }
            }
        }

        if (self.blankPlayer) {
            BOOL isPlaying = ((BOOL (*)(id, SEL, ...))objc_msgSend)(self.blankPlayer, NSSelectorFromString(@"isPlaying"));
            if (!isPlaying) {
                ((BOOL (*)(id, SEL, ...))objc_msgSend)(self.blankPlayer, NSSelectorFromString(@"play"));
                WPLog(@"RedEnv", @"[BG] 后台保活: 静音音频开始播放");
            }
        }

        if (self.bgTaskId == 0) {
            __unsafe_unretained typeof(self) weakSelf = self;
            self.bgTaskId = [[UIApplication sharedApplication] beginBackgroundTaskWithExpirationHandler:^{
                typeof(weakSelf) strongSelf = weakSelf;
                if (strongSelf.bgTaskId != 0) {
                    [[UIApplication sharedApplication] endBackgroundTask:strongSelf.bgTaskId];
                    strongSelf.bgTaskId = 0;
                }
            }];
            WPLog(@"RedEnv", @"[BG] 后台保活: 后台任务已开启");
        }

        if (!self.bgTaskTimer) {
            __unsafe_unretained typeof(self) weakSelf = self;
            self.bgTaskTimer = [NSTimer scheduledTimerWithTimeInterval:5.0
                                                              target:[NSBlockOperation blockOperationWithBlock:^{
                typeof(weakSelf) strongSelf = weakSelf;
                if (strongSelf.bgTaskId != 0) {
                    [[UIApplication sharedApplication] endBackgroundTask:strongSelf.bgTaskId];
                }
                strongSelf.bgTaskId = [[UIApplication sharedApplication] beginBackgroundTaskWithExpirationHandler:^{
                    typeof(weakSelf) strongSelf2 = weakSelf;
                    if (strongSelf2.bgTaskId != 0) {
                        [[UIApplication sharedApplication] endBackgroundTask:strongSelf2.bgTaskId];
                        strongSelf2.bgTaskId = 0;
                    }
                }];
            }]
                                                           selector:@selector(main)
                                                           userInfo:nil
                                                            repeats:YES];
            WPLog(@"RedEnv", @"[BG] 后台保活: 定时器已启动");
        }
    } @catch (NSException *e) {
        WPLog(@"RedEnv", @"[WARN] 后台保活异常: %@", e);
    }
}

- (void)stopBackgroundKeepAlive {
    @try {
        if (self.blankPlayer) {
            BOOL isPlaying = ((BOOL (*)(id, SEL, ...))objc_msgSend)(self.blankPlayer, NSSelectorFromString(@"isPlaying"));
            if (isPlaying) {
                ((void (*)(id, SEL, ...))objc_msgSend)(self.blankPlayer, NSSelectorFromString(@"stop"));
                WPLog(@"RedEnv", @"[BG] 后台保活: 音频已停止");
            }
        }
        if (self.bgTaskTimer) {
            [self.bgTaskTimer invalidate];
            self.bgTaskTimer = nil;
            WPLog(@"RedEnv", @"[BG] 后台保活: 定时器已停止");
        }
        if (self.bgTaskId != 0) {
            [[UIApplication sharedApplication] endBackgroundTask:self.bgTaskId];
            self.bgTaskId = 0;
            WPLog(@"RedEnv", @"[BG] 后台保活: 后台任务已结束");
        }
    } @catch (NSException *e) {}
}

- (void)dealloc {
}

@end
