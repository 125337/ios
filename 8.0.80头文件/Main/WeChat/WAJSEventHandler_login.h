@interface WAJSEventHandler_login : WAJSEventHandler_BaseEvent <JSApiScopeConfirmWindowDelegate, WAJSContextPlugin_userAccountProtocol>
{
    NSString * _appID; // +0x8
    NSArray * _arrConfirmScope; // +0x10
    JSApiScopeConfirmWindow * _confirmWindow; // +0x18
    BOOL _requestInQueue; // +0x20
    unsigned int _cgiEventId; // +0x24
    NSDictionary * _dicInputParam; // +0x28
    WADataPipePerformance * _performance; // +0x30
    WAJSContextPlugin_userAccount * _userAccountInstance; // +0x38
}
- (void)dealloc;
- (void)mainThread_runUserAccountJSEvent:(id)arg1;
- (void)onUserAccountJSEventEnd;
- (void)handleJSEvent:(id)arg1;
- (id)genResultDic:(id)arg1;
- (void)loginRequestWithAppID:(id)arg1 scope:(id)arg2;
- (void)onLoginResponse:(id)arg1;
- (void)endWithTimeout;
- (void)confirmRequestWithAppID:(id)arg1 scope:(id)arg2;
- (void)onConfirmResponse:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)continueShowConfirmViewWithAppName:(id)arg1 iconURL:(id)arg2 scopeInfoList:(id)arg3;
- (void)showConfirmViewWithAppName:(id)arg1 iconURL:(id)arg2 scopeInfoList:(id)arg3;
- (void)closeConfirmWindow;
- (void)onConfirmViewOKWithScope:(id)arg1;
- (void)onConfirmViewCancel;
- (void)onScopeWindowConfirm:(id)arg1 withScope:(id)arg2;
- (void)onScopeWindowCancel:(id)arg1;
- (id)dicInputParam;
- (void)setDicInputParam:(id)arg1;
- (id)performance;
- (void)setPerformance:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)userAccountInstance;
- (void)setUserAccountInstance:(id)arg1;
- (unsigned int)cgiEventId;
- (void)setCgiEventId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
