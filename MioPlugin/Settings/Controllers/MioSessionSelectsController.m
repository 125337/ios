#import "MioSessionSelectsController.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"

// 仅声明编译所需符号（运行时统一走 objc_getClass 取微信真类，绝不以类名直接实例化）
@interface SessionSelectController : UIViewController
- (void)onMultiDone;
@end

static void *kMioSessionCompletionKey = &kMioSessionCompletionKey;
static IMP gOrigSessionOnMultiDone = NULL;
static IMP gOrigSessionUpdateRightBtn = NULL;

// 字典值 → wxid：NSString 直取 / contact 对象取 m_nsUsrName / KVC 兜底，再退回 key
// （WCR FUN_01805b20 同款语义：key=wxid、value=contact 对象或 NSString）
static NSString *MioSessionWxidOf(id value, id key) {
    NSString *wxid = nil;
    if ([value isKindOfClass:[NSString class]]) {
        wxid = value;
    } else if ([value respondsToSelector:NSSelectorFromString(@"m_nsUsrName")]) {
        wxid = ((NSString *(*)(id, SEL))objc_msgSend)(value, NSSelectorFromString(@"m_nsUsrName"));
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
static NSArray<NSString *> *MioExtractSessionSelected(id picker) {
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
            NSString *wxid = MioSessionWxidOf(v, nil);
            if (wxid) [ids addObject:wxid];
        }
    }
    if (ids.count == 0) {
        for (id key in [dic allKeys]) {
            NSString *wxid = MioSessionWxidOf([dic objectForKey:key], key);
            if (wxid) [ids addObject:wxid];
        }
    }
    return [ids copy];
}

// onMultiDone hook：带 completion marker（我们的实例）→ 提取 + 关页 + 回调；否则走原生
static void mioSessionDoneImp(id self, SEL _cmd) {
    MioSessionSelectCompletion cb = objc_getAssociatedObject(self, kMioSessionCompletionKey);
    if (!cb) {
        if (gOrigSessionOnMultiDone) ((void (*)(id, SEL))gOrigSessionOnMultiDone)(self, _cmd);
        return;
    }
    objc_setAssociatedObject(self, kMioSessionCompletionKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);   // 防重入
    WPLog(@"SessionPicker", @"done clicked");
    NSArray<NSString *> *result = MioExtractSessionSelected(self);
    WPLog(@"SessionPicker", @"extracted %lu ids: %@", (unsigned long)result.count, result);
    ((void (*)(id, SEL, BOOL, id))objc_msgSend)(self, @selector(dismissViewControllerAnimated:completion:), YES, nil);
    if ([NSThread isMainThread]) cb(result);
    else dispatch_async(dispatch_get_main_queue(), ^{ cb(result); });
}

// updateMultiSelectRightBtn hook：原生按钮走 endMultiSelect 死路（m_delegate=nil 无回调可收），
// 原实现后替换为"完成"→ onMultiDone（WCR FUN_01806780 同款）
static void mioSessionUpdateRightBtnImp(id self, SEL _cmd) {
    if (gOrigSessionUpdateRightBtn) ((void (*)(id, SEL))gOrigSessionUpdateRightBtn)(self, _cmd);
    if (!objc_getAssociatedObject(self, kMioSessionCompletionKey)) return;
    UIBarButtonItem *done = [[UIBarButtonItem alloc] initWithTitle:@"完成"
                                                            style:UIBarButtonItemStylePlain
                                                           target:self
                                                           action:@selector(onMultiDone)];
    id navItem = ((id (*)(id, SEL))objc_msgSend)(self, @selector(navigationItem));
    ((void (*)(id, SEL, id, BOOL))objc_msgSend)(navItem, @selector(setRightBarButtonItem:animated:), done, NO);
}

static void mioSessionInstallHooks(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class cls = objc_getClass("SessionSelectController");
        if (!cls) {
            WPLog(@"SessionPicker", @"SessionSelectController not found!");
            return;
        }
        Method m1 = class_getInstanceMethod(cls, NSSelectorFromString(@"onMultiDone"));
        if (m1) {
            gOrigSessionOnMultiDone = method_setImplementation(m1, (IMP)mioSessionDoneImp);
            WPLog(@"SessionPicker", @"onMultiDone hooked");
        }
        Method m2 = class_getInstanceMethod(cls, NSSelectorFromString(@"updateMultiSelectRightBtn"));
        if (m2) {
            gOrigSessionUpdateRightBtn = method_setImplementation(m2, (IMP)mioSessionUpdateRightBtnImp);
            WPLog(@"SessionPicker", @"updateMultiSelectRightBtn hooked");
        }
    });
}

@interface MioSessionSelectsController ()
@property (copy, nonatomic) NSString *titleText;
@property (strong, nonatomic) NSArray<NSString *> *preselectedContacts;
@end

@implementation MioSessionSelectsController

+ (BOOL)isSupported {
    return objc_getClass("SessionSelectController") != nil;
}

- (instancetype)initWithTitle:(NSString *)title preselectedContacts:(NSArray<NSString *> *)preselectedContacts {
    if (self = [super init]) {
        _titleText = [(title ?: @"选择联系人") copy];
        _preselectedContacts = preselectedContacts ?: @[];
    }
    return self;
}

- (void)presentFromViewController:(UIViewController *)hostViewController
                       completion:(MioSessionSelectCompletion)completion {
    if (!hostViewController) return;
    Class cls = objc_getClass("SessionSelectController");
    if (!cls) {
        WPLog(@"SessionPicker", @"SessionSelectController not found!");
        return;
    }
    mioSessionInstallHooks();

    UIViewController *picker = [[cls alloc] init];
    if (!picker) return;

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
        [picker setValue:self.titleText forKey:@"customTitle"];
    } @catch (NSException *e) {
        WPLog(@"SessionPicker", @"KVC error: %@", e);
    }

    objc_setAssociatedObject(picker, kMioSessionCompletionKey, completion, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    // WCR 同款：present 前强制 view 预加载 + 进入多选模式（Misc_part13.c L42594-42604）
    [picker view];
    if ([picker respondsToSelector:NSSelectorFromString(@"beginMultiSelect")]) {
        ((void (*)(id, SEL))objc_msgSend)(picker, NSSelectorFromString(@"beginMultiSelect"));
    }

    // 预选回显：把已选名单注入 m_selectView.m_dicMultiSelect（value 优先 CContact，查不到用 wxid
    // 字符串，提取端两者都认），再刷新表格勾选与底部已选面板
    if (self.preselectedContacts.count > 0) {
        NSMutableDictionary *pre = [NSMutableDictionary dictionary];
        for (NSString *wxid in self.preselectedContacts) {
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
                WPLog(@"SessionPicker", @"prefilled %lu contacts", (unsigned long)pre.count);
            }
        } @catch (NSException *e) {
            WPLog(@"SessionPicker", @"prefill failed: %@", e);
        }
    }

    // 沿 presentedViewController 链找最顶层宿主，MMUINavigationController 包裹后 present（WCR 同款）
    UIViewController *top = hostViewController;
    while (top.presentedViewController) top = top.presentedViewController;
    Class navCls = objc_getClass("MMUINavigationController") ?: [UINavigationController class];
    UINavigationController *nav = [[navCls alloc] initWithRootViewController:picker];
    WPLog(@"SessionPicker", @"presenting (preselected=%lu)", (unsigned long)self.preselectedContacts.count);
    [top presentViewController:nav animated:YES completion:nil];
}

@end
