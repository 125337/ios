@interface WCPaySimpleUserSetPassGuideInfo : MMObject
{
    unsigned int _m_uiSendPwdMsg; // +0x8
    NSString * _m_nsGuideWording; // +0x10
    NSString * _m_nsLeftButtonWording; // +0x18
    NSString * _m_nsRightButtonWording; // +0x20
}
+ (id)GenFromDictionary:(id)arg1;
- (BOOL)isShowSetPasswordAlert;
- (id)getGuideWording;
- (id)getCancelWording;
- (id)getConfirmWording;
- (id)m_nsGuideWording;
- (void)setM_nsGuideWording:(id)arg1;
- (id)m_nsLeftButtonWording;
- (void)setM_nsLeftButtonWording:(id)arg1;
- (id)m_nsRightButtonWording;
- (void)setM_nsRightButtonWording:(id)arg1;
- (unsigned int)m_uiSendPwdMsg;
- (void)setM_uiSendPwdMsg:(unsigned int)arg1;
- (void).cxx_destruct;
@end

