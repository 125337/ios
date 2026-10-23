#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface MusicShareConfig : NSObject <ConfigModule>

// 总开关：关闭时点歌入口隐藏
@property (nonatomic, assign) BOOL musicShareEnabled;
// 音源：0=网易云（默认，免登录） 1=QQ 音乐（需 qqMusicCookie）
@property (nonatomic, assign) NSInteger musicSource;
// QQ 音乐网页版登录 Cookie（y.qq.com 登录后复制；本地直用，不经第三方）
@property (nonatomic, copy) NSString *qqMusicCookie;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
