//
//  ThemeHook.m
//  MioPlugin
//

#import "ThemeHook.h"
#import "ThemeService.h"
#import "../../Core/LogManager.h"

@implementation ThemeHook

+ (void)install {
    // 取图拦截模式：进程加载即装 hook（类已注册），hook 直读配置，图标层无需冷启动重放；
    // 颜色层（WCColorMgr colorDic 内存态）在微信 loadColorFromXML 之后重放
    WPLog(@"Theme", @"[HOOK] install: 取图拦截模式（MMThemeManager imageNamed + WCSVGImage imageNamed:fromConfig）");
    [[ThemeService shared] installHooks];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(8.0 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        WPLog(@"Theme", @"[HOOK] 冷启动，重放颜色层");
        [[ThemeService shared] reapplyColorsOnLaunch];
    });
}

@end
