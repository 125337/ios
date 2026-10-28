@interface WCPayJumpC2CMessageJsapiLogic : WCPayControlLogic <MMTipsViewControllerDelegate, WCBaseControlMgrExt>
{
    JSEvent * m_jsEvent; // +0x38
    NSString * m_bizId; // +0x40
    unsigned int m_bizType; // +0x48
    WCBaseControlLogic * m_authLogic; // +0x50
    NSString * m_username; // +0x58
    unsigned int m_createTime; // +0x60
    NSString * m_msgSvrId; // +0x68
}
- (id)initWithJSEvent:(id)arg1 bizId:(id)arg2 bizType:(unsigned int)arg3 username:(id)arg4 createTime:(unsigned int)arg5 msgSvrId:(id)arg6;
- (void)stopLogic;
- (void)startLogic;
- (void)checkJsapi;
- (BOOL)checkUser;
- (id)locateMessage;
- (id)locateMessageBySvrId;
- (void)reportAndStopLogic;
- (void)jumpToMessage;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)report14954WithString:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)reportWithAction:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
