#import <Foundation/Foundation.h>
#import "MusicSong.h"

NS_ASSUME_NONNULL_BEGIN

// 音乐分享核心逻辑（纯逻辑无 UI）：搜索分发 + 音乐卡片发送。
// MusicShareVC（配置页）与 MusicShareCommandHook（指令点歌）共用同一入口。
// 音源策略：配置选哪个就走哪个，不保底不回退（网易云自建接口；QQ 音乐官方接口暂未接入）。
@interface MusicShareService : NSObject

// 搜索（completion 主线程回调；songs 为空 = 无结果/未接入/网络失败）
+ (void)searchWithKeyword:(NSString *)keyword
               completion:(void (^)(NSArray<MusicSong *> *songs))completion;

// 发送音乐卡片到指定会话（appmsg type=76，黄白同款点击即播；completion 主线程回调）
+ (void)sendSongCard:(MusicSong *)song
                  to:(NSString *)session
          completion:(void (^)(BOOL ok, NSString *errMsg))completion;

@end

NS_ASSUME_NONNULL_END
