#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// QQ 音乐搜索结果（musicu.fcg 公开接口，无需登录/vkey）
@interface QQSong : NSObject
@property (nonatomic, copy) NSString *songmid;    // 歌曲 mid（播放页链接用）
@property (nonatomic, copy) NSString *name;       // 歌名
@property (nonatomic, copy) NSString *singerName; // 歌手（多人 / 拼接）
@property (nonatomic, copy) NSString *subtitle;   // 副标题（如专辑/剧集说明，可空）
@property (nonatomic, copy) NSString *albumMid;   // 专辑 mid（封面图床用）
@property (nonatomic, assign) NSInteger interval; // 时长（秒）
// 官方播放页链接（卡片 musicurl）
- (NSString *)playPageURL;
// 专辑封面（QQ 官方图床 300x300）
- (NSString *)coverURL;
@end

@interface QQMusicService : NSObject

// 搜索（主线程调用；completion 主线程回调，songs 为空 = 无结果/网络失败）
+ (void)searchWithKeyword:(NSString *)keyword
               completion:(void (^)(NSArray<QQSong *> *songs))completion;

@end

NS_ASSUME_NONNULL_END
