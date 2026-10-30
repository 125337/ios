//
//  ThemeHook.m
//  MioPlugin
//

#import "ThemeHook.h"
#import "ThemeService.h"
#import "../../Core/LogManager.h"

@implementation ThemeHook

+ (void)install {
    // 取图拦截模式：进程加载即装 hook（类已注册），hook 直读配置，无需冷启动重放
    WPLog(@"Theme", @"[HOOK] install: 取图拦截模式（MMThemeManager imageNamed + WCSVGImage imageNamed:fromConfig）");
    [[ThemeService shared] installHooks];
}

@end
