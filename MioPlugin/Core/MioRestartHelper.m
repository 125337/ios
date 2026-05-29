#import "MioRestartHelper.h"
#import <UIKit/UIKit.h>

@interface UIApplication (Private)
- (void)suspend;
@end

@implementation MioRestartHelper

+ (void)showRestartAlertFromVC:(UIViewController *)vc {
    if (!vc) return;

    UIAlertController *alert = [UIAlertController
        alertControllerWithTitle:@"提示"
                         message:@"设置已保存，重启生效"
                  preferredStyle:UIAlertControllerStyleAlert];

    [alert addAction:[UIAlertAction
        actionWithTitle:@"稍后重启"
                  style:UIAlertActionStyleCancel
                handler:nil]];

    [alert addAction:[UIAlertAction
        actionWithTitle:@"立即重启"
                  style:UIAlertActionStyleDefault
                handler:^(UIAlertAction *action) {
                    [self restartWeChat];
                }]];

    [vc presentViewController:alert animated:YES completion:nil];
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