#import "MusicShareVC.h"
#import "MusicShareConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"

// 音乐分享配置页：音源选择（原生 ActionSheet）+ 指令点歌开关区。
// 搜歌/发卡逻辑在 MusicShareService，指令监听在 MusicShareCommandHook。
@implementation MusicShareVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"音乐分享";
    [self wpReloadUI];
}

- (void)wpBuildRows {
    CGFloat w = self.view.bounds.size.width;
    MusicShareConfig *cfg = [MusicShareConfig shared];

    // ===== 音乐源 =====
    UIView *srcGroup = [self addTableGroupAtY:0 width:w];
    CGFloat cy = [self addNavRowInGroup:srcGroup
                                  title:@"音乐源"
                               subtitle:nil
                                    tag:0 action:@selector(onSourceTap:)
                                     cy:0 width:w];
    cy = [self addSectionFooter:@"网易云使用自建接口\nQQ 音乐使用微信官方搜索与发送接口（暂未接入）"
                              y:cy width:w];
    [self finishGroup:srcGroup atY:0 height:cy];

    // ===== 指令点歌 =====
    UIView *cmdGroup = [self addTableGroupAtY:0 width:w];
    CGFloat cy2 = [self addSwitchRowInGroup:cmdGroup
                                      title:@"指令点歌"
                                       desc:@"收到「点歌 歌名」自动发音乐卡片到该会话"
                                        key:@"commandEnabled"
                                        isOn:cfg.commandEnabled cy:0 width:w];
    cy2 = [self addInputRowInGroup:cmdGroup
                             title:@"触发词"
                               key:@"commandKeyword"
                             value:cfg.commandKeyword
                              hint:@"触发词"
                        valueType:InputValueTypeText
                        alertTitle:@"触发词"
                      alertMessage:@"在该会话发送「触发词 歌名」即可点歌"
                                cy:cy2 width:w];
    cy2 = [self addSwitchRowInGroup:cmdGroup
                              title:@"群聊响应"
                               desc:nil
                                key:@"replyInGroup"
                                isOn:cfg.replyInGroup cy:cy2 width:w];
    cy2 = [self addSwitchRowInGroup:cmdGroup
                              title:@"私聊响应"
                               desc:nil
                                key:@"replyInPrivate"
                                isOn:cfg.replyInPrivate cy:cy2 width:w];
    cy2 = [self addSwitchRowInGroup:cmdGroup
                              title:@"响应自己的消息"
                               desc:@"开启后自己发的指令也会点歌"
                                key:@"replyToSelf"
                                isOn:cfg.replyToSelf cy:cy2 width:w];
    cy2 = [self addSwitchRowInGroup:cmdGroup
                              title:@"搜不到时回复提示"
                               desc:nil
                                key:@"failNotice"
                                isOn:cfg.failNotice cy:cy2 width:w];
    cy2 = [self addSectionFooter:@"每次取搜索第一个结果发送；同一会话 3 秒冷却" y:cy2 width:w];
    [self finishGroup:cmdGroup atY:0 height:cy2];
}

#pragma mark - 音源选择（原生 ActionSheet）

- (void)onSourceTap:(UIButton *)sender {
    MusicShareConfig *cfg = [MusicShareConfig shared];
    UIAlertController *sheet = [UIAlertController alertControllerWithTitle:@"请选择音乐源"
                                      message:@"网易云使用自建接口\nQQ 音乐使用微信官方搜索与发送接口"
                               preferredStyle:UIAlertControllerStyleActionSheet];
    void (^pick)(NSInteger) = ^(NSInteger src) {
        if (cfg.musicSource == src) return;
        cfg.musicSource = src;
        [ConfigManager saveAll];  // 统一落盘（模块类未实现 saveArchivedData，直调必崩 unrecognized selector）
        WPLog(@"Music", @"[Source] 切换音源 -> %ld", (long)src);
        [self wpReloadUI];
    };
    [sheet addAction:[UIAlertAction actionWithTitle:(cfg.musicSource == 1 ? @"✓ QQ 音乐" : @"QQ 音乐")
                                              style:UIAlertActionStyleDefault
                                            handler:^(UIAlertAction *a) { pick(1); }]];
    [sheet addAction:[UIAlertAction actionWithTitle:(cfg.musicSource == 0 ? @"✓ 网易云" : @"网易云")
                                              style:UIAlertActionStyleDefault
                                            handler:^(UIAlertAction *a) { pick(0); }]];
    [sheet addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:sheet animated:YES completion:nil];
}

@end
