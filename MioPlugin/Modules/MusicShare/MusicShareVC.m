#import "MusicShareVC.h"
#import "MusicShareConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"
#import "../../Settings/Controllers/MioContactPicker.h"

// 音乐分享配置页：启用开关 + 音源选择（input 行右值预览 + 拦截 wpRunInputFlow 弹 ActionSheet）
// + 指令点歌开关区。搜歌/发卡逻辑在 MusicShareService，指令监听在 MusicShareCommandHook。

static NSString * const kSourcePickerKey = @"musicSourcePicker"; // 音源行的伪 key（只做行标识，不落配置）

@implementation MusicShareVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"音乐分享";
    [self wpReloadUI];
}

- (NSString *)sourceName {
    return ([MusicShareConfig shared].musicSource == 1) ? @"QQ 音乐" : @"网易云";
}

- (void)wpBuildRows {
    CGFloat w = self.view.bounds.size.width;
    MusicShareConfig *cfg = [MusicShareConfig shared];

    // ===== 启用 / 音源 =====
    UIView *srcGroup = [self addTableGroupAtY:0 width:w];
    CGFloat cy = [self addSwitchRowInGroup:srcGroup
                                     title:@"启用音乐分享"
                                      desc:@"关闭后指令点歌与发送全部停用"
                                       key:@"musicShareEnabled"
                                       isOn:cfg.musicShareEnabled cy:0 width:w];
    // 音源行：input 型展示（右值=当前源名），点击在 wpRunInputFlow 拦截弹 ActionSheet
    cy = [self addInputRowInGroup:srcGroup
                            title:@"音乐源"
                              key:kSourcePickerKey
                            value:[self sourceName]
                             hint:[self sourceName]
                       valueType:InputValueTypeText
                       alertTitle:nil
                     alertMessage:nil
                               cy:cy width:w];
    // QQ 源 Cookie 输入行（网易云不需要；QQ 取直链依赖登录态）
    cy = [self addInputRowInGroup:srcGroup
                            title:@"QQ 音乐 Cookie"
                              key:@"qqMusicCookie"
                            value:cfg.qqMusicCookie
                             hint:cfg.qqMusicCookie.length ? @"已设置" : @"浏览器登录 y.qq.com 后粘贴"
                       valueType:InputValueTypeText
                       alertTitle:@"QQ 音乐 Cookie"
                     alertMessage:@"电脑浏览器登录 y.qq.com，F12 复制请求头里的 Cookie 全文粘贴到此处"
                               cy:cy width:w];
    cy = [self addSectionFooter:@"网易云使用自建接口\nQQ 音乐本地取直链（搜索免签，直链需 Cookie）"
                              y:cy width:w];
    [self finishGroup:srcGroup atY:0 height:cy];

    // ===== 点歌设置 =====
    UIView *cmdGroup = [self addTableGroupAtY:0 width:w];
    // 群聊点歌手风琴：开启后展开群聊白名单（空=所有群生效）
    CGFloat cy2 = [self addMasterSwitchRowInGroup:cmdGroup
                                            title:@"启用群聊点歌功能"
                                              key:@"replyInGroup"
                                             isOn:cfg.replyInGroup
                                       subBuilder:^(UIView *expand, CGFloat *ecy) {
        NSString *hint = cfg.songGroupWhitelist.count > 0
            ? [NSString stringWithFormat:@"已选择 %lu 个群", (unsigned long)cfg.songGroupWhitelist.count]
            : @"点击选择群聊";
        *ecy = [self addButtonRowInGroup:expand title:@"点歌群聊白名单" hint:hint key:@"selectSongGroups" cy:*ecy width:w];
    } cy:0 width:w];
    cy2 = [self addSwitchRowInGroup:cmdGroup
                              title:@"启用私聊点歌功能"
                               desc:nil
                                key:@"replyInPrivate"
                                isOn:cfg.replyInPrivate cy:cy2 width:w];
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
                              title:@"搜不到时回复提示"
                               desc:nil
                                key:@"failNotice"
                                isOn:cfg.failNotice cy:cy2 width:w];
    cy2 = [self addSectionFooter:@"每次取搜索第一个结果发送；同一会话 3 秒冷却\n仅白名单内的群聊可点歌" y:cy2 width:w];
    [self finishGroup:cmdGroup atY:0 height:cy2];
}

#pragma mark - 群聊选择器（点歌群聊白名单）

- (void)buttonClicked:(NSString *)key {
    if ([key isEqualToString:@"selectSongGroups"]) {
        MusicShareConfig *cfg = [MusicShareConfig shared];
        [MioContactPicker presentPickerWithMode:MioContactPickerModeGroups
                                          title:@"选择可点歌的群聊"
                                    preselected:cfg.songGroupWhitelist
                                       delegate:self
                                           from:self];
        return;
    }
    [super buttonClicked:key];
}

- (void)pickerDidFinish:(NSArray<NSString *> *)groupIds {
    MusicShareConfig *cfg = [MusicShareConfig shared];
    cfg.songGroupWhitelist = groupIds;
    [ConfigManager saveAll];
    [self wpReloadUI];
}

#pragma mark - 输入行拦截：音源行弹 ActionSheet，其余走默认输入弹窗

- (void)wpRunInputFlow:(NSDictionary *)row {
    if ([row[@"key"] isEqualToString:kSourcePickerKey]) {
        [self presentSourcePicker];
        return;
    }
    [super wpRunInputFlow:row];
}

- (void)presentSourcePicker {
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
