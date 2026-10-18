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
                                  text:@"XOS 同款骑坐：头像可见行（组首/独立行）x 向屏幕边缘 3pt、y 下沉 2pt；气泡向头像列钻入 5pt（仅对方侧，我方不动）——头像与气泡咬合在气泡左上角，非悬空冒顶"
                                    cy:*ecy width:w];
    } cy:0 width:w];
    y = [self finishGroup:g1 atY:y height:cy];

    y = [self addSectionFooter:@"开启后组内首行头像与气泡咬合骑坐（XOS 实测常量，无需调参）；组内其余行头像隐藏不受影响" y:y width:w];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"MsgMerge", @"[UI] SettingMsgMergeRideController wpBuildRows done");
}

@end
