@interface EcsJsApiHandler_getCurrentAliasProfile : EcsBaseAsyncJsApiHandler
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (void)handle:(id)arg1 params:(id)arg2 callback:(id)arg3;
- (id)resultFromInfo:(id)arg1;
@end
