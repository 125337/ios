@interface QMapNetworkManager : NSObject
{
    QMapNetworkDomainProxy * _proxier; // +0x8
    QMapNetworkProcessorQueue * _processorQueue; // +0x10
    QFoundationDataSafetyRules * _dataSafetyRules; // +0x18
    QMapNetworkSessionPool * _sessionPool; // +0x20
    NSIndexSet * _acceptableStatusCodes; // +0x28
}
+ (id)managerWithConnectionProxyDictionary:(id)arg1;
+ (id)manager;
- (id)getNetworkErrorLocalizedDescription:(id)arg1;
- (id)GET:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (id)GETRequest:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (id)POST:(id)arg1 postBody:(id)arg2 success:(id /* block */)arg3 failure:(id /* block */)arg4;
- (id)POSTRequest:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)onComplete:(id)arg1 error:(id)arg2 failure:(id /* block */)arg3 request:(id)arg4 response:(id)arg5 success:(id /* block */)arg6;
- (id)sendRequest:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (id)PUTRequest:(id)arg1 fromData:(id)arg2 orFromURL:(id)arg3 success:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)replaceRequestURL:(id)arg1 host:(id)arg2 hostRange:(_NSRange)arg3 request:(id)arg4;
- (id)initWithConnectionProxyDictionary:(id)arg1;
- (void)dealloc;
- (id)proxier;
- (void)setProxier:(id)arg1;
- (id)processorQueue;
- (void)setProcessorQueue:(id)arg1;
- (id)dataSafetyRules;
- (void)setDataSafetyRules:(id)arg1;
- (id)sessionPool;
- (void)setSessionPool:(id)arg1;
- (id)acceptableStatusCodes;
- (void)setAcceptableStatusCodes:(id)arg1;
- (void).cxx_destruct;
@end
