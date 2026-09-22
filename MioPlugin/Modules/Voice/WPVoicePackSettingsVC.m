#import "WPVoicePackSettingsVC.h"
#import "VoiceConfig.h"
#import "VoicePackStore.h"
#import "WPVoicePackManagerVC.h"
#import "../../Core/LogManager.h"
#import "../../Core/MioRestartHelper.h"

@implementation WPVoicePackSettingsVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"语音包";
    self.categoryName = @"语音包";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;
    VoiceConfig *cfg = [VoiceConfig shared];

    // ── 语音包功能（手风琴：主开关「启用语音包功能」控制子项展开/收起） ──
    y = [self addSectionHeader:@"语音包功能" y:y width:w];
    UITableView *packGroup = [self addTableGroupAtY:y width:w];
    CGFloat pcy = 0;
    pcy = [self addMasterSwitchRowInGroup:packGroup
                                    title:@"启用语音包功能"
                                      key:@"voicePackEnabled"
                                     isOn:cfg.voicePackEnabled
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        VoiceConfig *c = [VoiceConfig shared];
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"启用连续发送方式"
                                        key:@"voicePackContinuousSendEnabled"
                                       isOn:c.voicePackContinuousSendEnabled
                                         cy:*ecy width:w];
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"长按加号打开语音包"
                                        key:@"voicePackPlusLongPressEnabled"
                                       isOn:c.voicePackPlusLongPressEnabled
                                         cy:*ecy width:w];
        *ecy = [self addNavRowInGroup:expand
                                title:@"语音包管理"
                             subtitle:@"浏览 / 导入 / 收藏 / 重命名 / 删除"
                                  tag:1  // 基类点击分发要求 tag != 0 才执行 action
                               action:@selector(openManager)
                                   cy:*ecy
                                width:w];
    } cy:pcy width:w];
    y = [self finishGroup:packGroup atY:y height:pcy];

    y = [self addSectionFooter:@"语音包目录：Documents/Mio助手/语音包\n导入 mp3/m4a/wav 等常见格式可直接预览，伪装语音发送以实际兼容性为准。"
                             y:y + 4
                          width:w];
    y += 8;

    // ── 语音功能（普通分组，非手风琴） ──
    y = [self addSectionHeader:@"语音功能" y:y width:w];
    UITableView *voiceGroup = [self addTableGroupAtY:y width:w];
    CGFloat vcy = 0;
    vcy = [self addSwitchRowInGroup:voiceGroup
                              title:@"启用语音转发"
                               desc:nil
                                key:@"voiceForwardEnabled"
                               isOn:cfg.voiceForwardEnabled
                                 cy:vcy
                              width:w];
    vcy = [self addInputRowInGroup:voiceGroup
                             title:@"自定义语音秒数"
                               key:@"voiceFakeDuration"
                             value:cfg.voiceFakeDuration > 0
                                       ? [NSString stringWithFormat:@"%ld", (long)cfg.voiceFakeDuration]
                                       : nil
                              hint:@"0"
                         valueType:InputValueTypeNumber
                        alertTitle:@"自定义语音秒数"
                      alertMessage:@"只修改自己发出的语音的显示秒数，不改变真实的语音时长。\n请输入0-60秒，0表示未启用"
                                cy:vcy
                              width:w];
    vcy = [self addSwitchRowInGroup:voiceGroup
                              title:@"语音自动转文字"
                               desc:nil
                                key:@"voiceAutoToTextEnabled"
                               isOn:cfg.voiceAutoToTextEnabled
                                 cy:vcy
                              width:w];
    vcy = [self addSwitchRowInGroup:voiceGroup
                              title:@"语音进度拖动播放"
                               desc:nil
                                key:@"voiceDragProgressEnabled"
                               isOn:cfg.voiceDragProgressEnabled
                                 cy:vcy
                              width:w];
    vcy = [self addSwitchRowInGroup:voiceGroup
                              title:@"语音自动倍数播放"
                               desc:nil
                                key:@"voiceAutoSpeedEnabled"
                               isOn:cfg.voiceAutoSpeedEnabled
                                 cy:vcy
                              width:w];
    vcy = [self addSwitchRowInGroup:voiceGroup
                              title:@"语音自动背景播放"
                               desc:@"开启后：点击语音气泡转入悬浮窗后台播放；正在播放时点击则暂停"
                                key:@"voiceBackgroundPlayEnabled"
                               isOn:cfg.voiceBackgroundPlayEnabled
                                 cy:vcy
                              width:w];
    vcy = [self addSwitchRowInGroup:voiceGroup
                              title:@"通话时播放语音消息"
                               desc:nil
                                key:@"voiceCallPlayEnabled"
                               isOn:cfg.voiceCallPlayEnabled
                                 cy:vcy
                              width:w];
    y = [self finishGroup:voiceGroup atY:y height:vcy];

    // 手风琴展开/收起后行数变化，兜底滚动区高度
    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

#pragma mark - Switch Events

// 微信引擎开关落地钩子（替代旧 UISwitch switchChanged: 入口）
- (void)wpAfterSwitchChanged:(NSString *)key on:(BOOL)on {
    // 自动倍数播放：开启时提示重启微信（复用 MioRestartHelper）
    if ([key isEqualToString:@"voiceAutoSpeedEnabled"] && on) {
        [MioRestartHelper showRestartAlertFromVC:self];
    }
}

- (void)openManager {
    [VoicePackStore ensureRootDirectoryExists];
    WPVoicePackManagerVC *vc = [[WPVoicePackManagerVC alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
    WPLog(@"Voice", @"[Nav] push WPVoicePackManagerVC");
}

@end
