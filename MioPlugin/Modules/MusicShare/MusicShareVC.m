#import "MusicShareVC.h"
#import "NeteaseMusicService.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/LogManager.h"
#import "../../Settings/Common/WPWeChatTable.h"

@interface MusicShareVC () <UISearchBarDelegate>
@property (nonatomic, copy) NSString *currentKeyword;        // 当前搜索词（重建行时恢复）
@property (nonatomic, copy) NSArray<NeteaseSong *> *results; // 搜索结果
@property (nonatomic, assign) BOOL searched;                 // 是否已发起过搜索（区分初始态/无结果态）
@property (nonatomic, strong) NSTimer *searchDebounce;       // 输入防抖
@end

@implementation MusicShareVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"点歌";
    [self wpReloadUI];
}

- (void)wpBuildRows {
    CGFloat w = self.view.bounds.size.width;

    // ===== 搜索框 = 表头视图：位于所有 section 上方、随表滚动，与微信渲染行零冲突 =====
    //（微信引擎表全屏自管理滚动，contentView 是遗留空壳——挂它上面必然重叠）
    UISearchBar *bar = [[UISearchBar alloc] initWithFrame:CGRectMake(0, 0, w, 44)];
    bar.placeholder = @"搜索歌曲 / 歌手";
    bar.delegate = self;
    bar.searchBarStyle = UISearchBarStyleMinimal;
    bar.text = self.currentKeyword;
    self.wcTable.tableView.tableHeaderView = bar;

    // ===== 搜索结果（微信渲染组：每行一首歌，点击选目标发送） =====
    UIView *group = [self addTableGroupAtY:0 width:w];
    CGFloat cy = 0;
    if (!self.searched) {
        cy = [self addSectionFooter:@"输入歌名开始搜索" y:cy width:w];
    } else if (self.results.count == 0) {
        cy = [self addSectionFooter:@"没有找到相关歌曲" y:cy width:w];
    } else {
        for (NSUInteger i = 0; i < self.results.count; i++) {
            NeteaseSong *song = self.results[i];
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
    __weak typeof(self) ws = self;
    [NeteaseMusicService searchWithKeyword:keyword completion:^(NSArray<NeteaseSong *> *songs) {
        ws.results = songs;
        ws.searched = YES;
        [ws wpReloadUI];
    }];
}

#pragma mark - 发送

- (void)onSongTap:(UIButton *)sender {
    NSUInteger idx = sender.tag;
    if (idx >= self.results.count) return;
    [self promptTargetAndSend:self.results[idx]];
}

// 发送目标 = 手输 wxid/群 ID（原生联系人选择器为二期增强）
- (void)promptTargetAndSend:(NeteaseSong *)song {
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
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:alert animated:YES completion:nil];
}

// 黄白式音乐卡片（appmsg type=76，点击即播不跳转）
// 模板逐字段照抄黄白实机抓包（探针实证，2026-10-23，XML 全文 2116 字符）：
//   <url>/<lowurl>/<dataurl>/<lowdataurl> 四字段 = 同一个 mp3 直链（网易云时效直链，与黄白的
//   wx.music.tc.qq.com vkey 直链同为发送时实时获取、有时效的形态）
//   <songalbumurl> = 封面；<songlyric> = LRC 全文（点开后的歌词页）
//   appid 照抄黄白 = QQ 音乐 wx3858261cdede9ca0；无 <?xml?> 声明、无 <action>
- (void)sendSongCard:(NeteaseSong *)song to:(NSString *)session completion:(void (^)(BOOL ok, NSString *errMsg))completion {
    WPLog(@"Music", @"[Card] 开始发送: %@ - %@ -> %@", song.name, song.singerName, session);
    __weak typeof(self) ws = self;
    [NeteaseMusicService prepareSong:song completion:^(NSString *playURL, NSString *coverURL, NSString *lrc) {
        if (!ws) return;
        if (playURL.length == 0) {
            WPLog(@"Music", @"[Card] 无播放直链，放弃（版权限制）");
            completion(NO, @"这首歌取不到播放直链（网易云版权限制），换一首试试");
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
            esc(coverURL), esc(lrc)];

        BOOL ok = WXSendAppMessage(xml, session);
        WPLog(@"Music", @"[Card] type=76 卡片发送%@ -> %@", ok ? @"成功" : @"失败", session);
        completion(ok, ok ? nil : @"发送通道异常，请看调试日志");
    }];
}

@end
