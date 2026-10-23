#import "QQMusicService.h"
#import "../../Core/LogManager.h"

// QQ 音乐音源 · QQ 官方免登录 web 接口（2026-10-24 定论，PC 实证）
//  - 搜索: c.y.qq.com/splcloud/fcgi-bin/smartbox_new.fcg       → songmid/name/singer（免登录）
//  - 详情: c.y.qq.com/v8/fcg-bin/fcg_play_single_song.fcg      → albummid（拼封面）+ 数字 songid（拼分享页）
//  - 封面: y.gtimg.cn/music/photo_new/T002R500x500M000{albummid}.jpg（公开）
//  - 卡片: type=3 经典 QQ 音乐分享卡（MusicShareService 组装），dataUrl = i.y.qq.com 歌曲页
// 历史：本地爬链（Cookie/g_tk/sign/vkey）死于 QQ 500001 风控；宿主官方 MusicLiveSearch CGI
//       （黄白同款）在"官替已改"宿主上一调用即段错误，wx.music.tc.qq.com 签名直链不可得，勿回头。

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

#pragma mark - 取全量（详情接口拿 albummid/数字 id，无登录态）

+ (void)prepareSong:(MusicSong *)song
         completion:(void (^)(NSString *playURL, NSString *coverURL, NSString *lrc))completion {
    NSURL *url = [NSURL URLWithString:
        [NSString stringWithFormat:@"https://c.y.qq.com/v8/fcg-bin/fcg_play_single_song.fcg?songmid=%@&format=json", song.songId]];
    qqGet(url, ^(NSData *data) {
        NSDictionary *root = qqJSON(data, @"detail");
        NSDictionary *info = [root[@"data"] firstObject];
        if (![info isKindOfClass:[NSDictionary class]]) info = nil;
        NSString *albumMid = strOf(info[@"album"][@"mid"]);
        NSString *numId = strOf(info[@"id"]);
        if (!numId.length) numId = strOf(info[@"mid"]);
        NSString *page = [NSString stringWithFormat:@"https://i.y.qq.com/v8/playsong.html?songid=%@", numId];
        NSString *cover = albumMid.length
            ? [NSString stringWithFormat:@"https://y.gtimg.cn/music/photo_new/T002R500x500M000%@.jpg", albumMid]
            : @"";
        WPLog(@"Music", @"[QQ] prepare mid=%@ page=%@ cover=%@",
              song.songId, numId.length ? @"OK" : @"缺数字id", albumMid.length ? @"OK" : @"无封面");
        dispatch_async(dispatch_get_main_queue(), ^{ completion(page, cover, @""); });
    });
}

@end
