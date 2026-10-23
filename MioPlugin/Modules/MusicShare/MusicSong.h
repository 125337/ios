#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 跨音源统一歌曲模型（网易云 id / QQ songmid 都存字符串主键，字段语义两端对齐）
@interface MusicSong : NSObject
@property (nonatomic, copy) NSString *songId;     // 网易云=数字id字符串 / QQ=songmid
@property (nonatomic, copy) NSString *name;       // 歌名
@property (nonatomic, copy) NSString *singerName; // 歌手（多人 / 拼接）
@property (nonatomic, copy) NSString *albumName;  // 专辑名
@property (nonatomic, copy) NSString *albumMid;   // QQ 专用：封面 albummid（网易云为空）
@property (nonatomic, assign) NSInteger source;   // 0=网易云 1=QQ
@end

NS_ASSUME_NONNULL_END
