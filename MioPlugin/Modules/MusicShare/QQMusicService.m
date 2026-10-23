#import "QQMusicService.h"
#import "MusicShareConfig.h"
#import "../../Core/LogManager.h"
#import <CommonCrypto/CommonCrypto.h>

// ===== sign（算法来源 npm qqmusic-sign，PC 实证见 scripts/_qq_sign_probe.py）=====
static NSString *md5Hex(NSString *input) {
    NSData *d = [input dataUsingEncoding:NSUTF8StringEncoding];
    unsigned char digest[CC_MD5_DIGEST_LENGTH];
    CC_MD5(d.bytes, (CC_LONG)d.length, digest);
    NSMutableString *hex = [NSMutableString stringWithCapacity:32];
    for (int i = 0; i < CC_MD5_DIGEST_LENGTH; i++) [hex appendFormat:@"%02x", digest[i]];
    return hex;
}

static NSString *qqSign(NSString *body) {
    // "zza" + 12位随机字母数字 + md5("CJBPACrRuNy7" + body)；随机位数 10~16 均可
    NSString *pool = @"abcdefghijklmnopqrstuvwxyz0123456789";
    NSMutableString *rnd = [NSMutableString stringWithCapacity:12];
    for (int i = 0; i < 12; i++) {
        [rnd appendFormat:@"%C", [pool characterAtIndex:arc4random_uniform((uint32_t)pool.length)]];
    }
    return [NSString stringWithFormat:@"zza%@%@", rnd, md5Hex([@"CJBPACrRuNy7" stringByAppendingString:body])];
}

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

        // 2) 播放直链：musicu.fcg + w-x-api-sign + Cookie（登录态是 500003 的卡点，sign 匿名已实证不够）
        NSString *uin = uinFromCookie(cookie);
        NSDictionary *payload = @{
            @"comm": @{@"ct": @19, @"cv": @1873, @"uin": uin, @"tmeAppID": @"qqmusic"},
            @"req_1": @{@"module": @"vkey.GetVkeyServerBase", @"method": @"CgiGetVkey",
                        @"param": @{@"guid": @"2000000049", @"songmid": @[song.songId],
                                    @"songtype": @[ @0 ], @"uin": uin,
                                    @"loginflag": @1, @"platform": @"20"}},
        };
        NSData *bodyData = [NSJSONSerialization dataWithJSONObject:payload options:0 error:nil];
        NSString *body = [[NSString alloc] initWithData:bodyData encoding:NSUTF8StringEncoding];
        NSMutableURLRequest *req = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:@"https://u.y.qq.com/cgi-bin/musicu.fcg"]];
        req.HTTPMethod = @"POST";
        req.HTTPBody = bodyData;
        [req setValue:@"Mozilla/5.0 (iPhone; CPU iPhone OS 16_0 like Mac OS X) AppleWebKit/605.1.15" forHTTPHeaderField:@"User-Agent"];
        [req setValue:@"https://y.qq.com/" forHTTPHeaderField:@"Referer"];
        [req setValue:@"application/json" forHTTPHeaderField:@"Content-Type"];
        [req setValue:cookie forHTTPHeaderField:@"Cookie"];
        [req setValue:qqSign(body) forHTTPHeaderField:@"w-x-api-sign"];
        req.timeoutInterval = 12.0;
        NSDictionary *root = qqJSON(req, nil);
        NSDictionary *inner = root[@"req_1"];
        NSDictionary *d = inner[@"data"];
        NSString *purl = strOf(d[@"midurlinfo"][0][@"purl"]) ?: @"";
        NSString *sip = @"";
        NSArray *sips = d[@"sip"];
        if ([sips isKindOfClass:[NSArray class]] && sips.count) {
            sip = strOf(sips[0]) ?: @"";
        }
        if (purl.length) playURL = [sip stringByAppendingString:purl];
        WPLog(@"Music", @"[QQ] vkey code=%@ subcode=%@ purl=%@",
              inner[@"code"], inner[@"subcode"], purl.length ? @"OK" : @"空");

        // 3) 歌词（免签接口，base64；允许为空）
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
