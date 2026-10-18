//
//  SettingMsgMergeRideController.m
//  MioPlugin
//
//  头像骑气泡子页（XOS 1.5.9 骑坐变换，com.tencent.wx 探针实测终态固化）：
//  主开关手风琴（mmAvatarRide）。变换常量已实测固化（头像可见行 x±3/y+2、
//  气泡对方侧 x−5/我方 0），无用户偏移配置项。渲染端 applyOwnLayout 每轮布局
//  读开关状态，改动即时生效，无需重启微信。
//

#import "SettingMsgMergeRideController.h"
#import "../../Modules/MsgMerge/MsgMergeConfig.h"
#import "../../Core/LogManager.h"

@implementation SettingMsgMergeRideController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"头像骑气泡";
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

    // ──── 卡片1：骑气泡（手风琴） ────
    y = [self addSectionHeader:@"骑气泡" y:y width:w];
    UIView *g1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = [self addMasterSwitchRowInGroup:g1
                                          title:@"头像骑气泡"
                                            key:@"mmAvatarRide"
                                           isOn:config.mmAvatarRide
                                     subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addHintRowInGroup:expand
                                  text:@"泡整体钻到头像正下方靠边，泡视觉缘=头像缘；泡顶=头像顶+57，行高自动补足"
                                    cy:*ecy width:w];
    } cy:0 width:w];
    y = [self finishGroup:g1 atY:y height:cy];

    // ──── 卡片2：钻入微调与调试 ────
    y = [self addSectionHeader:@"钻入微调" y:y width:w];
    UIView *g2 = [self addTableGroupAtY:y width:w];
    cy = 0;
    cy = [self addInputRowInGroup:g2
                            title:@"钻入量-对方 (pt)"
                              key:@"mmRideDiveRecv"
                            value:[NSString stringWithFormat:@"%.1f", config.mmRideDiveRecv]
                             hint:@"默认 46"
                        valueType:InputValueTypeNumber
                       alertTitle:@"钻入量-对方"
                     alertMessage:@"对方侧气泡容器向屏幕边缘的钻入量，泡图素材自带透明边距，视觉对齐需自行微调"
                               cy:cy
                             width:w];
    cy = [self addInputRowInGroup:g2
                            title:@"钻入量-我方 (pt)"
                              key:@"mmRideDiveSend"
                            value:[NSString stringWithFormat:@"%.1f", config.mmRideDiveSend]
                             hint:@"默认 46"
                        valueType:InputValueTypeNumber
                       alertTitle:@"钻入量-我方"
                     alertMessage:@"我方侧气泡容器横向偏移，正=向屏幕边缘，0=原生位（我方原生已贴边）"
                               cy:cy
                             width:w];
    cy = [self addSwitchRowInGroup:g2
                             title:@"钻入调试悬浮窗"
                               desc:@"聊天页显示可拖动悬浮条，步进 0.5pt 实时调钻入量"
                                key:@"mmRideDebug"
                              isOn:config.mmRideDebug
                                cy:cy
                             width:w];
    y = [self finishGroup:g2 atY:y height:cy];

    y = [self addSectionFooter:@"调试悬浮窗需骑行开启时生效；调好的数值填入上方钻入量后关闭悬浮窗即可" y:y width:w];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"MsgMerge", @"[UI] SettingMsgMergeRideController wpBuildRows done");
}

@end
