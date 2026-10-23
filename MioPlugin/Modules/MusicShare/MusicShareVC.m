#import "MusicShareVC.h"
#import "MusicShareConfig.h"
#import "NeteaseMusicService.h"
#import "QQMusicService.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/LogManager.h"
#import "../../Core/ConfigManager.h"
#import "../../Settings/Common/WPWeChatTable.h"

@interface MusicShareVC () <UISearchBarDelegate>
@property (nonatomic, copy) NSString *currentKeyword;   // 当前搜索词（重建行时恢复）
@property (nonatomic, copy) NSArray<MusicSong *> *results; // 搜索结果
@property (nonatomic, assign) BOOL searched;            // 是否已发起过搜索（区分初始态/无结果态）
@property (nonatomic, strong) NSTimer *searchDebounce;  // 输入防抖
@property (nonatomic, strong) UISegmentedControl *sourceSeg; // 音源选择（需持久化到 config）
@end

@implementation MusicShareVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"点歌";
    [self wpReloadUI];
}

- (void)wpBuildRows {
    CGFloat w = self.view.bounds.size.width;
    MusicShareConfig *cfg = [MusicShareConfig shared];

    // ===== 表头：音源选择 + 搜索框（位于所有 section 上方、随表滚动，与微信渲染行零冲突——
    // 微信引擎表全屏自管理滚动，contentView 是遗留空壳，挂它上面必然重叠） =====
    UIView *header = [[UIView alloc] initWithFrame:CGRectMake(0, 0, w, 88)];
    UISegmentedControl *seg = [[UISegmentedControl alloc] initWithItems:@[@"网易云", @"QQ音乐"]];
    seg.frame = CGRectMake(12, 6, w - 24, 32);
    seg.selectedSegmentIndex = (cfg.musicSource == 1) ? 1 : 0;
    [seg addTarget:self action:@selector(onSourceChange:) forControlEvents:UIControlEventValueChanged];
    self.sourceSeg = seg;
    [header addSubview:seg];

    UISearchBar *bar = [[UISearchBar alloc] initWithFrame:CGRectMake(0, 42, w, 44)];
    bar.placeholder = @"搜索歌曲 / 歌手";
    bar.delegate = self;
    bar.searchBarStyle = UISearchBarStyleMinimal;
    bar.text = self.currentKeyword;
    [header addSubview:bar];
    self.wcTable.tableView.tableHeaderView = header;

    // ===== 搜索结果（微信渲染组：每行一首歌，点击选目标发送） =====
    UIView *group = [self addTableGroupAtY:0 width:w];
    CGFloat cy = 0;

    // QQ 源时置顶一行 Cookie 状态（点击设置；vkey 接口强制登录态，Cookie 是唯一材料）
    if (cfg.musicSource == 1) {
        BOOL hasCookie = cfg.qqMusicCookie.length > 0;
        cy = [self addNavRowInGroup:group
                              title:[NSString stringWithFormat:@"QQ 音乐 Cookie：%@", hasCookie ? @"已设置" : @"未设置"]
                           subtitle:hasCookie ? @"点击重新粘贴" : @"y.qq.com 登录后复制 Cookie 粘贴进来"
                                       tag:-1 action:@selector(onCookieTap:) cy:cy width:w];
    }

    if (!self.searched) {
        cy = [self addSectionFooter:@"输入歌名开始搜索" y:cy width:w];
    } else if (self.results.count == 0) {
        cy = [self addSectionFooter:@"没有找到相关歌曲" y:cy width:w];
    } else {
        for (NSUInteger i = 0; i < self.results.count; i++) {
            MusicSong *song = self.results[i];
            NSString *sub = song.singerName.length ? song.singerName : @"";
            if (song.albumName.length > 0) {
                sub = sub.length ? [sub stringByAppendingFormat:@" · %@", song.albumName] : song.albumName;
            }
            cy = [self addNavRowInGroup:group title:song.name subtitle:sub
                                    tag:(NSInteger)i action:@selector(onSongTap:) cy:cy width:w];
        }
    }
    [self finishGroup:group atY:0 height:cy];
}

#pragma mark - 音源 / Cookie

- (void)onSourceChange:(UISegmentedControl *)seg {
    MusicShareConfig *cfg = [MusicShareConfig shared];
    cfg.musicSource = seg.selectedSegmentIndex;  // 0=网易云 1=QQ
    [ConfigManager saveAll];  // 统一落盘（模块类未实现 saveArchivedData，直调必崩 unrecognized selector）
    WPLog(@"Music", @"[Source] 切换音源 -> %ld", (long)cfg.musicSource);
    [self wpReloadUI];
}

- (void)onCookieTap:(UIButton *)sender {
    MusicShareConfig *cfg = [MusicShareConfig shared];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"QQ 音乐 Cookie"
                                      message:@"电脑浏览器登录 y.qq.com → F12 → Network → 任一请求 → 复制请求头 Cookie 全文粘贴到这里"
                               preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *tf) {
        tf.placeholder = @"uin=xxx; qm_keyst=xxx; ...";
        tf.text = cfg.qqMusicCookie;
    }];
    [alert addAction:[UIAlertAction actionWithTitle:@"保存" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        cfg.qqMusicCookie = [alert.textFields.firstObject.text stringByTrimmingCharactersInSet:
                             [NSCharacterSet whitespaceAndNewlineCharacterSet]];
        [ConfigManager saveAll];
        WPLog(@"Music", @"[QQ] Cookie 已保存 (len=%lu)", (unsigned long)cfg.qqMusicCookie.length);
        [self wpReloadUI];
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:alert animated:YES completion:nil];
}

#pragma mark - 搜索

- (void)searchBarSearchButtonClicked:(UISearchBar *)searchBar {
    [searchBar resignFirstResponder];
    [self runSearch:searchBar.text];
}

- (void)searchBar:(UISearchBar *)searchBar textDidChange:(NSString *)searchText {
    // 输入防抖 600ms，停顿即搜
    [self.searchDebounce invalidate];
    __weak typeof(self) ws = self;
    self.searchDebounce = [NSTimer scheduledTimerWithTimeInterval:0.6 repeats:NO block:^(NSTimer *t) {
        [ws runSearch:searchText];
    }];
}

- (void)runSearch:(NSString *)keyword {
    keyword = [keyword stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
    if (keyword.length == 0) return;
    self.currentKeyword = keyword;
    BOOL isQQ = ([MusicShareConfig shared].musicSource == 1);
    __weak typeof(self) ws = self;
    void (^done)(NSArray<MusicSong *> *) = ^(NSArray<MusicSong *> *songs) {
        ws.results = songs;
        ws.searched = YES;
        [ws wpReloadUI];
    };
    if (isQQ) {
        [QQMusicService searchWithKeyword:keyword completion:done];
    } else {
        [NeteaseMusicService searchWithKeyword:keyword completion:done];
    }
}

#pragma mark - 发送

- (void)onSongTap:(UIButton *)sender {
    NSUInteger idx = sender.tag;
    if (idx >= self.results.count) return;
    [self promptTargetAndSend:self.results[idx]];
}

// 发送目标 = 手输 wxid/群 ID（原生联系人选择器为二期增强）
- (void)promptTargetAndSend:(MusicSong *)song {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:[NSString stringWithFormat:@"发送「%@」", song.name]
                                       message:@"输入目标 wxid / 群 ID"
                                preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *tf) {
        tf.placeholder = @"wxid_xxx / 群ID@chatroom";
    }];
    [alert addAction:[UIAlertAction actionWithTitle:@"发送" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        NSString *target = alert.textFields.firstObject.text;
        target = [target stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        if (target.length == 0) return;
        [self sendSongCard:song to:target completion:^(BOOL ok, NSString *errMsg) {
            UIAlertController *done = [UIAlertController alertControllerWithTitle:ok ? @"已发送" : @"发送失败"
                                                   message:ok
                                                       ? [NSString stringWithFormat:@"「%@」已发给 %@", song.name, target]
                                                       : (errMsg ?: @"发送通道异常，请看调试日志")
                                            preferredStyle:UIAlertControllerStyleAlert];
            [done addAction:[UIAlertAction actionWithTitle:@"好" style:UIAlertActionStyleDefault handler:nil]];
            [self presentViewController:done animated:YES completion:nil];
        }];
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:@"实验1黄白原文·Local" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        // 实验矩阵 1/3：黄白 168 抓包原文（type=76 全文 2112 字）原封不动走 AddLocalMsg。
        // 若对面渲染成卡片 → 我们的 AddLocalMsg 通路成立，问题在我们 XML 内容
        NSString *target = [alert.textFields.firstObject.text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        if (target.length == 0) return;
        BOOL ok = WXSendAppMessageVia(HBCardXML(), target, YES);
        WPLog(@"Music", @"[实验1] 黄白原文 AddLocalMsg 发送%@ -> %@", ok ? @"成功" : @"失败", target);
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:@"实验2黄白原文·AddMsg" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        // 实验矩阵 2/3：同一份黄白原文走 AddMsg（预期对面收到原始文本，验证入口变量）
        NSString *target = [alert.textFields.firstObject.text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        if (target.length == 0) return;
        BOOL ok = WXSendAppMessageVia(HBCardXML(), target, NO);
        WPLog(@"Music", @"[实验2] 黄白原文 AddMsg 发送%@ -> %@", ok ? @"成功" : @"失败", target);
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:@"实验3当前歌短LRC·Local" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        // 实验矩阵 3/3：当前选中歌曲走 AddLocalMsg，但 LRC 截断到 900 字（黄白抓包=932 字截断）。
        // 若实验1成功而本实验也成功 → LRC 超长就是接收端降级根因
        NSString *target = [alert.textFields.firstObject.text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        if (target.length == 0) return;
        [self sendSongCard:song to:target viaLocal:YES lrcLimit:900 completion:^(BOOL ok, NSString *errMsg) {
            WPLog(@"Music", @"[实验3] 短LRC AddLocalMsg 发送%@ -> %@", ok ? @"成功" : @"失败", target);
        }];
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:@"实验4当前歌全LRC·Local" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        // 对照：同一首歌全量 LRC 走 AddLocalMsg。实验3 成功而实验4 失败 → 超长 LRC 实锤
        NSString *target = [alert.textFields.firstObject.text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        if (target.length == 0) return;
        [self sendSongCard:song to:target viaLocal:YES lrcLimit:0 completion:^(BOOL ok, NSString *errMsg) {
            WPLog(@"Music", @"[实验4] 全LRC AddLocalMsg 发送%@ -> %@", ok ? @"成功" : @"失败", target);
        }];
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:alert animated:YES completion:nil];
}

// 黄白 168 探针抓包原文（C1-C4 分块拼接，2112 字，孤勇者/陈奕迅/type=76）——实验矩阵用
static NSString *HBCardXML(void) {
    return
    @"<msg><appmsg appid=\"wx3858261cdede9ca0\"  sdkver=\"0\"><title>孤勇者</title><des>陈奕迅</des><type>76</type>"
    @"<url>http://wx.music.tc.qq.com/RS02063Jea4g3odyKE.mp3?guid=2000000049&amp;vkey=9D41E47CEFF06582255EE649887FF139DD818A4B7ADEA6F151C593C86432035723B214974F9909C11530A1953472BC7F5ECD44207858943D__v2b9abc1b&amp;uin=0&amp;fromtag=99010049&amp;trace=1af9d9bafbf94f82</url>"
    @"<lowurl>http://wx.music.tc.qq.com/RS02063Jea4g3odyKE.mp3?guid=2000000049&amp;vkey=9D41E47CEFF06582255EE649887FF139DD818A4B7ADEA6F151C593C86432035723B214974F9909C11530A1953472BC7F5ECD44207858943D__v2b9abc1b&amp;uin=0&amp;fromtag=99010049&amp;trace=1af9d9bafbf94f82</lowurl>"
    @"<dataurl>http://wx.music.tc.qq.com/RS02063Jea4g3odyKE.mp3?guid=2000000049&amp;vkey=9D41E47CEFF06582255EE649887FF139DD818A4B7ADEA6F151C593C86432035723B214974F9909C11530A1953472BC7F5ECD44207858943D__v2b9abc1b&amp;uin=0&amp;fromtag=99010049&amp;trace=1af9d9bafbf94f82</dataurl>"
    @"<lowdataurl>http://wx.music.tc.qq.com/RS02063Jea4g3odyKE.mp3?guid=2000000049&amp;vkey=9D41E47CEFF06582255EE649887FF139DD818A4B7ADEA6F151C593C86432035723B214974F9909C11530A1953472BC7F5ECD44207858943D__v2b9abc1b&amp;uin=0&amp;fromtag=99010049&amp;trace=1af9d9bafbf94f82</lowdataurl>"
    @"<songalbumurl>http://wx.y.gtimg.cn/music/photo_new/T002R500x500M000001uaPM93kxk1R_3.jpg</songalbumurl>"
    @"<songlyric>[ti:孤勇者][ar:陈奕迅][al:孤勇者][by:p_pttzhang][offset:0][00:00.00]孤勇者 (《英雄联盟：双城之战》动画剧集中文主题曲) - 陈奕迅 (Eason Chan)[00:07.43]词：唐恬[00:08.22]曲：钱雷[00:08.84]编曲：钱雷[00:09.55]吉他：高飞[00:10.35]人声录音师：利伟明[00:11.57]人声录音棚：雅旺录音室[00:12.83]Vocal edite：汝文博@SBMS Beijing[00:13.07]混音/母带：周天澈@Studio 21A[00:14.53]词版权管理方：北京梦织音传媒有限公司[00:15.40]曲版权管理方：索尼音乐版权代理（北京）有限公司[00:16.67]录音作品及MV版权：EAS MUSIC LTD[00:17.02]出品监制：霍锦/卢泓宇[00:18.32]联合出品方：拳头游戏/腾讯游戏/腾讯视频[00:19.43]制作人：钱雷[00:21.02][00:22.16]都是勇敢的[00:26.59][00:28.41]你额头的伤口你的不同你犯的错[00:34.22][00:36.96]都不必隐藏[00:41.70][00:43.41]你破旧的玩偶你的面具你的自我[00:48.99][00:51.57]他们说要带着光驯服每一头怪兽[00:56.71][00:58.74]他们说要缝好你的伤没有人爱小丑</songlyric>"
    @"<appattach><cdnthumbaeskey></cdnthumbaeskey><aeskey></aeskey></appattach>"
    @"</appmsg><appinfo><version>0</version><appname></appname><isforceupdate>1</isforceupdate></appinfo></msg>";
}

// 黄白式音乐卡片（appmsg type=76，点击即播不跳转）
// 模板逐字段照抄黄白实机抓包（探针实证，2026-10-23，XML 全文 2116 字符）：
//   <url>/<lowurl>/<dataurl>/<lowdataurl> 四字段 = 同一个 mp3 直链（发送时实时获取、有时效）
//   <songalbumurl> = 封面；<songlyric> = LRC 全文（点开后的歌词页）
//   appid 照抄黄白 = QQ 音乐 wx3858261cdede9ca0；无 <?xml?> 声明、无 <action>
- (void)sendSongCard:(MusicSong *)song to:(NSString *)session completion:(void (^)(BOOL ok, NSString *errMsg))completion {
    [self sendSongCard:song to:session viaLocal:NO lrcLimit:0 completion:completion];
}

// viaLocal=YES 走 AddLocalMsg（黄白/原生同款入口）；lrcLimit>0 时 LRC 截断到该长度（实验变量）
- (void)sendSongCard:(MusicSong *)song to:(NSString *)session viaLocal:(BOOL)viaLocal lrcLimit:(NSInteger)lrcLimit
           completion:(void (^)(BOOL ok, NSString *errMsg))completion {
    WPLog(@"Music", @"[Card] 开始发送: %@ - %@ -> %@", song.name, song.singerName, session);
    __weak typeof(self) ws = self;
    void (^prepareDone)(NSString *, NSString *, NSString *) = ^(NSString *playURL, NSString *coverURL, NSString *lrc) {
        if (!ws) return;
        if (playURL.length == 0) {
            BOOL isQQ = (song.source == 1);
            WPLog(@"Music", @"[Card] 无播放直链，放弃");
            completion(NO, isQQ
                ? @"取直链失败：Cookie 无效请重贴（点歌页顶部），或这是 VIP 歌——免费账号只能发免费歌，可换网易云源"
                : @"这首歌取不到播放直链（网易云版权限制），换一首试试");
            return;
        }
        NSString *(^esc)(NSString *) = ^NSString *(NSString *s) {
            if (s.length == 0) return @"";
            NSMutableString *m = [s mutableCopy];
            [m replaceOccurrencesOfString:@"&" withString:@"&amp;" options:0 range:NSMakeRange(0, m.length)];
            [m replaceOccurrencesOfString:@"<" withString:@"&lt;" options:0 range:NSMakeRange(0, m.length)];
            [m replaceOccurrencesOfString:@">" withString:@"&gt;" options:0 range:NSMakeRange(0, m.length)];
            return (NSString *)m;
        };
        NSString *url = esc(playURL);
        // LRC 去换行内联成一行（黄白抓包同款形态）：带 \n 的 songlyric 会让
        // 严格解析的客户端（PC/部分版本）XML 解析失败，整条消息降级为纯文本
        NSString *inlineLrc = [lrc stringByReplacingOccurrencesOfString:@"\r" withString:@""];
        inlineLrc = [inlineLrc stringByReplacingOccurrencesOfString:@"\n" withString:@""];
        inlineLrc = [inlineLrc stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        if (lrcLimit > 0 && (NSInteger)inlineLrc.length > lrcLimit) {
            inlineLrc = [inlineLrc substringToIndex:lrcLimit];  // 实验变量：黄白抓包 LRC=932 字截断
        }
        NSString *xml = [NSString stringWithFormat:
            @"<msg><appmsg appid=\"wx3858261cdede9ca0\"  sdkver=\"0\">"
            "<title>%@</title><des>%@</des><type>76</type>"
            "<url>%@</url><lowurl>%@</lowurl><dataurl>%@</dataurl><lowdataurl>%@</lowdataurl>"
            "<songalbumurl>%@</songalbumurl>"
            "<songlyric>%@</songlyric>"
            "<appattach><cdnthumbaeskey></cdnthumbaeskey><aeskey></aeskey></appattach>"
            "</appmsg><appinfo><version>0</version><appname></appname>"
            "<isforceupdate>1</isforceupdate></appinfo></msg>",
            esc(song.name), esc(song.singerName),
            url, url, url, url,
            esc(coverURL), esc(inlineLrc)];

        BOOL ok = WXSendAppMessageVia(xml, session, viaLocal);
        WPLog(@"Music", @"[Card] type=76 卡片发送%@(%@%@) -> %@", ok ? @"成功" : @"失败",
              viaLocal ? @"AddLocalMsg" : @"AddMsg",
              lrcLimit > 0 ? [NSString stringWithFormat:@" LRC≤%ld", (long)lrcLimit] : @"", session);
        completion(ok, ok ? nil : @"发送通道异常，请看调试日志");
    };
    if (song.source == 1) {
        [QQMusicService prepareSong:song completion:prepareDone];
    } else {
        [NeteaseMusicService prepareSong:song completion:prepareDone];
    }
}

@end
