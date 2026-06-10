#ifndef Constants_h
#define Constants_h

#import <Foundation/Foundation.h>

static NSString *const kPluginVersion = @"1.0.0";
// kPluginPrefix 已移至 ConfigManager.h 统一管理
static const unsigned int kSystemMsgType = 0x2710;

static NSString *const kDefaultNotifyFormat = @"{time}\n「{name}」撤回了一条消息\n{content}";
static NSString *const kDefaultDateFormat = @"yyyy-MM-dd HH:mm:ss";
static NSString *const kDefaultInterceptTemplate = @"[{name}]撤回了一条消息: {content}";
static NSString *const kDefaultCustomNotifyFormat = @"[{name}]撤回了一条消息";

static NSString *const kDefaultRevokeTemplate = @"拦截到一条 {用户名}撤回的消息\n发送时间：{yyyy}-{MM}-{dd} {HH}:{mm}:{ss}\n内容：{内容}";

#pragma mark - 通知撤回者
static NSString *const kDefaultNotifySenderTemplate = @"【捕抓到1条撤回消息】\n操作用户: {用户名}\n发送时间: {yyyy}-{MM}-{dd} {HH}:{mm}:{ss}\n撤回内容: {内容}\n\n撤回无效，消息已读并保存";

#endif
