#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface MusicShareConfig : NSObject <ConfigModule>

// 总开关：关闭时音乐分享入口与指令点歌全部停用
@property (nonatomic, assign) BOOL musicShareEnabled;
// 音源：0=网易云（公开 web API 免登录直链，默认） 1=QQ 音乐（客户端 UA 伪装免登录取流，定论见
//       文档/点歌功能/QQ音乐音源/ 与 网易云音源/ 文件夹）
@property (nonatomic, assign) NSInteger musicSource;
// 卡片来源 appid（appmsg/m_nsAppID）：空=自动跟随音源官方（QQ→wx5aa333606550dfd5，网易→wx8dd6ecd81906fd84）；
// 非空=从 Moments 内置预设池选定的伪装 appid（appid 在音乐卡渲染中仅是来源标识，可任意填，黄白乱填喵喵机也正常）
@property (nonatomic, copy)   NSString *cardAppId;

// ===== 点歌设置（收到「点歌 歌名」文本自动搜歌发卡到该会话） =====
@property (nonatomic, copy)   NSString *commandKeyword; // 触发词前缀（默认「点歌」）
@property (nonatomic, assign) BOOL replyInGroup;     // 启用群聊点歌功能
@property (nonatomic, assign) BOOL replyInPrivate;   // 启用私聊点歌功能
@property (nonatomic, copy)   NSArray<NSString *> *songGroupWhitelist; // 点歌群聊白名单（仅白名单内的群生效，空=不生效）
@property (nonatomic, assign) BOOL failNotice;       // 搜不到时回文本「未找到歌曲：xxx」

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
