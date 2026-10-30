//
//  ThemeHook.m
//  MioPlugin
//

#import "ThemeHook.h"
#import "ThemeService.h"
#import "../../Core/LogManager.h"
#import <UIKit/UIKit.h>

@implementation ThemeHook

+ (void)install {
    // 纯通知驱动，无 MSHook；冷启动激活后延迟重放主题（dispatch_once 幂等，同 AutoFollow 模式）
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        WPLog(@"Theme", @"[HOOK] install: 监听冷启动激活");
        [[NSNotificationCenter defaultCenter]
         addObserverForName:UIApplicationDidBecomeActiveNotification
                     object:nil
                      queue:nil
                 usingBlock:^(NSNotification *note) {
            static dispatch_once_t replayOnce;
            dispatch_once(&replayOnce, ^{
                // 5s 延迟：等 MMServiceCenter 服务与登录态稳定（与字体/自动关注模块同节奏）
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5.0 * NSEC_PER_SEC)),
                               dispatch_get_main_queue(), ^{
                    WPLog(@"Theme", @"[HOOK] 冷启动激活，执行主题重放");
                    [[ThemeService shared] replayIfNeeded];
                });
            });
        }];
    });
}

@end
