#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface MusicShareConfig : NSObject <ConfigModule>

// 总开关：关闭时音乐分享入口与指令点歌全部停用
@property (nonatomic, assign) BOOL musicShareEnabled;
// 音源：0=网易云（自建接口，默认） 1=QQ 音乐（微信官方搜索与发送接口，暂未接入）
@property (nonatomic, assign) NSInteger musicSource;

// ===== 指令点歌（收到「点歌 歌名」文本自动搜歌发卡到该会话） =====
@property (nonatomic, assign) BOOL commandEnabled;   // 指令点歌总开关（默认关）
@property (nonatomic, copy)   NSString *commandKeyword; // 触发词前缀（默认「点歌」）
@property (nonatomic, assign) BOOL replyInGroup;     // 群聊响应
@property (nonatomic, assign) BOOL replyInPrivate;   // 私聊响应
@property (nonatomic, assign) BOOL replyToSelf;      // 响应自己发出的消息（默认关，防手动测试双发）
@property (nonatomic, assign) BOOL failNotice;       // 搜不到时回文本「未找到歌曲：xxx」

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
