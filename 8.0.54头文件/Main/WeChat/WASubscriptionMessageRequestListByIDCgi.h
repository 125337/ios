@interface WASubscriptionMessageRequestListByIDCgi : WCBaseCgi
{
    unsigned int _appType; // +0x8
    unsigned int _popupScene; // +0xc
    NSArray * _templateArray; // +0x10
    NSString * _subscriptionUrl; // +0x18
    NSString * _username; // +0x20
    unsigned long long _scene; // +0x28
    NSString * _appid; // +0x30
    NSString * _sessionId; // +0x38
    NSString * _extInfo; // +0x40
    id /* block */ _successBlock; // +0x48
    id /* block */ _failBlock; // +0x50
}
- (id)initWithTemplateArray:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 appid:(id)arg4 appType:(unsigned int)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (id)initWithSubscriptionUrl:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 popupScene:(unsigned int)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (id)initWithTemplateArray:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 appid:(id)arg4 popupScene:(unsigned int)arg5 sessionId:(id)arg6 extInfo:(id)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
- (void)createRequest;
- (id)generateItemListWith:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)templateArray;
- (void)setTemplateArray:(id)arg1;
- (id)subscriptionUrl;
- (void)setSubscriptionUrl:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned int)appType;
- (void)setAppType:(unsigned int)arg1;
- (unsigned int)popupScene;
- (void)setPopupScene:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

