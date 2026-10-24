#import <Foundation/Foundation.h>
#import "MusicSong.h"

NS_ASSUME_NONNULL_BEGIN

// 自定义接口音源 · 黄白协议点歌服务器（字段协议对齐黄白助手，市面现成服务器即插即用）
// 请求：用户在配置填服务器前缀（可自带 n=1/br=1 等参数），客户端追加 name=<URL编码歌名>
// 返回：{"code":200,"title":"..","singer":"..","cover":"..","link":"..","music_url":"..","lyric":"可选"}
//       code=状态码(200成功) title=标题 singer=歌手 cover=封面 link=播放页 music_url=可播直链 lyric=歌词(可选)
// 一次请求回全量 → search 阶段即把 playURL/pageURL/coverURL/lrc 预填进 MusicSong，
// prepareSong 直接透传不再发网络请求。
// 失败语义：地址无效/网络失败/JSON解析失败/code!=200/music_url 空 → 统一返回空数组（表现为无搜索结果）
@interface CustomAPIMusicService : NSObject

// 搜索（completion 主线程回调）
+ (void)searchWithKeyword:(NSString *)keyword
               completion:(void (^)(NSArray<MusicSong *> *songs))completion;

// 透传 search 阶段预填的全量字段（不发网络请求；completion 主线程回调）
+ (void)prepareSong:(MusicSong *)song
         completion:(void (^)(NSString *playURL, NSString *pageURL, NSString *coverURL, NSString *lrc))completion;

@end

NS_ASSUME_NONNULL_END
