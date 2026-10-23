#import <Foundation/Foundation.h>
#import "MusicSong.h"

NS_ASSUME_NONNULL_BEGIN

// QQ 音乐音源（搜索免签；取直链 = 本地 sign + 用户自己 Cookie，全程本地不经第三方）
// 实证记录（2026-10-23 PC）：搜索 client_search_cp 免签通；vkey 接口匿名全拒（500003/860100005，
// 有无 sign 一致 => 卡登录态而非签名）；sign 算法自 npm qqmusic-sign 包实证：
//   sign = "zza" + 随机10~16位字母数字 + md5_hex("CJBPACrRuNy7" + 请求体JSON)
// 带 Cookie 直调 u.y.qq.com 的链路尚未 PC 实证（PC 无登录态），插件内为首发验证路径。
@interface QQMusicService : NSObject

// 搜索（免签；completion 主线程回调）
+ (void)searchWithKeyword:(NSString *)keyword
               completion:(void (^)(NSArray<MusicSong *> *songs))completion;

// 取全量：播放直链 + 封面 + 歌词（需 Config.qqMusicCookie；completion 主线程回调，
// playURL 为空 = Cookie 失效/无版权/风控）
+ (void)prepareSong:(MusicSong *)song
         completion:(void (^)(NSString *playURL, NSString *coverURL, NSString *lrc))completion;

@end

NS_ASSUME_NONNULL_END
