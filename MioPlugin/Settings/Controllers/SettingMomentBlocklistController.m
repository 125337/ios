#import "SettingMomentBlocklistController.h"
#import "../../Modules/Moments/MomentsConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/LogManager.h"
#import "../../Core/MioAlertHelper.h"
#import <objc/runtime.h>
#import <objc/message.h>

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

#pragma mark - 原生选人页（WCR 2.1.8 同款）

// WCR wcr_presentHomeSessionContactPickerWithTitle:selectedContacts:completion:（01c8bfc0）同款：
// SessionSelectController + KVC 配置 + completionBlock 关联对象（微信 performCallback 消费），
// MMUINavigationController present。选中结果为 wxid 字符串数组（WCR sanitize 实证）。
- (void)presentContactPicker {
    Class pickerCls = NSClassFromString(@"SessionSelectController");
    if (!pickerCls) {
        WPLog(@"Moments", @"[Blocklist] SessionSelectController not found");
        [MioAlertHelper showTipAlert:@"当前微信版本不支持选人页"];
        return;
    }
    UIViewController *picker = [[pickerCls alloc] init];
    if (!picker) return;

    // WCR 同款 KVC 配置（值均有伪代码实锤；maxSelectionCount=0x5ea0 取大值不设上限）
    @try {
        [picker setValue:@(24224) forKey:@"maxSelectionCount"];
        [picker setValue:nil forKey:@"m_delegate"];
        [picker setValue:@(8) forKey:@"m_commonSearchScene"];
        [picker setValue:@YES forKey:@"useNewSearchBar"];
        [picker setValue:@YES forKey:@"m_bShowMultiSelectRightBtn"];
        [picker setValue:@YES forKey:@"m_bKeepCurViewAfterSelect"];
        [picker setValue:@NO forKey:@"m_onlyChatRoom"];
        [picker setValue:@YES forKey:@"m_bIgnoreChatRoom"];
        [picker setValue:(self.pickerTitle ?: @"添加好友") forKey:@"customTitle"];
    } @catch (NSException *e) {
        WPLog(@"Moments", @"[Blocklist] picker KVC error: %@", e);
    }

    __weak typeof(self) welf = self;
    void (^completion)(NSArray *) = ^(NSArray *contacts) {
        [welf handlePickedContacts:contacts];
    };
    objc_setAssociatedObject(picker, "completionBlock", completion, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

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
