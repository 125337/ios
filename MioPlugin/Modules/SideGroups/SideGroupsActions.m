#import "SideGroupsActions.h"
#import "../SessionGroups/SessionGroupManagerVC.h"
#import "../SettingEntry/WPCommonUI.h"
#import "../../Core/MioAlertHelper.h"
#import <UIKit/UIKit.h>

@implementation SideGroupsActions

// 分组管理弹窗（裸 UINavigationController + pageSheet + iOS15 largeDetent + 左上关闭）
+ (void)openGroupManager {
    UIViewController *top = [UIApplication sharedApplication].keyWindow.rootViewController;
    while (top.presentedViewController) top = top.presentedViewController;
    if (!top) return;
    SessionGroupManagerVC *mgr = [[SessionGroupManagerVC alloc] init];
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

// 侧边长按菜单：固定五项（rail 竖排语义，移位 = 上移/下移），不走电报 per-tab 长按配置
+ (void)showActionsForTab:(SessionGroupsTab *)tab {
    if (!tab) return;
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
                // 菜单 sheet 收起动画（0.3s）走完再 present，防两转场并发冲突
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.4 * NSEC_PER_SEC)),
                               dispatch_get_main_queue(), ^{ [self openGroupManager]; });
                break;
            case 1: {
                BOOL nv = !tab.hidePinned;
                [SessionGroupsTab setHidePinned:nv forTabId:tab.tabId];
                WPShowToast(nv ? @"已隐藏置顶会话" : @"已显示置顶会话");
                break;
            }
            case 2:
                [SessionGroupsTab setTabId:tab.tabId disabled:YES];
                WPShowToast(@"已停用分组");
                break;
            case 3:
                [SessionGroupsTab shiftVisibleTabId:tab.tabId by:-1];
                WPShowToast(@"已上移");
                break;
            case 4:
                [SessionGroupsTab shiftVisibleTabId:tab.tabId by:1];
                WPShowToast(@"已下移");
                break;
        }
    }];
}

@end
