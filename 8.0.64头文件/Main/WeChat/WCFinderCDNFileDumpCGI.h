@interface WCFinderCDNFileDumpCGI : WCFinderBaseCgi
{
    NSString * _posterUsername; // +0x8
    NSString * _clientId; // +0x10
    NSString * _rawUrl; // +0x18
    NSString * _fromAppId; // +0x20
    NSString * _paramJson; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failBlock; // +0x38
}
- (id)initWithPosterUsername:(id)arg1 clientId:(id)arg2 rawUrl:(id)arg3 fromAppId:(id)arg4 paramJson:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)posterUsername;
- (void)setPosterUsername:(id)arg1;
- (id)clientId;
- (void)setClientId:(id)arg1;
- (id)rawUrl;
- (void)setRawUrl:(id)arg1;
- (id)fromAppId;
- (void)setFromAppId:(id)arg1;
- (id)paramJson;
- (void)setParamJson:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
