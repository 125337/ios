#import <Foundation/Foundation.h>
#import "MusicSong.h"

NS_ASSUME_NONNULL_BEGIN

// QQ 音乐音源 · 微信官方通道（2026-10-24 定论）
// 直调宿主 WCFinderLiveSearchMusicCGI（视频号音乐搜索同款 CGI），响应自带
// 微信签发的 wx.music.tc.qq.com 直链 + 封面 + 歌词。零 hook、不碰 QQ 服务器。
// 旧本地爬链（Cookie/g_tk/sign/vkey）已废弃：QQ 500001 风控全线封死，勿恢复。
@interface QQMusicService : NSObject

// 搜索（completion 主线程回调；结果同时缓存全量数据供 prepareSong 取用）
+ (void)searchWithKeyword:(NSString *)keyword
               completion:(void (^)(NSArray<MusicSong *> *songs))completion;

// 取全量：直链 + 封面 + 歌词（来自搜索缓存，无网络请求；playURL 为空 = 搜索结果未含直链）
+ (void)prepareSong:(MusicSong *)song
         completion:(void (^)(NSString *playURL, NSString *coverURL, NSString *lrc))completion;

@end

NS_ASSUME_NONNULL_END
