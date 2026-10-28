@interface WCFinderLiveGetAuthorizationCGI : WCFinderLiveBaseCgi
{
    BOOL _isReject; // +0x8
    unsigned int _platform; // +0xc
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    NSString * _finderUsername; // +0x20
    NSData * _deviceId; // +0x28
    NSString * _ticket; // +0x30
    NSString * _appId; // +0x38
    NSString * _gameUserId; // +0x40
    unsigned long long _scene; // +0x48
}
- (id)initWithFinderUsername:(id)arg1 deviceId:(id)arg2 ticket:(id)arg3 appId:(id)arg4 scene:(unsigned long long)arg5 isReject:(BOOL)arg6 platform:(unsigned int)arg7 gameUserId:(id)arg8 successBlock:(id /* block */)arg9 failBlock:(id /* block */)arg10;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)deviceId;
- (void)setDeviceId:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)gameUserId;
- (void)setGameUserId:(id)arg1;
- (unsigned int)platform;
- (void)setPlatform:(unsigned int)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)isReject;
- (void)setIsReject:(BOOL)arg1;
- (void).cxx_destruct;
@end
