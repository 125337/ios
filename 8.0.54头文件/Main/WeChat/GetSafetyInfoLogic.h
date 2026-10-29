@interface GetSafetyInfoLogic : MMObject <PBMessageObserverDelegate>
{
    BOOL m_bRunning; // +0x8
    unsigned int _m_uiHasVoice; // +0xc
    unsigned int _m_uiOpenVoice; // +0x10
    unsigned int _m_uiHasFace; // +0x14
    unsigned int _m_uiOpenFace; // +0x18
    unsigned int _m_uiHasWxPwd; // +0x1c
    id <GetSafetyInfoLogicDelegate> _delegate; // +0x20
}
- (void)dealloc;
- (void)startGetSafetyInfo;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)m_uiHasVoice;
- (void)setM_uiHasVoice:(unsigned int)arg1;
- (unsigned int)m_uiOpenVoice;
- (void)setM_uiOpenVoice:(unsigned int)arg1;
- (unsigned int)m_uiHasFace;
- (void)setM_uiHasFace:(unsigned int)arg1;
- (unsigned int)m_uiOpenFace;
- (void)setM_uiOpenFace:(unsigned int)arg1;
- (unsigned int)m_uiHasWxPwd;
- (void)setM_uiHasWxPwd:(unsigned int)arg1;
- (void).cxx_destruct;
@end

