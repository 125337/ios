//
//  ThemeHook.m
//  MioPlugin
//

#import "ThemeHook.h"
#import "ThemeService.h"
#import "ThemeConfig.h"
#import "../../Core/LogManager.h"

// 探针模式入口（ThemeProbe.m）：纯观测，替代正常主题 hook
extern void MioThemeProbeInstall(void);

@implementation ThemeHook

+ (void)install {
    // probe.flag 存在 → 探针模式（纯观测，配合微信助手排查取图链路）；
    // 不存在 → 正常主题 hook（取图拦截 + 取色时点拦截）
    NSString *flag = [[ThemeConfig mioThemesDir] stringByAppendingPathComponent:@"probe.flag"];
    if ([[NSFileManager defaultManager] fileExistsAtPath:flag]) {
        WPLog(@"Theme", @"[PROBE] probe.flag 存在 → 探针模式（正常主题 hook 跳过）");
        MioThemeProbeInstall();
        return;
    }
    WPLog(@"Theme", @"[HOOK] install: 取图拦截（MMThemeManager/WCSVGImage）+ 取色拦截（WCColorMgr）");
    [[ThemeService shared] installHooks];
}

@end
