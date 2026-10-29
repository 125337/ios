@interface WCMallJumpWCMallControlLogic : WCMallControlLogic <IWCMallControlLogicExt, WCBaseControlMgrExt>
{
    JSEvent * m_jsEvent; // +0x38
    NSString * m_nsStepUrl; // +0x40
    WCMallMobileChargeControlLogic * m_oWCMallFunctionActivityPayControlLogic; // +0x48
    NSString * m_nsAppID; // +0x50
    NSString * m_nsFuncID; // +0x58
    BOOL m_bEndFlag; // +0x60
    BOOL m_bJSEventEnd; // +0x61
    int m_enWCMallJumpWCMallControlLogicScene; // +0x64
}
- (id)initWithJSEvent:(id)arg1 URL:(id)arg2;
- (id)initWithScene:(int)arg1;
- (void)startLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)endJSEventWith:(BOOL)arg1;
- (void)stopLogic;
- (void)OnGetWCMallFunctionList:(id)arg1 GlobalList:(id)arg2 BroadCastInfo:(id)arg3 BannerList:(id)arg4 response:(id)arg5 FromCached:(BOOL)arg6 NotShowTutorial:(BOOL)arg7 typeMap:(id)arg8 Error:(id)arg9;
- (void).cxx_destruct;
@end
