#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

// 消息小尾巴配置（基础四字段与黄白同义；扩展字段为本项目自有，命名走本项目 camelCase 风格）
@interface MsgTailConfig : NSObject <ConfigModule>

// 文本尾巴总开关：开 → 自己发的文本消息自动附加 msgTail
@property (nonatomic, assign) BOOL enableMsgTail;
// 尾巴内容：直接追加到原文尾部（不加额外分隔符，用户自带换行/空格）
@property (nonatomic, copy)   NSString *msgTail;
// 快捷指令开关：开 → 发送内容 == msgTailShortcut 的文本不出网，翻转 enableMsgTail
@property (nonatomic, assign) BOOL msgTailShortcutEnabled;
// 快捷指令文本（全等匹配；空 = 不生效）
@property (nonatomic, copy)   NSString *msgTailShortcut;
// 应用图标模式：开 → 尾巴消息改发应用卡片形态（appid 图标卡片，点卡片无 url 无反应），
// 关 → 引用卡形态（气泡正文 + 灰字尾巴）。两种形态共用 msgTail 尾巴内容
@property (nonatomic, assign) BOOL enableAppTail;
// 应用尾巴来源 appid（Moments 预设池点选落盘）：空 = 默认（腾讯手机管家）
@property (nonatomic, copy)   NSString *appTailAppId;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
