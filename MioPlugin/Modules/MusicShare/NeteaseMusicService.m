#import "NeteaseMusicService.h"
#import "../../Core/LogManager.h"

// 网易云公开 web API 统一请求头（os=pc cookie 是免登录取直链的关键，实证见 scripts/_wyy_probe.py）
static NSMutableURLRequest *wyyRequest(NSString *urlString) {
    NSMutableURLRequest *req = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:urlString]];
    [req setValue:@"Mozilla/5.0 (iPhone; CPU iPhone OS 16_0 like Mac OS X) AppleWebKit/605.1.15" forHTTPHeaderField:@"User-Agent"];
    [req setValue:@"https://music.163.com/" forHTTPHeaderField:@"Referer"];
    [req setValue:@"os=pc; appver=8.9.75" forHTTPHeaderField:@"Cookie"];
    req.timeoutInterval = 10.0;
    return req;
}

// GET 请求回 JSON（NSURLSession 异步，回调在后台队列）
static void wyyJSON(NSString *urlString, void (^done)(NSDictionary *root)) {
    if (urlString.length == 0) { done(nil); return; }
    NSURLSessionDataTask *task = [[NSURLSession sharedSession] dataTaskWithRequest:wyyRequest(urlString)
        completionHandler:^(NSData *data, NSURLResponse *resp, NSError *err) {
            NSDictionary *root = nil;
            if (data.length && !err) {
                root = [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
                if (![root isKindOfClass:[NSDictionary class]]) root = nil;
            }
            done(root);
        }];
    [task resume];
}

static NSString *strOf(id v) {
    return [v isKindOfClass:[NSString class]] ? v : nil;
}

// 数组首元素（防空数组/类型不符时越界崩溃）
static id firstOf(id v) {
    if ([v isKindOfClass:[NSArray class]] && [(NSArray *)v count] > 0) return [(NSArray *)v firstObject];
    return nil;
}

@implementation NeteaseMusicService
#pragma mark - 搜索

+ (void)searchWithKeyword:(NSString *)keyword
               completion:(void (^)(NSArray<MusicSong *> *songs))completion {
    if (keyword.length == 0) { completion(@[]); return; }

    NSString *url = [NSString stringWithFormat:
        @"http://music.163.com/api/search/get/web?s=%@&type=1&limit=20&offset=0",
        [keyword stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLQueryAllowedCharacterSet]]];
    wyyJSON(url, ^(NSDictionary *root) {
        NSMutableArray<MusicSong *> *songs = [NSMutableArray array];
        NSArray *list = root[@"result"][@"songs"];
        if ([list isKindOfClass:[NSArray class]]) {
            for (NSDictionary *s in list) {
                if (![s isKindOfClass:[NSDictionary class]]) continue;
                MusicSong *song = [MusicSong new];
                song.source = 0;
                song.songId = [s[@"id"] stringValue];
                song.name = strOf(s[@"name"]) ?: @"";
                song.albumName = strOf(s[@"album"][@"name"]) ?: @"";
                NSMutableArray *singers = [NSMutableArray array];
                for (NSDictionary *si in s[@"artists"]) {
                    NSString *n = [si isKindOfClass:[NSDictionary class]] ? strOf(si[@"name"]) : nil;
                    if (n.length) [singers addObject:n];
                }
                song.singerName = [singers componentsJoinedByString:@"/"];
                if (song.songId.length && song.name.length) [songs addObject:song];
            }
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            WPLog(@"Music", @"[WYY] 搜索「%@」-> %lu 条", keyword, (unsigned long)songs.count);
            completion(songs);
        });
    });
}

#pragma mark - 发送前取全量（直链 + 封面 + LRC）

+ (void)prepareSong:(MusicSong *)song
         completion:(void (^)(NSString *playURL, NSString *coverURL, NSString *lrc))completion {
    NSString *sid = song.songId;
    __block NSString *playURL = nil, *coverURL = nil, *lrc = nil;

    // 直链 / 封面 / 歌词三个接口互不依赖，并发请求后汇总
    dispatch_group_t g = dispatch_group_create();

    dispatch_group_enter(g);
    wyyJSON([NSString stringWithFormat:
        @"http://music.163.com/api/song/enhance/player/url?ids=[%@]&br=320000", sid],
        ^(NSDictionary *u) {
            // 1) 播放直链（320k 请求，实际码率以返回为准；url 为空 = 无版权）
            playURL = strOf(firstOf(u[@"data"])[@"url"]);
            if (playURL.length == 0) {
                WPLog(@"Music", @"[WYY] id=%@ 无播放直链（版权/失败）", sid);
            }
            dispatch_group_leave(g);
        });

    dispatch_group_enter(g);
    wyyJSON([NSString stringWithFormat:
        @"http://music.163.com/api/song/detail/?id=%@&ids=[%@]", sid, sid],
        ^(NSDictionary *d) {
            // 2) 封面（song/detail 的 album.picUrl，允许为空）
            coverURL = strOf(firstOf(d[@"songs"])[@"album"][@"picUrl"]);
            dispatch_group_leave(g);
        });

    dispatch_group_enter(g);
    wyyJSON([NSString stringWithFormat:
        @"http://music.163.com/api/song/lyric?id=%@&lv=1&kv=1&tv=-1", sid],
        ^(NSDictionary *l) {
            // 3) LRC 歌词（允许为空）
            lrc = strOf(l[@"lrc"][@"lyric"]);
            dispatch_group_leave(g);
        });

    dispatch_group_notify(g, dispatch_get_main_queue(), ^{
        WPLog(@"Music", @"[WYY] prepare id=%@ url=%@ cover=%@ lrc=%lu字",
              sid, playURL.length ? @"OK" : @"无", coverURL.length ? @"OK" : @"无", (unsigned long)lrc.length);
        completion(playURL ?: @"", coverURL ?: @"", lrc ?: @"");
    });
}

@end
