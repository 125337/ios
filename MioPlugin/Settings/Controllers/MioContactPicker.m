#import "MioContactPicker.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>
#import "../Core/ServiceHelper.h"
#import "../Core/LogManager.h"

// ===== 统一选人入口（MioContactPicker.h 注释为架构总览）=====
// 两个适配器的机制来源：
//   Groups：WCR WCRefineChatRoomPicker（FUN__part32.c）逆向移植，Frida 实测 init 参数
//   Contacts：MultiSelectContactsViewController（发起群聊主选人器）自有配方。
//     字段清单以设备 8.0.60 class dump 为准（ivar + setter 逐一实证存在；
//     头文件里的 m_bContainOpenIM / setM_bShowOpenIMContactGroup: 设备上不存在，勿用）。
//     预选 = present 前注入 m_dicMultiSelect（原生 initData 读该字典渲染勾选）；
//     结果 = m_delegate 回调（onMultiSelectContactReturn 系列原生协议方法）；
//     完成按钮强显 = WCR 配方（FUN_01b39918）：m_panelBtnItem / rightBarItem（含 customView）/
//       主动 updateRightBarItemEnabled:YES / m_toolView.completeButton，UIControl 三件套齐上；
//     完成动作 = hook onDone:/onDoneInPageSheetMode: 直接收尾（均 bridge 校验隔离原生"发起群聊"）。

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

@interface MultiSelectContactsViewController : UIViewController
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
        NSArray<NSString *> *result = MioGroupsExtract(self);
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
        if (!cls) return;
        // MSHookMessageEx：方法在父类时（如 viewDidLayoutSubviews）hook 限定在本类，不污染 UIViewController 全局
        SEL doneSel = NSSelectorFromString(@"onClickMakeSureButton");
        Method m1 = class_getInstanceMethod(cls, doneSel);
        if (m1) { MSHookMessageEx(cls, doneSel, (IMP)mioGroupsDoneImp, &gOrigGroupsDone); }
        SEL btnSel = NSSelectorFromString(@"updateRightMakeSureButton");
        Method m2 = class_getInstanceMethod(cls, btnSel);
        if (m2) { MSHookMessageEx(cls, btnSel, (IMP)mioGroupsUpdateBtnImp, &gOrigGroupsUpdateBtn); }
        Method m3 = class_getInstanceMethod(cls, @selector(viewDidLayoutSubviews));
        if (m3) { MSHookMessageEx(cls, @selector(viewDidLayoutSubviews), (IMP)mioGroupsLayoutImp, &gOrigGroupsLayout); }
        SEL didSelectSel = NSSelectorFromString(@"didSelectContact:");
        Method m4 = class_getInstanceMethod(cls, didSelectSel);
        if (m4) { MSHookMessageEx(cls, didSelectSel, (IMP)mioGroupsDidSelectImp, &gOrigGroupsDidSelect); }
    });
}

- (void)presentFrom:(UIViewController *)from title:(NSString *)title preselected:(NSArray<NSString *> *)preselected {
    Class cls = objc_getClass("MultiSelectChatRoomHalfScreenViewController");
    if (!cls) {
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
    } @catch (NSException *e) {}

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
        }
    } @catch (NSException *e) {}
    [top presentViewController:picker animated:YES completion:nil];
}

// m_delegate 回调：未点完成就关页（取消/下滑）
- (void)onHalfScreenPageDidClose:(id)page action:(long long)action {
    if (!self.hasReturned) [self notifyCancel];
}

// m_delegate 回调：点选/取消勾选，微信原生会刷新按钮，无需处理
- (void)onSelectedOrCancelContact:(id)contact isSelected:(BOOL)isSelected {}

- (void)cleanup {
    if (self.picker) objc_setAssociatedObject(self.picker, kMioGroupsBridgeKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    self.picker = nil;
}

@end

#pragma mark - 适配器 2：只选人（MultiSelectContactsViewController，完成按钮强显 hook）

static void *kMioMultiBridgeKey = &kMioMultiBridgeKey;
static IMP gOrigMultiRightEnabled = NULL;
static IMP gOrigMultiRightEnabledPageSheet = NULL;

static void mioMultiInstallHooks(void);

@interface MioPickerMultiSelectAdapter : MioPickerAdapterBase <UIAdaptivePresentationControllerDelegate>
@property (strong, nonatomic) UIViewController *picker;
@property (copy, nonatomic) NSString *logTag;   // [Contacts]
@property (nonatomic, assign) BOOL refreshing;  // 强显重入保护（layout/update 链可能间接绕回来）
@end

@implementation MioPickerMultiSelectAdapter

// wxid → CContact：getContactByName:（getContactByUserName: 对该名单实测查 nil）
// + m_nsUsrName 校验（getContactByName: 对个别 ID 会返回错误对象）
static id MioMultiContactForWxid(NSString *wxid) {
    if (![wxid isKindOfClass:[NSString class]] || wxid.length == 0) return nil;
    id mgr = WXGetService(objc_getClass("CContactMgr"));
    if (!mgr) return nil;
    SEL byName = NSSelectorFromString(@"getContactByName:");
    if (![mgr respondsToSelector:byName]) return nil;
    id contact = ((id (*)(id, SEL, id))objc_msgSend)(mgr, byName, wxid);
    SEL nameSel = NSSelectorFromString(@"m_nsUsrName");
    if (contact && [contact respondsToSelector:nameSel]) {
        NSString *got = ((NSString *(*)(id, SEL))objc_msgSend)(contact, nameSel);
        if (![got isKindOfClass:[NSString class]] || ![got isEqualToString:wxid]) return nil;
    }
    return contact;
}

// 已选提取：m_dicMultiSelect → allValuesInOrder（有序字典，选择序=展示序）→ m_nsUsrName，退回 keys
static NSArray<NSString *> *MioMultiExtract(id picker) {
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
        if ([name isKindOfClass:[NSString class]] && name.length > 0 && ![ids containsObject:name]) [ids addObject:name];
    }
    if (ids.count == 0) {
        for (id key in [dic allKeys]) {
            if ([key isKindOfClass:[NSString class]]) [ids addObject:(NSString *)key];
        }
    }
    return [ids copy];
}

static MioPickerMultiSelectAdapter *MioMultiBridge(id self) {
    id bridge = objc_getAssociatedObject(self, kMioMultiBridgeKey);
    return [bridge isKindOfClass:[MioPickerMultiSelectAdapter class]] ? bridge : nil;
}

// 完成按钮强显（WCR FUN_01b39918/01b3a0ac 同款配方）：
// 原生置灰 = enabled=NO + alpha 压低 + 关触摸，只 setEnabled 不够，UIControl 要三件套齐上。
// 四路强显：m_panelBtnItem / navigationItem.rightBarButtonItem（含 customView 子树）/
// 主动调 updateRightBarItemEnabled:YES（让原生自己刷）/ m_toolView.completeButton（pageSheet 底部按钮）

// WCR FUN_01b3a0ac 同款：子树内所有 UIControl 三件套强显（enabled/alpha/userInteractionEnabled）
static void MioMultiEnableControls(UIView *view) {
    if (![view isKindOfClass:[UIView class]]) return;
    if ([view isKindOfClass:[UIControl class]]) {
        [(UIControl *)view setEnabled:YES];
        [(UIControl *)view setAlpha:1.0];
        [(UIControl *)view setUserInteractionEnabled:YES];
    }
    for (UIView *sub in view.subviews) MioMultiEnableControls(sub);
}

static void MioMultiEnableBarItem(UIBarButtonItem *item) {
    if (![item isKindOfClass:[UIBarButtonItem class]]) return;
    [item setEnabled:YES];
    if ([item.customView isKindOfClass:[UIView class]]) MioMultiEnableControls(item.customView);
}

// 强显主体（无守卫，供两个守卫入口复用）
static void MioMultiApplySurfacesCore(UIViewController *picker) {
    id panelItem = nil;
    @try { panelItem = [picker valueForKey:@"m_panelBtnItem"]; } @catch (NSException *e) {}
    if ([panelItem isKindOfClass:[UIBarButtonItem class]]) MioMultiEnableBarItem(panelItem);
    MioMultiEnableBarItem(picker.navigationItem.rightBarButtonItem);

    id toolView = nil;
    @try { toolView = [picker valueForKey:@"m_toolView"]; } @catch (NSException *e) {}
    if (![toolView isKindOfClass:[UIView class]]) return;
    id doneBtn = nil;
    @try { doneBtn = [toolView valueForKey:@"completeButton"]; } @catch (NSException *e) {}
    if ([doneBtn isKindOfClass:[UIButton class]]) {
        [(UIButton *)doneBtn setEnabled:YES];
        [(UIButton *)doneBtn setAlpha:1.0];
        [(UIButton *)doneBtn setUserInteractionEnabled:YES];
    } else if ([doneBtn isKindOfClass:[UIView class]]) {
        MioMultiEnableControls(doneBtn);
    }
}

// hook 回调入口：重入保护（refreshing 已 YES = 本链已在强显中，直接返回）
static void MioMultiApplySurfaces(UIViewController *picker) {
    MioPickerMultiSelectAdapter *bridge = MioMultiBridge(picker);
    if (!bridge || bridge.refreshing) return;
    bridge.refreshing = YES;
    @try {
        MioMultiApplySurfacesCore(picker);
    } @finally {
        bridge.refreshing = NO;
    }
}

// 全量刷新（viewDidLayoutSubviews / 250ms 补刷走这里）：主体强显 + 主动调
// updateRightBarItemEnabled:YES 让原生自刷。同一把 refreshing 锁：update 可能触发原生
// layout → layout hook → RefreshNow 重入，锁在直接返回，环到此为止
static void MioMultiRefreshNow(UIViewController *picker) {
    MioPickerMultiSelectAdapter *bridge = MioMultiBridge(picker);
    if (!bridge || bridge.refreshing) return;
    bridge.refreshing = YES;
    @try {
        WPLog(@"Contacts", @"[DoneRefresh] count=%lu", (unsigned long)MioMultiExtract(picker).count);
        MioMultiApplySurfacesCore(picker);
        SEL upd = NSSelectorFromString(@"updateRightBarItemEnabled:");
        if ([picker respondsToSelector:upd]) {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(picker, upd, YES);
        }
    } @finally {
        bridge.refreshing = NO;
    }
}

// WCR FUN_01b39820 同款：立即刷 + 250ms 后补刷一轮（原生延迟刷新路径会把按钮再置灰）
static void MioMultiRefreshRightButton(UIViewController *picker) {
    MioMultiRefreshNow(picker);
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.25 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        MioPickerMultiSelectAdapter *b = MioMultiBridge(picker);
        if (b && !b.hasReturned) MioMultiRefreshNow(picker);
    });
}

static void mioMultiRightEnabledImp(id self, SEL _cmd, id arg1) {
    if (gOrigMultiRightEnabled) ((void (*)(id, SEL, id))gOrigMultiRightEnabled)(self, _cmd, arg1);
    MioPickerMultiSelectAdapter *bridge = MioMultiBridge(self);
    if (bridge && !bridge.hasReturned) MioMultiApplySurfaces(self);   // 只补强显，无主动 update，不会递归
}

static void mioMultiRightEnabledPageSheetImp(id self, SEL _cmd, id arg1) {
    if (gOrigMultiRightEnabledPageSheet) ((void (*)(id, SEL, id))gOrigMultiRightEnabledPageSheet)(self, _cmd, arg1);
    MioPickerMultiSelectAdapter *bridge = MioMultiBridge(self);
    if (bridge && !bridge.hasReturned) MioMultiApplySurfaces(self);
}

static IMP gOrigMultiLayout = NULL;
static void mioMultiLayoutImp(id self, SEL _cmd) {
    if (gOrigMultiLayout) ((void (*)(id, SEL))gOrigMultiLayout)(self, _cmd);
    MioPickerMultiSelectAdapter *bridge = MioMultiBridge(self);
    if (bridge && !bridge.hasReturned) MioMultiRefreshRightButton(self);
}

// pageSheet 右按钮更新（0 参）：原生 pageSheet 刷"完成"的主路径，0 选中时也走这里
static IMP gOrigMultiUpdateRightPageSheet = NULL;
static void mioMultiUpdateRightPageSheetImp(id self, SEL _cmd) {
    if (gOrigMultiUpdateRightPageSheet) ((void (*)(id, SEL))gOrigMultiUpdateRightPageSheet)(self, _cmd);
    MioPickerMultiSelectAdapter *bridge = MioMultiBridge(self);
    if (bridge && !bridge.hasReturned) MioMultiRefreshRightButton(self);
}

// 完成动作（pageSheet 底部按钮 → onDoneInPageSheetMode:，非 pageSheet → onDone:）：
// bridge 内直接取名单收尾，绕过原生（原生对 0 个选中可能直接吞掉，清空名单就没法点）
static IMP gOrigMultiDone = NULL;
static IMP gOrigMultiDonePageSheet = NULL;
static void mioMultiFinish(id self, MioPickerMultiSelectAdapter *bridge) {
    [(UIViewController *)self dismissViewControllerAnimated:YES completion:nil];
    [bridge finishWithWxids:MioMultiExtract(self)];
}
static void mioMultiDoneImp(id self, SEL _cmd, id sender) {
    MioPickerMultiSelectAdapter *bridge = MioMultiBridge(self);
    if (bridge && !bridge.hasReturned) { mioMultiFinish(self, bridge); return; }
    if (gOrigMultiDone) ((void (*)(id, SEL, id))gOrigMultiDone)(self, _cmd, sender);
}
static void mioMultiDonePageSheetImp(id self, SEL _cmd, id sender) {
    MioPickerMultiSelectAdapter *bridge = MioMultiBridge(self);
    if (bridge && !bridge.hasReturned) { mioMultiFinish(self, bridge); return; }
    if (gOrigMultiDonePageSheet) ((void (*)(id, SEL, id))gOrigMultiDonePageSheet)(self, _cmd, sender);
}

// hook 安装：bridge 校验保证微信原生"发起群聊"（同用此类）不受影响（无 bridge 走原逻辑）
static void mioMultiInstallHooks(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class cls = objc_getClass("MultiSelectContactsViewController");
        if (!cls) return;
        SEL s1 = NSSelectorFromString(@"updateRightBarItemEnabled:");
        Method m1 = class_getInstanceMethod(cls, s1);
        if (m1) { MSHookMessageEx(cls, s1, (IMP)mioMultiRightEnabledImp, &gOrigMultiRightEnabled); }
        SEL s2 = NSSelectorFromString(@"updateRightBarItemEnabledInPageSheetModeIfNeeded:");
        Method m2 = class_getInstanceMethod(cls, s2);
        if (m2) { MSHookMessageEx(cls, s2, (IMP)mioMultiRightEnabledPageSheetImp, &gOrigMultiRightEnabledPageSheet); }
        // viewDidLayoutSubviews：首帧强显一次（update*Enabled 依赖原生主动调用，首帧未必触发）
        Method m3 = class_getInstanceMethod(cls, @selector(viewDidLayoutSubviews));
        if (m3) { MSHookMessageEx(cls, @selector(viewDidLayoutSubviews), (IMP)mioMultiLayoutImp, &gOrigMultiLayout); }
        SEL s3 = NSSelectorFromString(@"updateMultiSelectRightBarItemInPageSheetModeIfNeeded");
        Method m6 = class_getInstanceMethod(cls, s3);
        if (m6) { MSHookMessageEx(cls, s3, (IMP)mioMultiUpdateRightPageSheetImp, &gOrigMultiUpdateRightPageSheet); }
        SEL s4 = NSSelectorFromString(@"onDone:");
        Method m4 = class_getInstanceMethod(cls, s4);
        if (m4) { MSHookMessageEx(cls, s4, (IMP)mioMultiDoneImp, &gOrigMultiDone); }
        SEL s5 = NSSelectorFromString(@"onDoneInPageSheetMode:");
        Method m5 = class_getInstanceMethod(cls, s5);
        if (m5) { MSHookMessageEx(cls, s5, (IMP)mioMultiDonePageSheetImp, &gOrigMultiDonePageSheet); }
    });
}

- (void)dismissPicker {
    [self.picker dismissViewControllerAnimated:YES completion:nil];
}

// pageSheet 下滑关闭：系统已 dismiss，走取消（hasReturned 内置防重入）
- (void)presentationControllerDidDismiss:(UIPresentationController *)presentationController {
    [self notifyCancel];
}

// 完成：合并好友与"从群选人"两路，保序去重；空则回退字典提取
- (void)finishFromContacts:(NSArray *)contacts fromGroup:(NSArray *)groupContacts {
    NSMutableArray *all = [NSMutableArray arrayWithArray:contacts ?: @[]];
    if (groupContacts) [all addObjectsFromArray:groupContacts];
    NSMutableArray<NSString *> *ids = [NSMutableArray array];
    SEL nameSel = NSSelectorFromString(@"m_nsUsrName");
    for (id v in all) {
        NSString *wxid = nil;
        if ([v isKindOfClass:[NSString class]]) wxid = v;
        else if ([v respondsToSelector:nameSel]) wxid = ((NSString *(*)(id, SEL))objc_msgSend)(v, nameSel);
        if ([wxid isKindOfClass:[NSString class]] && wxid.length > 0 && ![ids containsObject:wxid]) [ids addObject:wxid];
    }
    if (ids.count == 0) [ids addObjectsFromArray:MioMultiExtract(self.picker)];
    [self dismissPicker];
    [self finishWithWxids:ids];
}

// ===== m_delegate 回调（MultiSelectContactsViewControllerDelegate 语义，WCR bridge 同款）=====

// nil = 静默关闭
- (void)onMultiSelectContactReturn:(NSArray *)contacts {
    if (!contacts) {
        [self dismissPicker];
        [self notifyCancel];
        return;
    }
    [self finishFromContacts:contacts fromGroup:nil];
}

// 全 nil = dismiss
- (void)onMultiSelectContactReturn:(NSArray *)contacts selectContactFromGroup:(NSArray *)groupContacts {
    if (!contacts && !groupContacts) {
        [self dismissPicker];
        [self notifyCancel];
        return;
    }
    [self finishFromContacts:contacts fromGroup:groupContacts];
}

- (void)onMultiSelectContactCancel {
    [self dismissPicker];
    [self notifyCancel];
}

- (void)onCancelSelectContact {
    [self onMultiSelectContactCancel];
}

// KVC 写入（缺失字段静默跳过；KVC 无 setter 时会自动直写 ivar，设备 dump 已证字段齐全）
static void MioMultiSetValue(id obj, NSString *key, id value, NSString *tag) {
    @try {
        [obj setValue:value forKey:key];
    } @catch (NSException *e) {}
}

- (void)presentFrom:(UIViewController *)from title:(NSString *)title preselected:(NSArray<NSString *> *)preselected {
    Class cls = objc_getClass("MultiSelectContactsViewController");
    if (!cls) {
        [self notifyCancel];
        return;
    }
    mioMultiInstallHooks();

    UIViewController *picker = [[cls alloc] init];
    if (!picker) { [self notifyCancel]; return; }
    self.picker = picker;
    objc_setAssociatedObject(picker, kMioMultiBridgeKey, self, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    // 配方：字段以设备 8.0.60 class dump 为准；场景值沿用 WCR 实测可用组合（群场景 0xf、搜索场景 8）
    NSString *tag = self.logTag;
    MioMultiSetValue(picker, @"m_uiGroupScene", @(0xf), tag);
    MioMultiSetValue(picker, @"m_commonSearchScene", @(8), tag);
    MioMultiSetValue(picker, @"m_memberCountLimit", @(4096), tag);
    MioMultiSetValue(picker, @"m_viewcontrllerTitle", title, tag);   // 设备拼写即如此（原生 typo 字段）
    MioMultiSetValue(picker, @"m_rightBarButtonTitle", @"完成", tag);
    MioMultiSetValue(picker, @"m_bShowHistoryGroup", @NO, tag);   // "导入群聊中的朋友"（从群挑成员），不是选群，勿开
    MioMultiSetValue(picker, @"m_bShowContactTag", @YES, tag);
    MioMultiSetValue(picker, @"m_bShowSelectFromGroup", @NO, tag);   // "选择群聊中的朋友"（从群挑成员），同上勿开
    MioMultiSetValue(picker, @"m_bKeepCurViewAfterSelect", @YES, tag);
    MioMultiSetValue(picker, @"m_onlyChatRoom", @NO, tag);
    MioMultiSetValue(picker, @"m_onlyImportChatRoom", @NO, tag);

    // 预选注入：必须在 present 前（原生首帧渲染读该字典渲染勾选）
    if (preselected.count > 0) {
        NSMutableDictionary *pre = [NSMutableDictionary dictionary];
        for (NSString *wxid in preselected) {
            id contact = MioMultiContactForWxid(wxid);
            if (contact) [pre setObject:contact forKey:wxid];
        }
        MioMultiSetValue(picker, @"m_dicMultiSelect", pre, tag);
    }

    MioMultiSetValue(picker, @"m_delegate", self, tag);

    UIViewController *top = from;
    while (top.presentedViewController) top = top.presentedViewController;
    Class navCls = objc_getClass("MMUINavigationController") ?: [UINavigationController class];
    UINavigationController *nav = [[navCls alloc] initWithRootViewController:picker];
    // 底部弹出（pageSheet）：下滑即可退出；下滑关闭走 presentationControllerDidDismiss → 取消回调
    nav.modalPresentationStyle = UIModalPresentationPageSheet;
    nav.presentationController.delegate = self;
    [top presentViewController:nav animated:YES completion:nil];
}

- (void)cleanup {
    if (self.picker) objc_setAssociatedObject(self.picker, kMioMultiBridgeKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
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
        case MioContactPickerModeContacts: {
            MioPickerMultiSelectAdapter *a = [[MioPickerMultiSelectAdapter alloc] init];
            a.logTag = @"[Contacts]";
            adapter = a;
            break;
        }
        case MioContactPickerModeGroups:   adapter = [[MioPickerGroupsAdapter alloc] init]; break;
    }
    if (!adapter) return;
    adapter.delegate = delegate;
    @try {
        [adapter presentFrom:from title:(title ?: @"选择联系人") preselected:(preselected ?: @[])];
    } @catch (NSException *e) {}
}

@end
