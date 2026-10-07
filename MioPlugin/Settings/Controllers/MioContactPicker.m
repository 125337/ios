#import "MioContactPicker.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>
#import "../Core/LogManager.h"
#import "../Core/ServiceHelper.h"

// ===== 统一选人入口（MioContactPicker.h 注释为架构总览）=====
// 三个适配器的 hook/提取/KVC 机制来源：
//   Groups：WCR WCRefineChatRoomPicker（FUN__part32.c）逆向移植，Frida 实测 init 参数
//   All   ：WCR presentSessionSelectPickerFromViewController（Misc_part13.c L42457-42642）
//   Contacts：MMNewMultiSelectContactsViewController.h/.m + LogicController 头文件推演

// 仅声明编译所需符号（运行时统一 objc_getClass 取微信真类，绝不以类名直接实例化）
@interface MultiSelectChatRoomHalfScreenViewController : UIViewController
- (instancetype)initWithTipWord:(NSString *)tipWord
              choiseSessionWord:(NSString *)choiseSessionWord
            chatroomSessionWord:(NSString *)chatroomSessionWord
                rightButtonWord:(NSString *)rightButtonWord
         rightButtonLightColor:(NSString *)rightButtonLightColor
          rightButtonDarkColor:(NSString *)rightButtonDarkColor
           selectedUserNameList:(NSArray<NSString *> *)selectedUserNameList
                 selectMaxCount:(NSUInteger)selectMaxCount
             countExceedTipWord:(NSString *)countExceedTipWord
                  forceLightMode:(BOOL)forceLightMode
                 canSelectOpenIM:(BOOL)canSelectOpenIM;
- (void)doClickCloseWithNeedAnimated:(BOOL)animated action:(long long)action;
@end

@interface SessionSelectController : UIViewController
- (void)onMultiDone;
@end

@interface MMNewMultiSelectContactsViewController : UIViewController
- (instancetype)initWithAllFriendContacts;
- (void)onFinishBarButtonPress:(id)sender;
- (void)onCloseBarButtonPress:(id)sender;
@end

#pragma mark - 骨架（共享：重入保护/取消回调/资源清理/主线程回调）

@interface MioPickerAdapterBase : NSObject
@property (nonatomic, assign) BOOL hasReturned;
@property (nonatomic, weak) id<MioContactPickerDelegate> delegate;
- (void)finishWithWxids:(NSArray<NSString *> *)wxids;   // 重入保护 + 主线程回调 + 清理
- (void)notifyCancel;                                    // 重入保护 + 主线程回调 + 清理
- (void)cleanup;                                         // 子类覆盖：摘除 bridge 关联对象
- (void)presentFrom:(UIViewController *)from title:(NSString *)title preselected:(NSArray<NSString *> *)preselected;
@end

@implementation MioPickerAdapterBase
- (void)finishWithWxids:(NSArray<NSString *> *)wxids {
    if (self.hasReturned) return;
    self.hasReturned = YES;
    void (^fire)(void) = ^{
        WPLog(@"MioPicker", @"finish(%@): %lu 个", NSStringFromClass([self class]), (unsigned long)wxids.count);
        if ([self.delegate respondsToSelector:@selector(pickerDidFinish:)]) {
            [self.delegate pickerDidFinish:wxids ?: @[]];
        }
        [self cleanup];
    };
    if ([NSThread isMainThread]) fire();
    else dispatch_async(dispatch_get_main_queue(), fire);
}

- (void)notifyCancel {
    if (self.hasReturned) return;
    self.hasReturned = YES;
    void (^fire)(void) = ^{
        WPLog(@"MioPicker", @"cancel(%@)", NSStringFromClass([self class]));
        if ([self.delegate respondsToSelector:@selector(pickerDidCancel)]) {
            [self.delegate pickerDidCancel];
        }
        [self cleanup];
    };
    if ([NSThread isMainThread]) fire();
    else dispatch_async(dispatch_get_main_queue(), fire);
}

- (void)cleanup {}
- (void)presentFrom:(UIViewController *)from title:(NSString *)title preselected:(NSArray<NSString *> *)preselected {}
@end

#pragma mark - 适配器 1：只选群（MultiSelectChatRoomHalfScreenViewController 半屏）

static void *kMioGroupsBridgeKey = &kMioGroupsBridgeKey;
static IMP gOrigGroupsDone = NULL;
static IMP gOrigGroupsUpdateBtn = NULL;
static IMP gOrigGroupsLayout = NULL;
static IMP gOrigGroupsDidSelect = NULL;

static void mioGroupsInstallHooks(void);

@interface MioPickerGroupsAdapter : MioPickerAdapterBase
@property (strong, nonatomic) UIViewController *picker;
@end

@implementation MioPickerGroupsAdapter

static MioPickerGroupsAdapter *MioGroupsBridge(id self) {
    id bridge = objc_getAssociatedObject(self, kMioGroupsBridgeKey);
    return [bridge isKindOfClass:[MioPickerGroupsAdapter class]] ? bridge : nil;
}

// 提取已选（picker 自身 m_dicMultiSelect；WCR 同款：优先 allValuesInOrder，值取 m_nsUsrName，退回 keys）
static NSArray<NSString *> *MioGroupsExtract(id picker) {
    id dic = nil;
    @try { dic = [picker valueForKey:@"m_dicMultiSelect"]; } @catch (NSException *e) {}
    if (![dic isKindOfClass:[NSDictionary class]]) return @[];
    NSMutableArray<NSString *> *ids = [NSMutableArray array];
    NSArray *values = nil;
    SEL orderSel = NSSelectorFromString(@"allValuesInOrder");
    if ([dic respondsToSelector:orderSel]) {
        values = ((NSArray *(*)(id, SEL))objc_msgSend)(dic, orderSel);
    } else if ([dic respondsToSelector:@selector(allValues)]) {
        values = [dic allValues];
    }
    SEL nameSel = NSSelectorFromString(@"m_nsUsrName");
    for (id v in values) {
        NSString *name = nil;
        if ([v isKindOfClass:[NSString class]]) name = v;
        else if ([v respondsToSelector:nameSel]) name = ((NSString *(*)(id, SEL))objc_msgSend)(v, nameSel);
        if ([name isKindOfClass:[NSString class]] && name.length > 0) [ids addObject:name];
    }
    if (ids.count == 0) {
        for (id key in [dic allKeys]) {
            if ([key isKindOfClass:[NSString class]]) [ids addObject:(NSString *)key];
        }
    }
    return [ids copy];
}

// 完成按钮重写为 完成(N)（原生标题会拼 selectMaxCount → 4294967295；0 个也保持可按，允许清空）
static void MioGroupsRefreshRightButton(id picker) {
    UIButton *btn = nil;
    @try { btn = [picker valueForKey:@"m_rightMakeSureButton"]; } @catch (NSException *e) {}
    if (![btn isKindOfClass:[UIButton class]]) return;
    NSUInteger count = MioGroupsExtract(picker).count;
    NSString *title = count > 0 ? [NSString stringWithFormat:@"完成(%lu)", (unsigned long)count] : @"完成";
    [btn setEnabled:YES];
    [btn setAlpha:1.0];
    [btn setTitle:title forState:UIControlStateNormal];
    [btn setTitle:title forState:UIControlStateHighlighted];
    [btn setTitle:title forState:UIControlStateDisabled];
    [btn setTitle:title forState:UIControlStateSelected];
    CGRect old = btn.frame;
    if (CGRectIsEmpty(old)) return;
    [btn sizeToFit];
    CGRect f = btn.frame;
    CGFloat w = MIN(MAX(f.size.width, 46), 80);
    f.size.width = w;
    f.origin.x = old.origin.x + old.size.width - w;
    f.origin.y = old.origin.y + (old.size.height - f.size.height) / 2.0;
    btn.frame = f;
}

static void mioGroupsDoneImp(id self, SEL _cmd) {
    MioPickerGroupsAdapter *bridge = MioGroupsBridge(self);
    if (bridge && !bridge.hasReturned) {
        WPLog(@"MioPicker", @"[Groups] done clicked");
        NSArray<NSString *> *result = MioGroupsExtract(self);
        WPLog(@"MioPicker", @"[Groups] extracted %lu: %@", (unsigned long)result.count, result);
        SEL closeSel = NSSelectorFromString(@"doClickCloseWithNeedAnimated:action:");
        if ([self respondsToSelector:closeSel]) {
            ((void (*)(id, SEL, BOOL, long long))objc_msgSend)(self, closeSel, YES, 1);
        } else {
            [self dismissViewControllerAnimated:YES completion:nil];
        }
        [bridge finishWithWxids:result];
        return;
    }
    if (gOrigGroupsDone) ((void (*)(id, SEL))gOrigGroupsDone)(self, _cmd);
}

static void mioGroupsUpdateBtnImp(id self, SEL _cmd) {
    if (gOrigGroupsUpdateBtn) ((void (*)(id, SEL))gOrigGroupsUpdateBtn)(self, _cmd);
    MioPickerGroupsAdapter *bridge = MioGroupsBridge(self);
    if (bridge && !bridge.hasReturned) MioGroupsRefreshRightButton(self);
}

static void mioGroupsLayoutImp(id self, SEL _cmd) {
    if (gOrigGroupsLayout) ((void (*)(id, SEL))gOrigGroupsLayout)(self, _cmd);
    MioPickerGroupsAdapter *bridge = MioGroupsBridge(self);
    if (bridge && !bridge.hasReturned) MioGroupsRefreshRightButton(self);
}

static void mioGroupsDidSelectImp(id self, SEL _cmd, id contact) {
    if (gOrigGroupsDidSelect) ((void (*)(id, SEL, id))gOrigGroupsDidSelect)(self, _cmd, contact);
    MioPickerGroupsAdapter *bridge = MioGroupsBridge(self);
    if (bridge && !bridge.hasReturned) MioGroupsRefreshRightButton(self);
}

static void mioGroupsInstallHooks(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class cls = objc_getClass("MultiSelectChatRoomHalfScreenViewController");
        if (!cls) {
            WPLog(@"MioPicker", @"[Groups] MultiSelectChatRoomHalfScreenViewController not found!");
            return;
        }
        // MSHookMessageEx：方法在父类时（如 viewDidLayoutSubviews）hook 限定在本类，不污染 UIViewController 全局
        SEL doneSel = NSSelectorFromString(@"onClickMakeSureButton");
        Method m1 = class_getInstanceMethod(cls, doneSel);
        if (m1) { MSHookMessageEx(cls, doneSel, (IMP)mioGroupsDoneImp, &gOrigGroupsDone); WPLog(@"MioPicker", @"[Groups] onClickMakeSureButton hooked"); }
        SEL btnSel = NSSelectorFromString(@"updateRightMakeSureButton");
        Method m2 = class_getInstanceMethod(cls, btnSel);
        if (m2) { MSHookMessageEx(cls, btnSel, (IMP)mioGroupsUpdateBtnImp, &gOrigGroupsUpdateBtn); WPLog(@"MioPicker", @"[Groups] updateRightMakeSureButton hooked"); }
        Method m3 = class_getInstanceMethod(cls, @selector(viewDidLayoutSubviews));
        if (m3) { MSHookMessageEx(cls, @selector(viewDidLayoutSubviews), (IMP)mioGroupsLayoutImp, &gOrigGroupsLayout); WPLog(@"MioPicker", @"[Groups] viewDidLayoutSubviews hooked"); }
        SEL didSelectSel = NSSelectorFromString(@"didSelectContact:");
        Method m4 = class_getInstanceMethod(cls, didSelectSel);
        if (m4) { MSHookMessageEx(cls, didSelectSel, (IMP)mioGroupsDidSelectImp, &gOrigGroupsDidSelect); WPLog(@"MioPicker", @"[Groups] didSelectContact: hooked"); }
    });
}

- (void)presentFrom:(UIViewController *)from title:(NSString *)title preselected:(NSArray<NSString *> *)preselected {
    Class cls = objc_getClass("MultiSelectChatRoomHalfScreenViewController");
    if (!cls) {
        WPLog(@"MioPicker", @"[Groups] class not found!");
        [self notifyCancel];
        return;
    }
    mioGroupsInstallHooks();

    // 参数为 Frida 抓取的 WCR 实测可用值：selectMaxCount=NSUIntegerMax 不限制、tipWord 必须传空
    // （自定义 9999/非空 tipWord 会在 init 内部 access violation）；颜色必须 hex 字符串
    // （如 #07C160），传 UIColor 会在 present 时 getRightMakeSureColor 里 unrecognized selector 闪退
    UIViewController *picker = [[cls alloc] initWithTipWord:@""
                                          choiseSessionWord:@"已选群聊"
                                        chatroomSessionWord:@"群聊"
                                            rightButtonWord:@"完成"
                                     rightButtonLightColor:@"#07C160"
                                      rightButtonDarkColor:@"#07C160"
                                       selectedUserNameList:preselected
                                             selectMaxCount:NSUIntegerMax
                                         countExceedTipWord:@"已达到可选上限"
                                              forceLightMode:NO
                                             canSelectOpenIM:NO];
    if (!picker) { [self notifyCancel]; return; }
    self.picker = picker;
    objc_setAssociatedObject(picker, kMioGroupsBridgeKey, self, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    @try {
        [picker setValue:self forKey:@"m_delegate"];   // onSelectedOrCancelContact / onHalfScreenPageDidClose
    } @catch (NSException *e) {
        WPLog(@"MioPicker", @"[Groups] set m_delegate failed: %@", e);
    }

    UIViewController *top = from;
    while (top.presentedViewController) top = top.presentedViewController;
    // 半屏 presentation 配置（两种签名探测）
    SEL cfg2 = NSSelectorFromString(@"configPresentationCustomWithViewController:resetPresentedViewFrame:");
    SEL cfg1 = NSSelectorFromString(@"configPresentationCustomWithViewController:");
    @try {
        if ([picker respondsToSelector:cfg2]) {
            ((void (*)(id, SEL, id, BOOL))objc_msgSend)(picker, cfg2, top, YES);
        } else if ([picker respondsToSelector:cfg1]) {
            ((void (*)(id, SEL, id))objc_msgSend)(picker, cfg1, top);
        } else {
            WPLog(@"MioPicker", @"[Groups] no cfg selector found");
        }
    } @catch (NSException *e) {
        WPLog(@"MioPicker", @"[Groups] cfg exception: %@", e);
    }
    WPLog(@"MioPicker", @"[Groups] presenting (preselected=%lu)", (unsigned long)preselected.count);
    [top presentViewController:picker animated:YES completion:nil];
}

// m_delegate 回调：未点完成就关页（取消/下滑）
- (void)onHalfScreenPageDidClose:(id)page action:(long long)action {
    WPLog(@"MioPicker", @"[Groups] page closed, action=%lld, hasReturned=%d", action, self.hasReturned);
    if (!self.hasReturned) [self notifyCancel];
}

// m_delegate 回调：点选/取消勾选，微信原生会刷新按钮，无需处理
- (void)onSelectedOrCancelContact:(id)contact isSelected:(BOOL)isSelected {}

- (void)cleanup {
    if (self.picker) objc_setAssociatedObject(self.picker, kMioGroupsBridgeKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    self.picker = nil;
}

@end

#pragma mark - 适配器 2：只选人（MMNewMultiSelectContactsViewController，"发起群聊"那套）

static void *kMioContactsBridgeKey = &kMioContactsBridgeKey;
static IMP gOrigContactsFinish = NULL;
static IMP gOrigContactsClose = NULL;
static IMP gOrigContactsUpdateTitle = NULL;
static IMP gOrigContactsDidSelect = NULL;

static void mioContactsInstallHooks(void);

@interface MioPickerContactsAdapter : MioPickerAdapterBase
@property (strong, nonatomic) UIViewController *picker;
@end

@implementation MioPickerContactsAdapter

static MioPickerContactsAdapter *MioContactsBridge(id self) {
    id bridge = objc_getAssociatedObject(self, kMioContactsBridgeKey);
    return [bridge isKindOfClass:[MioPickerContactsAdapter class]] ? bridge : nil;
}

// 已选 wxid（logicController.getAllSelectedContacts → m_nsUsrName，数组序 = 选择序）
static NSArray<NSString *> *MioContactsExtract(id picker) {
    id logic = nil;
    @try { logic = [picker valueForKey:@"logicController"]; } @catch (NSException *e) {}
    if (!logic) return @[];
    SEL allSel = NSSelectorFromString(@"getAllSelectedContacts");
    if (![logic respondsToSelector:allSel]) return @[];
    NSArray *contacts = ((NSArray *(*)(id, SEL))objc_msgSend)(logic, allSel);
    NSMutableArray<NSString *> *ids = [NSMutableArray array];
    SEL nameSel = NSSelectorFromString(@"m_nsUsrName");
    for (id c in contacts) {
        NSString *name = nil;
        if ([c isKindOfClass:[NSString class]]) name = c;
        else if ([c respondsToSelector:nameSel]) name = ((NSString *(*)(id, SEL))objc_msgSend)(c, nameSel);
        if ([name isKindOfClass:[NSString class]] && name.length > 0) [ids addObject:name];
    }
    return [ids copy];
}

static void mioContactsFinishImp(id self, SEL _cmd, id sender) {
    MioPickerContactsAdapter *bridge = MioContactsBridge(self);
    if (bridge && !bridge.hasReturned) {
        WPLog(@"MioPicker", @"[Contacts] done clicked");
        NSArray<NSString *> *result = MioContactsExtract(self);
        WPLog(@"MioPicker", @"[Contacts] extracted %lu: %@", (unsigned long)result.count, result);
        [self dismissViewControllerAnimated:YES completion:nil];
        [bridge finishWithWxids:result];
        return;
    }
    if (gOrigContactsFinish) ((void (*)(id, SEL, id))gOrigContactsFinish)(self, _cmd, sender);
}

static void mioContactsCloseImp(id self, SEL _cmd, id sender) {
    MioPickerContactsAdapter *bridge = MioContactsBridge(self);
    if (bridge && !bridge.hasReturned) {
        WPLog(@"MioPicker", @"[Contacts] back pressed");
        [bridge notifyCancel];
        [self dismissViewControllerAnimated:YES completion:nil];
        return;
    }
    if (gOrigContactsClose) ((void (*)(id, SEL, id))gOrigContactsClose)(self, _cmd, sender);
}

// 右上按钮标题按数据层（getAllSelectedContacts）计数生成——与 Groups 的
// MioGroupsRefreshRightButton 同款：不信微信原生计数（实测勾 1 人可能显示"确定 (2)"）
static void MioContactsRefreshRightButton(id picker) {
    NSUInteger n = MioContactsExtract(picker).count;
    NSString *title = [NSString stringWithFormat:@"确定(%lu)", (unsigned long)n];
    @try {
        // m_rightButtonTitle 是 MMNew 自己的按钮标题字段：先写它（走微信渲染链），
        // 再摸标准 UIBarButtonItem 兜底（自绘导航时可能拿不到）
        SEL setRT = NSSelectorFromString(@"setM_rightButtonTitle:");
        if ([picker respondsToSelector:setRT]) {
            ((void (*)(id, SEL, id))objc_msgSend)(picker, setRT, title);
        }
        id navItem = ((id (*)(id, SEL))objc_msgSend)(picker, @selector(navigationItem));
        UIBarButtonItem *item = [navItem valueForKey:@"rightBarButtonItem"];
        if (item) {
            UIButton *btn = item.customView;
            if ([btn isKindOfClass:[UIButton class]]) {
                [btn setTitle:title forState:UIControlStateNormal];
                [btn setTitle:title forState:UIControlStateHighlighted];
                [btn setTitle:title forState:UIControlStateSelected];
                [btn setTitle:title forState:UIControlStateDisabled];
                [btn sizeToFit];
            } else {
                item.title = title;
            }
        }
        // 诊断：看微信 orig 算出的标题 vs 我们的数据层计数，定位"多 1 个"的来源
        NSString *rt = nil;
        SEL getRT = NSSelectorFromString(@"m_rightButtonTitle");
        if ([picker respondsToSelector:getRT]) {
            rt = ((NSString *(*)(id, SEL))objc_msgSend)(picker, getRT);
        }
        WPLog(@"MioPicker", @"[Contacts] btn n=%lu item=(%@, cv=%@) m_rightButtonTitle=%@",
              (unsigned long)n, item.title, NSStringFromClass([item.customView class] ?: [NSObject class]), rt);
    } @catch (NSException *e) {
        WPLog(@"MioPicker", @"[Contacts] refresh button failed: %@", e);
    }
}

static void mioContactsUpdateTitleImp(id self, SEL _cmd) {
    if (gOrigContactsUpdateTitle) ((void (*)(id, SEL))gOrigContactsUpdateTitle)(self, _cmd);
    MioPickerContactsAdapter *bridge = MioContactsBridge(self);
    if (bridge && !bridge.hasReturned) MioContactsRefreshRightButton(self);
}

// 每次点选后主动刷新（Groups didSelectContact: 同款）：微信按钮更新时机不可靠
static void mioContactsDidSelectImp(id self, SEL _cmd, id tableView, id indexPath) {
    if (gOrigContactsDidSelect) ((void (*)(id, SEL, id, id))gOrigContactsDidSelect)(self, _cmd, tableView, indexPath);
    MioPickerContactsAdapter *bridge = MioContactsBridge(self);
    if (bridge && !bridge.hasReturned) MioContactsRefreshRightButton(self);
}

static void mioContactsInstallHooks(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class cls = objc_getClass("MMNewMultiSelectContactsViewController");
        if (!cls) {
            WPLog(@"MioPicker", @"[Contacts] MMNewMultiSelectContactsViewController not found!");
            return;
        }
        SEL finishSel = NSSelectorFromString(@"onFinishBarButtonPress:");
        Method m1 = class_getInstanceMethod(cls, finishSel);
        if (m1) { MSHookMessageEx(cls, finishSel, (IMP)mioContactsFinishImp, &gOrigContactsFinish); WPLog(@"MioPicker", @"[Contacts] onFinishBarButtonPress: hooked"); }
        SEL closeSel = NSSelectorFromString(@"onCloseBarButtonPress:");
        Method m2 = class_getInstanceMethod(cls, closeSel);
        if (m2) { MSHookMessageEx(cls, closeSel, (IMP)mioContactsCloseImp, &gOrigContactsClose); WPLog(@"MioPicker", @"[Contacts] onCloseBarButtonPress: hooked"); }
        SEL titleSel = NSSelectorFromString(@"updateRightBarButtonItemTitle");
        Method m3 = class_getInstanceMethod(cls, titleSel);
        if (m3) { MSHookMessageEx(cls, titleSel, (IMP)mioContactsUpdateTitleImp, &gOrigContactsUpdateTitle); WPLog(@"MioPicker", @"[Contacts] updateRightBarButtonItemTitle hooked"); }
        Method m4 = class_getInstanceMethod(cls, @selector(tableView:didSelectRowAtIndexPath:));
        if (m4) { MSHookMessageEx(cls, @selector(tableView:didSelectRowAtIndexPath:), (IMP)mioContactsDidSelectImp, &gOrigContactsDidSelect); WPLog(@"MioPicker", @"[Contacts] tableView:didSelectRowAtIndexPath: hooked"); }
    });
}

- (void)presentFrom:(UIViewController *)from title:(NSString *)title preselected:(NSArray<NSString *> *)preselected {
    Class cls = objc_getClass("MMNewMultiSelectContactsViewController");
    if (!cls) {
        WPLog(@"MioPicker", @"[Contacts] class not found!");
        [self notifyCancel];
        return;
    }
    mioContactsInstallHooks();

    UIViewController *picker = [[cls alloc] initWithAllFriendContacts];
    if (!picker) { [self notifyCancel]; return; }
    self.picker = picker;
    objc_setAssociatedObject(picker, kMioContactsBridgeKey, self, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    // 多选 + 显示底部已选头像条（默认单选，必须显式开）
    SEL allowSel = NSSelectorFromString(@"setAllowMultiSelect:");
    if ([picker respondsToSelector:allowSel]) ((void (*)(id, SEL, BOOL))objc_msgSend)(picker, allowSel, YES);
    SEL showSel = NSSelectorFromString(@"setNeedShowSelectResultView:");
    if ([picker respondsToSelector:showSel]) ((void (*)(id, SEL, BOOL))objc_msgSend)(picker, showSel, YES);
    picker.title = title;

    [picker view];   // 预加载，logicController 就绪后再注入预选

    // 诊断：打开瞬间初始状态——确认微信有没有预置选中（"确定(2)多 1 个"来源排查）
    {
        NSString *rt = nil;
        SEL getRT = NSSelectorFromString(@"m_rightButtonTitle");
        if ([picker respondsToSelector:getRT]) {
            rt = ((NSString *(*)(id, SEL))objc_msgSend)(picker, getRT);
        }
        WPLog(@"MioPicker", @"[Contacts] initial: selected=%lu rt=%@",
              (unsigned long)MioContactsExtract(picker).count, rt);
    }

    // 预选回显：走逻辑层 addContact:（选中操作）。注意 setExistContactArray: 是"已存在禁选"
    // （发起群聊标记已在群里的人），不是预选
    if (preselected.count > 0) {
        @try {
            id logic = [picker valueForKey:@"logicController"];
            SEL addSel = NSSelectorFromString(@"addContact:");
            if (logic && [logic respondsToSelector:addSel]) {
                NSUInteger ok = 0;
                for (NSString *wxid in preselected) {
                    if (![wxid isKindOfClass:[NSString class]] || wxid.length == 0) continue;
                    id contact = WXGetContactForWxid(wxid);
                    if (contact) {
                        ((void (*)(id, SEL, id))objc_msgSend)(logic, addSel, contact);
                        ok++;
                    }
                }
                SEL rtSel = NSSelectorFromString(@"updateRightBarButtonItemTitle");
                if ([picker respondsToSelector:rtSel]) ((void (*)(id, SEL))objc_msgSend)(picker, rtSel);
                WPLog(@"MioPicker", @"[Contacts] prefilled %lu/%lu", (unsigned long)ok, (unsigned long)preselected.count);
            }
        } @catch (NSException *e) {
            WPLog(@"MioPicker", @"[Contacts] prefill failed: %@", e);
        }
    }

    UIViewController *top = from;
    while (top.presentedViewController) top = top.presentedViewController;
    Class navCls = objc_getClass("MMUINavigationController") ?: [UINavigationController class];
    UINavigationController *nav = [[navCls alloc] initWithRootViewController:picker];
    // 全屏 present：pageSheet 顶部会露出黑边（安全区不足），且下滑关闭不走取消 hook
    nav.modalPresentationStyle = UIModalPresentationFullScreen;
    WPLog(@"MioPicker", @"[Contacts] presenting (preselected=%lu)", (unsigned long)preselected.count);
    [top presentViewController:nav animated:YES completion:nil];
}

- (void)cleanup {
    if (self.picker) objc_setAssociatedObject(self.picker, kMioContactsBridgeKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    self.picker = nil;
}

@end

#pragma mark - 适配器 3：都选（SessionSelectController 全屏，好友+群聊）

static void *kMioAllBridgeKey = &kMioAllBridgeKey;
static IMP gOrigAllDone = NULL;
static IMP gOrigAllUpdateBtn = NULL;
static IMP gOrigAllPopDismiss = NULL;

static void mioAllInstallHooks(void);

@interface MioPickerAllAdapter : MioPickerAdapterBase
@property (strong, nonatomic) UIViewController *picker;
@end

@implementation MioPickerAllAdapter

static MioPickerAllAdapter *MioAllBridge(id self) {
    id bridge = objc_getAssociatedObject(self, kMioAllBridgeKey);
    return [bridge isKindOfClass:[MioPickerAllAdapter class]] ? bridge : nil;
}

// 字典值 → wxid：NSString 直取 / contact 对象取 m_nsUsrName / KVC 兜底，再退回 key
static NSString *MioAllWxidOf(id value, id key) {
    NSString *wxid = nil;
    SEL nameSel = NSSelectorFromString(@"m_nsUsrName");
    if ([value isKindOfClass:[NSString class]]) {
        wxid = value;
    } else if ([value respondsToSelector:nameSel]) {
        wxid = ((NSString *(*)(id, SEL))objc_msgSend)(value, nameSel);
    } else if (value) {
        @try { wxid = [value valueForKey:@"m_nsUsrName"]; } @catch (NSException *e) {}
    }
    if (![wxid isKindOfClass:[NSString class]] || wxid.length == 0) {
        if ([key isKindOfClass:[NSString class]]) wxid = key;
    }
    if ([wxid isKindOfClass:[NSString class]] && wxid.length > 0) return wxid;
    return nil;
}

// 提取已选（m_selectView.m_dicMultiSelect）：优先 allValuesInOrder（微信有序字典，选择顺序=展示
// 顺序），否则按键序（实践上为插入序）
static NSArray<NSString *> *MioAllExtract(id picker) {
    id selectView = nil;
    @try { selectView = [picker valueForKey:@"m_selectView"]; } @catch (NSException *e) {}
    id dic = nil;
    SEL dicSel = NSSelectorFromString(@"m_dicMultiSelect");
    if (selectView && [selectView respondsToSelector:dicSel]) {
        dic = ((id (*)(id, SEL))objc_msgSend)(selectView, dicSel);
    }
    if (![dic isKindOfClass:[NSDictionary class]]) return @[];

    NSMutableArray<NSString *> *ids = [NSMutableArray array];
    SEL orderSel = NSSelectorFromString(@"allValuesInOrder");
    if ([dic respondsToSelector:orderSel]) {
        NSArray *values = ((NSArray *(*)(id, SEL))objc_msgSend)(dic, orderSel);
        for (id v in values) {
            NSString *wxid = MioAllWxidOf(v, nil);
            if (wxid) [ids addObject:wxid];
        }
    }
    if (ids.count == 0) {
        for (id key in [dic allKeys]) {
            NSString *wxid = MioAllWxidOf([dic objectForKey:key], key);
            if (wxid) [ids addObject:wxid];
        }
    }
    return [ids copy];
}

static void mioAllDoneImp(id self, SEL _cmd) {
    MioPickerAllAdapter *bridge = MioAllBridge(self);
    if (bridge && !bridge.hasReturned) {
        WPLog(@"MioPicker", @"[All] done clicked");
        NSArray<NSString *> *result = MioAllExtract(self);
        WPLog(@"MioPicker", @"[All] extracted %lu: %@", (unsigned long)result.count, result);
        [self dismissViewControllerAnimated:YES completion:nil];
        [bridge finishWithWxids:result];
        return;
    }
    if (gOrigAllDone) ((void (*)(id, SEL))gOrigAllDone)(self, _cmd);
}

// 原生按钮走 endMultiSelect 死路（m_delegate=nil 无回调可收），原实现后替换为"完成"→ onMultiDone
static void mioAllUpdateBtnImp(id self, SEL _cmd) {
    if (gOrigAllUpdateBtn) ((void (*)(id, SEL))gOrigAllUpdateBtn)(self, _cmd);
    MioPickerAllAdapter *bridge = MioAllBridge(self);
    if (bridge && !bridge.hasReturned) {
        UIBarButtonItem *done = [[UIBarButtonItem alloc] initWithTitle:@"完成"
                                                                style:UIBarButtonItemStylePlain
                                                               target:self
                                                               action:@selector(onMultiDone)];
        id navItem = ((id (*)(id, SEL))objc_msgSend)(self, @selector(navigationItem));
        ((void (*)(id, SEL, id, BOOL))objc_msgSend)(navItem, @selector(setRightBarButtonItem:animated:), done, NO);
    }
}

// 未点完成就 pop/dismiss（取消路径；方法缺失时无取消回调，与旧版一致）
static void mioAllPopDismissImp(id self, SEL _cmd) {
    if (gOrigAllPopDismiss) ((void (*)(id, SEL))gOrigAllPopDismiss)(self, _cmd);
    MioPickerAllAdapter *bridge = MioAllBridge(self);
    if (bridge && !bridge.hasReturned) {
        WPLog(@"MioPicker", @"[All] popped/dismissed without done");
        [bridge notifyCancel];
    }
}

static void mioAllInstallHooks(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class cls = objc_getClass("SessionSelectController");
        if (!cls) {
            WPLog(@"MioPicker", @"[All] SessionSelectController not found!");
            return;
        }
        SEL doneSel = NSSelectorFromString(@"onMultiDone");
        Method m1 = class_getInstanceMethod(cls, doneSel);
        if (m1) { MSHookMessageEx(cls, doneSel, (IMP)mioAllDoneImp, &gOrigAllDone); WPLog(@"MioPicker", @"[All] onMultiDone hooked"); }
        SEL btnSel = NSSelectorFromString(@"updateMultiSelectRightBtn");
        Method m2 = class_getInstanceMethod(cls, btnSel);
        if (m2) { MSHookMessageEx(cls, btnSel, (IMP)mioAllUpdateBtnImp, &gOrigAllUpdateBtn); WPLog(@"MioPicker", @"[All] updateMultiSelectRightBtn hooked"); }
        SEL popSel = NSSelectorFromString(@"viewDidBePopedOrDismissed");
        Method m3 = class_getInstanceMethod(cls, popSel);
        if (m3) { MSHookMessageEx(cls, popSel, (IMP)mioAllPopDismissImp, &gOrigAllPopDismiss); WPLog(@"MioPicker", @"[All] viewDidBePopedOrDismissed hooked"); }
    });
}

- (void)presentFrom:(UIViewController *)from title:(NSString *)title preselected:(NSArray<NSString *> *)preselected {
    Class cls = objc_getClass("SessionSelectController");
    if (!cls) {
        WPLog(@"MioPicker", @"[All] class not found!");
        [self notifyCancel];
        return;
    }
    mioAllInstallHooks();

    UIViewController *picker = [[cls alloc] init];
    if (!picker) { [self notifyCancel]; return; }
    self.picker = picker;

    // KVC 参数与 WCR Misc_part13.c L42474-42567 逐一对应（reportTag 为旧版属性，8.0.60 无，弃）
    @try {
        [picker setValue:@(4096) forKey:@"maxSelectionCount"];
        [picker setValue:nil forKey:@"m_delegate"];
        [picker setValue:@(8) forKey:@"m_commonSearchScene"];
        [picker setValue:@YES forKey:@"useNewSearchBar"];
        [picker setValue:@YES forKey:@"m_bShowMultiSelectRightBtn"];
        [picker setValue:@YES forKey:@"m_bKeepCurViewAfterSelect"];
        [picker setValue:@YES forKey:@"m_bMultiSelect"];
        [picker setValue:@YES forKey:@"m_bAllowsMultiSelectEmpty"];
        [picker setValue:@NO forKey:@"m_onlyChatRoom"];
        [picker setValue:@NO forKey:@"m_bIgnoreChatRoom"];
        [picker setValue:@NO forKey:@"m_showsChatroomMembers"];
        [picker setValue:@NO forKey:@"m_showsChatroomFriendsOnly"];
        [picker setValue:title forKey:@"customTitle"];
    } @catch (NSException *e) {
        WPLog(@"MioPicker", @"[All] KVC error: %@", e);
    }

    objc_setAssociatedObject(picker, kMioAllBridgeKey, self, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    // WCR 同款：present 前强制 view 预加载 + 进入多选模式（Misc_part13.c L42594-42604）
    [picker view];
    if ([picker respondsToSelector:NSSelectorFromString(@"beginMultiSelect")]) {
        ((void (*)(id, SEL))objc_msgSend)(picker, NSSelectorFromString(@"beginMultiSelect"));
    }

    // 预选回显：把已选名单注入 m_selectView.m_dicMultiSelect（value 优先 CContact，查不到用 wxid
    // 字符串，提取端两者都认），再刷新表格勾选与底部已选面板
    if (preselected.count > 0) {
        NSMutableDictionary *pre = [NSMutableDictionary dictionary];
        for (NSString *wxid in preselected) {
            if (![wxid isKindOfClass:[NSString class]] || wxid.length == 0) continue;
            id contact = WXGetContactForWxid(wxid);
            [pre setObject:contact ?: wxid forKey:wxid];
        }
        @try {
            id selectView = [picker valueForKey:@"m_selectView"];
            if (selectView && pre.count > 0) {
                [selectView setValue:pre forKey:@"m_dicMultiSelect"];
                SEL ums = NSSelectorFromString(@"updateMultiSelectView");
                if ([selectView respondsToSelector:ums]) {
                    ((void (*)(id, SEL))objc_msgSend)(selectView, ums);
                }
                SEL upv = NSSelectorFromString(@"updateMultiSelectPanelViewResultView");
                if ([picker respondsToSelector:upv]) {
                    ((void (*)(id, SEL))objc_msgSend)(picker, upv);
                }
                WPLog(@"MioPicker", @"[All] prefilled %lu contacts", (unsigned long)pre.count);
            }
        } @catch (NSException *e) {
            WPLog(@"MioPicker", @"[All] prefill failed: %@", e);
        }
    }

    UIViewController *top = from;
    while (top.presentedViewController) top = top.presentedViewController;
    Class navCls = objc_getClass("MMUINavigationController") ?: [UINavigationController class];
    UINavigationController *nav = [[navCls alloc] initWithRootViewController:picker];
    // 全屏 present：pageSheet 顶部会露出黑边（安全区不足），且下滑关闭不走取消 hook
    nav.modalPresentationStyle = UIModalPresentationFullScreen;
    WPLog(@"MioPicker", @"[All] presenting (preselected=%lu)", (unsigned long)preselected.count);
    [top presentViewController:nav animated:YES completion:^{
        // 显示完成后再进一次多选态：搜索框随多选 UI 渲染，仅在 present 前调 beginMultiSelect
        // 不会显示（勾选一个后才出来）
        SEL bms = NSSelectorFromString(@"beginMultiSelect");
        if ([picker respondsToSelector:bms]) {
            ((void (*)(id, SEL))objc_msgSend)(picker, bms);
        }
    }];
}

- (void)cleanup {
    if (self.picker) objc_setAssociatedObject(self.picker, kMioAllBridgeKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    self.picker = nil;
}

@end

#pragma mark - 统一入口

@implementation MioContactPicker

+ (void)presentPickerWithMode:(MioContactPickerMode)mode
                        title:(NSString *)title
                  preselected:(NSArray<NSString *> *)preselected
                     delegate:(id<MioContactPickerDelegate>)delegate
                         from:(UIViewController *)from {
    if (!from) return;
    MioPickerAdapterBase *adapter = nil;
    switch (mode) {
        case MioContactPickerModeContacts: adapter = [[MioPickerContactsAdapter alloc] init]; break;
        case MioContactPickerModeGroups:   adapter = [[MioPickerGroupsAdapter alloc] init]; break;
        case MioContactPickerModeAll:      adapter = [[MioPickerAllAdapter alloc] init]; break;
    }
    if (!adapter) return;
    adapter.delegate = delegate;
    @try {
        [adapter presentFrom:from title:(title ?: @"选择联系人") preselected:(preselected ?: @[])];
    } @catch (NSException *e) {
        WPLog(@"MioPicker", @"present exception: %@ - %@", e.name, e.reason);
    }
}

@end
