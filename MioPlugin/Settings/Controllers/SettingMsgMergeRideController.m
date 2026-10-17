//
//  SettingMsgMergeRideController.m
//  MioPlugin
//
//  头像骑气泡子页（XOS AvatarAboveBubble 对应功能）：
//  主开关手风琴（mmAvatarRide）+ 骑入深度输入（mmAvatarRideDepth，正=下沉骑，负=上浮悬浮）。
//  渲染端 MsgMergeHook applyOwnLayout 每轮布局读新值，改动即时生效，无需重启微信。
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
        *ecy = [self addInputRowInGroup:expand
                                  title:@"骑入深度 (pt)"
                                    key:@"mmAvatarRideDepth"
                                  value:[NSString stringWithFormat:@"%.0f", config.mmAvatarRideDepth]
                                   hint:@"8"
                              valueType:InputValueTypeNumber
                            alertTitle:@"骑入深度"
                          alertMessage:@"头像压入气泡顶边的深度，正=下沉（骑坐气泡上沿），负=上浮（悬浮于气泡上方），单位 pt (±40)"
                                       cy:*ecy width:w];
        *ecy = [self addHintRowInGroup:expand
                                  text:@"仅对头像可见的行（组首/独立行）生效；开启后气泡自动向头像列让位钻入（XOS 同款内置几何），头像原位骑坐气泡上沿；骑入深度仅微调头像贴附"
                                    cy:*ecy width:w];
    } cy:0 width:w];
    y = [self finishGroup:g1 atY:y height:cy];

    y = [self addSectionFooter:@"开启后合并组首行（或独立行）头像下沉骑坐在气泡上沿，组内其余行头像隐藏不受影响" y:y width:w];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"MsgMerge", @"[UI] SettingMsgMergeRideController wpBuildRows done");
}

@end
