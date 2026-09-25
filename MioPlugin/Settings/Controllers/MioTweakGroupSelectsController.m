#import "MioTweakGroupSelectsController.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"

// ===== 仿 WCR WCRefineChatRoomPicker 实现 =====
// WCR 的群选择器不自绘导航栏：直接 present 微信原生 MultiSelectChatRoomHalfScreenViewController
// （半屏多选群聊页），导航栏/外观由微信自己的 VC 管理，顶栏天然正常。
// 关键机制（逆向 WCR 得到）：
//   1. init 签名 initWithTipWord:choiseSessionWord:chatroomSessionWord:rightButtonWord:
//      rightButtonLightColor:rightButtonDarkColor:selectedUserNameList:selectMaxCount:
//      countExceedTipWord:forceLightMode:canSelectOpenIM:
//   2. bridge 对象经 KVC 设为其 m_delegate，同时挂关联对象（hook 里据此识别我们的实例）
//   3. swizzle onClickMakeSureButton（完成按钮），有关联对象才拦截，不影响微信原生场景
//   4. 完成时 KVC 取 m_dicMultiSelect 提取已选 wxid，doClickCloseWithNeedAnimated:action: 关页
//   5. delegate 回调 onSelectedOrCancelContact:isSelected: / onHalfScreenPageDidClose:action:

// 微信原生半屏多选群聊选择器（仅声明编译所需的 init 签名）
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
@end

@interface MioTweakGroupSelectsController ()
@property (strong, nonatomic) UIViewController *pickerController;
@property (strong, nonatomic) NSArray<NSString *> *selectedGroups;
@property (copy, nonatomic) NSString *titleText;
@property (assign, nonatomic) BOOL hasReturned;
- (void)handleOfficialDoneButtonClick;
- (void)refreshRightButton;
@end

static void *kMioPickerBridgeKey = &kMioPickerBridgeKey;
static IMP gOrigOnClickMakeSureButton = NULL;
static IMP gOrigUpdateRightMakeSureButton = NULL;
static IMP gOrigViewDidLayoutSubviews = NULL;
static IMP gOrigDidSelectContact = NULL;

// 微信原生"完成"按钮点击的 hook：有 bridge 且未返回 → 走我们的提取逻辑；否则走原实现
static void mioPickerDoneImp(id self, SEL _cmd) {
    id bridge = objc_getAssociatedObject(self, kMioPickerBridgeKey);
    if (bridge && ![bridge isKindOfClass:[MioTweakGroupSelectsController class]]) bridge = nil;
    if (bridge && ![bridge hasReturned]) {
        WPLog(@"GroupPicker", @"done button intercepted");
        [bridge handleOfficialDoneButtonClick];
        return;
    }
    if (gOrigOnClickMakeSureButton) {
        ((void (*)(id, SEL))gOrigOnClickMakeSureButton)(self, _cmd);
    }
}

// 微信原生 updateRightMakeSureButton hook：先走原实现，再对我们 bridge 的实例重写按钮标题
// （微信原生标题会拼上 selectMaxCount，NSUIntegerMax 截断显示成 4294967295，WCR 同款用 完成(N) 覆盖）
static void mioUpdateRightButtonImp(id self, SEL _cmd) {
    if (gOrigUpdateRightMakeSureButton) {
        ((void (*)(id, SEL))gOrigUpdateRightMakeSureButton)(self, _cmd);
    }
    id bridge = objc_getAssociatedObject(self, kMioPickerBridgeKey);
    if (bridge && ![bridge isKindOfClass:[MioTweakGroupSelectsController class]]) bridge = nil;
    if (bridge && ![bridge hasReturned]) [bridge refreshRightButton];
}

// viewDidLayoutSubviews hook：覆盖初始显示时机（WCR 同款 refreshLayoutIfNeeded 里的 refreshRightButton）
static void mioViewDidLayoutSubviewsImp(id self, SEL _cmd) {
    if (gOrigViewDidLayoutSubviews) {
        ((void (*)(id, SEL))gOrigViewDidLayoutSubviews)(self, _cmd);
    }
    id bridge = objc_getAssociatedObject(self, kMioPickerBridgeKey);
    if (bridge && ![bridge isKindOfClass:[MioTweakGroupSelectsController class]]) bridge = nil;
    if (bridge && ![bridge hasReturned]) [bridge refreshRightButton];
}

// didSelectContact: hook：每次点选/取消后刷新完成按钮（WCR 同款，覆盖取消选人到 0 时原生不刷新标题/禁用按钮的路径）
static void mioDidSelectContactImp(id self, SEL _cmd, id contact) {
    if (gOrigDidSelectContact) {
        ((void (*)(id, SEL, id))gOrigDidSelectContact)(self, _cmd, contact);
    }
    id bridge = objc_getAssociatedObject(self, kMioPickerBridgeKey);
    if (bridge && ![bridge isKindOfClass:[MioTweakGroupSelectsController class]]) bridge = nil;
    if (bridge && ![bridge hasReturned]) [bridge refreshRightButton];
}

static void mioRegisterPickerHook(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class cls = objc_getClass("MultiSelectChatRoomHalfScreenViewController");
        if (!cls) {
            WPLog(@"GroupPicker", @"MultiSelectChatRoomHalfScreenViewController not found!");
            return;
        }
        SEL sel = NSSelectorFromString(@"onClickMakeSureButton");
        Method m = class_getInstanceMethod(cls, sel);
        if (!m) {
            WPLog(@"GroupPicker", @"onClickMakeSureButton method not found!");
            return;
        }
        gOrigOnClickMakeSureButton = method_setImplementation(m, (IMP)mioPickerDoneImp);
        WPLog(@"GroupPicker", @"onClickMakeSureButton hooked");

        Method up = class_getInstanceMethod(cls, NSSelectorFromString(@"updateRightMakeSureButton"));
        if (up) {
            gOrigUpdateRightMakeSureButton = method_setImplementation(up, (IMP)mioUpdateRightButtonImp);
            WPLog(@"GroupPicker", @"updateRightMakeSureButton hooked");
        }
        Method lay = class_getInstanceMethod(cls, @selector(viewDidLayoutSubviews));
        if (lay) {
            gOrigViewDidLayoutSubviews = method_setImplementation(lay, (IMP)mioViewDidLayoutSubviewsImp);
            WPLog(@"GroupPicker", @"viewDidLayoutSubviews hooked");
        }
        Method dsc = class_getInstanceMethod(cls, NSSelectorFromString(@"didSelectContact:"));
        if (dsc) {
            gOrigDidSelectContact = method_setImplementation(dsc, (IMP)mioDidSelectContactImp);
            WPLog(@"GroupPicker", @"didSelectContact: hooked");
        }
    });
}

@implementation MioTweakGroupSelectsController

- (instancetype)initWithSelectedGroups:(NSArray<NSString *> *)selectedGroups title:(NSString *)title {
    if (self = [super init]) {
        _selectedGroups = selectedGroups ?: @[];
        _titleText = [(title ?: @"选择群聊") copy];
    }
    return self;
}

- (void)presentFromViewController:(UIViewController *)hostViewController {
    if (!hostViewController) return;
    mioRegisterPickerHook();

    Class cls = objc_getClass("MultiSelectChatRoomHalfScreenViewController");
    if (!cls) {
        WPLog(@"GroupPicker", @"class not found!");
        return;
    }

    self.hasReturned = NO;
    // 参数为 Frida 抓取的 WCR 实测可用值（selectMaxCount=NSUIntegerMax 不限制、tipWord 传空，
    // 之前自定义参数 9999/非空 tipWord 会导致微信 init 内部 access violation 闪退）。
    // 注意：两个颜色参数必须是十六进制颜色字符串（如 #07C160），微信内部会对其调 length 解析；
    // 传 UIColor 会在 present 时 getRightMakeSureColor 里 unrecognized selector 闪退
    UIViewController *picker = [[cls alloc] initWithTipWord:@""
                                          choiseSessionWord:@"已选群聊"
                                        chatroomSessionWord:@"群聊"
                                            rightButtonWord:@"完成"
                                     rightButtonLightColor:@"#07C160"
                                      rightButtonDarkColor:@"#07C160"
                                       selectedUserNameList:self.selectedGroups
                                             selectMaxCount:NSUIntegerMax
                                         countExceedTipWord:@"已达到可选上限"
                                              forceLightMode:NO
                                             canSelectOpenIM:NO];
    if (!picker) return;
    self.pickerController = picker;
    WPLog(@"GroupPicker", @"picker created, preselected=%lu", (unsigned long)self.selectedGroups.count);

    // bridge 挂到 picker：hook 里按关联对象取回；微信 VC 经 m_delegate 回调选中/关闭事件
    objc_setAssociatedObject(picker, kMioPickerBridgeKey, self, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    WPLog(@"GroupPicker", @"associated object set");
    @try {
        [picker setValue:self forKey:@"m_delegate"];
        WPLog(@"GroupPicker", @"m_delegate set");
    } @catch (NSException *e) {
        WPLog(@"GroupPicker", @"set m_delegate failed: %@", e);
    }

    // WCR 同款：沿 presentedViewController 链找最顶层宿主
    UIViewController *top = hostViewController;
    while (top.presentedViewController) top = top.presentedViewController;
    WPLog(@"GroupPicker", @"top host: %@ (%@)", NSStringFromClass([top class]), top);

    // WCR 同款：半屏 presentation 配置（两种签名 respondsToSelector 探测）
    SEL cfg2 = NSSelectorFromString(@"configPresentationCustomWithViewController:resetPresentedViewFrame:");
    SEL cfg1 = NSSelectorFromString(@"configPresentationCustomWithViewController:");
    @try {
        if ([picker respondsToSelector:cfg2]) {
            WPLog(@"GroupPicker", @"calling cfg2 (resetPresentedViewFrame)");
            ((void (*)(id, SEL, id, BOOL))objc_msgSend)(picker, cfg2, top, YES);
            WPLog(@"GroupPicker", @"cfg2 done");
        } else if ([picker respondsToSelector:cfg1]) {
            WPLog(@"GroupPicker", @"calling cfg1");
            ((void (*)(id, SEL, id))objc_msgSend)(picker, cfg1, top);
            WPLog(@"GroupPicker", @"cfg1 done");
        } else {
            WPLog(@"GroupPicker", @"no configPresentation method");
        }
    } @catch (NSException *e) {
        WPLog(@"GroupPicker", @"cfg exception: %@", e);
    }

    WPLog(@"GroupPicker", @"presenting...");
    [top presentViewController:picker animated:YES completion:nil];
    WPLog(@"GroupPicker", @"presented");
}

#pragma mark - 完成按钮（hook 入口）

- (void)handleOfficialDoneButtonClick {
    if (self.hasReturned) return;
    self.hasReturned = YES;
    WPLog(@"GroupPicker", @"done clicked");

    NSArray<NSString *> *result = [self extractSelectedGroupIds];
    WPLog(@"GroupPicker", @"extracted %lu ids: %@", (unsigned long)result.count, result);

    UIViewController *picker = self.pickerController;
    SEL closeSel = NSSelectorFromString(@"doClickCloseWithNeedAnimated:action:");
    if (picker && [picker respondsToSelector:closeSel]) {
        ((void (*)(id, SEL, BOOL, long long))objc_msgSend)(picker, closeSel, YES, 1);
    } else if (picker) {
        [picker dismissViewControllerAnimated:YES completion:nil];
    }
    [self cleanup];

    void (^notify)(void) = ^{
        if ([self.delegate respondsToSelector:@selector(onGroupSelectReturn:)]) {
            [self.delegate onGroupSelectReturn:result];
        }
    };
    if ([NSThread isMainThread]) notify();
    else dispatch_async(dispatch_get_main_queue(), notify);
}

// WCR 同款 refreshRightButton：把完成按钮标题重写为 完成(N)（N=已选数），
// 去掉微信原生标题里拼的 selectMaxCount（NSUIntegerMax 会显示成 4294967295）
- (void)refreshRightButton {
    UIViewController *picker = self.pickerController;
    if (!picker) return;
    UIButton *btn = nil;
    @try {
        btn = [picker valueForKey:@"m_rightMakeSureButton"];
    } @catch (NSException *e) {}
    if (![btn isKindOfClass:[UIButton class]]) return;

    NSUInteger count = [self extractSelectedGroupIds].count;
    NSString *title = count > 0
        ? [NSString stringWithFormat:@"完成(%lu)", (unsigned long)count]
        : @"完成";
    // WCR 同款：0 个选择也强制保持可按，允许保存空选择（即清空过滤列表）
    [btn setEnabled:YES];
    [btn setAlpha:1.0];
    [btn setTitle:title forState:UIControlStateNormal];
    [btn setTitle:title forState:UIControlStateHighlighted];
    [btn setTitle:title forState:UIControlStateDisabled];
    [btn setTitle:title forState:UIControlStateSelected];

    // 尺寸自适应（WCR 同款思路：宽 46-80），保持右缘与垂直中心不变
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

// WCR 同款：KVC 取 m_dicMultiSelect，优先 allValuesInOrder/allValues（value 为 contact，取 m_nsUsrName），
// 提取不到退回 keys（key 即 wxid）
- (NSArray<NSString *> *)extractSelectedGroupIds {
    id dic = nil;
    @try {
        dic = [self.pickerController valueForKey:@"m_dicMultiSelect"];
    } @catch (NSException *e) {}
    NSMutableArray<NSString *> *ids = [NSMutableArray array];
    if (!dic) return ids;

    NSArray *values = nil;
    SEL orderSel = NSSelectorFromString(@"allValuesInOrder");
    if ([dic respondsToSelector:orderSel]) {
        values = ((NSArray *(*)(id, SEL))objc_msgSend)(dic, orderSel);
    } else if ([dic respondsToSelector:@selector(allValues)]) {
        values = [dic allValues];
    }
    for (id contact in values) {
        NSString *name = nil;
        if ([contact isKindOfClass:[NSString class]]) {
            name = contact;
        } else if ([contact respondsToSelector:@selector(m_nsUsrName)]) {
            name = ((NSString *(*)(id, SEL))objc_msgSend)(contact, @selector(m_nsUsrName));
        }
        if ([name isKindOfClass:[NSString class]] && name.length > 0) [ids addObject:name];
    }
    if (ids.count == 0 && [dic respondsToSelector:@selector(allKeys)]) {
        for (id key in [dic allKeys]) {
            if ([key isKindOfClass:[NSString class]]) [ids addObject:(NSString *)key];
        }
    }
    return [ids copy];
}

#pragma mark - MultiSelectChatRoomHalfScreenViewController 回调

- (void)onSelectedOrCancelContact:(id)contact isSelected:(BOOL)isSelected {
    // 微信原生会刷新按钮状态，无需处理
}

- (void)onHalfScreenPageDidClose:(id)page action:(long long)action {
    WPLog(@"GroupPicker", @"page closed, action=%lld, hasReturned=%d", action, self.hasReturned);
    if (!self.hasReturned) {
        // 未点完成就关闭（取消/下滑）
        if ([self.delegate respondsToSelector:@selector(onGroupSelectCancel)]) {
            [self.delegate onGroupSelectCancel];
        }
        [self cleanup];
    }
}

- (void)cleanup {
    if (self.pickerController) {
        objc_setAssociatedObject(self.pickerController, kMioPickerBridgeKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    self.pickerController = nil;
}

@end
