#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 跨音源统一歌曲模型（网易云 id / QQ songmid 都存字符串主键，字段语义两端对齐）
@interface MusicSong : NSObject
@property (nonatomic, copy) NSString *songId;     // 网易云=数字id字符串 / QQ=songmid / 自定义接口=空
@property (nonatomic, copy) NSString *name;       // 歌名
@property (nonatomic, copy) NSString *singerName; // 歌手（多人 / 拼接）
@property (nonatomic, copy) NSString *albumName;  // 专辑名
@property (nonatomic, copy) NSString *albumMid;   // QQ 专用：封面 albummid（网易云为空）
@property (nonatomic, assign) NSInteger source;   // 0=网易云 1=QQ 2=自定义接口

// ===== 预取结果（仅 source=2 自定义接口填充：黄白协议一次请求回全量，search 阶段即带齐，
//       prepareSong 直接透传不发网络请求；网易云/QQ 恒为 nil，发卡走各自 prepareSong）=====
@property (nonatomic, copy, nullable) NSString *playURL;  // 播放直链（music_url）
@property (nonatomic, copy, nullable) NSString *pageURL;  // 播放页（link，可空）
@property (nonatomic, copy, nullable) NSString *coverURL; // 封面（可空）
@property (nonatomic, copy, nullable) NSString *lrc;      // LRC 歌词（可空）
@end

NS_ASSUME_NONNULL_END
