@interface WebviewJSEventHandler_startVoipCall : WebviewJSEventHandlerBase <IBrandAttrMgrExt>
{
    BOOL _m_bAllowBackCamera; // +0x8
    BOOL _m_bShowCSVideo; // +0x9
    unsigned int _m_uGetContactInfoTryTimes; // +0xc
    NSString * _m_nsUsername; // +0x10
    NSString * _m_nsNickname; // +0x18
    NSString * _m_nsIconUrl; // +0x20
    NSString * _m_nsAppId; // +0x28
    NSString * _m_context; // +0x30
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onBrandContactModified:(id)arg1 withAttrChanged:(id)arg2;
- (void)getAndSaveBrandInfo;
- (id)m_nsUsername;
- (void)setM_nsUsername:(id)arg1;
- (id)m_nsNickname;
- (void)setM_nsNickname:(id)arg1;
- (id)m_nsIconUrl;
- (void)setM_nsIconUrl:(id)arg1;
- (id)m_nsAppId;
- (void)setM_nsAppId:(id)arg1;
- (id)m_context;
- (void)setM_context:(id)arg1;
- (unsigned int)m_uGetContactInfoTryTimes;
- (void)setM_uGetContactInfoTryTimes:(unsigned int)arg1;
- (BOOL)m_bAllowBackCamera;
- (void)setM_bAllowBackCamera:(BOOL)arg1;
- (BOOL)m_bShowCSVideo;
- (void)setM_bShowCSVideo:(BOOL)arg1;
- (void).cxx_destruct;
@end
