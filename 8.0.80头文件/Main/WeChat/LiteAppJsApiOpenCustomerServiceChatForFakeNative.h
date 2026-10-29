@interface LiteAppJsApiOpenCustomerServiceChatForFakeNative : LiteAppJsApi
{
    NSString * m_url; // +0x20
    int m_scene; // +0x28
    NSString * m_entityId; // +0x30
    BOOL m_showMessageCard; // +0x38
    NSString * m_sendMsgTitle; // +0x40
    NSString * m_sendMsgPath; // +0x48
    NSString * m_sendMsgImageURL; // +0x50
    NSURLSessionDataTask * m_dataTask; // +0x58
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)getImageDataAndOpenCustomerServiceChat;
- (void)openCustomerServiceChat:(id)arg1;
- (id /* block */)getOnClickQuickSendBtnHandleBlockWithAppId:(id)arg1 title:(id)arg2 path:(id)arg3;
- (void)dealloc;
- (void).cxx_destruct;
@end
