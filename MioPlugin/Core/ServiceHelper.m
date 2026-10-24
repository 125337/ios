#import "ServiceHelper.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import "LogManager.h"

id WXGetService(Class serviceClass) {
    if (!serviceClass) return nil;
    // ① MMContext currentContext getService:（WCR 同款，8.0.60 实证可用）
    Class mmctx = objc_getClass("MMContext");
    if (mmctx && [mmctx respondsToSelector:@selector(currentContext)]) {
        id ctx = ((id (*)(id, SEL))objc_msgSend)(mmctx, @selector(currentContext));
        if (ctx && [ctx respondsToSelector:@selector(getService:)]) {
            id svc = ((id (*)(id, SEL, Class))objc_msgSend)(ctx, @selector(getService:), serviceClass);
            if (svc) return svc;
        }
    }
    // ② MMServiceCenter defaultCenter 兜底。
    // 教训（144.log 看门狗定论）：8.0.60 原生 MMServiceCenter 无 defaultCenter 类方法，
    // 无守卫直调每次抛 NSInvalidArgumentException（栈展开毫秒级开销），消息补同步风暴时
    // 每条消息 3-6 次调用 → 秒级 CPU，耗穿 scene-create 看门狗 7.16s 配额。
    // 此方法此前一直可用是因其他插件（WCR/锤子）可能添加过该方法；移除后依赖暴露。
    Class sc = objc_getClass("MMServiceCenter");
    if (sc && [sc respondsToSelector:@selector(defaultCenter)]) {
        id center = ((id (*)(id, SEL))objc_msgSend)(sc, @selector(defaultCenter));
        if (center && [center respondsToSelector:@selector(getService:)]) {
            return ((id (*)(id, SEL, Class))objc_msgSend)(center, @selector(getService:), serviceClass);
        }
    }
    return nil;
}

id WXGetContactForWxid(NSString *wxid) {
    // 58 日志实证：本版本 getContactByUserName: 恒查空，getContactByName: 才是有效查询。
    // KeywordAlert 实测 getContactByName: 对个别群 ID 会返回错误对象 → 结果校验
    // m_nsUsrName 必须等于 wxid，不符依次回退旧 selector / nil
    if (!wxid.length) return nil;
    id contactMgr = WXGetService(objc_getClass("CContactMgr"));
    if (!contactMgr) return nil;
    SEL sels[2] = { NSSelectorFromString(@"getContactByName:"),
                    NSSelectorFromString(@"getContactByUserName:") };
    SEL usrSel = NSSelectorFromString(@"m_nsUsrName");
    for (int i = 0; i < 2; i++) {
        if (![contactMgr respondsToSelector:sels[i]]) continue;
        id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, sels[i], wxid);
        if (!contact) continue;
        if ([contact respondsToSelector:usrSel]) {
            id usr = ((id (*)(id, SEL))objc_msgSend)(contact, usrSel);
            if ([usr isKindOfClass:[NSString class]] && [(NSString *)usr isEqualToString:wxid]) {
                return contact;
            }
            continue;   // 查错对象，试下一路
        }
        return contact;   // 无 m_nsUsrName 可校验，原样返回
    }
    return nil;
}

id WXGetSelfContact(void) {
    id contactMgr = WXGetService(objc_getClass("CContactMgr"));
    if (!contactMgr || ![contactMgr respondsToSelector:@selector(getSelfContact)]) return nil;
    return ((id (*)(id, SEL))objc_msgSend)(contactMgr, @selector(getSelfContact));
}

NSString *WXContactHeadImageURL(id contact) {
    if (!contact) return nil;
    SEL sel = NSSelectorFromString(@"m_nsHeadHDImgUrl");
    if ([contact respondsToSelector:sel]) {
        NSString *url = ((id (*)(id, SEL))objc_msgSend)(contact, sel);
        if (url.length) return url;
    }
    sel = NSSelectorFromString(@"m_nsHeadImgUrl");
    if ([contact respondsToSelector:sel]) {
        NSString *url = ((id (*)(id, SEL))objc_msgSend)(contact, sel);
        if (url.length) return url;
    }
    return nil;
}

NSString *WXSafeStringGet(id obj, NSString *key) {
    if (!obj || !key.length) return nil;
    SEL sel = NSSelectorFromString(key);
    if (![obj respondsToSelector:sel]) return nil;
    id value = ((id (*)(id, SEL))objc_msgSend)(obj, sel);
    if ([value isKindOfClass:[NSString class]] && ((NSString *)value).length > 0) {
        return (NSString *)value;
    }
    return nil;
}

NSInteger WXSafeIntegerGet(id obj, NSString *key, NSInteger defaultValue) {
    if (!obj || !key.length) return defaultValue;
    SEL sel = NSSelectorFromString(key);
    if (![obj respondsToSelector:sel]) return defaultValue;
    id value = ((id (*)(id, SEL))objc_msgSend)(obj, sel);
    if ([value respondsToSelector:@selector(integerValue)]) {
        return [value integerValue];
    }
    return defaultValue;
}

void WXSendTextMessage(NSString *text, NSString *sessionName) {
    if (!text.length || !sessionName.length) return;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2.0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        @try {
            id msgMgr = WXGetService(objc_getClass("CMessageMgr"));
            if (!msgMgr) {
                WPLog(@"MioPlugin", @"[SEND] CMessageMgr不可用，无法发送消息");
                return;
            }
            Class msgWrapClass = objc_getClass("CMessageWrap");
            if (!msgWrapClass) {
                WPLog(@"MioPlugin", @"[SEND] CMessageWrap类不可用，无法发送消息");
                return;
            }
            id msg = ((id (*)(id, SEL, long long))objc_msgSend)([msgWrapClass alloc], @selector(initWithMsgType:), 1LL);
            if (!msg) return;

            [msg setValue:text forKey:@"m_nsContent"];
            [msg setValue:sessionName forKey:@"m_nsToUsr"];

            // 发送方设为当前用户（否则消息会显示在错误一侧）
            id selfContact = WXGetSelfContact();
            NSString *selfUserName = WXSafeStringGet(selfContact, @"m_nsUsrName");
            if (selfUserName) [msg setValue:selfUserName forKey:@"m_nsFromUsr"];

            // 状态置"已发送"、补时间戳（否则消息显示异常/排序错误）
            [msg setValue:@(4) forKey:@"m_uiStatus"];
            [msg setValue:@((unsigned int)[[NSDate date] timeIntervalSince1970]) forKey:@"m_uiCreateTime"];

            SEL addMsgSel = NSSelectorFromString(@"AddMsg:MsgWrap:");
            if (![msgMgr respondsToSelector:addMsgSel]) {
                WPLog(@"MioPlugin", @"[SEND] AddMsg:MsgWrap:方法不可用");
                return;
            }
            ((void (*)(id, SEL, id, id))objc_msgSend)(msgMgr, addMsgSel, sessionName, msg);
            WPLog(@"MioPlugin", @"[SEND] 文本消息已发送 -> %@", sessionName);
        } @catch (NSException *e) {
            WPLog(@"MioPlugin", @"[SEND] 发送异常: %@", e);
        }
    });
}

// 向指定会话发送 appmsg 卡片（type=49）。
// 发送入口定论（黄白 dylib 反编译 + 178/179 探针实证）：
//   [CMessageMgr AddAppMsg:chatUser MsgWrap:wrap Data:nil Scene:2]——宿主自带，黄白 MSHook 它。
//   宿主 AddAppMsg 不认 m_nsContent，会用 wrap.m_extendInfoWithMsgType(CExtendInfoOfAPP)
//   的结构化字段重建 XML（179 日志：黄白入口时 content 与 extendInfo 双满，我们只填 content
//   时被重建为空模板→发送失败红感叹号）。extendFields = 结构化字段表，逐键 KVC 打到 extendInfo。
BOOL WXSendAppMessage(NSString *appMsgXml, NSString *sessionName, NSDictionary<NSString *, id> *extendFields) {
    if (!appMsgXml.length || !sessionName.length) return NO;
    @try {
        id msgMgr = WXGetService(objc_getClass("CMessageMgr"));
        Class msgWrapClass = objc_getClass("CMessageWrap");
        if (!msgMgr || !msgWrapClass) {
            WPLog(@"MioPlugin", @"[SEND] CMessageMgr/CMessageWrap 不可用，无法发送 appmsg");
            return NO;
        }
        id msg = ((id (*)(id, SEL, long long))objc_msgSend)([msgWrapClass alloc], @selector(initWithMsgType:), 49LL);
        if (!msg) return NO;

        [msg setValue:appMsgXml forKey:@"m_nsContent"];
        [msg setValue:sessionName forKey:@"m_nsToUsr"];

        id selfContact = WXGetSelfContact();
        NSString *selfUserName = WXSafeStringGet(selfContact, @"m_nsUsrName");
        if (selfUserName) [msg setValue:selfUserName forKey:@"m_nsFromUsr"];

        // 黄白实机 wrap 组合（168/179 探针 dump）：status=1 imgStatus=1
        [msg setValue:@(1) forKey:@"m_uiStatus"];
        [msg setValue:@(1) forKey:@"m_uiImgStatus"];
        [msg setValue:@((unsigned int)[[NSDate date] timeIntervalSince1970]) forKey:@"m_uiCreateTime"];

        // 结构化字段 → CExtendInfoOfAPP（宿主重建 XML 的数据源，179 日志逐字段实证）
        if (extendFields.count > 0) {
            id ext = [msg valueForKey:@"m_extendInfoWithMsgType"];
            if (ext) {
                for (NSString *k in extendFields) {
                    @try { [ext setValue:extendFields[k] forKey:k]; }
                    @catch (NSException *e) { WPLog(@"MioPlugin", @"[SEND] extendInfo 字段 %@ 设置失败: %@", k, e); }
                }
            } else {
                WPLog(@"MioPlugin", @"[SEND] m_extendInfoWithMsgType 为空，卡片将退化为空模板");
            }
        }

        SEL sendSel = NSSelectorFromString(@"AddAppMsg:MsgWrap:Data:Scene:");
        if (![msgMgr respondsToSelector:sendSel]) {
            WPLog(@"MioPlugin", @"[SEND] AddAppMsg:MsgWrap:Data:Scene: 方法不可用");
            return NO;
        }
        ((void (*)(id, SEL, id, id, id, unsigned int))objc_msgSend)(msgMgr, sendSel, sessionName, msg, nil, 2);
        WPLog(@"MioPlugin", @"[SEND] appmsg 卡片已发送(AddAppMsg Scene=2) -> %@", sessionName);
        return YES;
    } @catch (NSException *e) {
        WPLog(@"MioPlugin", @"[SEND] appmsg 发送异常: %@", e);
        return NO;
    }
}

// 发送尾巴引用消息（消息小尾巴专用，完全复刻黄白组包状态）。
// 机制定论（204 日志 AddAppMsg 探针实证，黄白 vs 我们逐字段对照）：
//   黄白不走官方 updateForReferMsg:/generateMsgReferXML（那是普通"回复"流程：displayname
//   由联系人现算盖不掉、渲染也不是引用卡样式——我们此前"灰色独立块"差异的根源）。
//   黄白真实组包状态（探针 dump）：
//     wrap: type=49、content=纯文本正文（无 XML）、referingMessageWrap=nil、status=0
//     ext:  innerType=57、sourceUsername=尾巴、sourceDisplayname=尾巴、
//           referMessageSenderDisplayName=正文、referMessageSenderUsrname=nil
//   出网引用卡 XML 由宿主 AddAppMsg 管道从 extendInfo 自行拼装（黄白发纯文本 content
//   也能出引用卡即实证）。
//   ext 获取：wrap 级 setM_uiAppMsgInnerType: 经转发写入 extendInfo 并懒创建 ext
//   （上一版探针实证：wrap 上调该 setter 后 ext.innerType=57）；其余字段直接对 ext KVC。
BOOL WXSendTailMessage(NSString *body, NSString *tail, NSString *sessionName) {
    if (!body.length || !tail.length || !sessionName.length) return NO;
    @try {
        id msgMgr = WXGetService(objc_getClass("CMessageMgr"));
        Class wrapCls = objc_getClass("CMessageWrap");
        if (!msgMgr || !wrapCls) {
            WPLog(@"MioPlugin", @"[SEND] CMessageMgr/CMessageWrap 不可用，无法发送尾巴消息");
            return NO;
        }
        NSString *selfWxid = WXSafeStringGet(WXGetSelfContact(), @"m_nsUsrName");
        unsigned int now = (unsigned int)[[NSDate date] timeIntervalSince1970];

        id wrap = ((id (*)(id, SEL, long long))objc_msgSend)([wrapCls alloc], @selector(initWithMsgType:), 49LL);
        if (!wrap) return NO;
        [wrap setValue:sessionName forKey:@"m_nsToUsr"];
        if (selfWxid) [wrap setValue:selfWxid forKey:@"m_nsFromUsr"];
        [wrap setValue:@(now) forKey:@"m_uiCreateTime"];
        [wrap setValue:@(1) forKey:@"m_uiImgStatus"];
        [wrap setValue:body forKey:@"m_nsContent"];   // 纯文本正文，不是 XML

        // innerType=57：wrap 级 setter 经转发落进 extendInfo 并懒创建 ext（探针实证）
        ((void (*)(id, SEL, int))objc_msgSend)(wrap, NSSelectorFromString(@"setM_uiAppMsgInnerType:"), 57);
        id ext = [wrap valueForKey:@"m_extendInfoWithMsgType"];
        if (!ext) {
            WPLog(@"MioPlugin", @"[SEND] extendInfo 未创建，无法组尾巴包");
            return NO;
        }
        // 黄白 ext 状态（204 探针逐字段对照）：尾巴 → sourceUsername/sourceDisplayname，正文 → refDisp
        [ext setValue:tail forKey:@"m_nsSourceUsername"];
        [ext setValue:tail forKey:@"m_nsSourceDisplayname"];
        [ext setValue:body forKey:@"referMessageSenderDisplayName"];
        // 不设 referMessageSenderUsrname（黄白为 nil），不设 referingMessageWrap

        // appid/title/des（206 探针 Probe-out 实证）：我们与黄白的最终 XML 只差这三处——
        // appid 空 → 微信按无效卡片渲染成空泡；有 appid + title/des 才走引用卡渲染
        NSString *appId = @"wxccac4ab14315add3";   // 黄白同款（黄白消息出网 XML 原值）
        SEL appIdSel = NSSelectorFromString(@"setM_nsAppId:");
        SEL appId2Sel = NSSelectorFromString(@"setM_nsAppID:");
        if ([wrap respondsToSelector:appIdSel])
            ((void (*)(id, SEL, id))objc_msgSend)(wrap, appIdSel, appId);
        if ([wrap respondsToSelector:appId2Sel])
            ((void (*)(id, SEL, id))objc_msgSend)(wrap, appId2Sel, appId);
        ((void (*)(id, SEL, id))objc_msgSend)(wrap, NSSelectorFromString(@"setM_nsTitle:"), body);
        ((void (*)(id, SEL, id))objc_msgSend)(wrap, NSSelectorFromString(@"setM_nsDesc:"), body);

        SEL sendSel = NSSelectorFromString(@"AddAppMsg:MsgWrap:Data:Scene:");
        if (![msgMgr respondsToSelector:sendSel]) {
            WPLog(@"MioPlugin", @"[SEND] AddAppMsg:MsgWrap:Data:Scene: 不可用");
            return NO;
        }
        ((void (*)(id, SEL, id, id, id, unsigned int))objc_msgSend)(msgMgr, sendSel, sessionName, wrap, nil, 2);
        // 诊断日志：出网后的 XML（宿主管道从 ext 拼装的结果，对照验证用）
        NSString *outXml = [wrap valueForKey:@"m_nsContent"];
        if (outXml.length > 800) outXml = [outXml substringToIndex:800];
        WPLog(@"MioPlugin", @"[SEND] 尾巴消息已出网 -> %@，出网XML: %@", sessionName, outXml);
        return YES;
    } @catch (NSException *e) {
        WPLog(@"MioPlugin", @"[SEND] 尾巴消息发送异常: %@", e);
        return NO;
    }
}

NSString *WXDisplayNameForWxid(NSString *wxid) {
    if (!wxid.length) return wxid;
    id contact = WXGetContactForWxid(wxid);
    if (!contact) {
        // 部分 wxid（尤其群 ID）getContactByUserName: 查不到，回退 getContactByName:（实测群名可查出）
        id mgr = WXGetService(objc_getClass("CContactMgr"));
        SEL sel = NSSelectorFromString(@"getContactByName:");
        if (mgr && [mgr respondsToSelector:sel]) {
            id c2 = ((id (*)(id, SEL, id))objc_msgSend)(mgr, sel, wxid);
            // 校验返回的确实是目标联系人（getContactByName: 对个别 ID 会返回错误对象）
            NSString *chk = WXSafeStringGet(c2, @"m_nsUsrName");
            if (chk.length > 0 && [chk isEqualToString:wxid]) contact = c2;
        }
    }
    NSString *remark = WXSafeStringGet(contact, @"m_nsRemark");
    if (remark.length) return remark;
    NSString *nick = WXSafeStringGet(contact, @"m_nsNickName");
    if (nick.length) return nick;
    return wxid;
}
