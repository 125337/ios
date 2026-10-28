@interface MMPayLiteAppResourceGetCGI : WCPayBaseCgi
{
    NSString * _appId; // +0x8
    NSString * _resourceName; // +0x10
    NSArray * _localResources; // +0x18
    id /* block */ _success; // +0x20
    id /* block */ _fail; // +0x28
}
- (id)initWithAppId:(id)arg1 resourceName:(id)arg2 localResouces:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (id)assembleResourceInfo;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)resourceName;
- (void)setResourceName:(id)arg1;
- (id)localResources;
- (void)setLocalResources:(id)arg1;
- (id /* block */)success;
- (void)setSuccess:(id /* block */)arg1;
- (id /* block */)fail;
- (void)setFail:(id /* block */)arg1;
- (void).cxx_destruct;
@end
