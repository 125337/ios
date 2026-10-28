@interface WAJSEventHandler_operateWXData : WAJSEventHandler_BaseEvent <WAAuthorizeDelegate, WAJSContextPlugin_userAccountProtocol>
{
    NSString * _appID; // +0x8
    NSData * _data; // +0x10
    WAUserAuthorizeLogic * _authLogic; // +0x18
    BOOL _requestInQueue; // +0x20
    unsigned int _cgiEventId; // +0x24
    NSDictionary * _dicInputParam; // +0x28
    WADataPipePerformance * _performance; // +0x30
    WAJSContextPlugin_userAccount * _userAccountInstance; // +0x38
    id <IWATransferProxyImplProtocol> _transferBridge; // +0x40
    NSDictionary * _jsapiParams; // +0x48
}
- (void)mainThread_runUserAccountJSEvent:(id)arg1;
- (void)onUserAccountJSEventEnd;
- (void)handleJSEvent:(id)arg1;
- (void)endWithResult:(id)arg1;
- (void)endErrorWithMessage:(id)arg1;
- (void)endErrorWithMessage:(id)arg1 code:(int)arg2;
- (void)endErrorWithMessage:(id)arg1 code:(int)arg2 errNo:(unsigned int)arg3;
- (void)endWithTimeout;
- (void)endOKWithData:(id)arg1;
- (void)endCancel;
- (void)requestDataWithAppID:(id)arg1 data:(id)arg2 isImportant:(BOOL)arg3 keepAlive:(BOOL)arg4 useQuic:(BOOL)arg5 needShowPrivacyProtectInfo:(BOOL)arg6;
- (void)onResponseData:(id)arg1;
- (void)requestConfirmWithAppID:(id)arg1 data:(id)arg2 scope:(id)arg3 avatarId:(unsigned int)arg4 sessionId:(id)arg5 avatarOpt:(unsigned int)arg6 acceptProtocol:(BOOL)arg7;
- (void)onResponseConfirm:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)fillPerformace:(id)arg1 fromCgiProfile:(id)arg2;
- (void)fillClientInfo:(id)arg1 fromPerformance:(id)arg2;
- (void)continueShowConfirmView:(id)arg1;
- (void)showConfirmView:(id)arg1;
- (id)getCurrentViewController;
- (void)onAuthorizeConfirmAccept:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmDeny:(id)arg1 resultInfo:(id)arg2;
- (id)transferBridge;
- (unsigned int)wxDataMaxDataSizeInBytes;
- (id)dicInputParam;
- (void)setDicInputParam:(id)arg1;
- (id)performance;
- (void)setPerformance:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)userAccountInstance;
- (void)setUserAccountInstance:(id)arg1;
- (void)setTransferBridge:(id)arg1;
- (id)jsapiParams;
- (void)setJsapiParams:(id)arg1;
- (unsigned int)cgiEventId;
- (void)setCgiEventId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
