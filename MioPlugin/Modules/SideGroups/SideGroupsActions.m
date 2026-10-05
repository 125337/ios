#import "SideGroupsActions.h"
#import "SideGroupsManagerVC.h"
#import "../SettingEntry/WPCommonUI.h"
#import "../../Core/MioAlertHelper.h"
#import <UIKit/UIKit.h>

@implementation SideGroupsActions

// 分组管理弹窗（裸 UINavigationController + pageSheet + iOS15 largeDetent + 左上关闭），
// 弹侧边分组自己的管理页（不耦合电报 SessionGroupManagerVC）
+ (void)openGroupManager {
    UIViewController *top = [UIApplication sharedApplication].keyWindow.rootViewController;
    while (top.presentedViewController) top = top.presentedViewController;
    if (!top) return;
    SideGroupsManagerVC *mgr = [[SideGroupsManagerVC alloc] init];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:mgr];
    nav.modalPresentationStyle = UIModalPresentationPageSheet;
    if (@available(iOS 15.0, *)) {
        UISheetPresentationController *sheet = nav.sheetPresentationController;
        if (sheet) {
            sheet.detents = @[UISheetPresentationControllerDetent.largeDetent];
            sheet.prefersScrollingExpandsWhenScrolledToEdge = YES;
        }
    }
    UIBarButtonItem *close = [[UIBarButtonItem alloc] initWithTitle:@"关闭"
                                style:UIBarButtonItemStylePlain
                               target:mgr action:@selector(sgCloseModal:)];
    mgr.navigationItem.leftBarButtonItem = close;
    [top presentViewController:nav animated:YES completion:nil];
}

// sheet 收起动画（0.3s）走完再 present，防两转场并发冲突
+ (void)openGroupManagerAfterMenuDismiss {
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.4 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ [self openGroupManager]; });
}

// 长按入口：按分组自身 longPressAction 分发（SideGroupsTab side 语义，独立于电报裁剪集）
//   0=跟随默认（固定动作菜单） 2=打开分组管理 5=切换置顶过滤 4=无操作
+ (void)showActionsForTab:(SideGroupsTab *)tab {
    if (!tab) return;
    switch (tab.longPressAction) {
        case 2:
            [self openGroupManagerAfterMenuDismiss];
            return;
        case 5: {
            BOOL nv = !tab.hidePinned;
            [SideGroupsTab setHidePinned:nv forTabId:tab.tabId];
            WPShowToast(nv ? @"已隐藏置顶会话" : @"已显示置顶会话");
            return;
        }
        case 4:
            return;
        default:
            break; // 0=跟随默认 → 固定动作菜单
    }

    // 固定动作菜单（rail 竖排语义，移位 = 上移/下移）
    NSMutableArray<NSString *> *titles = [NSMutableArray arrayWithObjects:
        @"分组管理",
        tab.hidePinned ? @"显示置顶会话" : @"隐藏置顶会话",
        @"停用分组",
        @"上移",
        @"下移", nil];
    [MioAlertHelper showMenuAlert:(tab.title.length ? tab.title : @"分组")
                          buttons:titles
                         onButton:^(NSInteger index) {
        switch (index) {
            case 0:
                [self openGroupManagerAfterMenuDismiss];
                break;
            case 1: {
                BOOL nv = !tab.hidePinned;
                [SideGroupsTab setHidePinned:nv forTabId:tab.tabId];
                WPShowToast(nv ? @"已隐藏置顶会话" : @"已显示置顶会话");
                break;
            }
            case 2:
                [SideGroupsTab setTabId:tab.tabId disabled:YES];
                WPShowToast(@"已停用分组");
                break;
            case 3:
                [SideGroupsTab shiftVisibleTabId:tab.tabId by:-1];
                WPShowToast(@"已上移");
                break;
            case 4:
                [SideGroupsTab shiftVisibleTabId:tab.tabId by:1];
                WPShowToast(@"已下移");
                break;
        }
    }];
}

@end
