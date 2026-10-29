@interface WAJSEventHandler_openCustomerServiceChat : WAJSEventHandler_BaseEvent
{
    NSString * m_url; // +0x8
    int m_scene; // +0x10
    NSString * m_entityId; // +0x18
    BOOL m_showMessageCard; // +0x20
    NSString * m_sendMsgTitle; // +0x28
    NSString * m_sendMsgPath; // +0x30
    NSString * m_sendMsgImageURL; // +0x38
    NSDictionary * m_sendMsgParam; // +0x40
    NSString * m_sendMsgHintTitle; // +0x48
    MBADConversionContext * _mbAD_ctx; // +0x50
    BOOL _bSkipBindStateCheck; // +0x58
    BOOL _bShouldUseEntityInParam; // +0x59
    BOOL _bCanHandleQuickMsgByBusiness; // +0x5a
    NSString * _finderContext; // +0x60
}
- (void)handleJSEvent:(id)arg1;
- (id)getImageDataWithImageUrl:(id)arg1;
- (BOOL)checkIsBindEntityWithAppId:(id)arg1 corpId:(id)arg2 url:(id)arg3;
- (void)onCheckBindEntityCgiResponse:(id)arg1;
- (void)openCustomerServiceChat;
- (id /* block */)getOnClickQuickSendBtnHandleBlockWithWeappContact:(id)arg1 title:(id)arg2 path:(id)arg3 extraParam:(id)arg4;
- (BOOL)bSkipBindStateCheck;
- (void)setBSkipBindStateCheck:(BOOL)arg1;
- (BOOL)bShouldUseEntityInParam;
- (void)setBShouldUseEntityInParam:(BOOL)arg1;
- (BOOL)bCanHandleQuickMsgByBusiness;
- (void)setBCanHandleQuickMsgByBusiness:(BOOL)arg1;
- (id)finderContext;
- (void)setFinderContext:(id)arg1;
- (void).cxx_destruct;
@end
