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

// 黄白式音乐卡片（appmsg type=76，点击即播不跳转）
// 模板逐字段照抄黄白实机抓包（探针实证，2026-10-23）：
//   <url>/<lowurl>/<dataurl>/<lowdataurl> 四字段 = 同一个 mp3 直链（发送时实时获取、有时效）
//   <songalbumurl> = 封面；<songlyric> = LRC 全文（点开后的歌词页）
//   appid 照抄黄白 = QQ 音乐 wx3858261cdede9ca0；无 <?xml?> 声明、无 <action>
+ (void)sendSongCard:(MusicSong *)song
                  to:(NSString *)session
          completion:(void (^)(BOOL ok, NSString *errMsg))completion {
    WPLog(@"Music", @"[Card] 开始发送: %@ - %@ -> %@", song.name, song.singerName, session);
    NSInteger source = song.source;
    void (^finish)(NSString *playURL, NSString *coverURL, NSString *lrc) =
        ^(NSString *playURL, NSString *coverURL, NSString *lrc) {
        if (playURL.length == 0) {
            WPLog(@"Music", @"[Card] 无播放直链，放弃");
            NSString *hint = (source == 1)
                ? @"这首歌取不到播放直链（版权/地区限制），换一首试试"
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
        NSString *url = esc(playURL);
        // LRC 去换行内联成一行（黄白抓包同款形态）：带 \n 的 songlyric 会让
        // 严格解析的客户端（PC/部分版本）XML 解析失败，整条消息降级为纯文本
        NSString *inlineLrc = [lrc stringByReplacingOccurrencesOfString:@"\r" withString:@""];
        inlineLrc = [inlineLrc stringByReplacingOccurrencesOfString:@"\n" withString:@""];
        inlineLrc = [inlineLrc stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        NSString *xml = [NSString stringWithFormat:
            @"<msg><appmsg appid=\"wx3858261cdede9ca0\"  sdkver=\"0\">"
            "<title>%@</title><des>%@</des><type>76</type>"
            "<url>%@</url><lowurl>%@</lowurl><dataurl>%@</dataurl><lowdataurl>%@</lowdataurl>"
            "<songalbumurl>%@</songalbumurl>"
            "<songlyric>%@</songlyric>"
            "<appattach><cdnthumbaeskey></cdnthumbaeskey><aeskey></aeskey></appattach>"
            "</appmsg><appinfo><version>0</version><appname></appname>"
            "<isforceupdate>1</isforceupdate></appinfo></msg>",
            esc(song.name), esc(song.singerName),
            url, url, url, url,
            esc(coverURL), esc(inlineLrc)];

        // 结构化字段（179 探针从黄白发卡逐字段抓取，宿主 AddAppMsg 用它重建 XML）
        // 注意：des 对应 m_nsDesc（不是 m_nsDes）；四 url 字段同一直链；值传原文无需转义
        NSDictionary *extendFields = @{
            @"m_nsAppID": @"wx3858261cdede9ca0",
            @"m_nsTitle": song.name ?: @"",
            @"m_nsDesc": song.singerName ?: @"",
            @"m_uiAppMsgInnerType": @(76),
            @"m_nsAppMediaUrl": playURL,
            @"m_nsAppMediaLowUrl": playURL,
            @"m_nsAppMediaDataUrl": playURL,
            @"m_nsAppMediaLowBandDataUrl": playURL,
            @"m_nsSongAlbumUrl": coverURL ?: @"",
            @"m_nsSongLyric": inlineLrc,
            @"m_bIsForceUpdate": @(1),
        };

        BOOL ok = WXSendAppMessage(xml, session, extendFields);
        WPLog(@"Music", @"[Card] type=76 卡片发送%@ -> %@", ok ? @"成功" : @"失败", session);
        completion(ok, ok ? nil : @"发送通道异常，请看调试日志");
    };

    if (source == 1) {
        [QQMusicService prepareSong:song completion:finish];
        return;
    }
    [NeteaseMusicService prepareSong:song completion:finish];
}

@end
