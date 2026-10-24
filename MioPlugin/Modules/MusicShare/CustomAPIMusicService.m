#import "CustomAPIMusicService.h"
#import "MusicShareConfig.h"
#import "../../Core/LogManager.h"

// 请求 URL 拼接：前缀校验 + 追加 name 参数。
// 兼容三种填法（黄白说明书原样）：
//   https://xxx.com/hb.php?          → 追加 name=歌名
//   https://xxx.com/hb.php           → 补 ? 再追加 name=歌名
//   https://xxx.com/hb.php?n=1&...&  → 直接追加 name=歌名（用户自带参数）
//   末尾已带 name= / name             → 直接接歌名 / 补=后接歌名
static NSString *buildRequestURL(NSString *keyword) {
    NSString *base = [[MusicShareConfig shared].customAPIURL
        stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    if (![base hasPrefix:@"http://"] && ![base hasPrefix:@"https://"]) return nil;

    NSMutableString *url = [base mutableCopy];
    if ([base hasSuffix:@"name="]) {
        // 前缀已含 name=，直接接歌名
    } else if ([base hasSuffix:@"name"]) {
        [url appendString:@"="];
    } else {
        if (![base hasSuffix:@"?"] && ![base hasSuffix:@"&"]) {
            [url appendString:([base containsString:@"?"] ? @"&" : @"?")];
        }
        [url appendString:@"name="];
    }
    // 歌名按查询值编码（默认 URLQueryAllowedCharacterSet 不转义 & = ? # +，会破坏参数结构，显式剔除）
    NSMutableCharacterSet *allowed = [[NSCharacterSet URLQueryAllowedCharacterSet] mutableCopy];
    [allowed removeCharactersInString:@"&=?#+ "];
    NSString *enc = [keyword stringByAddingPercentEncodingWithAllowedCharacters:allowed];
    [url appendString:enc ?: @""];
    return url;
}

static NSString *strOf(id v) {
    return [v isKindOfClass:[NSString class]] ? v : nil;
}

@implementation CustomAPIMusicService

#pragma mark - 搜索

+ (void)searchWithKeyword:(NSString *)keyword
               completion:(void (^)(NSArray<MusicSong *> *songs))completion {
    if (keyword.length == 0) { completion(@[]); return; }

    NSString *url = buildRequestURL(keyword);
    if (url.length == 0) {
        WPLog(@"Music", @"[自定义] 接口地址无效或未填写，跳过请求");
        completion(@[]);
        return;
    }

    NSMutableURLRequest *req = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:url]];
    req.timeoutInterval = 10.0;
    [[NSURLSession sharedSession] dataTaskWithRequest:req
        completionHandler:^(NSData *data, NSURLResponse *resp, NSError *err) {
            NSMutableArray<MusicSong *> *songs = [NSMutableArray array];
            if (data.length && !err) {
                NSDictionary *root = [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
                if ([root isKindOfClass:[NSDictionary class]]) {
                    NSInteger code = [root[@"code"] integerValue];
                    if (code != 200) {
                        WPLog(@"Music", @"[自定义] code=%ld 非成功: %@", (long)code, url);
                    } else {
                        NSString *playURL = strOf(root[@"music_url"]);
                        if (playURL.length == 0) {
                            WPLog(@"Music", @"[自定义] music_url 为空: %@", url);
                        } else {
                            MusicSong *song = [MusicSong new];
                            song.source = 2;
                            song.songId = @"";
                            song.name = strOf(root[@"title"]) ?: keyword;
                            song.singerName = strOf(root[@"singer"]) ?: @"";
                            song.albumName = @"";
                            song.playURL = playURL;
                            song.pageURL = strOf(root[@"link"]);
                            song.coverURL = strOf(root[@"cover"]);
                            song.lrc = strOf(root[@"lyric"]);
                            [songs addObject:song];
                            WPLog(@"Music", @"[自定义] 命中: %@ - %@ (%@)", song.name, song.singerName, playURL);
                        }
                    }
                } else {
                    WPLog(@"Music", @"[自定义] 返回非 JSON 对象: %@", url);
                }
            } else {
                WPLog(@"Music", @"[自定义] 请求失败: %@ err=%@", url, err);
            }
            dispatch_async(dispatch_get_main_queue(), ^{
                completion(songs);
            });
        }] resume];
}

#pragma mark - 透传预取字段

+ (void)prepareSong:(MusicSong *)song
         completion:(void (^)(NSString *playURL, NSString *pageURL, NSString *coverURL, NSString *lrc))completion {
    // search 阶段已把黄白协议全量字段预填进 MusicSong，这里直接透传不发网络请求
    NSString *playURL = song.playURL ?: @"";
    completion(playURL,
               song.pageURL.length ? song.pageURL : playURL,
               song.coverURL ?: @"",
               song.lrc ?: @"");
}

@end
