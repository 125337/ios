#import "QQMusicService.h"
#import "../../Core/LogManager.h"

// QQ 音乐音源 · 搜索/详情走官方免登录 web 接口，取流走 GetVkey 客户端接口（2026-10-24 定论，PC 实证）
//  - 搜索: c.y.qq.com/splcloud/fcgi-bin/smartbox_new.fcg       → songmid/name/singer（免登录）
//  - 详情: c.y.qq.com/v8/fcg-bin/fcg_play_single_song.fcg      → 数字 songid（拼播放页）+ albummid（拼封面）
//  - 封面: y.gtimg.cn/music/photo_new/T002R500x500M000{albummid}.jpg（公开）
//  - 取流: u.y.qq.com/cgi-bin/musicu.fcg module=music.vkey.GetVkey/UrlGetVkey
//          必须用 QQ 音乐安卓客户端 UA（"QQMusic 20090008(android 15)"），网页 UA 被 500003 风控
//          免费歌全曲 = M500{mid}{mid}.mp3（双mid）；VIP 歌试听 = RS02{mid}.mp3（单mid，~60s）
//          与真实 QQ 音乐分享卡行为一致：非 VIP 分到微信里播的也是试听片段
// 历史：本地爬链（Cookie/g_tk/sign/vkey 网页通道）死于 500001 风控；宿主官方 MusicLiveSearch CGI
//       （黄白同款）在"官替已改"宿主上一调用即段错误，wx.music.tc.qq.com 签名直链不可得，勿回头。

static NSString * const kQQStreamBase = @"http://ws.stream.qqmusic.qq.com/";

static void qqGet(NSURL *url, void (^done)(NSData *)) {
    NSMutableURLRequest *req = [NSMutableURLRequest requestWithURL:url
                                                       cachePolicy:NSURLRequestReloadIgnoringLocalCacheData
                                                   timeoutInterval:10];
    [req setValue:@"Mozilla/5.0 (iPhone; CPU iPhone OS 17_0 like Mac OS X) AppleWebKit/605.1.15" forHTTPHeaderField:@"User-Agent"];
    [req setValue:@"https://y.qq.com/" forHTTPHeaderField:@"Referer"];
    [[NSURLSession.sharedSession dataTaskWithRequest:req
                                   completionHandler:^(NSData *data, NSURLResponse *resp, NSError *err) {
        if (!data || err) {
            WPLog(@"Music", @"[QQ] 请求失败 %@ err=%@", url.host, err);
            done(nil);
            return;
        }
        done(data);
    }] resume];
}

// GetVkey 取流（PC 实证的最小可通形态：客户端 UA + 固定 comm，免登录免 QIMEI 免 sign）
static void qqVkey(NSString *mid, NSString *filename, void (^done)(NSString *purl)) {
    NSString *guid = [NSString stringWithFormat:@"%@%@",
        [NSUUID UUID].UUIDString, [NSUUID UUID].UUIDString];
    guid = [[guid stringByReplacingOccurrencesOfString:@"-" withString:@""] substringToIndex:32];
    NSDictionary *body = @{
        @"comm": @{
            @"ct": @"11", @"cv": @"20090008", @"v": @"20090008",
            @"tmeAppID": @"qqmusic", @"chid": @"10003505",
            @"QIMEI36": @"1fb7263af5f239acbacd095e10001ff1aa16",
            @"OpenUDID": @"54a107ad4f994df6a5314f72b699b405",
            @"OpenUDID2": @"d3453221249c45dea41271d9e94b9754",
            @"udid": @"54a107ad4f994df6a5314f72b699b405",
            @"aid": @"6dbbd07ee2339fe9", @"os_ver": @"15", @"phonetype": @"PKB110",
        },
        @"req_0": @{
            @"module": @"music.vkey.GetVkey",
            @"method": @"UrlGetVkey",
            @"param": @{
                @"uin": @"",
                @"filename": @[filename],
                @"guid": guid,
                @"songmid": @[mid],
                @"songtype": @[@0],
                @"ctx": @0,
            },
        },
    };
    NSData *json = [NSJSONSerialization dataWithJSONObject:body options:0 error:nil];
    NSMutableURLRequest *req = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:@"https://u.y.qq.com/cgi-bin/musicu.fcg"]
                                                       cachePolicy:NSURLRequestReloadIgnoringLocalCacheData
                                                   timeoutInterval:10];
    req.HTTPMethod = @"POST";
    req.HTTPBody = json;
    [req setValue:@"QQMusic 20090008(android 15)" forHTTPHeaderField:@"User-Agent"];
    [req setValue:@"application/json" forHTTPHeaderField:@"Content-Type"];
    [req setValue:@"https://y.qq.com/" forHTTPHeaderField:@"Referer"];
    [[NSURLSession.sharedSession dataTaskWithRequest:req
                                   completionHandler:^(NSData *data, NSURLResponse *resp, NSError *err) {
        NSString *purl = @"";
        if (data && !err) {
            NSDictionary *root = [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
            NSArray *infos = root[@"req_0"][@"data"][@"midurlinfo"];
            NSDictionary *info = [infos firstObject];
            if ([info isKindOfClass:[NSDictionary class]]) {
                id p = info[@"purl"];
                if ([p isKindOfClass:[NSString class]]) purl = p;
            }
        }
        dispatch_async(dispatch_get_main_queue(), ^{ done(purl); });
    }] resume];
}

static NSDictionary *qqJSON(NSData *data, NSString *tag) {
    if (!data) return nil;
    id root = [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
    if (![root isKindOfClass:[NSDictionary class]]) {
        WPLog(@"Music", @"[QQ][%@] 非 JSON 响应", tag);
        return nil;
    }
    return root;
}

static NSString *strOf(id v) {
    return [v isKindOfClass:[NSString class]] ? v : @"";
}

@implementation QQMusicService

#pragma mark - 搜索（QQ 官方免登录接口）

+ (void)searchWithKeyword:(NSString *)keyword
               completion:(void (^)(NSArray<MusicSong *> *songs))completion {
    if (keyword.length == 0) { completion(@[]); return; }
    NSString *enc = [keyword stringByAddingPercentEncodingWithAllowedCharacters:
        [NSCharacterSet URLQueryAllowedCharacterSet]];
    NSURL *url = [NSURL URLWithString:
        [NSString stringWithFormat:@"https://c.y.qq.com/splcloud/fcgi-bin/smartbox_new.fcg?key=%@&format=json", enc]];
    WPLog(@"Music", @"[QQ] 搜索「%@」", keyword);
    qqGet(url, ^(NSData *data) {
        NSDictionary *root = qqJSON(data, @"search");
        NSArray *items = root[@"data"][@"song"][@"itemlist"];
        NSMutableArray<MusicSong *> *songs = [NSMutableArray array];
        for (NSDictionary *it in items) {
            if (![it isKindOfClass:[NSDictionary class]]) continue;
            NSString *mid = strOf(it[@"mid"]);
            NSString *name = strOf(it[@"name"]);
            if (mid.length == 0 || name.length == 0) continue;
            MusicSong *s = [MusicSong new];
            s.source = 1;
            s.songId = mid;
            s.name = name;
            s.singerName = strOf(it[@"singer"]);
            [songs addObject:s];
        }
        WPLog(@"Music", @"[QQ] 搜索「%@」-> %lu 条", keyword, (unsigned long)songs.count);
        dispatch_async(dispatch_get_main_queue(), ^{ completion(songs); });
    });
}

#pragma mark - 取全量（详情 + 取流并发，无登录态）

+ (void)prepareSong:(MusicSong *)song
         completion:(void (^)(NSString *playURL, NSString *pageURL, NSString *coverURL, NSString *lrc))completion {
    NSString *mid = song.songId;
    __block NSString *stream = @"";
    __block NSString *page = @"";
    __block NSString *cover = @"";
    dispatch_group_t g = dispatch_group_create();

    // 1) 详情：数字 songid（拼播放页）+ albummid（拼封面）
    dispatch_group_enter(g);
    NSURL *detailURL = [NSURL URLWithString:
        [NSString stringWithFormat:@"https://c.y.qq.com/v8/fcg-bin/fcg_play_single_song.fcg?songmid=%@&format=json", mid]];
    qqGet(detailURL, ^(NSData *data) {
        NSDictionary *root = qqJSON(data, @"detail");
        NSDictionary *info = [root[@"data"] firstObject];
        if (![info isKindOfClass:[NSDictionary class]]) info = nil;
        NSString *numId = strOf(info[@"id"]);
        if (!numId.length) numId = strOf(info[@"mid"]);
        NSString *albumMid = strOf(info[@"album"][@"mid"]);
        if (numId.length) page = [NSString stringWithFormat:@"https://i.y.qq.com/v8/playsong.html?songid=%@", numId];
        if (albumMid.length) cover = [NSString stringWithFormat:@"https://y.gtimg.cn/music/photo_new/T002R500x500M000%@.jpg", albumMid];
        dispatch_group_leave(g);
    });

    // 2) 取流：免费歌全曲 M500（双mid）→ VIP 试听 RS02（单mid）回退
    dispatch_group_enter(g);
    NSString *full = [NSString stringWithFormat:@"M500%@%@.mp3", mid, mid];
    NSString *trial = [NSString stringWithFormat:@"RS02%@.mp3", mid];
    qqVkey(mid, full, ^(NSString *purl) {
        if (purl.length == 0) {
            qqVkey(mid, trial, ^(NSString *purl2) {
                if (purl2.length) stream = [kQQStreamBase stringByAppendingString:purl2];
                dispatch_group_leave(g);
            });
            return;
        }
        stream = [kQQStreamBase stringByAppendingString:purl];
        dispatch_group_leave(g);
    });

    dispatch_group_notify(g, dispatch_get_main_queue(), ^{
        WPLog(@"Music", @"[QQ] prepare mid=%@ stream=%@ page=%@ cover=%@",
              mid,
              stream.length ? ([stream rangeOfString:@"M500"].location != NSNotFound ? @"全曲" : @"试听") : @"无",
              page.length ? @"OK" : @"无", cover.length ? @"OK" : @"无");
        completion(stream, page, cover, @"");
    });
}

@end
