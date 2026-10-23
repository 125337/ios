#import "QQMusicService.h"
#import <objc/message.h>
#import "../../Core/LogManager.h"

// QQ 音乐音源 · 微信官方通道（2026-10-24 定论）
// 原理：宿主自带官方音乐搜索 CGI（视频号音乐搜索同款），一次请求响应里就带全
//       微信签发的 wx.music.tc.qq.com 直链 + 封面 + 歌词（黄白实机卡片字段同源，
//       见 179 探针日志与《音乐卡片发送链路_终版定论.md》）。
// 用法：直接实例化 WCFinderLiveSearchMusicCGI 并 -start，零 hook、不碰 QQ 服务器。
//       本地爬链（Cookie/g_tk/sign/vkey）已随 QQ 500001 风控整体废弃删除。
// 响应结构（8.0.60/8.0.78 头文件一致）：
//   MusicLiveSearchMusicRespInfo = { songName, singerNames, musicDataUrl, musicWeburl,
//       albumCoverUrl, durationMs, identification, mid, audioType, lyric, ... }

// 搜索结果的全量数据缓存（mid → url/cover/lrc），供 prepareSong 即时取用
static NSMutableDictionary<NSString *, NSDictionary *> *s_detailCache = nil;

// 从结果对象按候选 selector 名取字符串字段（结果对象可能是 MusicLiveSearchMusicRespInfo
// 原文，也可能是宿主 convertMusicItemList 转换后的包装项，多形状兼容）
static NSString *fieldOf(id item, NSArray<NSString *> *names) {
    for (NSString *n in names) {
        SEL sel = sel_registerName(n.UTF8String);
        if (!sel || ![item respondsToSelector:sel]) continue;
        id v = ((id (*)(id, SEL))objc_msgSend)(item, sel);
        if ([v isKindOfClass:[NSString class]] && v.length) return v;
        if ([v isKindOfClass:[NSArray class]]) {
            NSMutableArray *parts = [NSMutableArray array];
            for (id e in v) {
                if ([e isKindOfClass:[NSString class]] && e.length) [parts addObject:e];
            }
            if (parts.count) return [parts componentsJoinedByString:@"/"];
        }
    }
    return @"";
}

static MusicSong *songFromItem(id item) {
    NSString *mid = fieldOf(item, @[@"mid", @"songMid"]);
    NSString *name = fieldOf(item, @[@"songName", @"title"]);
    if (mid.length == 0 || name.length == 0) return nil;

    NSString *url = fieldOf(item, @[@"musicDataUrl"]);
    NSString *cover = fieldOf(item, @[@"albumCoverUrl"]);
    NSString *lrc = fieldOf(item, @[@"lyric"]);
    // 兼容包装项：字段取不到时尝试 musicInfo / info 子对象（RespInfoDetail{type, musicInfo}）
    if (url.length == 0 && cover.length == 0) {
        for (NSString *childName in @[@"musicInfo", @"info"]) {
            SEL sel = sel_registerName(childName.UTF8String);
            if (![item respondsToSelector:sel]) continue;
            id child = ((id (*)(id, SEL))objc_msgSend)(item, sel);
            if (![child isKindOfClass:[NSString class]] && child) {
                url = fieldOf(child, @[@"musicDataUrl"]);
                cover = fieldOf(child, @[@"albumCoverUrl"]);
                lrc = lrc.length ? lrc : fieldOf(child, @[@"lyric"]);
                if (url.length) break;
            }
        }
    }

    if (!s_detailCache) s_detailCache = [NSMutableDictionary dictionary];
    if (url.length) s_detailCache[mid] = @{@"url": url, @"cover": cover, @"lrc": lrc};

    MusicSong *song = [MusicSong new];
    song.source = 1;
    song.songId = mid;
    song.name = name;
    song.singerName = fieldOf(item, @[@"singerNames", @"singerName"]);
    return song;
}

@implementation QQMusicService

#pragma mark - 搜索（宿主官方 CGI，响应自带直链/封面/歌词并缓存）

+ (void)searchWithKeyword:(NSString *)keyword
               completion:(void (^)(NSArray<MusicSong *> *songs))completion {
    if (keyword.length == 0) { completion(@[]); return; }

    Class cls = objc_getClass("WCFinderLiveSearchMusicCGI");
    if (!cls) {
        WPLog(@"Music", @"[QQ] 宿主无 WCFinderLiveSearchMusicCGI，官方搜索不可用");
        completion(@[]);
        return;
    }

    WPLog(@"Music", @"[QQ] 官方搜索「%@」", keyword);
    id cgi = [[cls alloc] initWithFinderTaskId:[[NSUUID UUID] UUIDString]
                                    searchText:keyword
                                    lastBuffer:nil
                                   liveCookies:nil
                                  successBlock:^(NSArray *items) {
        NSMutableArray<MusicSong *> *songs = [NSMutableArray array];
        if ([items isKindOfClass:[NSArray class]]) {
            for (id item in items) {
                if (!item) continue;
                MusicSong *s = songFromItem(item);
                if (s) [songs addObject:s];
                else WPLog(@"Music", @"[QQ] 结果项无法解析 class=%@ obj=%@",
                           NSStringFromClass([item class]), item);
            }
        } else {
            WPLog(@"Music", @"[QQ] successBlock 收到非数组 class=%@ obj=%@",
                  items ? NSStringFromClass([items class]) : @"nil", items);
        }
        WPLog(@"Music", @"[QQ] 官方搜索「%@」-> %lu 条", keyword, (unsigned long)songs.count);
        dispatch_async(dispatch_get_main_queue(), ^{ completion(songs); });
    }
    failBlock:^(id err) {
        WPLog(@"Music", @"[QQ] 官方搜索失败: %@", err);
        dispatch_async(dispatch_get_main_queue(), ^{ completion(@[]); });
    }];
    [cgi start];
}

#pragma mark - 取全量（搜索响应已缓存，无网络请求）

+ (void)prepareSong:(MusicSong *)song
         completion:(void (^)(NSString *playURL, NSString *coverURL, NSString *lrc))completion {
    dispatch_async(dispatch_get_main_queue(), ^{
        NSDictionary *d = s_detailCache[song.songId];
        if (!d) {
            WPLog(@"Music", @"[QQ] 缓存未命中 mid=%@（搜索结果未含直链，版权/地区限制可能）", song.songId);
            completion(@"", @"", @"");
            return;
        }
        WPLog(@"Music", @"[QQ] prepare mid=%@ url=%@ cover=%@ lrc=%lu字",
              song.songId,
              [d[@"url"] length] ? @"OK" : @"无",
              [d[@"cover"] length] ? @"OK" : @"无",
              (unsigned long)[d[@"lrc"] length]);
        completion(d[@"url"] ?: @"", d[@"cover"] ?: @"", d[@"lrc"] ?: @"");
    });
}

@end
