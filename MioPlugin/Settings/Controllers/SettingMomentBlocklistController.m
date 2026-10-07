#import "SettingMomentBlocklistController.h"
#import "../../Modules/Moments/MomentsConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/LogManager.h"
#import "../../Core/MioAlertHelper.h"
#import <UIKit/UIKit.h>
#import "MioContactPicker.h"

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

// 选人页：只选人模式（MultiSelectContactsViewController，"发起群聊"那套，原生只列好友）
// 已选名单回显勾选；回调为全量勾选结果（取消勾选=移除）
- (void)presentContactPicker {
    WPLog(@"Moments", @"[Blocklist] presenting contact picker (contacts-only, preselect %lu)", (unsigned long)[self currentList].count);
    [MioContactPicker presentPickerWithMode:MioContactPickerModeContacts
                                      title:(self.pickerTitle ?: @"添加好友")
                                preselected:[self currentList]
                                   delegate:self
                                       from:self];
}

#pragma mark - MioContactPickerDelegate

- (void)pickerDidFinish:(NSArray<NSString *> *)userNames {
    [self handlePickedContacts:userNames];
}

// 选中结果处理：选人页已回显当前名单，回调即全量勾选结果（取消勾选=移除），校验后直接保存
- (void)handlePickedContacts:(NSArray<NSString *> *)userNames {
    NSMutableArray *result = [NSMutableArray array];
    for (NSString *wxid in userNames) {
        if (![wxid isKindOfClass:[NSString class]]) continue;
        NSString *trim = [wxid stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (trim.length == 0 || [result containsObject:trim]) continue;
        [result addObject:trim];
    }
    [self saveList:result];
    WPLog(@"Moments", @"[Blocklist] picked %lu, kept %lu (%@)",
          (unsigned long)userNames.count, (unsigned long)result.count, [self listKey]);
    [self reloadTable];
}

@end
