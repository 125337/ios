@interface TXYComServerAPIManager : NSObject
{
    TXYHTTPSession * _session; // +0x8
    NSMutableDictionary * _ipMap; // +0x10
}
+ (id)shareInstance;
+ (id)manager;
- (id)init;
- (void)fetchIPWithHost:(id)arg1 finish:(id /* block */)arg2;
- (void)dealloc;
- (void)requestWith:(id)arg1;
- (void)downloadWith:(id)arg1;
- (void)realDoPostWithUrlWithHttpRequest:(id)arg1;
- (void)responseHandlerWithRequest:(id)arg1 response:(id)arg2 error:(id)arg3 request:(id)arg4;
- (void)checkErrorWithRequest:(id)arg1 request:(id)arg2;
- (void)clear;
- (id)errorHandle:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)ipMap;
- (void)setIpMap:(id)arg1;
- (void).cxx_destruct;
@end
