//
//  SettingMsgMergeController.m
//  MioPlugin
//
//  消息合并二级设置页（对齐 BubbleBox 设置页选项构成，截图对照）
//  选项：启用消息合并 / 仅对群聊生效 / 消息合并模式 /
//        消息合并间距 / 合并时间窗
//  行构建沿用 SettingCategoryController 微信引擎范式（key 直接绑定 ConfigManager）
//

#import "SettingMsgMergeController.h"
#import "../../Modules/MsgMerge/MsgMergeConfig.h"
#import "SettingMsgMergeSeparatorController.h"
#import "../Common/SettingCategoryController.h"
#import "../../Core/LogManager.h"

@implementation SettingMsgMergeController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"消息合并";
    [self wpReloadUI];
}

- (void)wpBuildRows {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    MsgMergeConfig *config = [MsgMergeConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ──── 卡片1：总开关 ────
    y = [self addSectionHeader:@"消息合并" y:y width:w];
    UIView *g1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    cy = [self addSwitchRowInGroup:g1
                             title:@"启用消息合并"
                              desc:nil
                               key:@"mmEnable"
                              isOn:config.mmEnable
                                cy:cy
                             width:w];
    y = [self finishGroup:g1 atY:y height:cy];

    // ──── 卡片2：范围与模式 ────
    y = [self addSectionHeader:@"范围与模式" y:y width:w];
    UIView *g2 = [self addTableGroupAtY:y width:w];
    cy = 0;
    cy = [self addSwitchRowInGroup:g2
                             title:@"仅对群聊生效"
                              desc:nil
                               key:@"mmOnlyRoom"
                              isOn:config.mmOnlyRoom
                                cy:cy
                             width:w];
    cy = [self addSegmentRowInGroup:g2
                              title:@"消息合并模式"
                                key:@"mmMode"
                              names:@[@"全部合并", @"手动配置"]
                              index:config.mmMode
                                 cy:cy
                              width:w];
    if (config.mmMode == 1) {
        // 手动配置：显示按类型细分入口（复刻 BubbleBox「配置合并模式 >」导航行）
        cy = [self addNavRowInGroup:g2
                              title:@"配置合并模式"
                           subtitle:@"按消息类型设置打断规则"
                                tag:201
                             action:@selector(navigateToSeparator:)
                                 cy:cy
                              width:w];
    }
    y = [self finishGroup:g2 atY:y height:cy];

    // ──── 卡片3：外观 ────
    y = [self addSectionHeader:@"外观" y:y width:w];
    UIView *g3 = [self addTableGroupAtY:y width:w];
    cy = 0;
    cy = [self addSegmentRowInGroup:g3
                              title:@"消息合并间距"
                                key:@"mmSpacingMode"
                              names:@[@"跟随气泡", @"手动调整"]
                              index:config.mmSpacingMode
                                 cy:cy
                              width:w];
    cy = [self addInputRowInGroup:g3
                            title:@"合并间距 (pt)"
                              key:@"mmSpacing"
                            value:[NSString stringWithFormat:@"%.1f", config.mmSpacing]
                             hint:@"0-12"
                        valueType:InputValueTypeNumber
                       alertTitle:@"合并间距"
                     alertMessage:@"组内相邻气泡的收拢间距，组内逐条递进叠加，单位 pt (0-12)"
                               cy:cy
                             width:w];
    cy = [self addInputRowInGroup:g3
                            title:@"头像偏移 (pt)"
                              key:@"mmAvatarOffset"
                            value:[NSString stringWithFormat:@"%.0f", config.mmAvatarOffset]
                             hint:@"±60"
                        valueType:InputValueTypeNumber
                       alertTitle:@"头像偏移"
                     alertMessage:@"布局接管下的头像横向偏移，正=向屏幕边缘，负=向气泡侧，收发镜像，单位 pt (±60)"
                               cy:cy
                             width:w];
    cy = [self addInputRowInGroup:g3
                            title:@"整列偏移 (pt)"
                              key:@"mmWholeOffset"
                            value:[NSString stringWithFormat:@"%.0f", config.mmWholeOffset]
                             hint:@"±20"
                        valueType:InputValueTypeNumber
                       alertTitle:@"整列偏移"
                     alertMessage:@"头像+气泡+昵称整列横向平移，正=向屏幕边缘，负=向中央，收发镜像，单位 pt (±20)"
                               cy:cy
                             width:w];
    y = [self finishGroup:g3 atY:y height:cy];

    // ──── 页脚提示（对齐 BubbleBox 截图页脚） ────
    y = [self addSectionFooter:@"启用消息合并需要关闭其它插件的合并功能" y:y width:w];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"MsgMerge", @"[UI] SettingMsgMergeController wpBuildRows done");
}

#pragma mark - 模式切换联动

/// 基类 segment ValueChanged 直写配置后不刷新页面；切合并模式时行构成变化
///（手动配置 ↔ 追加「配置合并模式」入口行），此处重载整页
- (void)wpSegmentChanged:(UISegmentedControl *)seg {
    [super wpSegmentChanged:seg];
    NSString *key = objc_getAssociatedObject(seg, "wpSegKey");
    if ([key isEqualToString:@"mmMode"]) {
        WPLog(@"MsgMerge", @"[UI] 合并模式切换 → %ld，重建页面", (long)seg.selectedSegmentIndex);
        [self wpReloadUI];
    }
}

- (void)navigateToSeparator:(UIButton *)sender {
    [self.navigationController pushViewController:[[SettingMsgMergeSeparatorController alloc] init] animated:YES];
}

@end
