@interface WCAccountFastSwitchLogic : WCAccountBaseControlLogic <CheckQRCodeLoginDelegate, WCAccountFastSwitchLoginViewControllerDelegate, WCAccountManualAuthControlLogicDelegate>
{
    BOOL _isDoingAuth; // +0x30
    BOOL _isCancel; // +0x31
    int _loginType; // +0x34
    MMUIViewController * _currentViewController; // +0x38
    WCAccountFastSwitchLoginViewController * _fastSwitchViewController; // +0x40
    WCAccountLoginLastUserViewController * _lastUserViewController; // +0x48
    WCAccountManualAuthControlLogic * _m_manualAuthLogic; // +0x50
    CheckQRCodeLoginCGI * _checkQRCodeCgi; // +0x58
    NSString * _userName; // +0x60
    NSString * _password; // +0x68
    NSNumber * _loadingType; // +0x70
}
+ (BOOL)canFastSwitchLogin;
+ (void)blockFastSwitchLogin;
+ (void)onCheckPushLoginURLReturnWithResponse:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)checkFastSwitchLoginStateWithCompletionBlock:(id /* block */)arg1;
+ (id)getFSBaseReportParam;
+ (void)updateLoginPageSessionId;
+ (id)getLoginPageSessionId;
+ (void)updateLoginTicketId:(id)arg1;
+ (id)getLoginTicketId;
+ (void)reportLoginUseOtherDevice:(int)arg1 eventId:(int)arg2;
+ (void)reportLoginAssistTipsAgreePageIn;
+ (void)reportComfirmPageIn:(id)arg1;
+ (void)reportComfirmPageClk:(id)arg1 has_sync_chat_login:(int)arg2;
+ (void)reportLoginAssistSend:(id)arg1 login_assist_device_type:(int)arg2;
+ (void)reportLoginAssistEnd:(id)arg1 login_assist_device_type:(int)arg2 login_assist_result:(int)arg3 login_assist_cancel_type:(int)arg4 login_assist_error_code:(int)arg5;
- (void)OnCheckQRCodeLoginUUIDExpired;
- (void)OnCheckQRCodeLoginFail;
- (void)OnCheckQRCodeLoginExpried;
- (void)OnCheckQRCodeLoginCancel;
- (void)OnCheckQRCodeLoginConfirmedWithUserName:(id)arg1 pwd:(id)arg2 nickName:(id)arg3 headImageURL:(id)arg4;
- (void)OnCheckQRCodeLoginScaned:(id)arg1 nickName:(id)arg2 authUrl:(id)arg3;
- (void)stopExpiredTimeCheck;
- (void)onTimeCheckExpired;
- (id)init;
- (void)dealloc;
- (void)startLogin;
- (void)startRequest;
- (void)onPushLoginURLReturnWithResponse:(id)arg1;
- (void)cancelLogin;
- (void)stopRequest;
- (void)cancelLoginByMyself;
- (void)cancelLoginByOther;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (BOOL)onManualAuthControlLogicError:(id)arg1;
- (void)onPushLoginURLFailedWithError:(id)arg1 showToast:(BOOL)arg2 blockFastSwtich:(BOOL)arg3 needDispatch:(BOOL)arg4;
- (void)onPushLoginURLSuccess;
- (void)doAuthWithType:(int)arg1;
- (void)onPushLoginURLConfrimed;
- (id)OnCheckQRCodeLogicGetCurrentViewController;
- (void)startPushLoading;
- (void)stopPushLoading;
- (void)startManualAuthLoading;
- (void)stopManualAuthLoading;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)fastSwitchViewController;
- (void)setFastSwitchViewController:(id)arg1;
- (id)lastUserViewController;
- (void)setLastUserViewController:(id)arg1;
- (id)m_manualAuthLogic;
- (void)setM_manualAuthLogic:(id)arg1;
- (id)checkQRCodeCgi;
- (void)setCheckQRCodeCgi:(id)arg1;
- (BOOL)isDoingAuth;
- (void)setIsDoingAuth:(BOOL)arg1;
- (BOOL)isCancel;
- (void)setIsCancel:(BOOL)arg1;
- (int)loginType;
- (void)setLoginType:(int)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (id)loadingType;
- (void)setLoadingType:(id)arg1;
- (void).cxx_destruct;
@end
