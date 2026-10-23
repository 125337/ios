#import "QQMusicService.h"
#import "MusicShareConfig.h"
#import "../../Core/LogManager.h"

// ===== 通用请求 =====
static NSDictionary *qqJSON(NSURLRequest *req, NSError **err) {
    NSURLResponse *resp = nil;
    NSData *data = [NSURLConnection sendSynchronousRequest:req returningResponse:&resp error:err];
    if (!data || (err && *err)) return nil;
    return [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
}

static NSString *strOf(id v) {
    return [v isKindOfClass:[NSString class]] ? v : nil;
}

// 从用户粘贴的 Cookie 里抠 uin（vkey 请求体的 uin 必须与 Cookie 一致，否则拒发直链）
static NSString *uinFromCookie(NSString *cookie) {
    for (NSString *key in @[@"uin=", @"wxuin=", @"o_uin=", @"openid="]) {
        NSRange r = [cookie rangeOfString:key];
        if (r.location == NSNotFound) continue;
        NSUInteger start = r.location + r.length;
        NSUInteger end = start;
        while (end < cookie.length) {
            unichar c = [cookie characterAtIndex:end];
            BOOL ok = (c >= '0' && c <= '9') || (end == start && c == '-');
            if (!ok) break;
            end++;
        }
        NSString *v = [cookie substringWithRange:NSMakeRange(start, end - start)];
        if (v.length) return v;
    }
    return @"0";
}

// 从用户粘贴的 Cookie 里抠 qm_keyst（g_tk 的输入）
static NSString *qmKeystFromCookie(NSString *cookie) {
    NSRange r = [cookie rangeOfString:@"qm_keyst="];
    if (r.location == NSNotFound) return nil;
    NSUInteger start = NSMaxRange(r);
    NSUInteger end = [cookie rangeOfString:@";" options:0 range:NSMakeRange(start, cookie.length - start)].location;
    if (end == NSNotFound) end = cookie.length;
    NSString *v = [cookie substringWithRange:NSMakeRange(start, end - start)];
    return v.length ? v : nil;
}

// g_tk：QQ 音乐 web 端登录校验哈希（hash33(qm_keyst, 5381)，配方来源 L-1124/QQMusicApi versioning.py，PC 实证见 scripts/_qq_live4.py）
static NSString *gtkOf(NSString *qmKeyst) {
    if (qmKeyst.length == 0) return @"5381";
    long long h = 5381;
    for (NSUInteger i = 0; i < qmKeyst.length; i++) {
        h += (h << 5) + (long long)[qmKeyst characterAtIndex:i];
    }
    return [NSString stringWithFormat:@"%lld", h & 0x7FFFFFFF];
}

// web 端 musicu.fcg 公参（ct24/cv4747474/platform yqq.json 是 vkey 接口实证可用的形态）
static NSDictionary *qqComm(NSString *uin, NSString *gtk) {
    return @{@"ct": @24, @"cv": @4747474, @"platform": @"yqq.json", @"chid": @"0",
             @"uin": uin, @"g_tk": gtk, @"g_tk_new_20200303": gtk,
             @"format": @"json", @"inCharset": @"utf-8", @"outCharset": @"utf-8",
             @"notice": @0, @"need_new_code": @1};
}

// musicu.fcg POST（带 Cookie，无 sign——UrlGetVkey 实证不需要）
static NSDictionary *qqPost(NSDictionary *payload, NSString *cookie) {
    NSData *bodyData = [NSJSONSerialization dataWithJSONObject:payload options:0 error:nil];
    NSMutableURLRequest *req = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:@"https://u.y.qq.com/cgi-bin/musicu.fcg"]];
    req.HTTPMethod = @"POST";
    req.HTTPBody = bodyData;
    [req setValue:@"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36" forHTTPHeaderField:@"User-Agent"];
    [req setValue:@"https://y.qq.com/" forHTTPHeaderField:@"Referer"];
    [req setValue:@"https://y.qq.com/" forHTTPHeaderField:@"Origin"];
    [req setValue:@"application/json;charset=utf-8" forHTTPHeaderField:@"Content-Type"];
    if (cookie.length) [req setValue:cookie forHTTPHeaderField:@"Cookie"];
    req.timeoutInterval = 12.0;
    return qqJSON(req, nil);
}

@implementation QQMusicService

#pragma mark - 搜索（免签）

+ (void)searchWithKeyword:(NSString *)keyword
               completion:(void (^)(NSArray<MusicSong *> *songs))completion {
    if (keyword.length == 0) { completion(@[]); return; }

    dispatch_async(dispatch_get_global_queue(QOS_CLASS_USER_INITIATED, 0), ^{
        NSMutableArray<MusicSong *> *songs = [NSMutableArray array];
        NSString *url = [NSString stringWithFormat:
            @"https://c.y.qq.com/soso/fcgi-bin/client_search_cp?w=%@&format=json&n=20",
            [keyword stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLQueryAllowedCharacterSet]]];
        NSMutableURLRequest *req = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:url]];
        [req setValue:@"Mozilla/5.0 (iPhone; CPU iPhone OS 16_0 like Mac OS X) AppleWebKit/605.1.15" forHTTPHeaderField:@"User-Agent"];
        [req setValue:@"https://c.y.qq.com/" forHTTPHeaderField:@"Referer"];
        req.timeoutInterval = 10.0;
        NSDictionary *root = qqJSON(req, nil);
        NSArray *list = root[@"data"][@"song"][@"list"];
        if ([list isKindOfClass:[NSArray class]]) {
            for (NSDictionary *s in list) {
                if (![s isKindOfClass:[NSDictionary class]]) continue;
                MusicSong *song = [MusicSong new];
                song.source = 1;
                song.songId = strOf(s[@"songmid"]) ?: @"";
                song.name = strOf(s[@"songname"]) ?: @"";
                song.albumName = strOf(s[@"albumname"]) ?: @"";
                song.albumMid = strOf(s[@"albummid"]) ?: @"";
                NSMutableArray *singers = [NSMutableArray array];
                for (NSDictionary *si in s[@"singer"]) {
                    NSString *n = [si isKindOfClass:[NSDictionary class]] ? strOf(si[@"name"]) : nil;
                    if (n.length) [singers addObject:n];
                }
                song.singerName = [singers componentsJoinedByString:@"/"];
                if (song.songId.length && song.name.length) [songs addObject:song];
            }
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            WPLog(@"Music", @"[QQ] 搜索「%@」-> %lu 条", keyword, (unsigned long)songs.count);
            completion(songs);
        });
    });
}

#pragma mark - 取全量（sign + Cookie）

+ (void)prepareSong:(MusicSong *)song
         completion:(void (^)(NSString *playURL, NSString *coverURL, NSString *lrc))completion {
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_USER_INITIATED, 0), ^{
        NSString *playURL = nil, *lrc = nil;
        MusicShareConfig *cfg = [MusicShareConfig shared];
        NSString *cookie = cfg.qqMusicCookie ?: @"";

        if (cookie.length == 0) {
            WPLog(@"Music", @"[QQ] 无 Cookie，取直链跳过");
            dispatch_async(dispatch_get_main_queue(), ^{
                completion(@"", @"", @"");
            });
            return;
        }

        // 1) 封面（免签，albummid 拼 y.gtimg.cn，与黄白抓包同款 CDN 形态）
        NSString *coverURL = @"";
        if (song.albumMid.length) {
            coverURL = [NSString stringWithFormat:@"https://y.gtimg.cn/music/photo_new/T002R500x500M000%@.jpg", song.albumMid];
        }

        // 2) 歌曲详情拿 media_mid（真实文件名是 M500<media_mid>.mp3，mid+mid 只是猜拼、部分歌取不到）
        NSString *uin = uinFromCookie(cookie);
        NSString *gtk = gtkOf(qmKeystFromCookie(cookie));
        NSDictionary *detail = qqPost(@{@"comm": qqComm(uin, gtk),
                                        @"req_1": @{@"module": @"music.pf_song_detail_svr",
                                                    @"method": @"get_song_detail_yqq",
                                                    @"param": @{@"song_mid": song.songId, @"ctx": @0}}},
                                      cookie);
        NSString *mediaMid = strOf(detail[@"req_1"][@"data"][@"track_info"][@"file"][@"media_mid"]) ?: @"";
        WPLog(@"Music", @"[QQ] detail mid=%@ media_mid=%@", song.songId, mediaMid.length ? mediaMid : @"无");

        // 3) 播放直链：UrlGetVkey + web 公参 + Cookie（PC 实证：免费歌 M500 result=0 真下载成功）
        // 文件名优先 M500<media_mid>.mp3，M500 被拒（无版权 mp3）退 C400 m4a；无 media_mid 退 mid+mid 拼法
        NSString *lastResult = @"";
        NSArray *filenames = mediaMid.length
            ? @[[NSString stringWithFormat:@"M500%@.mp3", mediaMid], [NSString stringWithFormat:@"C400%@.m4a", mediaMid]]
            : @[[NSString stringWithFormat:@"M500%@%@.mp3", song.songId, song.songId], [NSString stringWithFormat:@"C400%@%@.m4a", song.songId, song.songId]];
        for (NSString *filename in filenames) {
            NSString *guid = [NSString stringWithFormat:@"%u", arc4random_uniform(900000000) + 100000000];
            NSDictionary *payload = @{@"comm": qqComm(uin, gtk),
                                      @"req_1": @{@"module": @"music.vkey.GetVkey",
                                                  @"method": @"UrlGetVkey",
                                                  @"param": @{@"uin": uin, @"filename": @[filename],
                                                              @"guid": guid, @"songmid": @[song.songId],
                                                              @"songtype": @[ @0 ], @"ctx": @0}}};
            NSDictionary *root = qqPost(payload, cookie);
            NSDictionary *inner = root[@"req_1"];
            NSDictionary *d = inner[@"data"];
            if (![d isKindOfClass:[NSDictionary class]]) continue;
            NSArray *infoList = [d[@"midurlinfo"] isKindOfClass:[NSArray class]] ? d[@"midurlinfo"] : @[];
            NSDictionary *mi = infoList.count ? infoList[0] : @{};
            lastResult = [NSString stringWithFormat:@"%@", mi[@"result"] ?: inner[@"code"] ?: @"?"];
            NSString *purl = strOf(mi[@"purl"]) ?: @"";
            if (purl.length) {
                NSString *sip = @"";
                NSArray *sips = d[@"sip"];
                if ([sips isKindOfClass:[NSArray class]] && sips.count) sip = strOf(sips[0]) ?: @"";
                if (sip.length == 0) sip = @"http://ws.stream.qqmusic.qq.com/";
                playURL = [sip stringByAppendingString:purl];
                break;
            }
            WPLog(@"Music", @"[QQ] vkey file=%@ result=%@ purl=空", filename, lastResult);
        }
        if (playURL.length == 0) {
            // 104003 = 无权限（VIP 歌 + 免费号），来自 L-1124/QQMusicApi docs/tutorial/download.md
            WPLog(@"Music", @"[QQ] 取直链失败 result=%@%@", lastResult,
                  [lastResult isEqualToString:@"104003"] ? @"（VIP 歌，当前账号无播放权限）" : @"");
        }

        // 4) 歌词（免签接口，base64；允许为空）
        NSString *lurl = [NSString stringWithFormat:
            @"https://c.y.qq.com/lyric/fcgi-bin/fcg_query_lyric_new.fcg?songmid=%@&pcachetime=%lld&g_tk=5381&loginUin=0&hostUin=0&format=json&inCharset=utf8&outCharset=utf-8&notice=0&platform=yqq.json&needNewCode=0",
            song.songId, (long long)[NSDate date].timeIntervalSince1970];
        NSMutableURLRequest *lreq = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:lurl]];
        [lreq setValue:@"Mozilla/5.0 (iPhone; CPU iPhone OS 16_0 like Mac OS X) AppleWebKit/605.1.15" forHTTPHeaderField:@"User-Agent"];
        [lreq setValue:@"https://c.y.qq.com/" forHTTPHeaderField:@"Referer"];
        lreq.timeoutInterval = 10.0;
        NSDictionary *l = qqJSON(lreq, nil);
        NSString *b64 = strOf(l[@"lyric"]);
        if (b64.length) {
            NSData *ld = [[NSData alloc] initWithBase64EncodedString:b64 options:0];
            lrc = [[NSString alloc] initWithData:ld encoding:NSUTF8StringEncoding];
        }

        dispatch_async(dispatch_get_main_queue(), ^{
            WPLog(@"Music", @"[QQ] prepare mid=%@ url=%@ cover=%@ lrc=%lu字",
                  song.songId, playURL.length ? @"OK" : @"无", coverURL.length ? @"OK" : @"无", (unsigned long)lrc.length);
            completion(playURL ?: @"", coverURL ?: @"", lrc ?: @"");
        });
    });
}

@end
