#import "SettingMomentBlocklistController.h"
#import "../../Modules/Moments/MomentsConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/LogManager.h"
#import "../../Core/MioAlertHelper.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>
#import <substrate.h>

@implementation SettingMomentBlocklistController

- (NSString *)listKey {
    return self.configKey ?: @"autoLikeBlocklist";
}

- (NSArray<NSString *> *)currentList {
    id v = [[MomentsConfig shared] valueForKey:[self listKey]];
    return [v isKindOfClass:[NSArray class]] ? v : @[];
}

- (void)saveList:(NSArray<NSString *> *)list {
    [[MomentsConfig shared] setValue:list forKey:[self listKey]];
    [ConfigManager saveAll];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = self.pageTitle ?: @"点赞黑名单";
    // 不在此处 buildUI：viewWillAppear 统一重建，避免同表叠行
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    // 微信引擎表每次重建后再添加行，防止 pop 返回/选人页关闭返回时行叠加
    [self wpRebuildWeChatTable];
    [self buildUI];
}

#pragma mark - 行点击分发

- (void)buttonClicked:(NSString *)key {
    if ([key isEqualToString:@"addBlockContact"]) {
        [self presentContactPicker];
        return;
    }
    if ([key hasPrefix:@"block_"]) {
        [self showBlockActions:[key substringFromIndex:6].integerValue];
        return;
    }
    [super buttonClicked:key];
}

#pragma mark - UI

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    NSArray<NSString *> *list = [self currentList];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    y = [self addSectionHeader:[NSString stringWithFormat:@"%@（%lu）", self.title ?: @"名单", (unsigned long)list.count] y:y width:w];
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addButtonRowInGroup:group title:@"添加好友" hint:@"从通讯录选择" key:@"addBlockContact" cy:cy width:w];
    for (NSInteger i = 0; i < (NSInteger)list.count; i++) {
        cy = [self addSeparatorInGroup:group cy:cy width:w];
        NSString *wxid = list[i];
        cy = [self addButtonRowInGroup:group title:WXDisplayNameForWxid(wxid) hint:wxid
                                   key:[NSString stringWithFormat:@"block_%ld", (long)i] cy:cy width:w];
    }
    y = [self finishGroup:group atY:y height:cy];

    [self addSectionFooter:(self.footerText ?: @"点击好友可移除") y:y width:w];
}

#pragma mark - 名单操作

- (void)showBlockActions:(NSInteger)index {
    NSArray<NSString *> *list = [self currentList];
    if (index < 0 || index >= (NSInteger)list.count) return;
    NSString *wxid = list[index];
    [MioAlertHelper showConfirmAlert:[NSString stringWithFormat:@"将 %@ 移出%@？", WXDisplayNameForWxid(wxid), self.title ?: @"名单"]
                        confirmTitle:@"移出"
                          onConfirm:^{
        NSMutableArray *arr = [[self currentList] mutableCopy] ?: [NSMutableArray array];
        if (index < (NSInteger)arr.count) [arr removeObjectAtIndex:index];
        [self saveList:arr];
        [self reloadTable];
    }];
}

- (void)reloadTable {
    [self wpRebuildWeChatTable];
    [self buildUI];
}

#pragma mark - 原生选人页（WCR 2.1.8 主力封装同款，移植 8.0.60）

// WCR presentSessionSelectPickerFromViewController:title:selectedUsernames:completion:（01b2dff0，
// Misc_part13.c L42457-42642，WCR 内 15+ 处调用的主力选人封装）同款：
// KVC 含 m_bMultiSelect=YES + 强制 view 预加载 + beginMultiSelect + MMUINavigationController present。
//
// 8.0.60 移植差异（头文件 L1-391 全量核对）：
// - WCR 旧版以 reportTag==0x5ea0 属性标记自家 picker；8.0.60 无该属性 →
//   以 "completionBlock" 关联对象存在性为标记（WCR 消费端同款 fallback 键，FUN__part32.c L85）
// - WCR 旧版另 hook updatePanelBtn；8.0.60 无该方法 → 只 hook updateMultiSelectRightBtn（头文件 L222）

static void (*orig_SS_onMultiDone)(id, SEL);
static void hooked_SS_onMultiDone(id self, SEL _cmd) {
    void (^cb)(NSArray *) = objc_getAssociatedObject(self, "completionBlock");
    if (!cb) {
        orig_SS_onMultiDone(self, _cmd);
        return;
    }
    // WCR FUN_01805b20（FUN__part32.c L95-221）同款：key=wxid、value=contact 对象或 NSString
    NSMutableArray *picked = [NSMutableArray array];
    id selectView = nil;
    id dic = nil;
    @try { selectView = [self valueForKey:@"m_selectView"]; } @catch (NSException *e) {}
    if ([selectView respondsToSelector:@selector(m_dicMultiSelect)]) {
        dic = ((id (*)(id, SEL))objc_msgSend)(selectView, @selector(m_dicMultiSelect));
    }
    if ([dic isKindOfClass:[NSDictionary class]]) {
        for (id key in dic) {
            id val = [dic objectForKey:key];
            NSString *wxid = nil;
            if ([val isKindOfClass:[NSString class]]) {
                wxid = val;
            } else if ([val respondsToSelector:@selector(m_nsUsrName)]) {
                wxid = ((id (*)(id, SEL))objc_msgSend)(val, @selector(m_nsUsrName));
            } else if (val) {
                @try { wxid = [val valueForKey:@"m_nsUsrName"]; } @catch (NSException *e) {}
            }
            if (![wxid isKindOfClass:[NSString class]] || wxid.length == 0) {
                if ([key isKindOfClass:[NSString class]]) wxid = key;
            }
            if ([wxid isKindOfClass:[NSString class]] && wxid.length > 0) [picked addObject:wxid];
        }
    }
    WPLog(@"Moments", @"[Blocklist] picker onMultiDone: %lu selected", (unsigned long)picked.count);
    cb(picked);
    ((void (*)(id, SEL, BOOL, id))objc_msgSend)(self, @selector(dismissViewControllerAnimated:completion:), YES, nil);
}

// WCR FUN_01806780（FUN__part32.c L301-345）同款：orig 后替换右上按钮为 完成→onMultiDone，
// 防原生按钮走 endMultiSelect 死路（m_delegate=nil 无回调可收）
static void (*orig_SS_updateMultiSelectRightBtn)(id, SEL);
static void hooked_SS_updateMultiSelectRightBtn(id self, SEL _cmd) {
    orig_SS_updateMultiSelectRightBtn(self, _cmd);
    if (!objc_getAssociatedObject(self, "completionBlock")) return;
    UIBarButtonItem *done = [[UIBarButtonItem alloc] initWithTitle:@"完成"
                                                            style:UIBarButtonItemStylePlain
                                                           target:self
                                                           action:@selector(onMultiDone)];
    [((id (*)(id, SEL))objc_msgSend)(self, @selector(navigationItem)) setRightBarButtonItem:done animated:NO];
}

static void installSessionSelectHooks(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class cls = NSClassFromString(@"SessionSelectController");
        if (!cls) return;
        MSHookMessageEx(cls, @selector(onMultiDone), (IMP)hooked_SS_onMultiDone, (IMP *)&orig_SS_onMultiDone);
        if (class_getInstanceMethod(cls, @selector(updateMultiSelectRightBtn))) {
            MSHookMessageEx(cls, @selector(updateMultiSelectRightBtn), (IMP)hooked_SS_updateMultiSelectRightBtn, (IMP *)&orig_SS_updateMultiSelectRightBtn);
        }
        WPLog(@"Moments", @"[Blocklist] SessionSelectController hooks installed");
    });
}

// KVC 值与 WCR Misc_part13.c L42474-42567 逐一对应（reportTag 为旧版属性，8.0.60 无，弃）
- (void)presentContactPicker {
    Class pickerCls = NSClassFromString(@"SessionSelectController");
    if (!pickerCls) {
        WPLog(@"Moments", @"[Blocklist] SessionSelectController not found");
        [MioAlertHelper showTipAlert:@"当前微信版本不支持选人页"];
        return;
    }
    installSessionSelectHooks();

    UIViewController *picker = [[pickerCls alloc] init];
    if (!picker) return;

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
        [picker setValue:(self.pickerTitle ?: @"添加好友") forKey:@"customTitle"];
    } @catch (NSException *e) {
        WPLog(@"Moments", @"[Blocklist] picker KVC error: %@", e);
    }

    __weak typeof(self) welf = self;
    void (^completion)(NSArray *) = ^(NSArray *contacts) {
        [welf handlePickedContacts:contacts];
    };
    objc_setAssociatedObject(picker, "completionBlock", completion, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    // WCR 同款：present 前强制 view 预加载 + 进入多选模式（Misc_part13.c L42594-42604）
    [picker view];
    if ([picker respondsToSelector:@selector(beginMultiSelect)]) {
        ((void (*)(id, SEL))objc_msgSend)(picker, @selector(beginMultiSelect));
    }

    Class navCls = NSClassFromString(@"MMUINavigationController") ?: [UINavigationController class];
    UINavigationController *nav = [[navCls alloc] initWithRootViewController:picker];
    WPLog(@"Moments", @"[Blocklist] presenting contact picker");
    [self presentViewController:nav animated:YES completion:nil];
}

// 选中结果处理（WCR FUN_01c81c48 + wcr_sanitizeContactUsernames 同款语义）：
// 元素 NSString 直取 / contact 对象取 m_nsUsrName；trim、去空、滤 @chatroom；与现名单合并去重
// 微信 performCallback 调用线程未证实，UI/存储操作统一归主线程
- (void)handlePickedContacts:(NSArray *)contacts {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self handlePickedContacts:contacts]; });
        return;
    }
    if (![contacts isKindOfClass:[NSArray class]]) contacts = @[];
    NSMutableArray *merged = [[self currentList] mutableCopy] ?: [NSMutableArray array];
    NSInteger added = 0;
    for (id it in contacts) {
        NSString *wxid = nil;
        if ([it isKindOfClass:[NSString class]]) {
            wxid = (NSString *)it;
        } else if ([it respondsToSelector:@selector(m_nsUsrName)]) {
            wxid = ((NSString *(*)(id, SEL))objc_msgSend)(it, @selector(m_nsUsrName));
        }
        if (![wxid isKindOfClass:[NSString class]]) continue;
        NSString *trim = [wxid stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (trim.length == 0) continue;
        if ([trim hasSuffix:@"@chatroom"]) continue;
        if ([merged containsObject:trim]) continue;
        [merged addObject:trim];
        added++;
    }
    [self saveList:merged];
    WPLog(@"Moments", @"[Blocklist] picked %lu, added %ld, total %lu (%@)",
          (unsigned long)contacts.count, (long)added, (unsigned long)merged.count, [self listKey]);
    [self reloadTable];
}

@end
