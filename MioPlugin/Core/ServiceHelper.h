#import <Foundation/Foundation.h>

// 微信服务/联系人辅助函数（实现见 ServiceHelper.m，避免 static inline 在每个
// import 的编译单元生成副本造成二进制膨胀）

/// 取微信服务对象：MMContext currentContext getService: 优先，MMServiceCenter defaultCenter 兜底
id WXGetService(Class serviceClass);

/// 按 wxid 查联系人：getContactByName: 优先 + m_nsUsrName 校验 + 旧 selector 回退
id WXGetContactForWxid(NSString *wxid);

/// 查当前登录用户自己的联系人对象
id WXGetSelfContact(void);

/// 读联系人高清/普通头像 URL，均空返回 nil
NSString *WXContactHeadImageURL(id contact);

/// 安全读取 contact 的 NSString 字段，内部封装 respondsToSelector: 保护
NSString *WXSafeStringGet(id obj, NSString *key);

/// 安全读取 contact 的 NSInteger 字段，失败返回默认值
NSInteger WXSafeIntegerGet(id obj, NSString *key, NSInteger defaultValue);

/// 向指定会话发送一条文本消息（延时 2s 确保引擎就绪；主线程执行）
/// 供自动收款回复、红包统计同步等多处复用
void WXSendTextMessage(NSString *text, NSString *sessionName);

/// 查询联系人显示名（备注 > 昵称），查不到时原样返回 wxid
NSString *WXDisplayNameForWxid(NSString *wxid);
