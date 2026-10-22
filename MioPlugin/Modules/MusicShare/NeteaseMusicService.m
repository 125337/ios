#import "NeteaseMusicService.h"
#import "../../Core/LogManager.h"

// 网易云公开 web API 统一请求头（os=pc cookie 是免登录取直链的关键，实证见 scripts/_wyy_probe.py）
static NSURLRequest *wyyRequest(NSString *urlString) {
    NSMutableURLRequest *req = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:urlString]];
    [req setValue:@"Mozilla/5.0 (iPhone; CPU iPhone OS 16_0 like Mac OS X) AppleWebKit/605.1.15" forHTTPHeaderField:@"User-Agent"];
    [req setValue:@"https://music.163.com/" forHTTPHeaderField:@"Referer"];
    [req setValue:@"os=pc; appver=8.9.75" forHTTPHeaderField:@"Cookie"];
    req.timeoutInterval = 10.0;
    return req;
}

static NSDictionary *wyyJSON(NSString *urlString, NSError **err) {
    NSURLRequest *req = wyyRequest(urlString);
    NSURLResponse *resp = nil;
    NSData *data = [NSURLConnection sendSynchronousRequest:req returningResponse:&resp error:err];
    if (!data || (err && *err)) return nil;
    return [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
}

static NSString *strOf(id v) {
    return [v isKindOfClass:[NSString class]] ? v : nil;
}

@implementation NeteaseSong
@end

@implementation NeteaseMusicService

#pragma mark - 搜索

+ (void)searchWithKeyword:(NSString *)keyword
               completion:(void (^)(NSArray<NeteaseSong *> *songs))completion {
    if (keyword.length == 0) { completion(@[]); return; }

    dispatch_async(dispatch_get_global_queue(QOS_CLASS_USER_INITIATED, 0), ^{
        NSMutableArray<NeteaseSong *> *songs = [NSMutableArray array];
        NSString *url = [NSString stringWithFormat:
            @"http://music.163.com/api/search/get/web?s=%@&type=1&limit=20&offset=0",
            [keyword stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLQueryAllowedCharacterSet]]];
        NSDictionary *root = wyyJSON(url, nil);
        NSArray *list = root[@"result"][@"songs"];
        if ([list isKindOfClass:[NSArray class]]) {
            for (NSDictionary *s in list) {
                if (![s isKindOfClass:[NSDictionary class]]) continue;
                NeteaseSong *song = [NeteaseSong new];
                song.songId = [s[@"id"] longLongValue];
                song.name = strOf(s[@"name"]) ?: @"";
                song.albumName = strOf(s[@"album"][@"name"]) ?: @"";
                song.duration = [s[@"duration"] respondsToSelector:@selector(integerValue)] ? [s[@"duration"] integerValue] : 0;
                NSMutableArray *singers = [NSMutableArray array];
                for (NSDictionary *si in s[@"artists"]) {
                    NSString *n = [si isKindOfClass:[NSDictionary class]] ? strOf(si[@"name"]) : nil;
                    if (n.length) [singers addObject:n];
                }
                song.singerName = [singers componentsJoinedByString:@"/"];
                if (song.songId > 0 && song.name.length) [songs addObject:song];
            }
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            WPLog(@"Music", @"[WYY] 搜索「%@」-> %lu 条", keyword, (unsigned long)songs.count);
            completion(songs);
        });
    });
}

#pragma mark - 发送前取全量（直链 + 封面 + LRC）

+ (void)prepareSong:(NeteaseSong *)song
         completion:(void (^)(NSString *playURL, NSString *coverURL, NSString *lrc))completion {
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_USER_INITIATED, 0), ^{
        NSString *playURL = nil, *coverURL = nil, *lrc = nil;

        // 1) 播放直链（320k 请求，实际码率以返回为准；url 为空 = 无版权）
        NSDictionary *u = wyyJSON([NSString stringWithFormat:
            @"http://music.163.com/api/song/enhance/player/url?ids=[%lld]&br=320000", song.songId], nil);
        playURL = strOf(u[@"data"][0][@"url"]);
        if (playURL.length == 0) {
            WPLog(@"Music", @"[WYY] id=%lld 无播放直链（版权/失败）", song.songId);
        }

        // 2) 封面（song/detail 的 album.picUrl，允许为空）
        NSDictionary *d = wyyJSON([NSString stringWithFormat:
            @"http://music.163.com/api/song/detail/?id=%lld&ids=[%lld]", song.songId, song.songId], nil);
        coverURL = strOf(d[@"songs"][0][@"album"][@"picUrl"]);

        // 3) LRC 歌词（允许为空）
        NSDictionary *l = wyyJSON([NSString stringWithFormat:
            @"http://music.163.com/api/song/lyric?id=%lld&lv=1&kv=1&tv=-1", song.songId], nil);
        lrc = strOf(l[@"lrc"][@"lyric"]);

        dispatch_async(dispatch_get_main_queue(), ^{
            WPLog(@"Music", @"[WYY] prepare id=%lld url=%@ cover=%@ lrc=%lu字",
                  song.songId, playURL.length ? @"OK" : @"无", coverURL.length ? @"OK" : @"无", (unsigned long)lrc.length);
            completion(playURL ?: @"", coverURL ?: @"", lrc ?: @"");
        });
    });
}

@end
