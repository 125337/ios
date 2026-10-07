#import "MioContactPicker.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>
#import "../Core/LogManager.h"
#import "../Core/ServiceHelper.h"

// ===== 统一选人入口（MioContactPicker.h 注释为架构总览）=====
// 两个适配器的机制来源：
//   Groups：WCR WCRefineChatRoomPicker（FUN__part32.c）逆向移植，Frida 实测 init 参数
//   Contacts/All：MultiSelectContactsViewController（发起群聊主选人器）自有配方。
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

#pragma mark - 适配器 2：只选人/都选（MultiSelectContactsViewController，零 hook）

static void *kMioMultiBridgeKey = &kMioMultiBridgeKey;

@interface MioPickerMultiSelectAdapter : MioPickerAdapterBase
@property (strong, nonatomic) UIViewController *picker;
@property (copy, nonatomic) NSString *logTag;   // [Contacts] / [All]
@end

@implementation MioPickerMultiSelectAdapter

// ===== 预选回显诊断日志（问题定位后移除）=====

// KVC 回读 m_dicMultiSelect 摘要（count + keys），异常转文本不崩
static NSString *MioMultiDicDesc(id obj) {
    id dic = nil;
    @try { dic = [obj valueForKey:@"m_dicMultiSelect"]; }
    @catch (NSException *e) { return [NSString stringWithFormat:@"<KVC err: %@>", e.reason]; }
    if (!dic || dic == [NSNull null]) return @"nil";
    if (![dic isKindOfClass:[NSDictionary class]]) return [NSString stringWithFormat:@"<非字典:%@>", NSStringFromClass([dic class])];
    return [NSString stringWithFormat:@"count=%lu keys=%@", (unsigned long)[dic count], [dic allKeys]];
}

// wxid → CContact：getContactByName:（getContactByUserName: 对该名单实测查 nil）
// + m_nsUsrName 校验（getContactByName: 对个别 ID 会返回错误对象）
// 每步失败原因都落日志（诊断回显断点用）
static id MioMultiContactForWxid(NSString *wxid, NSString *tag) {
    if (![wxid isKindOfClass:[NSString class]] || wxid.length == 0) {
        WPLog(@"MioPicker", @"%@ [解析] 失败：非法 wxid(%@)", tag, wxid);
        return nil;
    }
    id mgr = WXGetService(objc_getClass("CContactMgr"));
    if (!mgr) {
        WPLog(@"MioPicker", @"%@ [解析] 失败：CContactMgr 不可用", tag);
        return nil;
    }
    SEL byName = NSSelectorFromString(@"getContactByName:");
    if (![mgr respondsToSelector:byName]) {
        WPLog(@"MioPicker", @"%@ [解析] 失败：CContactMgr 无 getContactByName:", tag);
        return nil;
    }
    id contact = ((id (*)(id, SEL, id))objc_msgSend)(mgr, byName, wxid);
    if (!contact) {
        WPLog(@"MioPicker", @"%@ [解析] 失败：getContactByName:(%@) = nil", tag, wxid);
        return nil;
    }
    SEL nameSel = NSSelectorFromString(@"m_nsUsrName");
    if (![contact respondsToSelector:nameSel]) {
        WPLog(@"MioPicker", @"%@ [解析] 警告：%@ 无 m_nsUsrName，原样放行", tag, NSStringFromClass([contact class]));
        return contact;
    }
    NSString *got = ((NSString *(*)(id, SEL))objc_msgSend)(contact, nameSel);
    if (![got isKindOfClass:[NSString class]] || ![got isEqualToString:wxid]) {
        WPLog(@"MioPicker", @"%@ [解析] 失败：getContactByName:(%@) 返回错误对象 %@（m_nsUsrName=%@）", tag, wxid, NSStringFromClass([contact class]), got);
        return nil;
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
    WPLog(@"MioPicker", @"%@ [回调] 下滑关闭", self.logTag);
    [self notifyCancel];
}

// 完成：合并好友与"从群选人"两路，保序去重；空则回退字典提取
- (void)finishFromContacts:(NSArray *)contacts fromGroup:(NSArray *)groupContacts {
    NSMutableArray *all = [NSMutableArray arrayWithArray:contacts ?: @[]];
    if (groupContacts) [all addObjectsFromArray:groupContacts];
    NSMutableArray<NSString *> *clsNames = [NSMutableArray array];
    NSMutableArray<NSString *> *ids = [NSMutableArray array];
    SEL nameSel = NSSelectorFromString(@"m_nsUsrName");
    for (id v in all) {
        [clsNames addObject:NSStringFromClass([v class])];
        NSString *wxid = nil;
        if ([v isKindOfClass:[NSString class]]) wxid = v;
        else if ([v respondsToSelector:nameSel]) wxid = ((NSString *(*)(id, SEL))objc_msgSend)(v, nameSel);
        if ([wxid isKindOfClass:[NSString class]] && wxid.length > 0 && ![ids containsObject:wxid]) [ids addObject:wxid];
    }
    if (ids.count == 0) [ids addObjectsFromArray:MioMultiExtract(self.picker)];
    WPLog(@"MioPicker", @"%@ [完成] 回调 contacts=%lu group=%lu 类名=%@ 提取 %lu: %@ 字典回读=%@",
          self.logTag, (unsigned long)(contacts ? contacts.count : 0), (unsigned long)(groupContacts ? groupContacts.count : 0),
          clsNames, (unsigned long)ids.count, ids, MioMultiDicDesc(self.picker));
    [self dismissPicker];
    [self finishWithWxids:ids];
}

// ===== m_delegate 回调（MultiSelectContactsViewControllerDelegate 语义，WCR bridge 同款）=====

// nil = 静默关闭
- (void)onMultiSelectContactReturn:(NSArray *)contacts {
    WPLog(@"MioPicker", @"%@ [回调] onMultiSelectContactReturn: %lu 个", self.logTag, (unsigned long)(contacts ? contacts.count : 0));
    if (!contacts) {
        WPLog(@"MioPicker", @"%@ [回调] nil = 静默关闭", self.logTag);
        [self dismissPicker];
        [self notifyCancel];
        return;
    }
    [self finishFromContacts:contacts fromGroup:nil];
}

// 全 nil = dismiss
- (void)onMultiSelectContactReturn:(NSArray *)contacts selectContactFromGroup:(NSArray *)groupContacts {
    WPLog(@"MioPicker", @"%@ [回调] onMultiSelectContactReturn:…FromGroup: contacts=%lu group=%lu",
          self.logTag, (unsigned long)(contacts ? contacts.count : 0), (unsigned long)(groupContacts ? groupContacts.count : 0));
    if (!contacts && !groupContacts) {
        WPLog(@"MioPicker", @"%@ [回调] 全 nil = dismiss", self.logTag);
        [self dismissPicker];
        [self notifyCancel];
        return;
    }
    [self finishFromContacts:contacts fromGroup:groupContacts];
}

- (void)onMultiSelectContactCancel {
    WPLog(@"MioPicker", @"%@ [回调] onMultiSelectContactCancel", self.logTag);
    [self dismissPicker];
    [self notifyCancel];
}

- (void)onCancelSelectContact {
    WPLog(@"MioPicker", @"%@ [回调] onCancelSelectContact", self.logTag);
    [self onMultiSelectContactCancel];
}

// KVC 写入（缺失字段打日志不中断；KVC 无 setter 时会自动直写 ivar，设备 dump 已证字段齐全）
static void MioMultiSetValue(id obj, NSString *key, id value, NSString *tag) {
    @try {
        [obj setValue:value forKey:key];
    } @catch (NSException *e) {
        WPLog(@"MioPicker", @"%@ KVC skip %@: %@", tag, key, e.reason);
    }
}

- (void)presentFrom:(UIViewController *)from title:(NSString *)title preselected:(NSArray<NSString *> *)preselected {
    Class cls = objc_getClass("MultiSelectContactsViewController");
    if (!cls) {
        WPLog(@"MioPicker", @"%@ MultiSelectContactsViewController not found!", self.logTag);
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
    MioMultiSetValue(picker, @"m_bShowHistoryGroup", @NO, tag);
    MioMultiSetValue(picker, @"m_bShowContactTag", @YES, tag);
    MioMultiSetValue(picker, @"m_bShowSelectFromGroup", @NO, tag);   // 顶部"选择群聊中的朋友"入口，需求去掉
    MioMultiSetValue(picker, @"m_bKeepCurViewAfterSelect", @YES, tag);
    MioMultiSetValue(picker, @"m_onlyChatRoom", @NO, tag);
    MioMultiSetValue(picker, @"m_onlyImportChatRoom", @NO, tag);

    // 预选注入：必须在 present 前（原生首帧渲染读该字典渲染勾选）
    if (preselected.count > 0) {
        NSMutableDictionary *pre = [NSMutableDictionary dictionary];
        for (NSString *wxid in preselected) {
            id contact = MioMultiContactForWxid(wxid, tag);
            if (contact) {
                [pre setObject:contact forKey:wxid];
            } else {
                WPLog(@"MioPicker", @"%@ [注入] 跳过解析失败的 %@", tag, wxid);
            }
        }
        MioMultiSetValue(picker, @"m_dicMultiSelect", pre, tag);
        WPLog(@"MioPicker", @"%@ [注入] %lu/%lu，回读 %@", tag, (unsigned long)pre.count, (unsigned long)preselected.count, MioMultiDicDesc(picker));
    }

    MioMultiSetValue(picker, @"m_delegate", self, tag);

    UIViewController *top = from;
    while (top.presentedViewController) top = top.presentedViewController;
    Class navCls = objc_getClass("MMUINavigationController") ?: [UINavigationController class];
    UINavigationController *nav = [[navCls alloc] initWithRootViewController:picker];
    // 底部弹出（pageSheet）：下滑即可退出；下滑关闭走 presentationControllerDidDismiss → 取消回调
    nav.modalPresentationStyle = UIModalPresentationPageSheet;
    nav.presentationController.delegate = self;
    WPLog(@"MioPicker", @"%@ presenting (preselected=%lu)", tag, (unsigned long)preselected.count);
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
        case MioContactPickerModeAll: {
            MioPickerMultiSelectAdapter *a = [[MioPickerMultiSelectAdapter alloc] init];
            a.logTag = @"[All]";
            adapter = a;
            break;
        }
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
