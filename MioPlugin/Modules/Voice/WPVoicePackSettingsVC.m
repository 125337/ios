#import "WPVoicePackSettingsVC.h"
#import "VoiceConfig.h"
#import "VoicePackStore.h"
#import "WPVoicePackManagerVC.h"
#import "../../Core/LogManager.h"

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

    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;
    VoiceConfig *cfg = [VoiceConfig shared];

    // ── 语音包功能 ──
    y = [self addSectionHeader:@"语音包功能" y:y width:w];
    UITableView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    cy = [self addSwitchRowInGroup:group
                             title:@"启用语音包功能"
                              desc:@"把本地音频伪装成微信语音消息发送"
                               key:@"voicePackEnabled"
                              isOn:cfg.voicePackEnabled
                                cy:cy
                             width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addSwitchRowInGroup:group
                             title:@"启用连续发送方式"
                              desc:@"发送后不关闭选择页，可连续发送多条"
                               key:@"voicePackContinuousSendEnabled"
                              isOn:cfg.voicePackContinuousSendEnabled
                                cy:cy
                             width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addSwitchRowInGroup:group
                             title:@"长按加号打开语音包"
                              desc:@"长按聊天输入栏右下角「+」打开语音包选择页，短按原功能不变"
                               key:@"voicePackPlusLongPressEnabled"
                              isOn:cfg.voicePackPlusLongPressEnabled
                                cy:cy
                             width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addNavRowInGroup:group
                          title:@"语音包管理"
                       subtitle:@"浏览 / 导入 / 收藏 / 重命名 / 删除"
                            tag:1  // 基类点击分发要求 tag != 0 才执行 action
                         action:@selector(openManager)
                             cy:cy
                          width:w];
    y = [self finishGroup:group atY:y height:0];

    [self addSectionFooter:@"语音包目录：Documents/Mio助手/语音包\n导入 mp3/m4a/wav 等常见格式可直接预览，伪装语音发送以实际兼容性为准。"
                         y:y + 4
                      width:w];
}

- (void)openManager {
    [VoicePackStore ensureRootDirectoryExists];
    WPVoicePackManagerVC *vc = [[WPVoicePackManagerVC alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
    WPLog(@"Voice", @"[Nav] push WPVoicePackManagerVC");
}

@end
