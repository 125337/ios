@interface WASubscriptionMessageRequestSubscribeCgi : WCBaseCgi
{
    unsigned int _popupScene; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    NSString * _username; // +0x20
    unsigned long long _scene; // +0x28
    WASubscriptionMessagePageSheetViewModel * _viewModel; // +0x30
    NSString * _appid; // +0x38
    NSString * _sessionId; // +0x40
    NSString * _extInfo; // +0x48
}
- (id)initWithViewModel:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 appid:(id)arg4 popupScene:(unsigned int)arg5 sessionId:(id)arg6 extInfo:(id)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)subscribeStatusInWeapp:(id)arg1;
- (id)subscribeStatusInBrand:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned int)popupScene;
- (void)setPopupScene:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
