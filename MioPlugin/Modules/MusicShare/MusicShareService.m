#import "MusicShareService.h"
#import "MusicShareConfig.h"
#import "NeteaseMusicService.h"
#import "QQMusicService.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/LogManager.h"

@implementation MusicShareService

#pragma mark - 搜索分发

+ (void)searchWithKeyword:(NSString *)keyword
               completion:(void (^)(NSArray<MusicSong *> *songs))completion {
    NSInteger source = [MusicShareConfig shared].musicSource;
    if (source == 1) {
        [QQMusicService searchWithKeyword:keyword completion:completion];
        return;
    }
    [NeteaseMusicService searchWithKeyword:keyword completion:completion];
}

#pragma mark - 音乐卡片发送

// 音乐卡片（发送链路已跑通：AddAppMsg + extendInfo，勿动）
// 网易源 → 黄白式 type=76 卡（点击即播），模板逐字段照抄黄白实机抓包：
//   <url>/<lowurl>/<dataurl>/<lowdataurl> 四字段 = 同一 mp3 直链；<songalbumurl>=封面；<songlyric>=LRC
// QQ 源 → 经典 type=3 音乐分享卡（QQ 音乐 App 分享同款）：
//   <url>=官方播放页（点卡片主体打开）；<dataurl>=流直链（点 ▶ 客户端直接播，免费歌全曲/VIP 歌 60s 试听，
//   取流定论见 QQMusicService.m 头注释；两源都有流后此差异仅剩 type 与 url 指向）
+ (void)sendSongCard:(MusicSong *)song
                  to:(NSString *)session
          completion:(void (^)(BOOL ok, NSString *errMsg))completion {
    WPLog(@"Music", @"[Card] 开始发送: %@ - %@ -> %@", song.name, song.singerName, session);
    NSInteger source = song.source;
    BOOL isQQ = (source == 1);
    void (^finish)(NSString *playURL, NSString *pageURL, NSString *coverURL, NSString *lrc) =
        ^(NSString *playURL, NSString *pageURL, NSString *coverURL, NSString *lrc) {
        if (playURL.length == 0 && pageURL.length == 0) {
            WPLog(@"Music", @"[Card] 无流无页面，放弃");
            NSString *hint = isQQ
                ? @"这首歌连试听片段都取不到（版权/地区限制），换一首试试"
                : @"这首歌取不到播放直链（版权限制），换一首试试";
            completion(NO, hint);
            return;
        }
        NSString *(^esc)(NSString *) = ^NSString *(NSString *s) {
            if (s.length == 0) return @"";
            NSMutableString *m = [s mutableCopy];
            [m replaceOccurrencesOfString:@"&" withString:@"&amp;" options:0 range:NSMakeRange(0, m.length)];
            [m replaceOccurrencesOfString:@"<" withString:@"&lt;" options:0 range:NSMakeRange(0, m.length)];
            [m replaceOccurrencesOfString:@">" withString:@"&gt;" options:0 range:NSMakeRange(0, m.length)];
            return (NSString *)m;
        };
        // <url> = 页面（QQ 官方播放页；网易=流），<dataurl> = 流直链（播放键直接播）
        NSString *url = esc(pageURL.length ? pageURL : playURL);
        NSString *dataUrl = esc(playURL);
        NSInteger innerType = isQQ ? 3 : 76;
        // LRC 去换行内联成一行（黄白抓包同款形态）：带 \n 的 songlyric 会让
        // 严格解析的客户端（PC/部分版本）XML 解析失败，整条消息降级为纯文本
        NSString *inlineLrc = [lrc stringByReplacingOccurrencesOfString:@"\r" withString:@""];
        inlineLrc = [inlineLrc stringByReplacingOccurrencesOfString:@"\n" withString:@""];
        inlineLrc = [inlineLrc stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        NSString *xml = [NSString stringWithFormat:
            @"<msg><appmsg appid=\"wx3858261cdede9ca0\"  sdkver=\"0\">"
            "<title>%@</title><des>%@</des><type>%ld</type>"
            "<url>%@</url><lowurl>%@</lowurl><dataurl>%@</dataurl><lowdataurl>%@</lowdataurl>"
            "<songalbumurl>%@</songalbumurl>"
            "<songlyric>%@</songlyric>"
            "<appattach><cdnthumbaeskey></cdnthumbaeskey><aeskey></aeskey></appattach>"
            "</appmsg><appinfo><version>0</version><appname></appname>"
            "<isforceupdate>1</isforceupdate></appinfo></msg>",
            esc(song.name), esc(song.singerName), (long)innerType,
            url, url, dataUrl, dataUrl,
            esc(coverURL), esc(inlineLrc)];

        // 结构化字段（179 探针从黄白发卡逐字段抓取，宿主 AddAppMsg 用它重建 XML）
        // 注意：des 对应 m_nsDesc（不是 m_nsDes）；值传原文无需转义
        NSString *rawPage = pageURL.length ? pageURL : playURL;
        NSDictionary *extendFields = @{
            @"m_nsAppID": @"wx3858261cdede9ca0",
            @"m_nsTitle": song.name ?: @"",
            @"m_nsDesc": song.singerName ?: @"",
            @"m_uiAppMsgInnerType": @(innerType),
            @"m_nsAppMediaUrl": rawPage,
            @"m_nsAppMediaLowUrl": rawPage,
            @"m_nsAppMediaDataUrl": playURL,
            @"m_nsAppMediaLowBandDataUrl": playURL,
            @"m_nsSongAlbumUrl": coverURL ?: @"",
            @"m_nsSongLyric": inlineLrc,
            @"m_bIsForceUpdate": @(1),
        };

        BOOL ok = WXSendAppMessage(xml, session, extendFields);
        WPLog(@"Music", @"[Card] type=%ld 卡片发送%@ -> %@", (long)innerType, ok ? @"成功" : @"失败", session);
        completion(ok, ok ? nil : @"发送通道异常，请看调试日志");
    };

    if (source == 1) {
        [QQMusicService prepareSong:song completion:finish];
        return;
    }
    [NeteaseMusicService prepareSong:song completion:finish];
}

@end
