@interface MMPRConfigCGI : WCBaseCgi
{
    id /* block */ _completion; // +0x8
    id /* block */ _failed; // +0x10
    NSString * _appId; // +0x18
    NSString * _baseId; // +0x20
    NSString * _pid; // +0x28
}
- (id)initWithAppId:(id)arg1 baseId:(id)arg2 pid:(id)arg3 isAutoCheck:(BOOL)arg4 completionBlock:(id /* block */)arg5 failed:(id /* block */)arg6;
- (id)initWithPkgList:(id)arg1 completionBlock:(id /* block */)arg2 failed:(id /* block */)arg3;
- (void)createRequest:(BOOL)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)getLiteAppConditions;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id /* block */)failed;
- (void)setFailed:(id /* block */)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)baseId;
- (void)setBaseId:(id)arg1;
- (id)pid;
- (void)setPid:(id)arg1;
- (void).cxx_destruct;
@end
