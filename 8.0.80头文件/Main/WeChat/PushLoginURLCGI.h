@interface PushLoginURLCGI : WCAccountBaseControlLogic <CheckQRCodeLoginDelegate, WCAccountManualAuthControlLogicDelegate>
{
    WCAccountManualAuthControlLogic * m_manualAuthLogic; // +0x30
    int _loginType; // +0x38
    id <PushLoginURLCGIDelegate> _delegate; // +0x40
    NSString * _userName; // +0x48
    NSString * _password; // +0x50
    CheckQRCodeLoginCGI * _checkQRCodeCgi; // +0x58
}
- (void)stopExpiredTimeCheck;
- (void)onTimeCheckExpired;
- (void)startRequest;
- (void)onPushLoginURLReturnWithResponse:(id)arg1;
- (void)stopRequest;
- (void)doAuthWithType:(int)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (BOOL)onManualAuthControlLogicError:(id)arg1;
- (void)OnCheckQRCodeLoginUUIDExpired;
- (void)OnCheckQRCodeLoginFail;
- (void)OnCheckQRCodeLoginExpried;
- (void)OnCheckQRCodeLoginCancel;
- (void)OnCheckQRCodeLoginConfirmedWithUserName:(id)arg1 pwd:(id)arg2 nickName:(id)arg3 headImageURL:(id)arg4;
- (void)OnCheckQRCodeLoginScaned:(id)arg1 nickName:(id)arg2 authUrl:(id)arg3;
- (id)OnCheckQRCodeLogicGetCurrentViewController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)loginType;
- (void)setLoginType:(int)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (id)checkQRCodeCgi;
- (void)setCheckQRCodeCgi:(id)arg1;
- (void).cxx_destruct;
@end
