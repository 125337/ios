#import "MioRestartHelper.h"
#import "MioAlertHelper.h"
#import <UIKit/UIKit.h>

@interface UIApplication (Private)
- (void)suspend;
@end

@implementation MioRestartHelper

+ (void)showRestartAlertFromVC:(UIViewController *)vc {
    if (!vc) return;

    [MioAlertHelper showConfirmAlert:@"设置已保存，重启生效"
                        confirmTitle:@"立即重启"
                          onConfirm:^{
        [self restartWeChat];
    }];
}

+ (void)restartWeChat {
    [[UIApplication sharedApplication] suspend];

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.0 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        NSString *bundleID = [[NSBundle mainBundle] bundleIdentifier];

        Class workspace = NSClassFromString(@"LSApplicationWorkspace");
        if (workspace) {
            id defaultWorkspace = [workspace performSelector:
                NSSelectorFromString(@"defaultWorkspace")];
            if (defaultWorkspace) {
                SEL openSel = NSSelectorFromString(@"openApplicationWithBundleID:");
                if ([defaultWorkspace respondsToSelector:openSel]) {
                    [defaultWorkspace performSelector:openSel withObject:bundleID];
                }
            }
        }

        exit(0);
    });
}

@end