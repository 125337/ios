#import "MioTweakGroupSelectsController.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>

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

static void gsLog(NSString *content) {
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"MioPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"redenvelop.log"];
        NSString *line = [NSString stringWithFormat:@"[%@] %@\n", [NSDate date], content];
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [line writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {}
}

// 微信原生半屏多选群聊选择器（仅声明编译所需的 init 签名）
@interface MultiSelectChatRoomHalfScreenViewController : UIViewController
- (instancetype)initWithTipWord:(NSString *)tipWord
              choiseSessionWord:(NSString *)choiseSessionWord
            chatroomSessionWord:(NSString *)chatroomSessionWord
                rightButtonWord:(NSString *)rightButtonWord
         rightButtonLightColor:(UIColor *)rightButtonLightColor
          rightButtonDarkColor:(UIColor *)rightButtonDarkColor
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
@end

static void *kMioPickerBridgeKey = &kMioPickerBridgeKey;
static IMP gOrigOnClickMakeSureButton = NULL;

// 微信原生"完成"按钮点击的 hook：有 bridge 且未返回 → 走我们的提取逻辑；否则走原实现
static void mioPickerDoneImp(id self, SEL _cmd) {
    id bridge = objc_getAssociatedObject(self, kMioPickerBridgeKey);
    if (bridge && ![bridge isKindOfClass:[MioTweakGroupSelectsController class]]) bridge = nil;
    if (bridge && ![bridge hasReturned]) {
        [bridge handleOfficialDoneButtonClick];
        return;
    }
    if (gOrigOnClickMakeSureButton) {
        ((void (*)(id, SEL))gOrigOnClickMakeSureButton)(self, _cmd);
    }
}

static void mioRegisterPickerHook(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class cls = objc_getClass("MultiSelectChatRoomHalfScreenViewController");
        if (!cls) {
            gsLog(@"[GroupPicker] MultiSelectChatRoomHalfScreenViewController not found!");
            return;
        }
        SEL sel = NSSelectorFromString(@"onClickMakeSureButton");
        Method m = class_getInstanceMethod(cls, sel);
        if (!m) {
            gsLog(@"[GroupPicker] onClickMakeSureButton method not found!");
            return;
        }
        gOrigOnClickMakeSureButton = method_setImplementation(m, (IMP)mioPickerDoneImp);
        gsLog(@"[GroupPicker] onClickMakeSureButton hooked");
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
        gsLog(@"[GroupPicker] MultiSelectChatRoomHalfScreenViewController not found!");
        return;
    }

    self.hasReturned = NO;
    UIViewController *picker = [[cls alloc] initWithTipWord:self.titleText
                                          choiseSessionWord:@"最近会话"
                                        chatroomSessionWord:@"所有群聊"
                                            rightButtonWord:@"完成"
                                     rightButtonLightColor:[UIColor colorWithRed:7/255.0 green:193/255.0 blue:96/255.0 alpha:1.0]
                                      rightButtonDarkColor:[UIColor colorWithRed:7/255.0 green:193/255.0 blue:96/255.0 alpha:1.0]
                                       selectedUserNameList:self.selectedGroups
                                             selectMaxCount:9999
                                         countExceedTipWord:@"选择的群聊数量已达上限"
                                              forceLightMode:NO
                                             canSelectOpenIM:NO];
    if (!picker) return;
    self.pickerController = picker;
    gsLog([NSString stringWithFormat:@"[GroupPicker] picker created, preselected=%lu", (unsigned long)self.selectedGroups.count]);

    // bridge 挂到 picker：hook 里按关联对象取回；微信 VC 经 m_delegate 回调选中/关闭事件
    objc_setAssociatedObject(picker, kMioPickerBridgeKey, self, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    @try {
        [picker setValue:self forKey:@"m_delegate"];
    } @catch (NSException *e) {
        gsLog([NSString stringWithFormat:@"[GroupPicker] set m_delegate failed: %@", e]);
    }

    // WCR 同款：沿 presentedViewController 链找最顶层宿主
    UIViewController *top = hostViewController;
    while (top.presentedViewController) top = top.presentedViewController;

    // WCR 同款：半屏 presentation 配置（两种签名 respondsToSelector 探测）
    SEL cfg2 = NSSelectorFromString(@"configPresentationCustomWithViewController:resetPresentedViewFrame:");
    SEL cfg1 = NSSelectorFromString(@"configPresentationCustomWithViewController:");
    if ([picker respondsToSelector:cfg2]) {
        ((void (*)(id, SEL, id, BOOL))objc_msgSend)(picker, cfg2, top, YES);
    } else if ([picker respondsToSelector:cfg1]) {
        ((void (*)(id, SEL, id))objc_msgSend)(picker, cfg1, top);
    }

    [top presentViewController:picker animated:YES completion:nil];
    gsLog(@"[GroupPicker] presented");
}

#pragma mark - 完成按钮（hook 入口）

- (void)handleOfficialDoneButtonClick {
    if (self.hasReturned) return;
    self.hasReturned = YES;
    gsLog(@"[GroupPicker] done clicked");

    NSArray<NSString *> *result = [self extractSelectedGroupIds];
    gsLog([NSString stringWithFormat:@"[GroupPicker] extracted %lu ids: %@", (unsigned long)result.count, result]);

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
    gsLog([NSString stringWithFormat:@"[GroupPicker] page closed, action=%lld, hasReturned=%d", action, self.hasReturned]);
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
