#import "MioContactPicker.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>
#import "../Core/ServiceHelper.h"
#import "../Core/LogManager.h"

// ===== 统一选人入口（MioContactPicker.h 注释为架构总览）=====
// 三个适配器的机制来源：
//   Groups：WCR WCRefineChatRoomPicker（FUN__part32.c）逆向移植，Frida 实测 init 参数
//   All   ：WCR presentSessionSelectPickerFromViewController（Misc_part13.c L42457-42642）
//   Contacts：MultiSelectContactsViewController（发起群聊主选人器）自有配方。
//     字段清单以设备 8.0.60 class dump 为准（ivar + setter 逐一实证存在；
//     头文件里的 m_bContainOpenIM / setM_bShowOpenIMContactGroup: 设备上不存在，勿用）。
//     预选 = present 前注入 m_dicMultiSelect（原生 initData 读该字典渲染勾选）；
//     结果 = m_delegate 回调（onMultiSelectContactReturn 系列原生协议方法）；零 hook。

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

@interface SessionSelectController : UIViewController
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
        WPLog(@"MioPicker", @"finish(%@): %lu 个 %@", NSStringFromClass([self class]), (unsigned long)wxids.count, wxids);
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
    WPLog(@"MioPicker", @"[Groups] onClickMakeSureButton: bridge=%@", bridge ? @"命中" : @"未命中");
    if (bridge && !bridge.hasReturned) {
        NSArray<NSString *> *result = MioGroupsExtract(self);
        WPLog(@"MioPicker", @"[Groups] 提取 %lu 个 %@", (unsigned long)result.count, result);
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
            WPLog(@"MioPicker", @"[Groups] MultiSelectChatRoomHalfScreenViewController 类不存在!");
            return;
        }
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
    WPLog(@"MioPicker", @"[Groups] present: title=%@ 预选 %lu 个 %@", title, (unsigned long)preselected.count, preselected);
    Class cls = objc_getClass("MultiSelectChatRoomHalfScreenViewController");
    if (!cls) {
        WPLog(@"MioPicker", @"[Groups] 类不存在 → 取消");
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
    if (!self.hasReturned) {
        WPLog(@"MioPicker", @"[Groups] 半屏关闭未返回 → 取消");
        [self notifyCancel];
    }
}

// m_delegate 回调：点选/取消勾选，微信原生会刷新按钮，无需处理
- (void)onSelectedOrCancelContact:(id)contact isSelected:(BOOL)isSelected {}

- (void)cleanup {
    if (self.picker) objc_setAssociatedObject(self.picker, kMioGroupsBridgeKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    self.picker = nil;
}

@end

#pragma mark - 适配器 2：只选人（MultiSelectContactsViewController，零 hook）

static void *kMioMultiBridgeKey = &kMioMultiBridgeKey;

@interface MioPickerMultiSelectAdapter : MioPickerAdapterBase <UIAdaptivePresentationControllerDelegate>
@property (strong, nonatomic) UIViewController *picker;
@property (copy, nonatomic) NSString *logTag;   // [Contacts] / [All]
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

- (void)dismissPicker {
    [self.picker dismissViewControllerAnimated:YES completion:nil];
}

// pageSheet 下滑关闭：系统已 dismiss，走取消（hasReturned 内置防重入）
- (void)presentationControllerDidDismiss:(UIPresentationController *)presentationController {
    WPLog(@"MioPicker", @"%@ pageSheet 下滑关闭 → 取消", self.logTag);
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
    WPLog(@"MioPicker", @"%@ 完成: 好友 %lu + 群内 %lu → 提取 %lu 个 %@", self.logTag,
          (unsigned long)(contacts ? contacts.count : 0), (unsigned long)(groupContacts ? groupContacts.count : 0),
          (unsigned long)ids.count, ids);
    [self dismissPicker];
    [self finishWithWxids:ids];
}

// ===== m_delegate 回调（MultiSelectContactsViewControllerDelegate 语义，WCR bridge 同款）=====

// nil = 静默关闭
- (void)onMultiSelectContactReturn:(NSArray *)contacts {
    WPLog(@"MioPicker", @"%@ onMultiSelectContactReturn: %@", self.logTag,
          contacts ? [NSString stringWithFormat:@"%lu 个", (unsigned long)contacts.count] : @"nil(静默关闭)");
    if (!contacts) {
        [self dismissPicker];
        [self notifyCancel];
        return;
    }
    [self finishFromContacts:contacts fromGroup:nil];
}

// 全 nil = dismiss
- (void)onMultiSelectContactReturn:(NSArray *)contacts selectContactFromGroup:(NSArray *)groupContacts {
    WPLog(@"MioPicker", @"%@ onMultiSelectContactReturn:selectContactFromGroup: 好友 %@ / 群内 %@", self.logTag,
          contacts ? [NSString stringWithFormat:@"%lu 个", (unsigned long)contacts.count] : @"nil",
          groupContacts ? [NSString stringWithFormat:@"%lu 个", (unsigned long)groupContacts.count] : @"nil");
    if (!contacts && !groupContacts) {
        [self dismissPicker];
        [self notifyCancel];
        return;
    }
    [self finishFromContacts:contacts fromGroup:groupContacts];
}

- (void)onMultiSelectContactCancel {
    WPLog(@"MioPicker", @"%@ onMultiSelectContactCancel → 取消", self.logTag);
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
    } @catch (NSException *e) {
        WPLog(@"MioPicker", @"%@ KVC 写入失败: %@ (%@)", tag, key, e);
    }
}

- (void)presentFrom:(UIViewController *)from title:(NSString *)title preselected:(NSArray<NSString *> *)preselected {
    WPLog(@"MioPicker", @"%@ present: title=%@ 预选 %lu 个 %@", self.logTag, title, (unsigned long)preselected.count, preselected);
    Class cls = objc_getClass("MultiSelectContactsViewController");
    if (!cls) {
        WPLog(@"MioPicker", @"%@ MultiSelectContactsViewController 类不存在 → 取消", self.logTag);
        [self notifyCancel];
        return;
    }
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
            if (contact) {
                [pre setObject:contact forKey:wxid];
            } else {
                WPLog(@"MioPicker", @"%@ 预选解析失败(非联系人或查无): %@", self.logTag, wxid);
            }
        }
        MioMultiSetValue(picker, @"m_dicMultiSelect", pre, tag);
        WPLog(@"MioPicker", @"%@ 预选注入 %lu 项", self.logTag, (unsigned long)pre.count);
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

#pragma mark - 适配器 3：都选（SessionSelectController 全屏，好友+群聊）

static void *kMioAllBridgeKey = &kMioAllBridgeKey;
static IMP gOrigAllDone = NULL;
static IMP gOrigAllUpdateBtn = NULL;
static IMP gOrigAllLeftBtn = NULL;
static IMP gOrigAllPopDismiss = NULL;
static IMP gOrigAllLayout = NULL;

static void mioAllInstallHooks(void);

@interface MioPickerAllAdapter : MioPickerAdapterBase
@property (strong, nonatomic) UIViewController *picker;
@property (nonatomic, assign) BOOL layoutFixed;   // 首次 layout 刷新一次性标志（实例级，防多实例污染）
- (void)mioAllCloseTapped:(id)sender;                          // "关闭"左按钮 action
@end

@implementation MioPickerAllAdapter

static MioPickerAllAdapter *MioAllBridge(id self) {
    id bridge = objc_getAssociatedObject(self, kMioAllBridgeKey);
    return [bridge isKindOfClass:[MioPickerAllAdapter class]] ? bridge : nil;
}

// 多选左按钮重写为"关闭"直接关页：原生是"取消"，走 cancelMultiSelect 只回退普通态不关页，
// 页面会卡在普通态（关闭/多选），不符合需求
static void MioAllRefreshLeftButton(UIViewController *picker) {
    MioPickerAllAdapter *bridge = MioAllBridge(picker);
    if (!bridge || bridge.hasReturned) return;
    UIBarButtonItem *close = [[UIBarButtonItem alloc] initWithTitle:@"关闭"
                                                              style:UIBarButtonItemStylePlain
                                                             target:bridge
                                                             action:@selector(mioAllCloseTapped:)];
    [picker.navigationItem setLeftBarButtonItem:close animated:NO];
    WPLog(@"MioPicker", @"[All] 左按钮已重写为 关闭");
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
    WPLog(@"MioPicker", @"[All] onMultiDone: bridge=%@", bridge ? @"命中" : @"未命中");
    if (bridge && !bridge.hasReturned) {
        NSArray<NSString *> *result = MioAllExtract(self);
        WPLog(@"MioPicker", @"[All] 提取 %lu 个 %@", (unsigned long)result.count, result);
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
        WPLog(@"MioPicker", @"[All] updateMultiSelectRightBtn → 右按钮重写为 完成");
        UIBarButtonItem *done = [[UIBarButtonItem alloc] initWithTitle:@"完成"
                                                                style:UIBarButtonItemStylePlain
                                                               target:self
                                                               action:@selector(onMultiDone)];
        id navItem = ((id (*)(id, SEL))objc_msgSend)(self, @selector(navigationItem));
        ((void (*)(id, SEL, id, BOOL))objc_msgSend)(navItem, @selector(setRightBarButtonItem:animated:), done, NO);
        MioAllRefreshLeftButton(self);
    }
}

// 多选左按钮（原生"取消"）原实现后重写为"关闭"
static void mioAllLeftBtnImp(id self, SEL _cmd) {
    if (gOrigAllLeftBtn) ((void (*)(id, SEL))gOrigAllLeftBtn)(self, _cmd);
    MioPickerAllAdapter *bridge = MioAllBridge(self);
    if (bridge && !bridge.hasReturned) {
        WPLog(@"MioPicker", @"[All] updateMultiSelectLeftBtn → 重写左按钮");
        MioAllRefreshLeftButton(self);
    }
}

// 未点完成就 pop/dismiss（取消路径；方法缺失时无取消回调，与旧版一致）
static void mioAllPopDismissImp(id self, SEL _cmd) {
    if (gOrigAllPopDismiss) ((void (*)(id, SEL))gOrigAllPopDismiss)(self, _cmd);
    MioPickerAllAdapter *bridge = MioAllBridge(self);
    if (bridge && !bridge.hasReturned) {
        WPLog(@"MioPicker", @"[All] viewDidBePopedOrDismissed 未返回 → 取消");
        [bridge notifyCancel];
    }
}

// layout 时几何已稳定才刷新多选 UI：进 window + 顶部安全区已算出（导航栏让位完成）+ bounds
// 高度非零（动画 frame 已收敛）。present 动画中间态的 layout 一律放过，等稳定那次再刷，
// 避免用错误几何锁死面板（头像条贴进导航栏、搜索栏被挤掉）。一次性标志防重复刷新
static void mioAllLayoutImp(id self, SEL _cmd) {
    if (gOrigAllLayout) ((void (*)(id, SEL))gOrigAllLayout)(self, _cmd);
    MioPickerAllAdapter *bridge = MioAllBridge(self);
    if (!bridge || bridge.hasReturned || bridge.layoutFixed) return;
    UIViewController *vc = self;
    if (!vc.view.window || vc.view.safeAreaInsets.top <= 0 || vc.view.bounds.size.height <= 0) {
        WPLog(@"MioPicker", @"[All] layout 几何未稳定(window=%d safeTop=%.1f height=%.1f) → 跳过等下次",
              vc.view.window ? 1 : 0, vc.view.safeAreaInsets.top, vc.view.bounds.size.height);
        return;
    }
    bridge.layoutFixed = YES;
    id selectView = nil;
    @try { selectView = [vc valueForKey:@"m_selectView"]; } @catch (NSException *e) {}
    SEL ums = NSSelectorFromString(@"updateMultiSelectView");
    BOOL umsOk = selectView && [selectView respondsToSelector:ums];
    if (umsOk) ((void (*)(id, SEL))objc_msgSend)(selectView, ums);
    SEL upv = NSSelectorFromString(@"updateMultiSelectPanelViewResultView");
    BOOL upvOk = [vc respondsToSelector:upv];
    if (upvOk) ((void (*)(id, SEL))objc_msgSend)(vc, upv);
    [vc.view setNeedsLayout];
    [vc.view layoutIfNeeded];
    WPLog(@"MioPicker", @"[All] 几何稳定 layout → UI 刷新: updateMultiSelectView=%d updateMultiSelectPanelViewResultView=%d",
          umsOk ? 1 : 0, upvOk ? 1 : 0);
}

static void mioAllInstallHooks(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class cls = objc_getClass("SessionSelectController");
        if (!cls) {
            WPLog(@"MioPicker", @"[All] SessionSelectController 类不存在!");
            return;
        }
        SEL doneSel = NSSelectorFromString(@"onMultiDone");
        Method m1 = class_getInstanceMethod(cls, doneSel);
        if (m1) { MSHookMessageEx(cls, doneSel, (IMP)mioAllDoneImp, &gOrigAllDone); }
        WPLog(@"MioPicker", @"[All] hook onMultiDone=%d", m1 ? 1 : 0);
        SEL btnSel = NSSelectorFromString(@"updateMultiSelectRightBtn");
        Method m2 = class_getInstanceMethod(cls, btnSel);
        if (m2) { MSHookMessageEx(cls, btnSel, (IMP)mioAllUpdateBtnImp, &gOrigAllUpdateBtn); }
        WPLog(@"MioPicker", @"[All] hook updateMultiSelectRightBtn=%d", m2 ? 1 : 0);
        SEL leftSel = NSSelectorFromString(@"updateMultiSelectLeftBtn");
        Method m4 = class_getInstanceMethod(cls, leftSel);
        if (m4) { MSHookMessageEx(cls, leftSel, (IMP)mioAllLeftBtnImp, &gOrigAllLeftBtn); }
        WPLog(@"MioPicker", @"[All] hook updateMultiSelectLeftBtn=%d", m4 ? 1 : 0);
        SEL popSel = NSSelectorFromString(@"viewDidBePopedOrDismissed");
        Method m3 = class_getInstanceMethod(cls, popSel);
        if (m3) { MSHookMessageEx(cls, popSel, (IMP)mioAllPopDismissImp, &gOrigAllPopDismiss); }
        WPLog(@"MioPicker", @"[All] hook viewDidBePopedOrDismissed=%d", m3 ? 1 : 0);
        // viewDidLayoutSubviews：若为父类继承实现（cls 与父类取到同一 Method），先在本类挂
        // 空实现再 hook，避免 method 改写落在 UIViewController 上污染全局
        SEL layoutSel = @selector(viewDidLayoutSubviews);
        Method m5 = class_getInstanceMethod(cls, layoutSel);
        Method m5Super = class_getInstanceMethod(class_getSuperclass(cls), layoutSel);
        if (m5 && m5 == m5Super) {
            class_addMethod(cls, layoutSel, imp_implementationWithBlock(^(id _self){}),
                            method_getTypeEncoding(m5));
        }
        m5 = class_getInstanceMethod(cls, layoutSel);
        if (m5) { MSHookMessageEx(cls, layoutSel, (IMP)mioAllLayoutImp, &gOrigAllLayout); }
        WPLog(@"MioPicker", @"[All] hook viewDidLayoutSubviews=%d", m5 ? 1 : 0);
    });
}

- (void)presentFrom:(UIViewController *)from title:(NSString *)title preselected:(NSArray<NSString *> *)preselected {
    WPLog(@"MioPicker", @"[All] present: title=%@ 预选 %lu 个 %@", title, (unsigned long)preselected.count, preselected);
    Class cls = objc_getClass("SessionSelectController");
    if (!cls) {
        WPLog(@"MioPicker", @"[All] SessionSelectController 类不存在 → 取消");
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
        WPLog(@"MioPicker", @"[All] KVC 配置异常: %@", e);
    }

    objc_setAssociatedObject(picker, kMioAllBridgeKey, self, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    // WCR 同款：present 前强制 view 预加载 + 进入多选模式（Misc_part13.c L42594-42604）
    [picker view];
    if ([picker respondsToSelector:NSSelectorFromString(@"beginMultiSelect")]) {
        ((void (*)(id, SEL))objc_msgSend)(picker, NSSelectorFromString(@"beginMultiSelect"));
    }
    WPLog(@"MioPicker", @"[All] view 预加载 + present 前 beginMultiSelect 完成");

    // 数据前置：present 前只写 m_dicMultiSelect（原生首帧读该字典渲染勾选态），不做任何 UI 刷新
    if (preselected.count > 0) {
        NSMutableDictionary *pre = [NSMutableDictionary dictionary];
        for (NSString *wxid in preselected) {
            if (![wxid isKindOfClass:[NSString class]] || wxid.length == 0) continue;
            id contact = WXGetContactForWxid(wxid);
            [pre setObject:contact ?: wxid forKey:wxid];
            WPLog(@"MioPicker", @"[All] 预选 %@ → %@", wxid, contact ? @"CContact" : @"wxid 字符串(查无联系人)");
        }
        @try {
            id selectView = [picker valueForKey:@"m_selectView"];
            if (selectView && pre.count > 0) {
                [selectView setValue:pre forKey:@"m_dicMultiSelect"];
                WPLog(@"MioPicker", @"[All] 预选注入 m_selectView.m_dicMultiSelect %lu 项", (unsigned long)pre.count);
            } else {
                WPLog(@"MioPicker", @"[All] 预选注入跳过: selectView=%@ pre.count=%lu", selectView, (unsigned long)pre.count);
            }
        } @catch (NSException *e) {
            WPLog(@"MioPicker", @"[All] 预选注入异常: %@", e);
        }
    }

    UIViewController *top = from;
    while (top.presentedViewController) top = top.presentedViewController;
    Class navCls = objc_getClass("MMUINavigationController") ?: [UINavigationController class];
    UINavigationController *nav = [[navCls alloc] initWithRootViewController:picker];
    // 全屏 present：pageSheet 顶部会露出黑边（安全区不足），且下滑关闭不走取消 hook
    nav.modalPresentationStyle = UIModalPresentationFullScreen;
    [top presentViewController:nav animated:YES completion:^{
        WPLog(@"MioPicker", @"[All] present completion 触发");
        // 补设 title + 再进一次多选态（搜索框随多选 UI 渲染）
        [picker setTitle:title ?: @""];
        SEL bms = NSSelectorFromString(@"beginMultiSelect");
        if ([picker respondsToSelector:bms]) {
            ((void (*)(id, SEL))objc_msgSend)(picker, bms);
        }
        // UI 刷新不在 completion：由 viewDidLayoutSubviews hook 在首次进 window 的布局时机
        // 执行（几何已正确但用户尚未看清，跳变被消化在 present 动画里）
    }];
}

// "关闭"：直接 dismiss 页面并走取消回调（替代原生"取消"的回退普通态）
- (void)mioAllCloseTapped:(id)sender {
    WPLog(@"MioPicker", @"[All] 关闭按钮点击 → dismiss + 取消");
    if (self.hasReturned) return;
    [self.picker dismissViewControllerAnimated:YES completion:nil];
    [self notifyCancel];
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
        case MioContactPickerModeContacts: {
            MioPickerMultiSelectAdapter *a = [[MioPickerMultiSelectAdapter alloc] init];
            a.logTag = @"[Contacts]";
            adapter = a;
            break;
        }
        case MioContactPickerModeGroups:   adapter = [[MioPickerGroupsAdapter alloc] init]; break;
        case MioContactPickerModeAll:      adapter = [[MioPickerAllAdapter alloc] init]; break;    // 都选：转发选会话页（人+群混排）
    }
    if (!adapter) return;
    adapter.delegate = delegate;
    @try {
        [adapter presentFrom:from title:(title ?: @"选择联系人") preselected:(preselected ?: @[])];
    } @catch (NSException *e) {}
}

@end
