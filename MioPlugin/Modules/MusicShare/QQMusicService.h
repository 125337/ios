#import <Foundation/Foundation.h>
#import "MusicSong.h"

NS_ASSUME_NONNULL_BEGIN

// QQ 音乐音源 · 搜索走官方免登录 web 接口 + 取流走 GetVkey 客户端接口（2026-10-24 定论，PC 实证）
//  - 搜索: c.y.qq.com/splcloud/fcgi-bin/smartbox_new.fcg（免登录）
//  - 详情: c.y.qq.com/v8/fcg-bin/fcg_play_single_song.fcg（数字 songid + albummid，免登录）
//  - 取流: u.y.qq.com/cgi-bin/musicu.fcg  module=music.vkey.GetVkey/UrlGetVkey
//          关键：UA 必须伪装 QQ 音乐安卓客户端 "QQMusic 20090008(android 15)"，
//          网页版 UA + 网页 Referer 会被风控 500003（PC 实证）。免登录免 QIMEI 免 sign。
//          免费歌全曲 filename=M500{mid}{mid}.mp3（双mid）；VIP 歌试听 RS02{mid}.mp3（单mid，~60s）。
//          purl 服务端已带 guid&vkey，拼 http://ws.stream.qqmusic.qq.com/ 直接可播。
// 历史：本地爬链（Cookie/g_tk/sign/vkey 网页通道）死于 QQ 500001 风控；宿主官方 MusicLiveSearch CGI
//       （黄白同款）在"官替已改"宿主上一调用即段错误。勿回头。
@interface QQMusicService : NSObject

// 搜索（completion 主线程回调）
+ (void)searchWithKeyword:(NSString *)keyword
               completion:(void (^)(NSArray<MusicSong *> *songs))completion;

// 取全量：流直链 + 播放页 + 封面（completion 主线程回调）
// playURL = 流直链（免费歌全曲 / VIP 歌 60s 试听），为空 = 连试听都没有
// pageURL = QQ 音乐官方播放页（type=3 卡 <url> 字段，点卡片主体打开）
+ (void)prepareSong:(MusicSong *)song
         completion:(void (^)(NSString *playURL, NSString *pageURL, NSString *coverURL, NSString *lrc))completion;

@end

NS_ASSUME_NONNULL_END
