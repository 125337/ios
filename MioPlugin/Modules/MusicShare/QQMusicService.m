#import "QQMusicService.h"
#import "../../Core/LogManager.h"

@implementation QQSong

- (NSString *)playPageURL {
    // QQ 音乐官方播放页：微信音乐卡片点击跳转/内嵌播放由它承载
    return [NSString stringWithFormat:@"https://i.y.qq.com/v8/playsong.html?songmid=%@&ADTAG=mio", self.songmid];
}

- (NSString *)coverURL {
    if (self.albumMid.length == 0) return nil;
    return [NSString stringWithFormat:@"https://y.gtimg.cn/music/photo_new/T002R300x300M000%@.jpg", self.albumMid];
}

@end

@implementation QQMusicService

// 2026-10-22 实证：musicu.fcg 无需登录，仅需 Referer: https://y.qq.com/；
// 响应取 data.body.song.list[]，字段 mid/name/singer[].name/album.mid/subtitle/interval
+ (void)searchWithKeyword:(NSString *)keyword
               completion:(void (^)(NSArray<QQSong *> *songs))completion {
    if (keyword.length == 0) { completion(@[]); return; }

    NSDictionary *payload = @{
        @"music.search.SearchCgiService": @{
            @"module": @"music.search.SearchCgiService",
            @"method": @"DoSearchForQQMusicDesktop",
            @"param": @{ @"search_type": @0,
                         @"query": keyword,
                         @"page_num": @1,
                         @"num_per_page": @20 },
        },
    };
    NSData *body = [NSJSONSerialization dataWithJSONObject:payload options:0 error:nil];
    NSMutableURLRequest *req = [NSMutableURLRequest requestWithURL:
        [NSURL URLWithString:@"https://u.y.qq.com/cgi-bin/musicu.fcg"]];
    req.HTTPMethod = @"POST";
    req.HTTPBody = body;
    [req setValue:@"application/json" forHTTPHeaderField:@"Content-Type"];
    [req setValue:@"https://y.qq.com/" forHTTPHeaderField:@"Referer"];
    req.timeoutInterval = 10.0;

    NSURLSessionDataTask *task = [[NSURLSession sharedSession] dataTaskWithRequest:req
        completionHandler:^(NSData *data, NSURLResponse *resp, NSError *err) {
        NSMutableArray<QQSong *> *songs = [NSMutableArray array];
        if (data && !err) {
            @try {
                NSDictionary *root = [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
                NSDictionary *songBody = root[@"music.search.SearchCgiService"][@"data"][@"body"][@"song"];
                NSArray *list = songBody[@"list"];
                if ([list isKindOfClass:[NSArray class]]) {
                    for (NSDictionary *s in list) {
                        if (![s isKindOfClass:[NSDictionary class]]) continue;
                        NSString *mid = [s[@"mid"] isKindOfClass:[NSString class]] ? s[@"mid"] : nil;
                        NSString *name = [s[@"name"] isKindOfClass:[NSString class]] ? s[@"name"] : nil;
                        if (mid.length == 0 || name.length == 0) continue;

                        QQSong *song = [QQSong new];
                        song.songmid = mid;
                        song.name = name;
                        song.subtitle = [s[@"subtitle"] isKindOfClass:[NSString class]] ? s[@"subtitle"] : @"";
                        song.albumMid = [s[@"album"][@"mid"] isKindOfClass:[NSString class]] ? s[@"album"][@"mid"] : @"";
                        song.interval = [s[@"interval"] respondsToSelector:@selector(integerValue)] ? [s[@"interval"] integerValue] : 0;

                        NSMutableArray *singers = [NSMutableArray array];
                        for (NSDictionary *si in s[@"singer"]) {
                            NSString *n = [si isKindOfClass:[NSDictionary class]] ? si[@"name"] : nil;
                            if (n.length) [singers addObject:n];
                        }
                        song.singerName = [singers componentsJoinedByString:@"/"];

                        [songs addObject:song];
                    }
                }
            } @catch (NSException *e) {
                WPLog(@"Music", @"[QQMusic] 解析异常: %@", e);
            }
        } else {
            WPLog(@"Music", @"[QQMusic] 搜索失败: %@", err);
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            WPLog(@"Music", @"[QQMusic] 搜索「%@」-> %lu 条", keyword, (unsigned long)songs.count);
            completion(songs);
        });
    }];
    [task resume];
}

@end
