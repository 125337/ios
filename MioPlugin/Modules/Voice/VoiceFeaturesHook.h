#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 语音功能 Hook（WCR 反编译逐条复刻，2026-09-22）：
/// ① 假秒数 ② 自动转文字 ③ 进度拖动 ④ 自动倍速 ⑤ 背景播放 ⑥ 通话播放 ⑦ 语音转发
/// 所有类名/选择器反射 + respondsToSelector 保护；每个 hook 受各自开关控制
@interface VoiceFeaturesHook : NSObject

+ (void)install;

@end

NS_ASSUME_NONNULL_END
