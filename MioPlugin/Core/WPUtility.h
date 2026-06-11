#import <UIKit/UIKit.h>

/// 工具类：提供颜色转换和暗黑模式检测等通用方法
@interface WPUtility : NSObject

/// 从十六进制字符串创建 UIColor
/// @param hex 十六进制颜色字符串，如 "#FF0000" 或 "FF0000AA"
/// @return UIColor 对象，失败返回 nil
+ (UIColor *)colorFromHex:(NSString *)hex;

/// 从 UIColor 获取十六进制字符串
/// @param color UIColor 对象
/// @return 十六进制颜色字符串，如 "#FF0000"
+ (NSString *)hexFromColor:(UIColor *)color;

/// 检测当前是否为暗黑模式
/// @return YES 表示暗黑模式，NO 表示普通模式
+ (BOOL)isDarkMode;

/// 检测指定 ViewController 是否为暗黑模式
/// @param vc UIViewController 对象
/// @return YES 表示暗黑模式，NO 表示普通模式
+ (BOOL)isDarkModeForViewController:(UIViewController *)vc;

/// 在指定会话中插入一条系统提示消息（type=0x2710, status=4）
/// @param session   会话ID（群聊或单聊的 userName）
/// @param content   提示文本内容（纯文本，方法内部会处理成 WeChat 可识别的格式）
/// @param msgMgr    CMessageMgr 实例（通过 WXGetService 获取）
/// @param createTime 消息时间戳（传 0 则自动使用当前时间）
/// @param fromUsr   发送方 userName（传 nil 则使用 session）
/// @param toUsr     接收方 userName（传 nil 则使用 session）
/// @param msgWrap   原始消息 wrap（可选，传 nil 则忽略；主要用于撤回场景保留 fromUsr/toUsr 上下文）
/// @param extraSetup 额外配置回调（可选，如 Revoke 场景需要标记关联对象），格式: ^(id newWrap){ ... }
/// @return 创建成功的消息对象，失败返回 nil
+ (id)insertSystemTipMessageInSession:(NSString *)session
                              content:(NSString *)content
                               msgMgr:(id)msgMgr
                           createTime:(unsigned int)createTime
                              fromUsr:(NSString *)fromUsr
                                toUsr:(NSString *)toUsr
                              msgWrap:(id)msgWrap
                          extraSetup:(void (^)(id newWrap))extraSetup;

@end