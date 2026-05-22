#ifndef Constants_h
#define Constants_h

#import <Foundation/Foundation.h>

static NSString *const kPluginVersion = @"1.0.0";
static NSString *const kPluginPrefix = @"WCP_";
static const unsigned int kSystemMsgType = 0x2710;

static NSString *const kDefaultNotifyFormat = @"{time}\n「{name}」撤回了一条消息\n{content}";
static NSString *const kDefaultDateFormat = @"yyyy-MM-dd HH:mm:ss";
static NSString *const kDefaultInterceptTemplate = @"[{name}]撤回了一条消息: {content}";
static NSString *const kDefaultCustomNotifyFormat = @"[{name}]撤回了一条消息";

static NSString *const kDefaultRevokeTemplate = @""; // 空=使用默认格式；非空=占位符模板

#pragma mark - 通知撤回者
static NSString *const kDefaultNotifySenderTemplate = @"【捕抓到1条撤回消息】\n操作用户: {用户名}\n发送时间: {yyyy}-{MM}-{dd} {HH}:{mm}:{ss}\n撤回内容: {内容}\n\n撤回无效，消息已读并保存";

static NSString *const kDefaultNameColor = @"#FA5151";
static NSString *const kDefaultTimeColor = @"#FA5151";
static NSString *const kDefaultContentColor = @"#999999";
static NSString *const kDefaultDarkNameColor = @"#FF6B6B";
static NSString *const kDefaultDarkTimeColor = @"#FF6B6B";
static NSString *const kDefaultDarkContentColor = @"#BBBBBB";

#endif
