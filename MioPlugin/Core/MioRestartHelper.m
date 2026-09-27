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
        [self elegantRestartFromVC:vc];
    }];
}

#pragma mark - 优雅重启（WCR elegantRestartV2FromPresenter 同款链路）

// 依据：WCR反编译 elegantRestartV2FromPresenter_.c / screenshotFromWindow_.c /
//   performElegantRestartAnimationOnWindow_withScreenshot_.c / FUN_014ae8d4.c（动画 block）
//   1) dismiss presenter → 0.5s 后动画（非 VC dismiss 用 0.5s，VC completion 后 0.35s）
//   2) drawViewHierarchyInRect:afterScreenUpdates:YES 截全屏
//   3) 三层容器加到 window：模糊层(UIBlurEffectStyleDark, alpha 0) + 黑遮罩(white:0 alpha:0.5, alpha 0)
//      + 全屏截图 imageView；0.3s 动画：截图缩到中央(×0.8)+圆角25，模糊/遮罩 alpha→1
//   4) 动画后稍候执行 restartWeChat（suspend → 拉起 → exit(0)，"自动打开微信"由
//      exit 前 openApplicationWithBundleID 请求完成，Mio 既有链路）
+ (void)elegantRestartFromVC:(UIViewController *)presenter {
    if (!presenter || !presenter.view.window) {
        [self restartWeChat];
        return;
    }
    [presenter dismissViewControllerAnimated:YES completion:nil];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        [self performElegantRestart];
    });
}

+ (void)performElegantRestart {
    UIWindow *window = [UIApplication sharedApplication].keyWindow;
    if (!window) {
        [self restartWeChat];
        return;
    }

    // 截全屏（WCR screenshotFromWindow 同款）
    UIGraphicsBeginImageContextWithOptions(window.bounds.size, NO, [UIScreen mainScreen].scale);
    [window drawViewHierarchyInRect:window.bounds afterScreenUpdates:YES];
    UIImage *shot = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    if (!shot) {
        [self restartWeChat];
        return;
    }

    CGFloat w = window.bounds.size.width;
    CGFloat h = window.bounds.size.height;

    // 三层容器（WCR 同款：截图 + 模糊 + 黑遮罩）
    UIImageView *shotView = [[UIImageView alloc] initWithFrame:window.bounds];
    shotView.image = shot;
    shotView.contentMode = UIViewContentModeScaleToFill;

    UIVisualEffectView *blur = [[UIVisualEffectView alloc]
        initWithEffect:[UIBlurEffect effectWithStyle:UIBlurEffectStyleDark]];
    blur.frame = window.bounds;
    blur.alpha = 0;

    UIView *dim = [[UIView alloc] initWithFrame:window.bounds];
    dim.backgroundColor = [UIColor colorWithWhite:0 alpha:0.5];
    dim.alpha = 0;

    UIView *container = [[UIView alloc] initWithFrame:window.bounds];
    [container addSubview:blur];
    [container addSubview:dim];
    [container addSubview:shotView];
    [window addSubview:container];

    // 0.3s 动画（WCR 0x3fd3333333333333 = 0.3）：截图缩到中央 ×0.8 + 圆角 25，模糊/遮罩浮现
    CGFloat scale = 0.8;
    [UIView animateWithDuration:0.3
                     animations:^{
        shotView.frame = CGRectMake(w * (1 - scale) / 2, h * (1 - scale) / 2,
                                    w * scale, h * scale);
        shotView.layer.cornerRadius = 25;
        shotView.layer.masksToBounds = YES;
        blur.alpha = 1;
        dim.alpha = 1;
    }
                     completion:^(BOOL finished) {
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.4 * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{
            [self restartWeChat];
        });
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