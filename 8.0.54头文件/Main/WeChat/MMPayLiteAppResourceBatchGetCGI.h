@interface MMPayLiteAppResourceBatchGetCGI : WCPayBaseCgi
{
    NSArray * _pkgList; // +0x8
    id /* block */ _success; // +0x10
    id /* block */ _fail; // +0x18
}
- (id)initWithPkgList:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)createRequest;
- (id)assembleBatchResourceInfo;
- (id)assemblePushResourceInfo;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)pkgList;
- (void)setPkgList:(id)arg1;
- (id /* block */)success;
- (void)setSuccess:(id /* block */)arg1;
- (id /* block */)fail;
- (void)setFail:(id /* block */)arg1;
- (void).cxx_destruct;
@end

