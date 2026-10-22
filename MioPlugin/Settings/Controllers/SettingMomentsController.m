#import "SettingMomentsController.h"
#import "SettingMomentCommentsController.h"
#import "SettingMomentBlocklistController.h"
#import "SettingMomentTailController.h"
#import "MioMomentsSchedListController.h"
#import "../../Modules/Moments/MomentsConfig.h"
#import "../../Modules/Moments/MomentsScheduler.h"
#import "../../Core/MioAlertHelper.h"

@implementation SettingMomentsController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"朋友圈";
    // 不在此处 wpBuildRows：viewWillAppear 统一 wpReloadUI（评论页返回后刷新条数反显）
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    // 微信引擎表每次重建后再添加行，防止 pop 返回/多次进入时行叠加
    [self wpReloadUI];
}

- (void)buttonClicked:(NSString *)key {
    if ([key isEqualToString:@"editCommentTexts"]) {
        SettingMomentCommentsController *vc = [[SettingMomentCommentsController alloc] init];
        [self.navigationController pushViewController:vc animated:YES];
        return;
    }
    if ([key isEqualToString:@"openSchedTasks"]) {
        MioMomentsSchedListController *vc = [[MioMomentsSchedListController alloc] init];
        [self.navigationController pushViewController:vc animated:YES];
        return;
    }
    if ([key isEqualToString:@"editAutoLikeBlocklist"]) {
        SettingMomentBlocklistController *vc = [[SettingMomentBlocklistController alloc] init];
        [self.navigationController pushViewController:vc animated:YES];
        return;
    }
    if ([key isEqualToString:@"editAutoCmtScope"]) {
        SettingMomentBlocklistController *vc = [[SettingMomentBlocklistController alloc] init];
        vc.pageTitle = @"评论生效范围";
        vc.configKey = @"autoCommentContacts";
        vc.pickerTitle = @"选择评论好友";
        vc.footerText = @"仅对选中的好友发的朋友圈自动评论\n未选择时对全部好友生效\n点击好友可移除";
        [self.navigationController pushViewController:vc animated:YES];
        return;
    }
    if ([key isEqualToString:@"editAutoCmtTexts"]) {
        SettingMomentCommentsController *vc = [[SettingMomentCommentsController alloc] init];
        vc.textsKey = @"autoCommentTexts";
        vc.pageTitle = @"自动评论内容";
        vc.footerText = @"自动评论时从列表随机取用\n列表为空时不评论";
        [self.navigationController pushViewController:vc animated:YES];
        return;
    }
    [super buttonClicked:key];
}

// 入口：朋友圈小尾巴二级页
- (void)onMomentTailTap {
    SettingMomentTailController *vc = [[SettingMomentTailController alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}

- (NSString *)tailEntrySubtitle {
    MomentsConfig *config = [MomentsConfig shared];
    if (!config.tailEnabled) return @"未开启";
    NSString *appId = config.tailAppId ?: @"";
    return (appId.length > 0) ? [NSString stringWithFormat:@"已开启 · %@", [config tailDisplayName]] : @"已开启";
}

- (NSString *)schedCountHint {
    NSUInteger n = [[MomentsScheduler shared] allTasks].count;
    return n > 0 ? [NSString stringWithFormat:@"%lu 个任务", (unsigned long)n] : @"点击查看";
}

// 便捷朋友圈开启后弹使用提示（页级开关钩子）
- (void)wpAfterSwitchChanged:(NSString *)key on:(BOOL)on {
    if (on && [key isEqualToString:@"convenientMomentsEnabled"]) {
        [MioAlertHelper showTipAlert:@"聊天页半屏浏览朋友圈\n输入框输入pyq可快速开启"];
    }
}

- (NSString *)commentCountHint {
    MomentsConfig *config = [MomentsConfig shared];
    NSUInteger n = config.fakeCommentTexts.count;
    return n > 0 ? [NSString stringWithFormat:@"已设置 %lu 条", (unsigned long)n] : @"点击编辑";
}

- (NSString *)blocklistCountHint {
    NSUInteger n = [MomentsConfig shared].autoLikeBlocklist.count;
    return n > 0 ? [NSString stringWithFormat:@"已添加 %lu 人", (unsigned long)n] : @"点击添加";
}

- (NSString *)cmtScopeCountHint {
    NSUInteger n = [MomentsConfig shared].autoCommentContacts.count;
    return n > 0 ? [NSString stringWithFormat:@"已选 %lu 人", (unsigned long)n] : @"全部好友";
}

- (NSString *)cmtTextCountHint {
    NSUInteger n = [MomentsConfig shared].autoCommentTexts.count;
    return n > 0 ? [NSString stringWithFormat:@"已设置 %lu 条", (unsigned long)n] : @"点击编辑（空则不评论）";
}

- (void)wpBuildRows {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    MomentsConfig *config = [MomentsConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    y = [self addSectionHeader:@"朋友圈功能" y:y width:w];
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addSwitchRowInGroup:group title:@"便捷朋友圈" desc:nil key:@"convenientMomentsEnabled" isOn:config.convenientMomentsEnabled cy:cy width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addSwitchRowInGroup:group title:@"高清朋友圈" desc:nil key:@"hdMomentsEnabled" isOn:config.hdMomentsEnabled cy:cy width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];

    // 子开关：朋友圈伪集赞（开=展开子配置，关=收起；手风琴，总开关唯一入口）
    cy = [self addMasterSwitchRowInGroup:group
                                   title:@"朋友圈伪集赞"
                                     key:@"fakeLikeEnabled"
                                    isOn:config.fakeLikeEnabled
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"设置点赞数量" key:@"fakeLikeCount" value:[NSString stringWithFormat:@"%ld", (long)config.fakeLikeCount] hint:@"10" valueType:InputValueTypeNumber alertTitle:@"设置点赞数量" alertMessage:@"请输入数量(0-10000)" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"设置评论数量" key:@"fakeCommentCount" value:[NSString stringWithFormat:@"%ld", (long)config.fakeCommentCount] hint:@"3" valueType:InputValueTypeNumber alertTitle:@"设置评论数量" alertMessage:@"请输入数量(0-300)" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addButtonRowInGroup:expand title:@"编辑评论文本" hint:[self commentCountHint] key:@"editCommentTexts" cy:*ecy width:w];
    } cy:cy width:w];

    // 子开关：朋友圈自动点赞（开=展开子配置，关=收起；手风琴，总开关唯一入口）
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addMasterSwitchRowInGroup:group
                                   title:@"朋友圈自动点赞"
                                     key:@"autoLikeEnabled"
                                    isOn:config.autoLikeEnabled
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"操作间隔" key:@"autoLikeInterval" value:[NSString stringWithFormat:@"%ld", (long)config.autoLikeInterval] hint:@"5" valueType:InputValueTypeNumber alertTitle:@"操作间隔" alertMessage:@"自动点赞间隔秒数(3-300)" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"单轮上限" key:@"autoLikeMaxPerSession" value:[NSString stringWithFormat:@"%ld", (long)config.autoLikeMaxPerSession] hint:@"20" valueType:InputValueTypeNumber alertTitle:@"单轮上限" alertMessage:@"连续点赞达到该数量后暂停60秒再继续(2-500)" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"刷新间隔" key:@"autoLikeRefreshInterval" value:[NSString stringWithFormat:@"%ld", (long)config.autoLikeRefreshInterval] hint:@"60" valueType:InputValueTypeNumber alertTitle:@"刷新间隔" alertMessage:@"不在朋友圈页面时，隔多少秒刷新一次朋友圈" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addButtonRowInGroup:expand title:@"点赞黑名单" hint:[self blocklistCountHint] key:@"editAutoLikeBlocklist" cy:*ecy width:w];
    } cy:cy width:w];

    // 子开关：朋友圈自动评论（开=展开子配置，关=收起；手风琴，总开关唯一入口）
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addMasterSwitchRowInGroup:group
                                   title:@"朋友圈自动评论"
                                     key:@"autoCommentEnabled"
                                    isOn:config.autoCommentEnabled
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addButtonRowInGroup:expand title:@"生效范围" hint:[self cmtScopeCountHint] key:@"editAutoCmtScope" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"操作间隔" key:@"autoCommentInterval" value:[NSString stringWithFormat:@"%ld", (long)config.autoCommentInterval] hint:@"10" valueType:InputValueTypeNumber alertTitle:@"操作间隔" alertMessage:@"自动评论间隔秒数(3-300)" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addButtonRowInGroup:expand title:@"评论内容" hint:[self cmtTextCountHint] key:@"editAutoCmtTexts" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"刷新间隔" key:@"autoCommentRefreshInterval" value:[NSString stringWithFormat:@"%ld", (long)config.autoCommentRefreshInterval] hint:@"180" valueType:InputValueTypeNumber alertTitle:@"刷新间隔" alertMessage:@"不在朋友圈页面时，隔多少秒刷新一次朋友圈(评论)" cy:*ecy width:w];
    } cy:cy width:w];

    // 子开关：朋友圈详细时间（开=时间行显示绝对时间替代"1小时前"类相对时间）
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addMasterSwitchRowInGroup:group
                                   title:@"朋友圈详细时间"
                                     key:@"detailedTimeEnabled"
                                    isOn:config.detailedTimeEnabled
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"时间格式" key:@"detailedTimeFormat" value:(config.detailedTimeFormat ?: @"yyyy-MM-dd HH:mm:ss (RT)") hint:@"yyyy-MM-dd HH:mm:ss (RT)" valueType:InputValueTypeText alertTitle:@"时间格式" alertMessage:@"NSDateFormatter 格式串\nyyyy=年 MM=月 dd=日\nHH=时 mm=分 ss=秒\n可插入 (RT) 显示相对时间\n渲染为带括号形式 (N小时前)\n例: yyyy-MM-dd HH:mm:ss (RT)\n留空使用默认格式" cy:*ecy width:w];
    } cy:cy width:w];

    // 子开关：朋友圈定时发送（开=展开子配置「定时任务」，关=收起；手风琴，总开关唯一入口）
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addMasterSwitchRowInGroup:group
                                   title:@"朋友圈定时发送"
                                     key:@"schedEnabled"
                                    isOn:config.schedEnabled
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addButtonRowInGroup:expand title:@"定时任务" hint:[self schedCountHint] key:@"openSchedTasks" cy:*ecy width:w];
    } cy:cy width:w];

    // 入口：朋友圈小尾巴（二级页：总开关 / 默认尾巴 / 预设列表）
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addNavRowInGroup:group
                          title:@"朋友圈小尾巴"
                       subtitle:[self tailEntrySubtitle]
                            tag:0
                         action:@selector(onMomentTailTap)
                             cy:cy
                          width:w];

    y = [self finishGroup:group atY:y height:cy];

    [self addSectionFooter:@"伪集赞: 自定义朋友圈收到的点赞与评论数量\n评论文本按设置的数量随机取用\n自动点赞: 广告帖与黑名单好友不发赞\n自动评论: 广告帖与自己的帖子不评论\n详细时间: 时间行显示绝对时间\n定时发送: 发帖页选时间后照常发表\n即转为定时任务，到点自动发出\n小尾巴: 发朋友圈携带自定义来源\n双列朋友圈: 朋友圈页右上角「双列」\n切换瀑布流视图，「原生」切回\n设置后需重进朋友圈生效" y:y width:w];
}

#pragma mark - 搜索自声明（首页搜索汇总遍历，见 SettingCategoryController.h）

+ (NSString *)wpSearchPageTitle {
    return @"朋友圈";
}

+ (NSArray<NSDictionary *> *)wpSearchItems {
    return @[
        @{ @"title": @"便捷朋友圈", @"kw": @"朋友圈 便捷 半屏 pyq" },
        @{ @"title": @"高清朋友圈", @"kw": @"朋友圈 高清 清晰" },
        @{ @"title": @"朋友圈伪集赞", @"kw": @"伪集赞 点赞 评论 朋友圈 数量 文本" },
        @{ @"title": @"朋友圈自动点赞", @"kw": @"朋友圈 自动 点赞 like" },
        @{ @"title": @"设置点赞数量", @"kw": @"点赞 数量 设置 like" },
        @{ @"title": @"设置评论数量", @"kw": @"评论 数量 设置 comment" },
        @{ @"title": @"编辑评论文本", @"kw": @"评论 文本 编辑 comment" },
        @{ @"title": @"朋友圈自动评论", @"kw": @"朋友圈 自动 评论 comment" },
        @{ @"title": @"生效范围", @"kw": @"评论 范围 好友 scope" },
        @{ @"title": @"操作间隔", @"kw": @"自动点赞 自动评论 间隔 秒 interval" },
        @{ @"title": @"单轮上限", @"kw": @"点赞 上限 单轮 暂停" },
        @{ @"title": @"刷新间隔", @"kw": @"自动点赞 自动评论 刷新 refresh" },
        @{ @"title": @"点赞黑名单", @"kw": @"点赞 黑名单 好友 blocklist" },
        @{ @"title": @"评论内容", @"kw": @"评论 内容 文本 comment" },
        @{ @"title": @"朋友圈详细时间", @"kw": @"朋友圈 时间 详细 绝对 detailed" },
        @{ @"title": @"时间格式", @"kw": @"时间 格式 format" },
        @{ @"title": @"朋友圈定时发送", @"kw": @"朋友圈 定时 发送 schedule" },
        @{ @"title": @"定时任务", @"kw": @"定时 任务 定时发送 schedule" },
        @{ @"title": @"朋友圈小尾巴", @"kw": @"朋友圈 小尾巴 尾巴 来源 tail" },
    ];
}

@end
