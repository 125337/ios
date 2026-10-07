#import "SettingMomentBlocklistController.h"
#import "../../Modules/Moments/MomentsConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/LogManager.h"
#import "../../Core/MioAlertHelper.h"
#import <UIKit/UIKit.h>
#import "MioSessionSelectsController.h"

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

// 选人页：复用 MioSessionSelectsController（微信原生 SessionSelectController 全屏选联系人页，
// WCR 主力封装同款，好友/群聊均可多选；hook 与 KVC 参数统一在封装内维护）
- (void)presentContactPicker {
    if (![MioSessionSelectsController isSupported]) {
        WPLog(@"Moments", @"[Blocklist] SessionSelectController not found");
        [MioAlertHelper showTipAlert:@"当前微信版本不支持选人页"];
        return;
    }
    MioSessionSelectsController *picker =
        [[MioSessionSelectsController alloc] initWithTitle:(self.pickerTitle ?: @"添加好友")
                                              preselectedContacts:nil];   // WCR 同款语义为追加，不回显
    __weak typeof(self) welf = self;
    [picker presentFromViewController:self completion:^(NSArray<NSString *> *userNames) {
        [welf handlePickedContacts:userNames];
    }];
}

// 选中结果处理：与现名单合并去重（追加语义，移除走列表页），滤 @chatroom；回调已在主线程
- (void)handlePickedContacts:(NSArray<NSString *> *)userNames {
    NSMutableArray *merged = [[self currentList] mutableCopy] ?: [NSMutableArray array];
    NSInteger added = 0;
    for (NSString *wxid in userNames) {
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
          (unsigned long)userNames.count, (long)added, (unsigned long)merged.count, [self listKey]);
    [self reloadTable];
}

@end
