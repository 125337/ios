//
//  AutoFollowHook.m
//  MioPlugin
//

#import "AutoFollowHook.h"
#import "AutoFollowService.h"

@implementation AutoFollowHook

+ (void)install {
    // 纯通知驱动，无 MSHook；激活监听由 AutoFollowService 内部 dispatch_once 保证幂等
    [AutoFollowService startObserving];
}

@end
