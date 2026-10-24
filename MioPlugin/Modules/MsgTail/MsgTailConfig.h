#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

// 消息小尾巴配置（黄白同款四字段，key 与黄白 HBConfigUtil 一一对应，见
// 黄白助手反编译/消息小尾巴实现分析.md §五）
@interface MsgTailConfig : NSObject <ConfigModule>

// 文本尾巴总开关：开 → 自己发的文本消息自动附加 msgTail
@property (nonatomic, assign) BOOL enableMsgTail;
// 尾巴内容：直接追加到原文尾部（不加额外分隔符，用户自带换行/空格）
@property (nonatomic, copy)   NSString *msgTail;
// 快捷指令开关：开 → 发送内容 == msgTailShortcut 的文本不出网，翻转 enableMsgTail
@property (nonatomic, assign) BOOL msgTailShortcutEnabled;
// 快捷指令文本（全等匹配；空 = 不生效）
@property (nonatomic, copy)   NSString *msgTailShortcut;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
