#import "MusicShareVC.h"
#import "QQMusicService.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/LogManager.h"
#import "../../Settings/Common/WPWeChatTable.h"

@interface MusicShareVC () <UISearchBarDelegate>
@property (nonatomic, copy) NSString *currentKeyword;        // 当前搜索词（重建行时恢复）
@property (nonatomic, copy) NSArray<QQSong *> *results;      // 搜索结果
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
            QQSong *song = self.results[i];
            NSString *sub = song.singerName.length ? song.singerName : @"";
            if (song.interval > 0) sub = sub.length ? [sub stringByAppendingFormat:@" · %ld:%02ld", (long)song.interval / 60, (long)song.interval % 60] : [NSString stringWithFormat:@"%ld:%02ld", (long)song.interval / 60, (long)song.interval % 60];
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
    [QQMusicService searchWithKeyword:keyword completion:^(NSArray<QQSong *> *songs) {
        ws.results = songs;
        ws.searched = YES;
        [ws wpReloadUI];
    }];
}

#pragma mark - 发送

- (void)onSongTap:(UIButton *)sender {
    NSUInteger idx = sender.tag;
    if (idx >= self.results.count) return;
    QQSong *song = self.results[idx];
    [self promptTargetAndSend:song];
}

// 第一版发送目标 = 手输 wxid/群 ID（原生联系人选择器为第二版增强）
- (void)promptTargetAndSend:(QQSong *)song {
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
        BOOL ok = [self sendSongCard:song to:target];
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.4 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            UIAlertController *done = [UIAlertController alertControllerWithTitle:ok ? @"已发送" : @"发送失败"
                                                   message:ok ? [NSString stringWithFormat:@"「%@」已发给 %@", song.name, target] : @"发送通道异常，请看调试日志"
                                            preferredStyle:UIAlertControllerStyleAlert];
            [done addAction:[UIAlertAction actionWithTitle:@"好" style:UIAlertActionStyleDefault handler:nil]];
            [self presentViewController:done animated:YES completion:nil];
        });
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:alert animated:YES completion:nil];
}

// 组装微信原生音乐卡片 XML（appmsg type=3，无 appid 依赖——黄白反编译实证结论）
- (BOOL)sendSongCard:(QQSong *)song to:(NSString *)session {
    NSString *(^esc)(NSString *) = ^NSString *(NSString *s) {
        if (s.length == 0) return @"";
        NSMutableString *m = [s mutableCopy];
        [m replaceOccurrencesOfString:@"&" withString:@"&amp;" options:0 range:NSMakeRange(0, m.length)];
        [m replaceOccurrencesOfString:@"<" withString:@"&lt;" options:0 range:NSMakeRange(0, m.length)];
        [m replaceOccurrencesOfString:@">" withString:@"&gt;" options:0 range:NSMakeRange(0, m.length)];
        return (NSString *)m;
    };

    NSString *des = esc(song.singerName);
    if (song.subtitle.length > 0) {
        des = des.length ? [des stringByAppendingFormat:@" - %@", esc(song.subtitle)] : esc(song.subtitle);
    }
    NSString *cover = song.coverURL ?: @"";

    NSString *xml = [NSString stringWithFormat:
        @"<?xml version=\"1.0\"?>\n"
        "<appmsg appid=\"\" sdkver=\"0\">\n"
        "  <title>%@</title>\n"
        "  <des>%@</des>\n"
        "  <type>3</type>\n"
        "  <musicurl>%@</musicurl>\n"
        "  <thumburl>%@</thumburl>\n"
        "  <songalbumurl>%@</songalbumurl>\n"
        "  <appattach>\n"
        "    <totallen>0</totallen>\n"
        "    <fileext></fileext>\n"
        "  </appattach>\n"
        "  <websearch/>\n"
        "</appmsg>",
        esc(song.name), des,
        esc(song.playPageURL), esc(cover), esc(cover)];

    WPLog(@"Music", @"[Card] 发送音乐卡片: %@ - %@ -> %@", song.name, song.singerName, session);
    return WXSendAppMessage(xml, session);
}

@end
