//
//  SettingMsgMergeRideController.m
//  MioPlugin
//
//  头像骑气泡子页（XOS 反编译一比一配置项）：
//  主开关手风琴（mmAvatarRide）+ 钉顶偏置（mmAvatarRideDepth，XOS ReverseAvatarDownOffset）
//  + 对方/我方消息偏移（mmMessageOffsetOther/Self，XOS MessageOffsetOther/Self）。
//  渲染端 MsgMergeHook applyRideY/applyOwnLayout 每轮布局读新值，改动即时生效，无需重启微信。
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

    // ──── 卡片1：骑气泡（手风琴，配置项按 XOS 反编译同名键） ────
    y = [self addSectionHeader:@"骑气泡" y:y width:w];
    UIView *g1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = [self addMasterSwitchRowInGroup:g1
                                          title:@"头像骑气泡"
                                            key:@"mmAvatarRide"
                                           isOn:config.mmAvatarRide
                                     subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addInputRowInGroup:expand
                                  title:@"钉顶偏置 (pt)"
                                    key:@"mmAvatarRideDepth"
                                  value:[NSString stringWithFormat:@"%.0f", config.mmAvatarRideDepth]
                                   hint:@"0"
                              valueType:InputValueTypeNumber
                            alertTitle:@"钉顶偏置"
                          alertMessage:@"头像钉顶目标 = 冒出 cell 顶 8pt + 本偏置 + GapReduce(群+10/私−10) −13(仅群)，正=下移，负=上浮，单位 pt (±100)"
                                       cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand
                                  title:@"对方消息偏移 (pt)"
                                    key:@"mmMessageOffsetOther"
                                  value:[NSString stringWithFormat:@"%.0f", config.mmMessageOffsetOther]
                                   hint:@"0"
                              valueType:InputValueTypeNumber
                            alertTitle:@"对方消息偏移"
                          alertMessage:@"对方（左缘）行气泡向头像列的水平钻入量，0=气泡保持原位，正=向头像方向，单位 pt"
                                       cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand
                                  title:@"我方消息偏移 (pt)"
                                    key:@"mmMessageOffsetSelf"
                                  value:[NSString stringWithFormat:@"%.0f", config.mmMessageOffsetSelf]
                                   hint:@"0"
                              valueType:InputValueTypeNumber
                            alertTitle:@"我方消息偏移"
                          alertMessage:@"我方（右缘）行气泡向头像列的水平钻入量，0=气泡保持原位，正=向头像方向，单位 pt"
                                       cy:*ecy width:w];
        *ecy = [self addHintRowInGroup:expand
                                  text:@"仅对头像可见的行（组首/独立行，对方侧）生效；默认头像冒出 cell 顶（群 11pt/私 18pt）、气泡保持原生列位，均为 XOS 同款数值"
                                    cy:*ecy width:w];
    } cy:0 width:w];
    y = [self finishGroup:g1 atY:y height:cy];

    y = [self addSectionFooter:@"开启后组首行头像钉到 cell 顶上方骑坐气泡，组内其余行头像隐藏不受影响；GapReduce/行高缩减走默认值（群+10/私−10/缩减0）" y:y width:w];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"MsgMerge", @"[UI] SettingMsgMergeRideController wpBuildRows done");
}

@end
