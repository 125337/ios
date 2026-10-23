#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface MusicShareConfig : NSObject <ConfigModule>

// 总开关：关闭时音乐分享入口与指令点歌全部停用
@property (nonatomic, assign) BOOL musicShareEnabled;
// 音源：0=网易云（自建接口，默认） 1=QQ 音乐（本地爬链：搜索免签；直链需 Cookie）
@property (nonatomic, assign) NSInteger musicSource;
// QQ 音乐 web 端 Cookie（含 uin/qm_keyst，取直链用；从浏览器登录 y.qq.com 后粘贴）
@property (nonatomic, copy)   NSString *qqMusicCookie;

// ===== 点歌设置（收到「点歌 歌名」文本自动搜歌发卡到该会话） =====
@property (nonatomic, copy)   NSString *commandKeyword; // 触发词前缀（默认「点歌」）
@property (nonatomic, assign) BOOL replyInGroup;     // 启用群聊点歌功能
@property (nonatomic, assign) BOOL replyInPrivate;   // 启用私聊点歌功能
@property (nonatomic, copy)   NSArray<NSString *> *songGroupWhitelist; // 点歌群聊白名单（仅白名单内的群生效，空=不生效）
@property (nonatomic, assign) BOOL failNotice;       // 搜不到时回文本「未找到歌曲：xxx」

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
