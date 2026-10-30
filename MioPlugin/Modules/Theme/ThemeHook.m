//
//  ThemeHook.m
//  MioPlugin
//

#import "ThemeHook.h"
#import "ThemeService.h"
#import "../../Core/LogManager.h"

@implementation ThemeHook

+ (void)install {
    // 取图拦截 + 取色时点拦截：进程加载即装 hook（类已注册），hook 直读配置，
    // 无需任何冷启动重放——首屏任何取图/取色请求在时点拦截层即时命中
    WPLog(@"Theme", @"[HOOK] install: 取图拦截（MMThemeManager/WCSVGImage）+ 取色拦截（WCColorMgr）");
    [[ThemeService shared] installHooks];
}

@end
