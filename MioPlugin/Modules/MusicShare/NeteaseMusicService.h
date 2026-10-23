#import <Foundation/Foundation.h>
#import "MusicSong.h"

NS_ASSUME_NONNULL_BEGIN

// 网易云音源三件套（2026-10-23 PC 实证：搜索/320k mp3 直链/LRC 歌词/封面全通，
// 免签免登录，关键 Cookie: os=pc）
@interface NeteaseMusicService : NSObject

// 搜索（主线程调用；completion 主线程回调，songs 为空 = 无结果/网络失败）
+ (void)searchWithKeyword:(NSString *)keyword
               completion:(void (^)(NSArray<MusicSong *> *songs))completion;

// 发送前取全量：播放直链 + 封面 + LRC 歌词（completion 主线程回调；
// playURL 为空 = 无版权/失败，封面与歌词允许为空——卡片核心只需 title/des/type76/url）
+ (void)prepareSong:(MusicSong *)song
         completion:(void (^)(NSString *playURL, NSString *coverURL, NSString *lrc))completion;

@end

NS_ASSUME_NONNULL_END
