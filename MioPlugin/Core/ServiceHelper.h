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

/// 向指定会话发送一条 appmsg 卡片消息（type=49；主线程执行，立即发送）
/// appMsgXml = 完整 XML（content）；extendFields = CExtendInfoOfAPP 结构化字段（宿主 AddAppMsg
/// 用它重建 XML，179 探针实证字段表），发送成功返回 YES
BOOL WXSendAppMessage(NSString *appMsgXml, NSString *sessionName, NSDictionary<NSString *, id> *extendFields);

/// 向指定会话发送尾巴引用消息（消息小尾巴专用，完全复刻黄白组包状态）
/// body = 气泡正文；tail = 尾巴文本
/// 机制（204 探针实证）：type=49 wrap + content=纯文本正文 + extendInfo
/// （innerType=57、sourceUsername/Displayname=尾巴、referMessageSenderDisplayName=正文）
/// → AddAppMsg Scene=2，引用卡 XML 由宿主管道从 ext 拼装
BOOL WXSendTailMessage(NSString *body, NSString *tail, NSString *sessionName);

/// 应用图标尾巴（消息小尾巴·应用图标模式）：appmsg 应用卡片形态（title=正文、des=尾巴、
/// innerType=5、无 url 点卡片无反应），复用 WXSendAppMessage 通道。
/// appId = 应用尾巴来源（Moments 预设池点选），空 = 默认（腾讯手机管家）
BOOL WXSendAppIconTailMessage(NSString *body, NSString *tail, NSString *appId, NSString *sessionName);

/// 查询联系人显示名（备注 > 昵称），查不到时原样返回 wxid
NSString *WXDisplayNameForWxid(NSString *wxid);
